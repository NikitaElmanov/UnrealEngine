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
// End Cross Module References
	void UShootComponent::StaticRegisterNativesUShootComponent()
	{
	}
	UClass* Z_Construct_UClass_UShootComponent_NoRegister()
	{
		return UShootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ShootComponent.h" },
		{ "ModuleRelativePath", "ShootComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShootComponent_Statics::ClassParams = {
		&UShootComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(UShootComponent, 3952387997);
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
