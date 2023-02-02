// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTown_Guard_init() {}
	TOWN_GUARD_API UFunction* Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Town_Guard;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Town_Guard()
	{
		if (!Z_Registration_Info_UPackage__Script_Town_Guard.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Town_Guard",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB35A9F0B,
				0x69FE2791,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Town_Guard.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Town_Guard.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Town_Guard(Z_Construct_UPackage__Script_Town_Guard, TEXT("/Script/Town_Guard"), Z_Registration_Info_UPackage__Script_Town_Guard, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB35A9F0B, 0x69FE2791));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
