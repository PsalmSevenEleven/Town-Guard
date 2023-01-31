// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Town_Guard/CPP_AnimationInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_AnimationInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_Guardsman_NoRegister();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UCPP_AnimationInterface();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UCPP_AnimationInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Town_Guard();
// End Cross Module References
	DEFINE_FUNCTION(ICPP_AnimationInterface::execBindEvents)
	{
		P_GET_OBJECT(ACPP_Guardsman,Z_Param_InPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindEvents_Implementation(Z_Param_InPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICPP_AnimationInterface::execCancelAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAttack_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICPP_AnimationInterface::execReleaseAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseAttack_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICPP_AnimationInterface::execLoadAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAttack_Implementation();
		P_NATIVE_END;
	}
	struct CPP_AnimationInterface_eventBindEvents_Parms
	{
		ACPP_Guardsman* InPlayer;
	};
	void ICPP_AnimationInterface::BindEvents(ACPP_Guardsman* InPlayer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindEvents instead.");
	}
	void ICPP_AnimationInterface::CancelAttack()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CancelAttack instead.");
	}
	void ICPP_AnimationInterface::LoadAttack()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LoadAttack instead.");
	}
	void ICPP_AnimationInterface::ReleaseAttack()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReleaseAttack instead.");
	}
	void UCPP_AnimationInterface::StaticRegisterNativesUCPP_AnimationInterface()
	{
		UClass* Class = UCPP_AnimationInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindEvents", &ICPP_AnimationInterface::execBindEvents },
			{ "CancelAttack", &ICPP_AnimationInterface::execCancelAttack },
			{ "LoadAttack", &ICPP_AnimationInterface::execLoadAttack },
			{ "ReleaseAttack", &ICPP_AnimationInterface::execReleaseAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::NewProp_InPlayer = { "InPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_AnimationInterface_eventBindEvents_Parms, InPlayer), Z_Construct_UClass_ACPP_Guardsman_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::NewProp_InPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AnimationInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AnimationInterface, nullptr, "BindEvents", nullptr, nullptr, sizeof(CPP_AnimationInterface_eventBindEvents_Parms), Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_AnimationInterface_CancelAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_AnimationInterface_CancelAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AnimationInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AnimationInterface_CancelAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AnimationInterface, nullptr, "CancelAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_AnimationInterface_CancelAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AnimationInterface_CancelAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_AnimationInterface_CancelAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AnimationInterface_CancelAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_AnimationInterface_LoadAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_AnimationInterface_LoadAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AnimationInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AnimationInterface_LoadAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AnimationInterface, nullptr, "LoadAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_AnimationInterface_LoadAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AnimationInterface_LoadAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_AnimationInterface_LoadAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AnimationInterface_LoadAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_AnimationInterface_ReleaseAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_AnimationInterface_ReleaseAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AnimationInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_AnimationInterface_ReleaseAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_AnimationInterface, nullptr, "ReleaseAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_AnimationInterface_ReleaseAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_AnimationInterface_ReleaseAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_AnimationInterface_ReleaseAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_AnimationInterface_ReleaseAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_AnimationInterface);
	UClass* Z_Construct_UClass_UCPP_AnimationInterface_NoRegister()
	{
		return UCPP_AnimationInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_AnimationInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_AnimationInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Town_Guard,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_AnimationInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_AnimationInterface_BindEvents, "BindEvents" }, // 1946582147
		{ &Z_Construct_UFunction_UCPP_AnimationInterface_CancelAttack, "CancelAttack" }, // 237375226
		{ &Z_Construct_UFunction_UCPP_AnimationInterface_LoadAttack, "LoadAttack" }, // 2352709412
		{ &Z_Construct_UFunction_UCPP_AnimationInterface_ReleaseAttack, "ReleaseAttack" }, // 2776979872
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_AnimationInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_AnimationInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_AnimationInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICPP_AnimationInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_AnimationInterface_Statics::ClassParams = {
		&UCPP_AnimationInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCPP_AnimationInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_AnimationInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_AnimationInterface()
	{
		if (!Z_Registration_Info_UClass_UCPP_AnimationInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_AnimationInterface.OuterSingleton, Z_Construct_UClass_UCPP_AnimationInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPP_AnimationInterface.OuterSingleton;
	}
	template<> TOWN_GUARD_API UClass* StaticClass<UCPP_AnimationInterface>()
	{
		return UCPP_AnimationInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_AnimationInterface);
	UCPP_AnimationInterface::~UCPP_AnimationInterface() {}
	static FName NAME_UCPP_AnimationInterface_BindEvents = FName(TEXT("BindEvents"));
	void ICPP_AnimationInterface::Execute_BindEvents(UObject* O, ACPP_Guardsman* InPlayer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCPP_AnimationInterface::StaticClass()));
		CPP_AnimationInterface_eventBindEvents_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCPP_AnimationInterface_BindEvents);
		if (Func)
		{
			Parms.InPlayer=InPlayer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICPP_AnimationInterface*)(O->GetNativeInterfaceAddress(UCPP_AnimationInterface::StaticClass())))
		{
			I->BindEvents_Implementation(InPlayer);
		}
	}
	static FName NAME_UCPP_AnimationInterface_CancelAttack = FName(TEXT("CancelAttack"));
	void ICPP_AnimationInterface::Execute_CancelAttack(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCPP_AnimationInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCPP_AnimationInterface_CancelAttack);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICPP_AnimationInterface*)(O->GetNativeInterfaceAddress(UCPP_AnimationInterface::StaticClass())))
		{
			I->CancelAttack_Implementation();
		}
	}
	static FName NAME_UCPP_AnimationInterface_LoadAttack = FName(TEXT("LoadAttack"));
	void ICPP_AnimationInterface::Execute_LoadAttack(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCPP_AnimationInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCPP_AnimationInterface_LoadAttack);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICPP_AnimationInterface*)(O->GetNativeInterfaceAddress(UCPP_AnimationInterface::StaticClass())))
		{
			I->LoadAttack_Implementation();
		}
	}
	static FName NAME_UCPP_AnimationInterface_ReleaseAttack = FName(TEXT("ReleaseAttack"));
	void ICPP_AnimationInterface::Execute_ReleaseAttack(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCPP_AnimationInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCPP_AnimationInterface_ReleaseAttack);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICPP_AnimationInterface*)(O->GetNativeInterfaceAddress(UCPP_AnimationInterface::StaticClass())))
		{
			I->ReleaseAttack_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_AnimationInterface, UCPP_AnimationInterface::StaticClass, TEXT("UCPP_AnimationInterface"), &Z_Registration_Info_UClass_UCPP_AnimationInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_AnimationInterface), 2362408913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_1672835083(TEXT("/Script/Town_Guard"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_AnimationInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
