// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "CPP_Guardsman.h"
#include "CPP_AnimationInterface.h"

#include "CPP_Weapon.generated.h"

UCLASS()
class TOWN_GUARD_API ACPP_Weapon : public AActor, public ICPP_AnimationInterface, public ICPP_AttackInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Weapon();

	//Hitbox for dealing damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UCapsuleComponent* HitBox;

	//Skeletal mesh for moving the hitbox around
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* SkeletalMesh;

	//Whether or not a collision should deal damage
	bool bDangerous;

	//The ACPP_Guardsman that "owns" this weapon
	ACPP_Guardsman* Player;

	//How much damage a fully charged strike should deal to the victim
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDamage;

	//How much stamina a fully charged strike should drain from the victim
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxStaminaDrain;

	//How much stamina the weapon requires to swing
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float StaminaForSwing;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Called before the end of the construction script
	void Init(ACPP_Guardsman* InPlayer);

	//called to reset the bIsDangerous variable
	UFUNCTION()
		void Danger();

	//Called when the hitbox collides with something
	UFUNCTION()
	void DealDamage(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//Called when the weapon's hitbox collides with a valid entity in order to deal damage
	UFUNCTION(Server, Reliable)
		void DamageEntity(float Damage, float StaminaDrain, ACPP_Guardsman* Target, ACPP_Guardsman* Attacker);
};
