// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosArcadeCpp/CosmosArcadeCppGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCosmosArcadeCppGameModeBase() {}
// Cross Module References
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_ACosmosArcadeCppGameModeBase_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_ACosmosArcadeCppGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CosmosArcadeCpp();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UEnemySpawnController_NoRegister();
// End Cross Module References
	void ACosmosArcadeCppGameModeBase::StaticRegisterNativesACosmosArcadeCppGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACosmosArcadeCppGameModeBase_NoRegister()
	{
		return ACosmosArcadeCppGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemySpawnController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemySpawnController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CosmosArcadeCppGameModeBase.h" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController_MetaData[] = {
		{ "Category", "Enemies" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController = { "enemySpawnController", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACosmosArcadeCppGameModeBase, enemySpawnController), Z_Construct_UClass_UEnemySpawnController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACosmosArcadeCppGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::ClassParams = {
		&ACosmosArcadeCppGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACosmosArcadeCppGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACosmosArcadeCppGameModeBase, 402030521);
	template<> COSMOSARCADECPP_API UClass* StaticClass<ACosmosArcadeCppGameModeBase>()
	{
		return ACosmosArcadeCppGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACosmosArcadeCppGameModeBase(Z_Construct_UClass_ACosmosArcadeCppGameModeBase, &ACosmosArcadeCppGameModeBase::StaticClass, TEXT("/Script/CosmosArcadeCpp"), TEXT("ACosmosArcadeCppGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACosmosArcadeCppGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
