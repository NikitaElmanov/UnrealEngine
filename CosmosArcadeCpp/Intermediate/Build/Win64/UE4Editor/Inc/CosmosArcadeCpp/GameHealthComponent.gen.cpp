// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosArcadeCpp/GameHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHealthComponent() {}
// Cross Module References
	COSMOSARCADECPP_API UFunction* Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CosmosArcadeCpp();
	COSMOSARCADECPP_API UFunction* Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UGameHealthComponent_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UGameHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics
	{
		struct _Script_CosmosArcadeCpp_eventHealthsChangedEvent_Parms
		{
			int32 changeValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_changeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::NewProp_changeValue = { "changeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CosmosArcadeCpp_eventHealthsChangedEvent_Parms, changeValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::NewProp_changeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CosmosArcadeCpp, nullptr, "HealthsChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_CosmosArcadeCpp_eventHealthsChangedEvent_Parms), Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CosmosArcadeCpp, nullptr, "HealthsEndedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGameHealthComponent::execgetHealths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getHealths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameHealthComponent::execchangeHealths)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_byValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeHealths(Z_Param_byValue);
		P_NATIVE_END;
	}
	void UGameHealthComponent::StaticRegisterNativesUGameHealthComponent()
	{
		UClass* Class = UGameHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "changeHealths", &UGameHealthComponent::execchangeHealths },
			{ "getHealths", &UGameHealthComponent::execgetHealths },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics
	{
		struct GameHealthComponent_eventchangeHealths_Parms
		{
			int32 byValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_byValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::NewProp_byValue = { "byValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHealthComponent_eventchangeHealths_Parms, byValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::NewProp_byValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHealthComponent, nullptr, "changeHealths", nullptr, nullptr, sizeof(GameHealthComponent_eventchangeHealths_Parms), Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHealthComponent_changeHealths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHealthComponent_changeHealths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics
	{
		struct GameHealthComponent_eventgetHealths_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHealthComponent_eventgetHealths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHealthComponent, nullptr, "getHealths", nullptr, nullptr, sizeof(GameHealthComponent_eventgetHealths_Parms), Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHealthComponent_getHealths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHealthComponent_getHealths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameHealthComponent_NoRegister()
	{
		return UGameHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_healths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onHealthsEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onHealthsEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onHealthsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onHealthsChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHealthComponent_changeHealths, "changeHealths" }, // 2134405546
		{ &Z_Construct_UFunction_UGameHealthComponent_getHealths, "getHealths" }, // 3863323337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameHealthComponent.h" },
		{ "ModuleRelativePath", "GameHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_healths_MetaData[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_healths = { "healths", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHealthComponent, healths), METADATA_PARAMS(Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_healths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_healths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsEnded_MetaData[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsEnded = { "onHealthsEnded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHealthComponent, onHealthsEnded), Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsEndedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsChanged_MetaData[] = {
		{ "Category", "Game Health" },
		{ "ModuleRelativePath", "GameHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsChanged = { "onHealthsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHealthComponent, onHealthsChanged), Z_Construct_UDelegateFunction_CosmosArcadeCpp_HealthsChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_healths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHealthComponent_Statics::NewProp_onHealthsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHealthComponent_Statics::ClassParams = {
		&UGameHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHealthComponent, 3725102178);
	template<> COSMOSARCADECPP_API UClass* StaticClass<UGameHealthComponent>()
	{
		return UGameHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHealthComponent(Z_Construct_UClass_UGameHealthComponent, &UGameHealthComponent::StaticClass, TEXT("/Script/CosmosArcadeCpp"), TEXT("UGameHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
