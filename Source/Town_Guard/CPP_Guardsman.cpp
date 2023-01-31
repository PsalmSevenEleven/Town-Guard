// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Guardsman.h"

/*Components*/
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

/*Enhanced Input*/
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "CPP_Weapon.h"
#include "CPP_TownGuardPlayerController.h"

/*Function Libraries*/
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

/*Debug*/
#include "DrawDebugHelpers.h"

/*Multiplayer*/
#include "Net/UnrealNetwork.h"

// Sets default values
ACPP_Guardsman::ACPP_Guardsman()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the camera boom and camera
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	CameraBoom->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(CameraBoom);

	//I'll add an option to change this later
	MouseSensitivity = 75.f;

	//Default stance
	CurrentStance = TopRight;

	//Default health and stamina, arbitrarily chosen values
	Health = 100.f;
	Stamina = 100.f;
}

// Called when the game starts or when spawned
void ACPP_Guardsman::BeginPlay()
{
	Super::BeginPlay();
	
	//Make sure the actor replicates
	bReplicates = true;

	//I usually grab this now so that I don't have to keep calling GetCharacterMovement()
	MovementComp = GetCharacterMovement();

	//not needed yet, but should I need to use a timeline for anything this is the method where I will doo all of the necessary binding
	BindTimelineDelegates();

	//Spawn with the default weapon. 
	//This will eventually be called when the player collects another weapon
	CreateWeapon(CurrentWeaponClass);
}

// Called every frame
void ACPP_Guardsman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//If the camera boom and camera exist set their rotations to the value we calculate in the Look() method
	if (CameraBoom && Controller)
	{
		CameraBoom->SetWorldRotation(ControlRotation);
		Controller->SetControlRotation(ControlRotation);
	}

	//If the player is loading an attack, tell the server the alpha value for the idle/loaded blend
	if (bAttackLoaded)
	{
		ServerSetAttackLoadAlpha(AttackLoadAlpha, bAttackCharged);
	}
}

// Called to bind functionality to input
void ACPP_Guardsman::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Getting references to the input component and player controller, and casting to the proper classes
	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	ACPP_TownGuardPlayerController* TGPC = Cast<ACPP_TownGuardPlayerController>(Controller);

	
	//If they exist and the casts were successful, bind the player's controls
	if (EIC && TGPC)
	{
		EIC->BindAction(TGPC->MoveAction, ETriggerEvent::Triggered, this, &ACPP_Guardsman::Move);
		EIC->BindAction(TGPC->MouseLookAction, ETriggerEvent::Triggered, this, &ACPP_Guardsman::Look);
		EIC->BindAction(TGPC->JumpAction, ETriggerEvent::Started, this, &ACPP_Guardsman::Jump);

		EIC->BindAction(TGPC->StanceStartAction, ETriggerEvent::Started, this, &ACPP_Guardsman::InputStanceStart);
		EIC->BindAction(TGPC->StanceEndAction, ETriggerEvent::Completed, this, &ACPP_Guardsman::InputStanceEnd);

		EIC->BindAction(TGPC->LoadAttackAction, ETriggerEvent::Started, this, &ACPP_Guardsman::LoadAttack);
		EIC->BindAction(TGPC->FireAttackAction, ETriggerEvent::Completed, this, &ACPP_Guardsman::FireAttack);

		ULocalPlayer* LocalPlayer = TGPC->GetLocalPlayer();
		if (LocalPlayer)
		{
			
			UEnhancedInputLocalPlayerSubsystem* Subsystem =
				LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

			if (Subsystem)
			{
				
				Subsystem->ClearAllMappings();
				Subsystem->AddMappingContext(TGPC->PawnMappingContext, 0);
			}
		}
	}
}

//Overridden to allow variable replication
void ACPP_Guardsman::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACPP_Guardsman, CurrentStance);
	DOREPLIFETIME(ACPP_Guardsman, bAttackLoaded);
	DOREPLIFETIME(ACPP_Guardsman, bAttacking);
	DOREPLIFETIME(ACPP_Guardsman, ControlRotation);
	DOREPLIFETIME(ACPP_Guardsman, AttackLoadAlpha);
	DOREPLIFETIME(ACPP_Guardsman, bAttackCharged);
	DOREPLIFETIME(ACPP_Guardsman, Health);
	DOREPLIFETIME(ACPP_Guardsman, Stamina);
	DOREPLIFETIME(ACPP_Guardsman, CurrentWeaponClass);
	
}

