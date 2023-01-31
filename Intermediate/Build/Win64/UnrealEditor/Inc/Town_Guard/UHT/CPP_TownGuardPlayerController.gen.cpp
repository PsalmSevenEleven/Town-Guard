// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Town_Guard/CPP_TownGuardPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_TownGuardPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_TownGuardPlayerController();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_TownGuardPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Town_Guard();
// End Cross Module References
	void ACPP_TownGuardPlayerController::StaticRegisterNativesACPP_TownGuardPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_TownGuardPlayerController);
	UClass* Z_Construct_UClass_ACPP_TownGuardPlayerController_NoRegister()
	{
		return ACPP_TownGuardPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StanceStartAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StanceStartAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StanceEndAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StanceEndAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAttackAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Town_Guard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CPP_TownGuardPlayerController.h" },
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_PawnMappingContext_MetaData[] = {
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_PawnMappingContext = { "PawnMappingContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TownGuardPlayerController, PawnMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_PawnMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_PawnMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TownGuardPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_JumpAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TownGuardPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MouseLookAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TownGuardPlayerController, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MouseLookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MouseLookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceStartAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceStartAction = { "StanceStartAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TownGuardPlayerController, StanceStartAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceStartAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceStartAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceEndAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceEndAction = { "StanceEndAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TownGuardPlayerController, StanceEndAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceEndAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceEndAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_LoadAttackAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_LoadAttackAction = { "LoadAttackAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TownGuardPlayerController, LoadAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_LoadAttackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_LoadAttackAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_FireAttackAction_MetaData[] = {
		{ "ModuleRelativePath", "CPP_TownGuardPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_FireAttackAction = { "FireAttackAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TownGuardPlayerController, FireAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_FireAttackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_FireAttackAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_PawnMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_MouseLookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceStartAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_StanceEndAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_LoadAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::NewProp_FireAttackAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_TownGuardPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::ClassParams = {
		&ACPP_TownGuardPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_TownGuardPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACPP_TownGuardPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_TownGuardPlayerController.OuterSingleton, Z_Construct_UClass_ACPP_TownGuardPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_TownGuardPlayerController.OuterSingleton;
	}
	template<> TOWN_GUARD_API UClass* StaticClass<ACPP_TownGuardPlayerController>()
	{
		return ACPP_TownGuardPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_TownGuardPlayerController);
	ACPP_TownGuardPlayerController::~ACPP_TownGuardPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_TownGuardPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_TownGuardPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_TownGuardPlayerController, ACPP_TownGuardPlayerController::StaticClass, TEXT("ACPP_TownGuardPlayerController"), &Z_Registration_Info_UClass_ACPP_TownGuardPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_TownGuardPlayerController), 867641254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_TownGuardPlayerController_h_3949208707(TEXT("/Script/Town_Guard"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_TownGuardPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_TownGuardPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
