// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Weapon.h"

#include "Kismet/GameplayStatics.h"

#include "GameFramework/DamageType.h"
#include "DamageType_Slashing.h"
#include "CPP_AttackInterface.h"
#include "CPP_AnimationInterface.h"


// Sets default values
ACPP_Weapon::ACPP_Weapon()
{
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Skeletal Mesh");
	SkeletalMesh->SetupAttachment(RootComponent);
	HitBox = CreateDefaultSubobject<UCapsuleComponent>("Damage Hitbox");
	HitBox->SetupAttachment(SkeletalMesh, FName("Handle"));
}

// Called when the game starts or when spawned
void ACPP_Weapon::BeginPlay()
{
	Super::BeginPlay();

	//Call DealDamage() when the hitbox hits something
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &ACPP_Weapon::DealDamage);

	//Set bDangerous to true when the player releases an attack
	Player->AttackReleaseDelegate.AddDynamic(this, &ACPP_Weapon::Danger);

	//Tell the animation blueprint, whatever it may be, to execute its version of BindEvents() if it has one
	ICPP_AnimationInterface::Execute_BindEvents(SkeletalMesh->GetAnimInstance(), Player);
}

// Called every frame
void ACPP_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//Called before the construction script finishes to prevent null references to the player
void ACPP_Weapon::Init(ACPP_Guardsman* InPlayer)
{
	//Set the player and bind Danger() to the player releasing an attack
	this->Player = InPlayer;
	Player->AttackReleaseDelegate.AddDynamic(this, &ACPP_Weapon::Danger);
}

//Basically just a setter, called when the player begins an attack
void ACPP_Weapon::Danger()
{
	//Allow the current strike do do damage should it hit something
	bDangerous = true;
	Player->SetDanger(true);
}

//This method is bound to the hitbox's collision event, thus the litany of params that I really don't need
void ACPP_Weapon::DealDamage(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	//Don't bother with any logic if the collision is with the owning player or the weapon itself
	if (OtherActor == Player || OtherActor == this)
	{
		return;
	}

	//If you hit a valid target...
	if (bDangerous && Player->bAttacking && Player->GetLocalRole() == ROLE_Authority && Cast<ACPP_Guardsman>(OtherActor))
	{
		//...damage it...
		ACPP_Guardsman* target = Cast<ACPP_Guardsman>(OtherActor);
		DamageEntity(Player->AttackLoadAlpha * MaxDamage, Player->AttackLoadAlpha * MaxStaminaDrain, target, Player);
	}
	
	//..and don't deal damage on subsequent collisions.
	bDangerous = false;
	Player->SetDanger(false);
}

//Server method for actually damaging other entities in the world
void ACPP_Weapon::DamageEntity_Implementation(float Damage, float StaminaDrain, ACPP_Guardsman* Target, ACPP_Guardsman* Attacker)
{
	//Setting the health and stamina of the offended party
	Target->Health -= Damage;
	Target->Stamina -= StaminaDrain;
	Target->MulticastStartStaminaRecharge();
}