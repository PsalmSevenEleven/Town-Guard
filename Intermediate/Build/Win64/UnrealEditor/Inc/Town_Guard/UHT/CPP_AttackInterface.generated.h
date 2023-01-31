// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_AttackInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACPP_Guardsman;
#ifdef TOWN_GUARD_CPP_AttackInterface_generated_h
#error "CPP_AttackInterface.generated.h already included, missing '#pragma once' in CPP_AttackInterface.h"
#endif
#define TOWN_GUARD_CPP_AttackInterface_generated_h

#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_SPARSE_DATA
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_RPC_WRAPPERS \
	virtual void TakeDamageFromWeapon_Implementation(float Damage, float StaminaDrain, ACPP_Guardsman* Attacker) {}; \
 \
	DECLARE_FUNCTION(execTakeDamageFromWeapon);


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TakeDamageFromWeapon_Implementation(float Damage, float StaminaDrain, ACPP_Guardsman* Attacker) {}; \
 \
	DECLARE_FUNCTION(execTakeDamageFromWeapon);


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_ACCESSORS
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOWN_GUARD_API UCPP_AttackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_AttackInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOWN_GUARD_API, UCPP_AttackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_AttackInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOWN_GUARD_API UCPP_AttackInterface(UCPP_AttackInterface&&); \
	TOWN_GUARD_API UCPP_AttackInterface(const UCPP_AttackInterface&); \
public: \
	TOWN_GUARD_API virtual ~UCPP_AttackInterface();


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOWN_GUARD_API UCPP_AttackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOWN_GUARD_API UCPP_AttackInterface(UCPP_AttackInterface&&); \
	TOWN_GUARD_API UCPP_AttackInterface(const UCPP_AttackInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOWN_GUARD_API, UCPP_AttackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_AttackInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_AttackInterface) \
	TOWN_GUARD_API virtual ~UCPP_AttackInterface();


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCPP_AttackInterface(); \
	friend struct Z_Construct_UClass_UCPP_AttackInterface_Statics; \
public: \
	DECLARE_CLASS(UCPP_AttackInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Town_Guard"), TOWN_GUARD_API) \
	DECLARE_SERIALIZER(UCPP_AttackInterface)


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICPP_AttackInterface() {} \
public: \
	typedef UCPP_AttackInterface UClassType; \
	typedef ICPP_AttackInterface ThisClass; \
	static void Execute_TakeDamageFromWeapon(UObject* O, float Damage, float StaminaDrain, ACPP_Guardsman* Attacker); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ICPP_AttackInterface() {} \
public: \
	typedef UCPP_AttackInterface UClassType; \
	typedef ICPP_AttackInterface ThisClass; \
	static void Execute_TakeDamageFromWeapon(UObject* O, float Damage, float StaminaDrain, ACPP_Guardsman* Attacker); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_10_PROLOG
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_RPC_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWN_GUARD_API UClass* StaticClass<class UCPP_AttackInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
