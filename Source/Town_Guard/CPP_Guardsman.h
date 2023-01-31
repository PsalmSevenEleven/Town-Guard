// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_AttackInterface.h"
#include "CPP_Guardsman.generated.h"

UENUM()
enum Stance
{
	TopRight     UMETA(DisplayName = "TopRight"),
	TopLeft      UMETA(DisplayName = "TopLeft"),
	BottomRight   UMETA(DisplayName = "BottomRight"),
	BottomLeft   UMETA(DisplayName = "BottomLeft"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttackDelegate);


UCLASS()
class TOWN_GUARD_API ACPP_Guardsman : public ACharacter,  public ICPP_AttackInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_Guardsman();


	/*Actor components*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated)
		class USpringArmComponent* CameraBoom;

	//Player's camera
	UPROPERTY(EditAnywhere)
		class UCameraComponent* Camera;

	//Movement component
	UPROPERTY(EditAnywhere)
	UCharacterMovementComponent* MovementComp;


	/*Control-related variables*/
	UPROPERTY(EditAnywhere)
		float MouseSensitivity;

	//Player's control rotation
	UPROPERTY(Replicated)
		FRotator ControlRotation = FRotator();


	/*Stance-related variables*/

	//initial reference location for stance swapping
	FVector vStanceStartLocation;

	//Should releasing the right mouse button actually switch the player's stance
	bool bCanShiftStance;

	//The stance that the player is currently occupying
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
		TEnumAsByte<Stance> CurrentStance;


	/*Attack-related variables*/

	//Is the player currently performing an attack
	UPROPERTY(BlueprintReadOnly, Replicated)
	bool bAttacking;

	//Is the player currently loading an attack
	UPROPERTY(BlueprintReadOnly, Replicated)
	bool bAttackLoaded;


	//Utility delegates, mostly for the anim bp's benefit
	UPROPERTY(BlueprintAssignable)
		FAttackDelegate AttackLoadDelegate;

	UPROPERTY(BlueprintAssignable)
		FAttackDelegate AttackReleaseDelegate;

	UPROPERTY(BlueprintAssignable)
		FAttackDelegate AttackCancelDelegate;


	//How charged the player's attack is
	UPROPERTY(BlueprintReadWrite, Replicated)
		float AttackLoadAlpha;

	//Whether or not an attack is fully charged
	UPROPERTY(BlueprintReadWrite, Replicated)
		bool bAttackCharged;


	//Player stats
	UPROPERTY(BlueprintReadWrite, Replicated)
		float Health;

	UPROPERTY(BlueprintReadWrite, Replicated)
		float Stamina;


	//A reference to the weapon the player is currently holding
	class ACPP_Weapon* CurrentWeapon;

	//The class of the weapon that the player is currently holding
	UPROPERTY(BlueprintReadWrite, EditAnywhere,  Replicated)
		UClass* CurrentWeaponClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Overridden to allow variable replication
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//This isn't currently in use, but I usually end up needing it for something eventually
	void BindTimelineDelegates();

	//The method for creating the actual weapon object that the player uses. At the moment I'm calling it in BeginPlay(), but it will eventually be called by a weapon pickup object
	void CreateWeapon(UClass* WeaponClass);

	//Handle movement input
	void Move(const struct FInputActionValue& ActionValue);

	//Handle mouse input
	void Look(const struct FInputActionValue& ActionValue);

	//Lets the server know where the player is looking
	UFUNCTION(Server, Unreliable)
		void ServerLook(FRotator Rot);

	//Handles jump input and just calls Super::Jump()
	void Jump(const struct FInputActionValue& ActionValue);

	//Right mouse down
	void InputStanceStart(const struct FInputActionValue& ActionValue);

	//Called by InputStanceStart()
	void RecordStanceDirection();

	//Right mouse up
	void InputStanceEnd(const struct FInputActionValue& ActionValue);
	
	//Called by InputStanceEnd()
	void ChangeStance();

	//Tells the server the player's stance
	UFUNCTION(Server, Reliable)
		void ServerSetStance(Stance NewStance);

	//Initiate an attack
	void LoadAttack();

	//Tell the server whether or not the player is loading an attack
	UFUNCTION(Server, Reliable)
		void ServerSetAttackLoaded(bool NewLoaded);

	//Release a loaded attack
	void FireAttack();

	//Tell the server whether or not the player is attacking
	UFUNCTION(Server, Reliable)
		void ServerSetAttacking(bool NewAttacking);

	//Tell the player's weapon to be dangerous
	UFUNCTION(Server, Reliable)
	void SetDanger(bool NewDanger);

	//Cancel a loaded attack
	void CancelAttack();

	//Tell the server how charged the player's attack is, and if it is fully charged
	UFUNCTION(Server, Unreliable)
	void ServerSetAttackLoadAlpha(float NewAlpha, bool NewCharge);

	//Set the player's health; also calls ServerSetHealth()
	UFUNCTION(BlueprintCallable)
	void SetHealth( float NewHealth);
	
	//Tell the server the player's health
	UFUNCTION(Server, Reliable)
		void ServerSetHealth(float NewHealth);

	//Set the player's stamina; also calls ServerSetStamina()
	void SetStamina(float NewStamina);

	//Tell the server the player's stamina
	UFUNCTION(Server, Reliable)
		void ServerSetStamina(float NewStamina);

};
