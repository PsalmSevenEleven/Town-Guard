// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CPP_AttackInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCPP_AttackInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TOWN_GUARD_API ICPP_AttackInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void TakeDamageFromWeapon(float Damage, float StaminaDrain, class ACPP_Guardsman* Attacker);
};
