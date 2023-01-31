// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Town_Guard/CPP_Guardsman.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Guardsman() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_Guardsman();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_Guardsman_NoRegister();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UCPP_AttackInterface_NoRegister();
	TOWN_GUARD_API UEnum* Z_Construct_UEnum_Town_Guard_Stance();
	TOWN_GUARD_API UFunction* Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Town_Guard();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Stance;
	static UEnum* Stance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Stance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Stance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Town_Guard_Stance, Z_Construct_UPackage__Script_Town_Guard(), TEXT("Stance"));
		}
		return Z_Registration_Info_UEnum_Stance.OuterSingleton;
	}
	template<> TOWN_GUARD_API UEnum* StaticEnum<Stance>()
	{
		return Stance_StaticEnum();
	}
	struct Z_Construct_UEnum_Town_Guard_Stance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Town_Guard_Stance_Statics::Enumerators[] = {
		{ "TopRight", (int64)TopRight },
		{ "TopLeft", (int64)TopLeft },
		{ "BottomRight", (int64)BottomRight },
		{ "BottomLeft", (int64)BottomLeft },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Town_Guard_Stance_Statics::Enum_MetaDataParams[] = {
		{ "BottomLeft.DisplayName", "BottomLeft" },
		{ "BottomLeft.Name", "BottomLeft" },
		{ "BottomRight.DisplayName", "BottomRight" },
		{ "BottomRight.Name", "BottomRight" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "TopLeft.DisplayName", "TopLeft" },
		{ "TopLeft.Name", "TopLeft" },
		{ "TopRight.DisplayName", "TopRight" },
		{ "TopRight.Name", "TopRight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Town_Guard_Stance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Town_Guard,
		nullptr,
		"Stance",
		"Stance",
		Z_Construct_UEnum_Town_Guard_Stance_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Town_Guard_Stance_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Town_Guard_Stance_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Town_Guard_Stance_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Town_Guard_Stance()
	{
		if (!Z_Registration_Info_UEnum_Stance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Stance.InnerSingleton, Z_Construct_UEnum_Town_Guard_Stance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Stance.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Town_Guard, nullptr, "AttackDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execServerSetStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetStamina_Implementation(Z_Param_NewStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execServerSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetHealth_Implementation(Z_Param_NewHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_NewHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execServerSetAttackLoadAlpha)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAlpha);
		P_GET_UBOOL(Z_Param_NewCharge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAttackLoadAlpha_Implementation(Z_Param_NewAlpha,Z_Param_NewCharge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execSetDanger)
	{
		P_GET_UBOOL(Z_Param_NewDanger);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDanger_Implementation(Z_Param_NewDanger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execServerSetAttacking)
	{
		P_GET_UBOOL(Z_Param_NewAttacking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAttacking_Implementation(Z_Param_NewAttacking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execServerSetAttackLoaded)
	{
		P_GET_UBOOL(Z_Param_NewLoaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAttackLoaded_Implementation(Z_Param_NewLoaded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execServerSetStance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetStance_Implementation(Stance(Z_Param_NewStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Guardsman::execServerLook)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerLook_Implementation(Z_Param_Rot);
		P_NATIVE_END;
	}
	struct CPP_Guardsman_eventServerLook_Parms
	{
		FRotator Rot;
	};
	struct CPP_Guardsman_eventServerSetAttacking_Parms
	{
		bool NewAttacking;
	};
	struct CPP_Guardsman_eventServerSetAttackLoadAlpha_Parms
	{
		float NewAlpha;
		bool NewCharge;
	};
	struct CPP_Guardsman_eventServerSetAttackLoaded_Parms
	{
		bool NewLoaded;
	};
	struct CPP_Guardsman_eventServerSetHealth_Parms
	{
		float NewHealth;
	};
	struct CPP_Guardsman_eventServerSetStamina_Parms
	{
		float NewStamina;
	};
	struct CPP_Guardsman_eventServerSetStance_Parms
	{
		TEnumAsByte<Stance> NewStance;
	};
	struct CPP_Guardsman_eventSetDanger_Parms
	{
		bool NewDanger;
	};
	static FName NAME_ACPP_Guardsman_ServerLook = FName(TEXT("ServerLook"));
	void ACPP_Guardsman::ServerLook(FRotator Rot)
	{
		CPP_Guardsman_eventServerLook_Parms Parms;
		Parms.Rot=Rot;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Guardsman_ServerLook),&Parms);
	}
	static FName NAME_ACPP_Guardsman_ServerSetAttacking = FName(TEXT("ServerSetAttacking"));
	void ACPP_Guardsman::ServerSetAttacking(bool NewAttacking)
	{
		CPP_Guardsman_eventServerSetAttacking_Parms Parms;
		Parms.NewAttacking=NewAttacking ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Guardsman_ServerSetAttacking),&Parms);
	}
	static FName NAME_ACPP_Guardsman_ServerSetAttackLoadAlpha = FName(TEXT("ServerSetAttackLoadAlpha"));
	void ACPP_Guardsman::ServerSetAttackLoadAlpha(float NewAlpha, bool NewCharge)
	{
		CPP_Guardsman_eventServerSetAttackLoadAlpha_Parms Parms;
		Parms.NewAlpha=NewAlpha;
		Parms.NewCharge=NewCharge ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Guardsman_ServerSetAttackLoadAlpha),&Parms);
	}
	static FName NAME_ACPP_Guardsman_ServerSetAttackLoaded = FName(TEXT("ServerSetAttackLoaded"));
	void ACPP_Guardsman::ServerSetAttackLoaded(bool NewLoaded)
	{
		CPP_Guardsman_eventServerSetAttackLoaded_Parms Parms;
		Parms.NewLoaded=NewLoaded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Guardsman_ServerSetAttackLoaded),&Parms);
	}
	static FName NAME_ACPP_Guardsman_ServerSetHealth = FName(TEXT("ServerSetHealth"));
	void ACPP_Guardsman::ServerSetHealth(float NewHealth)
	{
		CPP_Guardsman_eventServerSetHealth_Parms Parms;
		Parms.NewHealth=NewHealth;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Guardsman_ServerSetHealth),&Parms);
	}
	static FName NAME_ACPP_Guardsman_ServerSetStamina = FName(TEXT("ServerSetStamina"));
	void ACPP_Guardsman::ServerSetStamina(float NewStamina)
	{
		CPP_Guardsman_eventServerSetStamina_Parms Parms;
		Parms.NewStamina=NewStamina;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Guardsman_ServerSetStamina),&Parms);
	}
	static FName NAME_ACPP_Guardsman_ServerSetStance = FName(TEXT("ServerSetStance"));
	void ACPP_Guardsman::ServerSetStance(Stance NewStance)
	{
		CPP_Guardsman_eventServerSetStance_Parms Parms;
		Parms.NewStance=NewStance;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Guardsman_ServerSetStance),&Parms);
	}
	static FName NAME_ACPP_Guardsman_SetDanger = FName(TEXT("SetDanger"));
	void ACPP_Guardsman::SetDanger(bool NewDanger)
	{
		CPP_Guardsman_eventSetDanger_Parms Parms;
		Parms.NewDanger=NewDanger ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Guardsman_SetDanger),&Parms);
	}
	void ACPP_Guardsman::StaticRegisterNativesACPP_Guardsman()
	{
		UClass* Class = ACPP_Guardsman::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerLook", &ACPP_Guardsman::execServerLook },
			{ "ServerSetAttacking", &ACPP_Guardsman::execServerSetAttacking },
			{ "ServerSetAttackLoadAlpha", &ACPP_Guardsman::execServerSetAttackLoadAlpha },
			{ "ServerSetAttackLoaded", &ACPP_Guardsman::execServerSetAttackLoaded },
			{ "ServerSetHealth", &ACPP_Guardsman::execServerSetHealth },
			{ "ServerSetStamina", &ACPP_Guardsman::execServerSetStamina },
			{ "ServerSetStance", &ACPP_Guardsman::execServerSetStance },
			{ "SetDanger", &ACPP_Guardsman::execSetDanger },
			{ "SetHealth", &ACPP_Guardsman::execSetHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Guardsman_eventServerLook_Parms, Rot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::NewProp_Rot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Lets the server know where the player is looking\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Lets the server know where the player is looking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "ServerLook", nullptr, nullptr, sizeof(CPP_Guardsman_eventServerLook_Parms), Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_ServerLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_ServerLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics
	{
		static void NewProp_NewAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewAttacking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::NewProp_NewAttacking_SetBit(void* Obj)
	{
		((CPP_Guardsman_eventServerSetAttacking_Parms*)Obj)->NewAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::NewProp_NewAttacking = { "NewAttacking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CPP_Guardsman_eventServerSetAttacking_Parms), &Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::NewProp_NewAttacking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::NewProp_NewAttacking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Tell the server whether or not the player is attacking\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Tell the server whether or not the player is attacking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "ServerSetAttacking", nullptr, nullptr, sizeof(CPP_Guardsman_eventServerSetAttacking_Parms), Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAlpha;
		static void NewProp_NewCharge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCharge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::NewProp_NewAlpha = { "NewAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Guardsman_eventServerSetAttackLoadAlpha_Parms, NewAlpha), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::NewProp_NewCharge_SetBit(void* Obj)
	{
		((CPP_Guardsman_eventServerSetAttackLoadAlpha_Parms*)Obj)->NewCharge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::NewProp_NewCharge = { "NewCharge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CPP_Guardsman_eventServerSetAttackLoadAlpha_Parms), &Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::NewProp_NewCharge_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::NewProp_NewAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::NewProp_NewCharge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Tell the server how charged the player's attack is, and if it is fully charged\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Tell the server how charged the player's attack is, and if it is fully charged" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "ServerSetAttackLoadAlpha", nullptr, nullptr, sizeof(CPP_Guardsman_eventServerSetAttackLoadAlpha_Parms), Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics
	{
		static void NewProp_NewLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewLoaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::NewProp_NewLoaded_SetBit(void* Obj)
	{
		((CPP_Guardsman_eventServerSetAttackLoaded_Parms*)Obj)->NewLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::NewProp_NewLoaded = { "NewLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CPP_Guardsman_eventServerSetAttackLoaded_Parms), &Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::NewProp_NewLoaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::NewProp_NewLoaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Tell the server whether or not the player is loading an attack\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Tell the server whether or not the player is loading an attack" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "ServerSetAttackLoaded", nullptr, nullptr, sizeof(CPP_Guardsman_eventServerSetAttackLoaded_Parms), Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Guardsman_eventServerSetHealth_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Tell the server the player's health\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Tell the server the player's health" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "ServerSetHealth", nullptr, nullptr, sizeof(CPP_Guardsman_eventServerSetHealth_Parms), Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::NewProp_NewStamina = { "NewStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Guardsman_eventServerSetStamina_Parms, NewStamina), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::NewProp_NewStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Tell the server the player's stamina\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Tell the server the player's stamina" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "ServerSetStamina", nullptr, nullptr, sizeof(CPP_Guardsman_eventServerSetStamina_Parms), Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::NewProp_NewStance = { "NewStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Guardsman_eventServerSetStance_Parms, NewStance), Z_Construct_UEnum_Town_Guard_Stance, METADATA_PARAMS(nullptr, 0) }; // 4292627029
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::NewProp_NewStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Tells the server the player's stance\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Tells the server the player's stance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "ServerSetStance", nullptr, nullptr, sizeof(CPP_Guardsman_eventServerSetStance_Parms), Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics
	{
		static void NewProp_NewDanger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewDanger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::NewProp_NewDanger_SetBit(void* Obj)
	{
		((CPP_Guardsman_eventSetDanger_Parms*)Obj)->NewDanger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::NewProp_NewDanger = { "NewDanger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CPP_Guardsman_eventSetDanger_Parms), &Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::NewProp_NewDanger_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::NewProp_NewDanger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Tell the player's weapon to be dangerous\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Tell the player's weapon to be dangerous" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "SetDanger", nullptr, nullptr, sizeof(CPP_Guardsman_eventSetDanger_Parms), Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_SetDanger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_SetDanger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics
	{
		struct CPP_Guardsman_eventSetHealth_Parms
		{
			float NewHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Guardsman_eventSetHealth_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Set the player's health; also calls ServerSetHealth()\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Set the player's health; also calls ServerSetHealth()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Guardsman, nullptr, "SetHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::CPP_Guardsman_eventSetHealth_Parms), Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Guardsman_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Guardsman_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Guardsman);
	UClass* Z_Construct_UClass_ACPP_Guardsman_NoRegister()
	{
		return ACPP_Guardsman::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Guardsman_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentStance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttacking_MetaData[];
#endif
		static void NewProp_bAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttackLoaded_MetaData[];
#endif
		static void NewProp_bAttackLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttackLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackLoadDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttackLoadDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackReleaseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttackReleaseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCancelDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttackCancelDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackLoadAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackLoadAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttackCharged_MetaData[];
#endif
		static void NewProp_bAttackCharged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttackCharged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentWeaponClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Guardsman_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Town_Guard,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_Guardsman_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_Guardsman_ServerLook, "ServerLook" }, // 3446039648
		{ &Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttacking, "ServerSetAttacking" }, // 2254954905
		{ &Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoadAlpha, "ServerSetAttackLoadAlpha" }, // 302456370
		{ &Z_Construct_UFunction_ACPP_Guardsman_ServerSetAttackLoaded, "ServerSetAttackLoaded" }, // 1191467346
		{ &Z_Construct_UFunction_ACPP_Guardsman_ServerSetHealth, "ServerSetHealth" }, // 958013463
		{ &Z_Construct_UFunction_ACPP_Guardsman_ServerSetStamina, "ServerSetStamina" }, // 4159391076
		{ &Z_Construct_UFunction_ACPP_Guardsman_ServerSetStance, "ServerSetStance" }, // 4082848432
		{ &Z_Construct_UFunction_ACPP_Guardsman_SetDanger, "SetDanger" }, // 514895566
		{ &Z_Construct_UFunction_ACPP_Guardsman_SetHealth, "SetHealth" }, // 2909723239
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_Guardsman.h" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "/*Actor components*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Actor components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x001000000008003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "//Player's camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Player's camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "//Movement component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Movement component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, MovementComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MovementComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "/*Control-related variables*/" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Control-related variables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, MouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Comment", "//Player's control rotation\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Player's control rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_ControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_ControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentStance_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "//The stance that the player is currently occupying\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "The stance that the player is currently occupying" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentStance = { "CurrentStance", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, CurrentStance), Z_Construct_UEnum_Town_Guard_Stance, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentStance_MetaData)) }; // 4292627029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttacking_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "/*Attack-related variables*///Is the player currently performing an attack\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Attack-related variables//Is the player currently performing an attack" },
	};
#endif
	void Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttacking_SetBit(void* Obj)
	{
		((ACPP_Guardsman*)Obj)->bAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttacking = { "bAttacking", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACPP_Guardsman), &Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackLoaded_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "//Is the player currently loading an attack\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Is the player currently loading an attack" },
	};
#endif
	void Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackLoaded_SetBit(void* Obj)
	{
		((ACPP_Guardsman*)Obj)->bAttackLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackLoaded = { "bAttackLoaded", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACPP_Guardsman), &Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadDelegate_MetaData[] = {
		{ "Comment", "//Utility delegates, mostly for the anim bp's benefit\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Utility delegates, mostly for the anim bp's benefit" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadDelegate = { "AttackLoadDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, AttackLoadDelegate), Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadDelegate_MetaData)) }; // 3110570276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackReleaseDelegate_MetaData[] = {
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackReleaseDelegate = { "AttackReleaseDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, AttackReleaseDelegate), Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackReleaseDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackReleaseDelegate_MetaData)) }; // 3110570276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackCancelDelegate_MetaData[] = {
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackCancelDelegate = { "AttackCancelDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, AttackCancelDelegate), Z_Construct_UDelegateFunction_Town_Guard_AttackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackCancelDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackCancelDelegate_MetaData)) }; // 3110570276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadAlpha_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "//How charged the player's attack is\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "How charged the player's attack is" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadAlpha = { "AttackLoadAlpha", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, AttackLoadAlpha), METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackCharged_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "//Whether or not an attack is fully charged\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Whether or not an attack is fully charged" },
	};
#endif
	void Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackCharged_SetBit(void* Obj)
	{
		((ACPP_Guardsman*)Obj)->bAttackCharged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackCharged = { "bAttackCharged", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACPP_Guardsman), &Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackCharged_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackCharged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackCharged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "//Player stats\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "Player stats" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, Health), METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, Stamina), METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentWeaponClass_MetaData[] = {
		{ "Category", "CPP_Guardsman" },
		{ "Comment", "//The class of the weapon that the player is currently holding\n" },
		{ "ModuleRelativePath", "CPP_Guardsman.h" },
		{ "ToolTip", "The class of the weapon that the player is currently holding" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentWeaponClass = { "CurrentWeaponClass", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Guardsman, CurrentWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentWeaponClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Guardsman_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_MouseSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_ControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentStance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackReleaseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackCancelDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_AttackLoadAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_bAttackCharged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Guardsman_Statics::NewProp_CurrentWeaponClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPP_Guardsman_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCPP_AttackInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_Guardsman, ICPP_AttackInterface), false },  // 4181608980
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Guardsman_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Guardsman>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Guardsman_Statics::ClassParams = {
		&ACPP_Guardsman::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_Guardsman_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Guardsman_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Guardsman_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Guardsman()
	{
		if (!Z_Registration_Info_UClass_ACPP_Guardsman.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Guardsman.OuterSingleton, Z_Construct_UClass_ACPP_Guardsman_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Guardsman.OuterSingleton;
	}
	template<> TOWN_GUARD_API UClass* StaticClass<ACPP_Guardsman>()
	{
		return ACPP_Guardsman::StaticClass();
	}

	void ACPP_Guardsman::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CameraBoom(TEXT("CameraBoom"));
		static const FName Name_ControlRotation(TEXT("ControlRotation"));
		static const FName Name_CurrentStance(TEXT("CurrentStance"));
		static const FName Name_bAttacking(TEXT("bAttacking"));
		static const FName Name_bAttackLoaded(TEXT("bAttackLoaded"));
		static const FName Name_AttackLoadAlpha(TEXT("AttackLoadAlpha"));
		static const FName Name_bAttackCharged(TEXT("bAttackCharged"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Stamina(TEXT("Stamina"));
		static const FName Name_CurrentWeaponClass(TEXT("CurrentWeaponClass"));

		const bool bIsValid = true
			&& Name_CameraBoom == ClassReps[(int32)ENetFields_Private::CameraBoom].Property->GetFName()
			&& Name_ControlRotation == ClassReps[(int32)ENetFields_Private::ControlRotation].Property->GetFName()
			&& Name_CurrentStance == ClassReps[(int32)ENetFields_Private::CurrentStance].Property->GetFName()
			&& Name_bAttacking == ClassReps[(int32)ENetFields_Private::bAttacking].Property->GetFName()
			&& Name_bAttackLoaded == ClassReps[(int32)ENetFields_Private::bAttackLoaded].Property->GetFName()
			&& Name_AttackLoadAlpha == ClassReps[(int32)ENetFields_Private::AttackLoadAlpha].Property->GetFName()
			&& Name_bAttackCharged == ClassReps[(int32)ENetFields_Private::bAttackCharged].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
			&& Name_CurrentWeaponClass == ClassReps[(int32)ENetFields_Private::CurrentWeaponClass].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACPP_Guardsman"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Guardsman);
	ACPP_Guardsman::~ACPP_Guardsman() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_Statics::EnumInfo[] = {
		{ Stance_StaticEnum, TEXT("Stance"), &Z_Registration_Info_UEnum_Stance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4292627029U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Guardsman, ACPP_Guardsman::StaticClass, TEXT("ACPP_Guardsman"), &Z_Registration_Info_UClass_ACPP_Guardsman, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Guardsman), 62497139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_3896834438(TEXT("/Script/Town_Guard"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Guardsman_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
