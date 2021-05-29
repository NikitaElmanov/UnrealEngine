// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosArcadeCpp/ShootComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootComponent() {}
// Cross Module References
	COSMOSARCADECPP_API UScriptStruct* Z_Construct_UScriptStruct_FShootInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosArcadeCpp();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_AShootProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UShootComponent_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UShootComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FShootInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSARCADECPP_API uint32 Get_Z_Construct_UScriptStruct_FShootInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShootInfo, Z_Construct_UPackage__Script_CosmosArcadeCpp(), TEXT("ShootInfo"), sizeof(FShootInfo), Get_Z_Construct_UScriptStruct_FShootInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSARCADECPP_API UScriptStruct* StaticStruct<FShootInfo>()
{
	return FShootInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShootInfo(FShootInfo::StaticStruct, TEXT("/Script/CosmosArcadeCpp"), TEXT("ShootInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosArcadeCpp_StaticRegisterNativesFShootInfo
{
	FScriptStruct_CosmosArcadeCpp_StaticRegisterNativesFShootInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShootInfo")),new UScriptStruct::TCppStructOps<FShootInfo>);
	}
} ScriptStruct_CosmosArcadeCpp_StaticRegisterNativesFShootInfo;
	struct Z_Construct_UScriptStruct_FShootInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShootInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShootInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_projectileClass_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_projectileClass = { "projectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShootInfo, projectileClass), Z_Construct_UClass_AShootProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_projectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_projectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShootInfo, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_angle_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShootInfo, angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShootInfo, damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShootInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_projectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootInfo_Statics::NewProp_damage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShootInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
		nullptr,
		&NewStructOps,
		"ShootInfo",
		sizeof(FShootInfo),
		alignof(FShootInfo),
		Z_Construct_UScriptStruct_FShootInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShootInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShootInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShootInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosArcadeCpp();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShootInfo"), sizeof(FShootInfo), Get_Z_Construct_UScriptStruct_FShootInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShootInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShootInfo_Hash() { return 1701522921U; }
	DEFINE_FUNCTION(UShootComponent::execstopShooting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->stopShooting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShootComponent::execstartShooting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->startShooting();
		P_NATIVE_END;
	}
	void UShootComponent::StaticRegisterNativesUShootComponent()
	{
		UClass* Class = UShootComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "startShooting", &UShootComponent::execstartShooting },
			{ "stopShooting", &UShootComponent::execstopShooting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShootComponent_startShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShootComponent_startShooting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootComponent_startShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShootComponent, nullptr, "startShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShootComponent_startShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootComponent_startShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShootComponent_startShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShootComponent_startShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShootComponent_stopShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShootComponent_stopShooting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootComponent_stopShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShootComponent, nullptr, "stopShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShootComponent_stopShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootComponent_stopShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShootComponent_stopShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShootComponent_stopShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShootComponent_NoRegister()
	{
		return UShootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shootPeriod;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shootInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_shootInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShootComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShootComponent_startShooting, "startShooting" }, // 1699573243
		{ &Z_Construct_UFunction_UShootComponent_stopShooting, "stopShooting" }, // 2275121457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ShootComponent.h" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::NewProp_shootPeriod_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShootComponent_Statics::NewProp_shootPeriod = { "shootPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootComponent, shootPeriod), METADATA_PARAMS(Z_Construct_UClass_UShootComponent_Statics::NewProp_shootPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::NewProp_shootPeriod_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShootComponent_Statics::NewProp_shootInfos_Inner = { "shootInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShootInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::NewProp_shootInfos_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShootComponent_Statics::NewProp_shootInfos = { "shootInfos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootComponent, shootInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShootComponent_Statics::NewProp_shootInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::NewProp_shootInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShootComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootComponent_Statics::NewProp_shootPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootComponent_Statics::NewProp_shootInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootComponent_Statics::NewProp_shootInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShootComponent_Statics::ClassParams = {
		&UShootComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShootComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShootComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShootComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShootComponent, 1330481853);
	template<> COSMOSARCADECPP_API UClass* StaticClass<UShootComponent>()
	{
		return UShootComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShootComponent(Z_Construct_UClass_UShootComponent, &UShootComponent::StaticClass, TEXT("/Script/CosmosArcadeCpp"), TEXT("UShootComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShootComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
