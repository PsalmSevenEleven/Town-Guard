// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_TownGuardPlayerController.h"

#include "InputAction.h"
#include "InputMappingContext.h"
#include "InputModifiers.h"

//Helper method to keep from writing the same code over and over
static void MapKey(UInputMappingContext* InputMappingContext, UInputAction* InputAction, FKey Key,
	bool bNegate = false, bool bSwizzle = false, EInputAxisSwizzle SwizzleOrder = EInputAxisSwizzle::YXZ)
{
	//Create a new key mapping
	FEnhancedActionKeyMapping& Mapping = InputMappingContext->MapKey(InputAction, Key);

	//Get the outer from the input PawnMappingContext
	UObject* Outer = InputMappingContext->GetOuter();

	//Add a negate modifier to the new mapping if bNegate is true
	if (bNegate)
	{
		UInputModifierNegate* Negate = NewObject<UInputModifierNegate>(Outer);
		Mapping.Modifiers.Add(Negate);
	}

	//Add a swizzle modifier to the new mapping if bSwizzle is true
	if (bSwizzle)
	{
		UInputModifierSwizzleAxis* Swizzle = NewObject<UInputModifierSwizzleAxis>(Outer);
		Swizzle->Order = SwizzleOrder;
		Mapping.Modifiers.Add(Swizzle);
	}
}

void ACPP_TownGuardPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//Map the living daylights out of all of the InputAction objects
	PawnMappingContext = NewObject<UInputMappingContext>(this);

	MoveAction = NewObject<UInputAction>(this);
	MoveAction->ValueType = EInputActionValueType::Axis3D;
	
	MapKey(PawnMappingContext, MoveAction, EKeys::W);
	MapKey(PawnMappingContext, MoveAction, EKeys::S, true);
	MapKey(PawnMappingContext, MoveAction, EKeys::A, true, true);
	MapKey(PawnMappingContext, MoveAction, EKeys::D, false, true);
	
	MouseLookAction = NewObject<UInputAction>(this);
	MouseLookAction->ValueType = EInputActionValueType::Axis3D;
	MapKey(PawnMappingContext, MouseLookAction, EKeys::MouseY);
	MapKey(PawnMappingContext, MouseLookAction, EKeys::MouseX, false, true);

	JumpAction = NewObject<UInputAction>(this);
	MapKey(PawnMappingContext, JumpAction, EKeys::SpaceBar);

	StanceStartAction = NewObject<UInputAction>(this);
	MapKey(PawnMappingContext, StanceStartAction, EKeys::RightMouseButton);

	StanceEndAction = NewObject<UInputAction>(this);
	MapKey(PawnMappingContext, StanceEndAction, EKeys::RightMouseButton);

	LoadAttackAction = NewObject<UInputAction>(this);
	MapKey(PawnMappingContext, LoadAttackAction, EKeys::LeftMouseButton);

	FireAttackAction = NewObject<UInputAction>(this);
	MapKey(PawnMappingContext, FireAttackAction, EKeys::LeftMouseButton);
}

