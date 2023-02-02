// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Town_Guard/CPP_Weapon.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Weapon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_Guardsman_NoRegister();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_Weapon();
	TOWN_GUARD_API UClass* Z_Construct_UClass_ACPP_Weapon_NoRegister();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UCPP_AnimationInterface_NoRegister();
	TOWN_GUARD_API UClass* Z_Construct_UClass_UCPP_AttackInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Town_Guard();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_Weapon::execDamageEntity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StaminaDrain);
		P_GET_OBJECT(ACPP_Guardsman,Z_Param_Target);
		P_GET_OBJECT(ACPP_Guardsman,Z_Param_Attacker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageEntity_Implementation(Z_Param_Damage,Z_Param_StaminaDrain,Z_Param_Target,Z_Param_Attacker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Weapon::execDealDamage)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DealDamage(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Weapon::execDanger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Danger();
		P_NATIVE_END;
	}
	struct CPP_Weapon_eventDamageEntity_Parms
	{
		float Damage;
		float StaminaDrain;
		ACPP_Guardsman* Target;
		ACPP_Guardsman* Attacker;
	};
	static FName NAME_ACPP_Weapon_DamageEntity = FName(TEXT("DamageEntity"));
	void ACPP_Weapon::DamageEntity(float Damage, float StaminaDrain, ACPP_Guardsman* Target, ACPP_Guardsman* Attacker)
	{
		CPP_Weapon_eventDamageEntity_Parms Parms;
		Parms.Damage=Damage;
		Parms.StaminaDrain=StaminaDrain;
		Parms.Target=Target;
		Parms.Attacker=Attacker;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Weapon_DamageEntity),&Parms);
	}
	void ACPP_Weapon::StaticRegisterNativesACPP_Weapon()
	{
		UClass* Class = ACPP_Weapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageEntity", &ACPP_Weapon::execDamageEntity },
			{ "Danger", &ACPP_Weapon::execDanger },
			{ "DealDamage", &ACPP_Weapon::execDealDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDrain;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDamageEntity_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::NewProp_StaminaDrain = { "StaminaDrain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDamageEntity_Parms, StaminaDrain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDamageEntity_Parms, Target), Z_Construct_UClass_ACPP_Guardsman_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDamageEntity_Parms, Attacker), Z_Construct_UClass_ACPP_Guardsman_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::NewProp_StaminaDrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::NewProp_Attacker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when the weapon's hitbox collides with a valid entity in order to deal damage\n" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
		{ "ToolTip", "Called when the weapon's hitbox collides with a valid entity in order to deal damage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Weapon, nullptr, "DamageEntity", nullptr, nullptr, sizeof(CPP_Weapon_eventDamageEntity_Parms), Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Weapon_DamageEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Weapon_DamageEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Weapon_Danger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Weapon_Danger_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//called to reset the bIsDangerous variable\n" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
		{ "ToolTip", "called to reset the bIsDangerous variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Weapon_Danger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Weapon, nullptr, "Danger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Weapon_Danger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Weapon_Danger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Weapon_Danger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Weapon_Danger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics
	{
		struct CPP_Weapon_eventDealDamage_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDealDamage_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDealDamage_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDealDamage_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDealDamage_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CPP_Weapon_eventDealDamage_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CPP_Weapon_eventDealDamage_Parms), &Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Weapon_eventDealDamage_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when the hitbox collides with something\n" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
		{ "ToolTip", "Called when the hitbox collides with something" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Weapon, nullptr, "DealDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::CPP_Weapon_eventDealDamage_Parms), Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Weapon_DealDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Weapon_DealDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Weapon);
	UClass* Z_Construct_UClass_ACPP_Weapon_NoRegister()
	{
		return ACPP_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStaminaDrain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStaminaDrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaForSwing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaForSwing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Town_Guard,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_Weapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_Weapon_DamageEntity, "DamageEntity" }, // 314718046
		{ &Z_Construct_UFunction_ACPP_Weapon_Danger, "Danger" }, // 3549980564
		{ &Z_Construct_UFunction_ACPP_Weapon_DealDamage, "DealDamage" }, // 1798825728
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Weapon.h" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_HitBox_MetaData[] = {
		{ "Category", "CPP_Weapon" },
		{ "Comment", "//Hitbox for dealing damage\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
		{ "ToolTip", "Hitbox for dealing damage" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_HitBox = { "HitBox", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Weapon, HitBox), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_HitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_HitBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "CPP_Weapon" },
		{ "Comment", "//Skeletal mesh for moving the hitbox around\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
		{ "ToolTip", "Skeletal mesh for moving the hitbox around" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Weapon, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxDamage_MetaData[] = {
		{ "Category", "CPP_Weapon" },
		{ "Comment", "//How much damage a fully charged strike should deal to the victim\n" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
		{ "ToolTip", "How much damage a fully charged strike should deal to the victim" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxDamage = { "MaxDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Weapon, MaxDamage), METADATA_PARAMS(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxStaminaDrain_MetaData[] = {
		{ "Category", "CPP_Weapon" },
		{ "Comment", "//How much stamina a fully charged strike should drain from the victim\n" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
		{ "ToolTip", "How much stamina a fully charged strike should drain from the victim" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxStaminaDrain = { "MaxStaminaDrain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Weapon, MaxStaminaDrain), METADATA_PARAMS(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxStaminaDrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxStaminaDrain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_StaminaForSwing_MetaData[] = {
		{ "Category", "CPP_Weapon" },
		{ "Comment", "//How much stamina the weapon requires to swing\n" },
		{ "ModuleRelativePath", "CPP_Weapon.h" },
		{ "ToolTip", "How much stamina the weapon requires to swing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_StaminaForSwing = { "StaminaForSwing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Weapon, StaminaForSwing), METADATA_PARAMS(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_StaminaForSwing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_StaminaForSwing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Weapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_HitBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_MaxStaminaDrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Weapon_Statics::NewProp_StaminaForSwing,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPP_Weapon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCPP_AnimationInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_Weapon, ICPP_AnimationInterface), false },  // 2362408913
			{ Z_Construct_UClass_UCPP_AttackInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_Weapon, ICPP_AttackInterface), false },  // 4181608980
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Weapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Weapon_Statics::ClassParams = {
		&ACPP_Weapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_Weapon_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Weapon_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Weapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Weapon()
	{
		if (!Z_Registration_Info_UClass_ACPP_Weapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Weapon.OuterSingleton, Z_Construct_UClass_ACPP_Weapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Weapon.OuterSingleton;
	}
	template<> TOWN_GUARD_API UClass* StaticClass<ACPP_Weapon>()
	{
		return ACPP_Weapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Weapon);
	ACPP_Weapon::~ACPP_Weapon() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Weapon, ACPP_Weapon::StaticClass, TEXT("ACPP_Weapon"), &Z_Registration_Info_UClass_ACPP_Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Weapon), 1917074848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_2274770529(TEXT("/Script/Town_Guard"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Town_Guard_Town_Guard_Source_Town_Guard_CPP_Weapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
