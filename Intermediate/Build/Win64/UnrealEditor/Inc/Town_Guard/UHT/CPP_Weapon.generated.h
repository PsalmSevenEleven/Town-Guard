// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACPP_Guardsman;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TOWN_GUARD_CPP_Weapon_generated_h
#error "CPP_Weapon.generated.h already included, missing '#pragma once' in CPP_Weapon.h"
#endif
#define TOWN_GUARD_CPP_Weapon_generated_h

#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_SPARSE_DATA
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_RPC_WRAPPERS \
	virtual void DamageEntity_Implementation(float Damage, float StaminaDrain, ACPP_Guardsman* Target, ACPP_Guardsman* Attacker); \
 \
	DECLARE_FUNCTION(execDamageEntity); \
	DECLARE_FUNCTION(execDealDamage); \
	DECLARE_FUNCTION(execDanger);


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DamageEntity_Implementation(float Damage, float StaminaDrain, ACPP_Guardsman* Target, ACPP_Guardsman* Attacker); \
 \
	DECLARE_FUNCTION(execDamageEntity); \
	DECLARE_FUNCTION(execDealDamage); \
	DECLARE_FUNCTION(execDanger);


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_ACCESSORS
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_Weapon(); \
	friend struct Z_Construct_UClass_ACPP_Weapon_Statics; \
public: \
	DECLARE_CLASS(ACPP_Weapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Town_Guard"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Weapon) \
	virtual UObject* _getUObject() const override { return const_cast<ACPP_Weapon*>(this); }


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACPP_Weapon(); \
	friend struct Z_Construct_UClass_ACPP_Weapon_Statics; \
public: \
	DECLARE_CLASS(ACPP_Weapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Town_Guard"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Weapon) \
	virtual UObject* _getUObject() const override { return const_cast<ACPP_Weapon*>(this); }


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_Weapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_Weapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Weapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Weapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_Weapon(ACPP_Weapon&&); \
	NO_API ACPP_Weapon(const ACPP_Weapon&); \
public: \
	NO_API virtual ~ACPP_Weapon();


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_Weapon(ACPP_Weapon&&); \
	NO_API ACPP_Weapon(const ACPP_Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Weapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Weapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_Weapon) \
	NO_API virtual ~ACPP_Weapon();


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_14_PROLOG
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_RPC_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_INCLASS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWN_GUARD_API UClass* StaticClass<class ACPP_Weapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