/*I initally used a timeline and a static mesh component to represent the player's sword,
but in the interest of scalability (and of retaining my sanity) I decided to use an animation-driven combat system.
If I should need to use a timeline for anything in the future, this is where I will bind the delegates for it*/
void ACPP_Guardsman::BindTimelineDelegates()
{
	//Nothing here yet :(
}

void ACPP_Guardsman::CreateWeapon(UClass* WeaponClass)
{
	FActorSpawnParameters SpawnInfo;

	//Start creating the weapon...
	CurrentWeapon = Cast<ACPP_Weapon>(UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(), CurrentWeaponClass, CameraBoom->GetComponentTransform()));

	//...if the weapon has successfully been started...
	if (CurrentWeapon != nullptr)
	{
		//...set the player value to this object...
		CurrentWeapon->Init(this);

		//...and finish constructing the weapon.
		UGameplayStatics::FinishSpawningActor(CurrentWeapon, CameraBoom->GetComponentTransform());

		//attach the weapon to the camera boom so that it follows the player's gaze
		CurrentWeapon->AttachToComponent(CameraBoom, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}

//Moves the player around
void ACPP_Guardsman::Move(const FInputActionValue& ActionValue)
{
	FVector Input = ActionValue.Get<FInputActionValue::Axis3D>();
	MovementComp->AddInputVector(GetActorRotation().RotateVector(Input));
}

//Tells the Guardsman what its ControlRotation variable should be
void ACPP_Guardsman::Look(const FInputActionValue& ActionValue)
{	
	//Making sure this character is locally controlled
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		//get the input from the player controller
		FRotator Input(ActionValue[0], ActionValue[1], ActionValue[2]);

		//Scale by MouseSensitivity and clamp if the player is in an attack (prevents the player throwing lightning-fast shots by whipping the mouse around)
		Input *= (bAttacking) ? FMath::Clamp(GetWorld()->GetDeltaSeconds() * MouseSensitivity, -0.6f, 0.6f) : GetWorld()->GetDeltaSeconds() * MouseSensitivity;

		//Add to the player's current control rotation
		Input += ControlRotation;

		//Keep the player from navel-gazing or playing limbo
		Input.Pitch = FMath::ClampAngle(Input.Pitch, -89.9f, 89.9f);

		//Make sure the player doesn't start rolling sideways
		Input.Roll = 0.f;

		//Set the value of ControlRotation so that it can be replicated
		ControlRotation = Input;

		//Replicate ControlRotation
		ServerLook(Input);
	}
}

//Setting ControlRotation on the server
void ACPP_Guardsman::ServerLook_Implementation(FRotator Rot)
{
	ControlRotation = Rot;
}

//Basic jump that just calls the Super::Jump() method
void ACPP_Guardsman::Jump(const FInputActionValue& ActionValue)
{
	Super::Jump();
}

/*Activated by pressing the right mouse button.
This function records a reference point for switching the player's stance, 
or cancels a loaded attack if there is one.*/
void ACPP_Guardsman::InputStanceStart(const FInputActionValue& ActionValue)
{
	if (bAttackLoaded)
	{
		CancelAttack();
	}
	else
	{
		RecordStanceDirection();
	}
}

//recording the stance switch reference point
void ACPP_Guardsman::RecordStanceDirection()
{
	//Recording the point in space that the player is currently facing
	vStanceStartLocation = UKismetMathLibrary::GetForwardVector(ControlRotation) * 100;

	DrawDebugSphere(GetWorld(), vStanceStartLocation + Camera->GetComponentLocation(), 3.f, 12, FColor::Blue, false, 5.f, 0U, 5.f);

	//Allow the player to shift their stance when they release the right mouse button
	bCanShiftStance = true;
}

/*Called when the playter releases the right mouse button.
This method allows the player to actually execute ChangeStance()*/
void ACPP_Guardsman::InputStanceEnd(const FInputActionValue& ActionValue)
{
	//only shift the player's stance if they were not just canceling an attack with their initial right mouse press
	if (bCanShiftStance)
	{
		ChangeStance();
	}
}

