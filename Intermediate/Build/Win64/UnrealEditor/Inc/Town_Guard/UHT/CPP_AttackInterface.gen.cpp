// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Town_Guard/CPP_AttackInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_AttackInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_Guardsman_NoRegister();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UCPP_AttackInterface();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UCPP_AttackInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Town_Guard();
// End Cross Module References
	DEFINE_FUNCTION(ICPP_AttackInterface::execTakeDamageFromWeapon)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StaminaDrain);
		P_GET_OBJECT(ACPP_Guardsman,Z_Param_Attacker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamageFromWeapon_Implementation(Z_Param_Damage,Z_Param_StaminaDrain,Z_Param_Attacker);
		P_NATIVE_END;
	}
	struct CPP_AttackInterface_eventTakeDamageFromWeapon_Parms
	{
		float Damage;
		float StaminaDrain;
		ACPP_Guardsman* Attacker;
	};
	void ICPP_AttackInterface::TakeDamageFromWeapon(float Damage, float StaminaDrain, ACPP_Guardsman* Attacker)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakeDamageFromWeapon instead.");
	}
	void UCPP_AttackInterface::StaticRegisterNativesUCPP_AttackInterface()
	{
		UClass* Class = UCPP_AttackInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamageFromWeapon", &ICPP_AttackInterface::execTakeDamageFromWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDrain;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_AttackInterface_eventTakeDamageFromWeapon_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::NewProp_StaminaDrain = { "StaminaDrain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_AttackInterface_eventTakeDamageFromWeapon_Parms, StaminaDrain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_AttackInterface_eventTakeDamageFromWeapon_Parms, Attacker), Z_Construct_UClass_ACPP_Guardsman_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::NewProp_StaminaDrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::NewProp_Attacker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttackInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AttackInterface, nullptr, "TakeDamageFromWeapon", nullptr, nullptr, sizeof(CPP_AttackInterface_eventTakeDamageFromWeapon_Parms), Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_AttackInterface);
	UClass* Z_Construct_UClass_UCPP_AttackInterface_NoRegister()
	{
		return UCPP_AttackInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_AttackInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_AttackInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Town_Guard,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_AttackInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_AttackInterface_TakeDamageFromWeapon, "TakeDamageFromWeapon" }, // 3900671633
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_AttackInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AttackInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_AttackInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICPP_AttackInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_AttackInterface_Statics::ClassParams = {
		&UCPP_AttackInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCPP_AttackInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AttackInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_AttackInterface()
	{
		if (!Z_Registration_Info_UClass_UCPP_AttackInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_AttackInterface.OuterSingleton, Z_Construct_UClass_UCPP_AttackInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPP_AttackInterface.OuterSingleton;
	}
	template<> TOWN_GUARD_API UClass* StaticClass<UCPP_AttackInterface>()
	{
		return UCPP_AttackInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_AttackInterface);
	UCPP_AttackInterface::~UCPP_AttackInterface() {}
	static FName NAME_UCPP_AttackInterface_TakeDamageFromWeapon = FName(TEXT("TakeDamageFromWeapon"));
	void ICPP_AttackInterface::Execute_TakeDamageFromWeapon(UObject* O, float Damage, float StaminaDrain, ACPP_Guardsman* Attacker)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCPP_AttackInterface::StaticClass()));
		CPP_AttackInterface_eventTakeDamageFromWeapon_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCPP_AttackInterface_TakeDamageFromWeapon);
		if (Func)
		{
			Parms.Damage=Damage;
			Parms.StaminaDrain=StaminaDrain;
			Parms.Attacker=Attacker;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICPP_AttackInterface*)(O->GetNativeInterfaceAddress(UCPP_AttackInterface::StaticClass())))
		{
			I->TakeDamageFromWeapon_Implementation(Damage,StaminaDrain,Attacker);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_AttackInterface, UCPP_AttackInterface::StaticClass, TEXT("UCPP_AttackInterface"), &Z_Registration_Info_UClass_UCPP_AttackInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_AttackInterface), 4181608980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_375789665(TEXT("/Script/Town_Guard"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AttackInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
