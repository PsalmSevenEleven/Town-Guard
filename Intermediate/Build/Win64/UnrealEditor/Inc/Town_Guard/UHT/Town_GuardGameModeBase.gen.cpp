// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Town_Guard/Town_GuardGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTown_GuardGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ATown_GuardGameModeBase();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ATown_GuardGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Town_Guard();
// End Cross Module References
	void ATown_GuardGameModeBase::StaticRegisterNativesATown_GuardGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATown_GuardGameModeBase);
	UClass* Z_Construct_UClass_ATown_GuardGameModeBase_NoRegister()
	{
		return ATown_GuardGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATown_GuardGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATown_GuardGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Town_Guard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATown_GuardGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Town_GuardGameModeBase.h" },
		{ "ModuleRelativePath", "Town_GuardGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATown_GuardGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATown_GuardGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATown_GuardGameModeBase_Statics::ClassParams = {
		&ATown_GuardGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATown_GuardGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATown_GuardGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATown_GuardGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATown_GuardGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATown_GuardGameModeBase.OuterSingleton, Z_Construct_UClass_ATown_GuardGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATown_GuardGameModeBase.OuterSingleton;
	}
	template<> TOWN_GUARD_API UClass* StaticClass<ATown_GuardGameModeBase>()
	{
		return ATown_GuardGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATown_GuardGameModeBase);
	ATown_GuardGameModeBase::~ATown_GuardGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_Town_GuardGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_Town_GuardGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATown_GuardGameModeBase, ATown_GuardGameModeBase::StaticClass, TEXT("ATown_GuardGameModeBase"), &Z_Registration_Info_UClass_ATown_GuardGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATown_GuardGameModeBase), 2197449170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_Town_GuardGameModeBase_h_2298825328(TEXT("/Script/Town_Guard"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_Town_GuardGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_Town_GuardGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
