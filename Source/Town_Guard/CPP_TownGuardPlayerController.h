// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPP_TownGuardPlayerController.generated.h"



/**
 * 
 */
UCLASS()
class TOWN_GUARD_API ACPP_TownGuardPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public: 

	virtual void SetupInputComponent() override;

	

	UPROPERTY()
		class UInputMappingContext* PawnMappingContext;

	UPROPERTY()
		class UInputAction* MoveAction;

	UPROPERTY()
		class UInputAction* JumpAction;

	UPROPERTY()
		class UInputAction* MouseLookAction;

	UPROPERTY()
		class UInputAction* StanceStartAction;

	UPROPERTY()
		class UInputAction* StanceEndAction;

	UPROPERTY()
		class UInputAction* LoadAttackAction;

	UPROPERTY()
		class UInputAction* FireAttackAction;
};
