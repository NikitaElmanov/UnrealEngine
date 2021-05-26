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
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UShootComponent_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UShootComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CosmosArcadeCpp();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_AShootProjectile_NoRegister();
// End Cross Module References
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectileClass;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::NewProp_projectileClass_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShootComponent_Statics::NewProp_projectileClass = { "projectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootComponent, projectileClass), Z_Construct_UClass_AShootProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UShootComponent_Statics::NewProp_projectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShootComponent_Statics::NewProp_projectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShootComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootComponent_Statics::NewProp_shootPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootComponent_Statics::NewProp_projectileClass,
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
	IMPLEMENT_CLASS(UShootComponent, 1266645391);
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
