// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_Guardsman.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWN_GUARD_CPP_Guardsman_generated_h
#error "CPP_Guardsman.generated.h already included, missing '#pragma once' in CPP_Guardsman.h"
#endif
#define TOWN_GUARD_CPP_Guardsman_generated_h

#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_19_DELEGATE \
static inline void FAttackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AttackDelegate) \
{ \
	AttackDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_SPARSE_DATA
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_RPC_WRAPPERS \
	virtual void MulticastStartStaminaRecharge_Implementation(); \
	virtual void ServerSetStamina_Implementation(float NewStamina); \
	virtual void ServerSetHealth_Implementation(float NewHealth); \
	virtual void ServerSetAttackLoadAlpha_Implementation(float NewAlpha, bool NewCharge); \
	virtual void SetDanger_Implementation(bool NewDanger); \
	virtual void ServerSetAttacking_Implementation(bool NewAttacking); \
	virtual void ServerSetAttackLoaded_Implementation(bool NewLoaded); \
	virtual void ServerSetStance_Implementation(Stance NewStance); \
	virtual void ServerLook_Implementation(FRotator Rot); \
 \
	DECLARE_FUNCTION(execMulticastStartStaminaRecharge); \
	DECLARE_FUNCTION(execServerSetStamina); \
	DECLARE_FUNCTION(execServerSetHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execServerSetAttackLoadAlpha); \
	DECLARE_FUNCTION(execSetDanger); \
	DECLARE_FUNCTION(execServerSetAttacking); \
	DECLARE_FUNCTION(execServerSetAttackLoaded); \
	DECLARE_FUNCTION(execServerSetStance); \
	DECLARE_FUNCTION(execServerLook);


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastStartStaminaRecharge_Implementation(); \
	virtual void ServerSetStamina_Implementation(float NewStamina); \
	virtual void ServerSetHealth_Implementation(float NewHealth); \
	virtual void ServerSetAttackLoadAlpha_Implementation(float NewAlpha, bool NewCharge); \
	virtual void SetDanger_Implementation(bool NewDanger); \
	virtual void ServerSetAttacking_Implementation(bool NewAttacking); \
	virtual void ServerSetAttackLoaded_Implementation(bool NewLoaded); \
	virtual void ServerSetStance_Implementation(Stance NewStance); \
	virtual void ServerLook_Implementation(FRotator Rot); \
 \
	DECLARE_FUNCTION(execMulticastStartStaminaRecharge); \
	DECLARE_FUNCTION(execServerSetStamina); \
	DECLARE_FUNCTION(execServerSetHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execServerSetAttackLoadAlpha); \
	DECLARE_FUNCTION(execSetDanger); \
	DECLARE_FUNCTION(execServerSetAttacking); \
	DECLARE_FUNCTION(execServerSetAttackLoaded); \
	DECLARE_FUNCTION(execServerSetStance); \
	DECLARE_FUNCTION(execServerLook);


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_ACCESSORS
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_Guardsman(); \
	friend struct Z_Construct_UClass_ACPP_Guardsman_Statics; \
public: \
	DECLARE_CLASS(ACPP_Guardsman, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Town_Guard"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Guardsman) \
	virtual UObject* _getUObject() const override { return const_cast<ACPP_Guardsman*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CameraBoom=NETFIELD_REP_START, \
		ControlRotation, \
		CurrentStance, \
		bAttacking, \
		bAttackLoaded, \
		AttackLoadAlpha, \
		bAttackCharged, \
		Health, \
		Stamina, \
		CurrentWeaponClass, \
		NETFIELD_REP_END=CurrentWeaponClass	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_INCLASS \
private: \
	static void StaticRegisterNativesACPP_Guardsman(); \
	friend struct Z_Construct_UClass_ACPP_Guardsman_Statics; \
public: \
	DECLARE_CLASS(ACPP_Guardsman, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Town_Guard"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Guardsman) \
	virtual UObject* _getUObject() const override { return const_cast<ACPP_Guardsman*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CameraBoom=NETFIELD_REP_START, \
		ControlRotation, \
		CurrentStance, \
		bAttacking, \
		bAttackLoaded, \
		AttackLoadAlpha, \
		bAttackCharged, \
		Health, \
		Stamina, \
		CurrentWeaponClass, \
		NETFIELD_REP_END=CurrentWeaponClass	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_Guardsman(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_Guardsman) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Guardsman); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Guardsman); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_Guardsman(ACPP_Guardsman&&); \
	NO_API ACPP_Guardsman(const ACPP_Guardsman&); \
public: \
	NO_API virtual ~ACPP_Guardsman();


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_Guardsman(ACPP_Guardsman&&); \
	NO_API ACPP_Guardsman(const ACPP_Guardsman&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Guardsman); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Guardsman); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_Guardsman) \
	NO_API virtual ~ACPP_Guardsman();


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_22_PROLOG
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_RPC_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_INCLASS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWN_GUARD_API UClass* StaticClass<class ACPP_Guardsman>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h


#define FOREACH_ENUM_STANCE(op) \
	op(TopRight) \
	op(TopLeft) \
	op(BottomRight) \
	op(BottomLeft) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