//Actually changes the player's stance
void ACPP_Guardsman::ChangeStance()
{
	//Converting the original reference point to local space after moving it to be relative to the player
	FVector vStartLoc = UKismetMathLibrary::InverseTransformLocation(Camera->GetComponentTransform(), vStanceStartLocation + Camera->GetComponentLocation());

	//Array for deciding which stance to occupy
	TArray<Stance> Stances;

	/*If the Z axis of initial point that we recorded is above 0 in local space, the player must have moved the mouse downward 
	and we can narrow the possibilites down to the bottom two stances.*/
	if (vStartLoc.Z > 0.f)
	{
		/*The order in which we add the stances to the array is actually vital for the next phase
		because much like we're eliminating either the top or bottom stances, 
		we'll be lopping off the right stance if the player moved the mouse left.
		Therefore, the right and left stances need to be added in the same order in both cases
		so that we can reliably choose the correct stance from the list*/
		Stances.Add(BottomRight);
		Stances.Add(BottomLeft);
	}

	//Otherwise, narrow it down to the top two.
	else
	{
		Stances.Add(TopRight);
		Stances.Add(TopLeft);
	}

	/*If the Y axis of the initial point that we recorded is above 0 in local space the player moved the mouse left,
	so we can eliminate the right-hand stance from the remaining stances, 
	whichever two we got from the previous if-else statement.*/
	if (vStartLoc.Y > 0.f)
	{
		Stances.RemoveAt(0);
	}
	//Otherwise, the only remaining option is the right-hand stance
	
	//Setting the player's stance on the server, using whatever stance we have left
	ServerSetStance(Stances[0]);
}

/*The next several methods simply inform the server of desired changes to player variables*/
void ACPP_Guardsman::ServerSetStance_Implementation(Stance NewStance)
{
	CurrentStance = NewStance;
}

void ACPP_Guardsman::ServerSetAttackLoaded_Implementation(bool NewLoaded)
{
	bAttackLoaded = NewLoaded;
}

void ACPP_Guardsman::ServerSetAttacking_Implementation(bool NewAttacking)
{
	bAttacking = NewAttacking;
}

/*Loading an attack*/
void ACPP_Guardsman::LoadAttack()
{
	//Don't allow the player to spam the attack button
	if (!bAttacking)
	{
		ServerSetAttackLoaded(true);
		AttackLoadDelegate.Broadcast();
	}

}

//Releases a loaded attack
void ACPP_Guardsman::FireAttack()
{
	//Can't release an attack that isn't there,
	if (!bAttackLoaded)
	{
		return;
	}

	//but if there is one, let the server know that you are attacking and no longer loading an attack
	ServerSetAttacking(true);
	ServerSetAttackLoaded(false);
	
	AttackReleaseDelegate.Broadcast();
	
	/*Temporary band-aid code that tells the server that the player is done attacking after an arbitrarily chosen 0.5-second period.
	I will be switching this to an anim notify event shortly.*/
	FTimerHandle Handle;
	GetWorld()->GetTimerManager().SetTimer(Handle, FTimerDelegate::CreateLambda([&] {ServerSetAttacking(false); }), 0.5, false);
}

//Tell the server to set the player's weapon's bDangerous variable
void ACPP_Guardsman::SetDanger_Implementation(bool NewDanger)
{
	//The reason for this method existing in the CPP_Guardsman class instead of CPP_Weapon is due to a quirk of networking.
	//As far as I have been able to surmise, the following is more or less what's happening.
	//When the player creates a CPP_Weapon, the weapon on the client and the weapon on the server are two different objects,
	//meaning that when I try to set bDangerous on the server, the CPP_Weapon on the server is not referenced as the same object,
	//and will not set bDangerous on the CPP_Weapon thet the server's version of the player holds.
	//However, the CPP_Guardsman on the server is treated as the same object as the one on the server, and I can route the logic through the player.
	//I will probably come back to this problem and try to work some pointer wizardry to allow the weapon itself to do the replicating.
	CurrentWeapon->bDangerous = NewDanger;
}

//Cancels a loaded attack
void ACPP_Guardsman::CancelAttack()
{
	ServerSetAttackLoaded(false);
	AttackCancelDelegate.Broadcast();
}

//Setter for Health; also calls ServerSetHealth()
void ACPP_Guardsman::SetHealth(float NewHealth)
{
	Health = NewHealth;
	ServerSetHealth(NewHealth);
}

//Setter for Stamina; also calls ServerSetStamina()
void ACPP_Guardsman::SetStamina(float NewStamina)
{
	Stamina = NewStamina;
	ServerSetStamina(NewStamina);
}

//Tell the server to set the player's Health value
void ACPP_Guardsman::ServerSetHealth_Implementation(float NewHealth)
{
	Health = NewHealth;
}

//Tell the server the alpha for the blend between idle and loaded poses
void ACPP_Guardsman::ServerSetAttackLoadAlpha_Implementation(float NewAlpha, bool NewCharge)
{
	AttackLoadAlpha = NewAlpha;
	bAttackCharged = NewCharge;
}

//Tell the server to set the player's Stamina value
void ACPP_Guardsman::ServerSetStamina_Implementation(float NewStamina)
{
	Stamina = NewStamina;
}









