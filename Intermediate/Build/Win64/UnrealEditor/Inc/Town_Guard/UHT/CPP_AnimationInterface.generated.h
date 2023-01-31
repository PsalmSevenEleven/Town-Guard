// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_AnimationInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACPP_Guardsman;
#ifdef TOWN_GUARD_CPP_AnimationInterface_generated_h
#error "CPP_AnimationInterface.generated.h already included, missing '#pragma once' in CPP_AnimationInterface.h"
#endif
#define TOWN_GUARD_CPP_AnimationInterface_generated_h

#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_SPARSE_DATA
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_RPC_WRAPPERS \
	virtual void BindEvents_Implementation(ACPP_Guardsman* InPlayer) {}; \
	virtual void CancelAttack_Implementation() {}; \
	virtual void ReleaseAttack_Implementation() {}; \
	virtual void LoadAttack_Implementation() {}; \
 \
	DECLARE_FUNCTION(execBindEvents); \
	DECLARE_FUNCTION(execCancelAttack); \
	DECLARE_FUNCTION(execReleaseAttack); \
	DECLARE_FUNCTION(execLoadAttack);


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BindEvents_Implementation(ACPP_Guardsman* InPlayer) {}; \
	virtual void CancelAttack_Implementation() {}; \
	virtual void ReleaseAttack_Implementation() {}; \
	virtual void LoadAttack_Implementation() {}; \
 \
	DECLARE_FUNCTION(execBindEvents); \
	DECLARE_FUNCTION(execCancelAttack); \
	DECLARE_FUNCTION(execReleaseAttack); \
	DECLARE_FUNCTION(execLoadAttack);


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_ACCESSORS
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOWN_GUARD_API UCPP_AnimationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_AnimationInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOWN_GUARD_API, UCPP_AnimationInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_AnimationInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOWN_GUARD_API UCPP_AnimationInterface(UCPP_AnimationInterface&&); \
	TOWN_GUARD_API UCPP_AnimationInterface(const UCPP_AnimationInterface&); \
public: \
	TOWN_GUARD_API virtual ~UCPP_AnimationInterface();


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOWN_GUARD_API UCPP_AnimationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOWN_GUARD_API UCPP_AnimationInterface(UCPP_AnimationInterface&&); \
	TOWN_GUARD_API UCPP_AnimationInterface(const UCPP_AnimationInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOWN_GUARD_API, UCPP_AnimationInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_AnimationInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_AnimationInterface) \
	TOWN_GUARD_API virtual ~UCPP_AnimationInterface();


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCPP_AnimationInterface(); \
	friend struct Z_Construct_UClass_UCPP_AnimationInterface_Statics; \
public: \
	DECLARE_CLASS(UCPP_AnimationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Town_Guard"), TOWN_GUARD_API) \
	DECLARE_SERIALIZER(UCPP_AnimationInterface)


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICPP_AnimationInterface() {} \
public: \
	typedef UCPP_AnimationInterface UClassType; \
	typedef ICPP_AnimationInterface ThisClass; \
	static void Execute_BindEvents(UObject* O, ACPP_Guardsman* InPlayer); \
	static void Execute_CancelAttack(UObject* O); \
	static void Execute_LoadAttack(UObject* O); \
	static void Execute_ReleaseAttack(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ICPP_AnimationInterface() {} \
public: \
	typedef UCPP_AnimationInterface UClassType; \
	typedef ICPP_AnimationInterface ThisClass; \
	static void Execute_BindEvents(UObject* O, ACPP_Guardsman* InPlayer); \
	static void Execute_CancelAttack(UObject* O); \
	static void Execute_LoadAttack(UObject* O); \
	static void Execute_ReleaseAttack(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_10_PROLOG
#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_RPC_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_SPARSE_DATA \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_ACCESSORS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWN_GUARD_API UClass* StaticClass<class UCPP_AnimationInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
