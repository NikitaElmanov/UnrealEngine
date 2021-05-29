// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosArcadeCpp/EnemySpawnController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnController() {}
// Cross Module References
	COSMOSARCADECPP_API UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawnInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosArcadeCpp();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_AEnemyPawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UEnemySpawnController_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UEnemySpawnController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FEnemySpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSARCADECPP_API uint32 Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemySpawnInfo, Z_Construct_UPackage__Script_CosmosArcadeCpp(), TEXT("EnemySpawnInfo"), sizeof(FEnemySpawnInfo), Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSARCADECPP_API UScriptStruct* StaticStruct<FEnemySpawnInfo>()
{
	return FEnemySpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemySpawnInfo(FEnemySpawnInfo::StaticStruct, TEXT("/Script/CosmosArcadeCpp"), TEXT("EnemySpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosArcadeCpp_StaticRegisterNativesFEnemySpawnInfo
{
	FScriptStruct_CosmosArcadeCpp_StaticRegisterNativesFEnemySpawnInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemySpawnInfo")),new UScriptStruct::TCppStructOps<FEnemySpawnInfo>);
	}
} ScriptStruct_CosmosArcadeCpp_StaticRegisterNativesFEnemySpawnInfo;
	struct Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numOfEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numOfEnemies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spawnDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemySpawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_enemyClass_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_enemyClass = { "enemyClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemySpawnInfo, enemyClass), Z_Construct_UClass_AEnemyPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_enemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_enemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnTransform_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnTransform = { "spawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemySpawnInfo, spawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_numOfEnemies_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_numOfEnemies = { "numOfEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemySpawnInfo, numOfEnemies), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_numOfEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_numOfEnemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnDelay_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnDelay = { "spawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemySpawnInfo, spawnDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_enemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_numOfEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_spawnDelay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
		nullptr,
		&NewStructOps,
		"EnemySpawnInfo",
		sizeof(FEnemySpawnInfo),
		alignof(FEnemySpawnInfo),
		Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosArcadeCpp();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemySpawnInfo"), sizeof(FEnemySpawnInfo), Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash() { return 2777985542U; }
	void UEnemySpawnController::StaticRegisterNativesUEnemySpawnController()
	{
	}
	UClass* Z_Construct_UClass_UEnemySpawnController_NoRegister()
	{
		return UEnemySpawnController::StaticClass();
	}
	struct Z_Construct_UClass_UEnemySpawnController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnStages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnStages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawnStages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stageDelayMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stageDelayMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stageDelayMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stageDelayMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemySpawnController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemySpawnController.h" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_spawnStages_Inner = { "spawnStages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemySpawnInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_spawnStages_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_spawnStages = { "spawnStages", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnController, spawnStages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_spawnStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_spawnStages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMin_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMin = { "stageDelayMin", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnController, stageDelayMin), METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMax_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMax = { "stageDelayMax", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnController, stageDelayMax), METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemySpawnController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_spawnStages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_spawnStages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnController_Statics::NewProp_stageDelayMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemySpawnController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySpawnController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemySpawnController_Statics::ClassParams = {
		&UEnemySpawnController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemySpawnController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemySpawnController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemySpawnController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemySpawnController, 3248067970);
	template<> COSMOSARCADECPP_API UClass* StaticClass<UEnemySpawnController>()
	{
		return UEnemySpawnController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemySpawnController(Z_Construct_UClass_UEnemySpawnController, &UEnemySpawnController::StaticClass, TEXT("/Script/CosmosArcadeCpp"), TEXT("UEnemySpawnController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemySpawnController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
