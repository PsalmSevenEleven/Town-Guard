// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Town_Guard/DamageType_Slashing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageType_Slashing() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UDamageType_Slashing();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UDamageType_Slashing_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Town_Guard();
// End Cross Module References
	void UDamageType_Slashing::StaticRegisterNativesUDamageType_Slashing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageType_Slashing);
	UClass* Z_Construct_UClass_UDamageType_Slashing_NoRegister()
	{
		return UDamageType_Slashing::StaticClass();
	}
	struct Z_Construct_UClass_UDamageType_Slashing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageType_Slashing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Town_Guard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Slashing_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DamageType_Slashing.h" },
		{ "ModuleRelativePath", "DamageType_Slashing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageType_Slashing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageType_Slashing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageType_Slashing_Statics::ClassParams = {
		&UDamageType_Slashing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageType_Slashing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Slashing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageType_Slashing()
	{
		if (!Z_Registration_Info_UClass_UDamageType_Slashing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageType_Slashing.OuterSingleton, Z_Construct_UClass_UDamageType_Slashing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageType_Slashing.OuterSingleton;
	}
	template<> TOWN_GUARD_API UClass* StaticClass<UDamageType_Slashing>()
	{
		return UDamageType_Slashing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageType_Slashing);
	UDamageType_Slashing::~UDamageType_Slashing() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_DamageType_Slashing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_DamageType_Slashing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageType_Slashing, UDamageType_Slashing::StaticClass, TEXT("UDamageType_Slashing"), &Z_Registration_Info_UClass_UDamageType_Slashing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageType_Slashing), 903317672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_DamageType_Slashing_h_3898042365(TEXT("/Script/Town_Guard"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_DamageType_Slashing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_DamageType_Slashing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
