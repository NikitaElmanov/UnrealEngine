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
	COSMOSARCADECPP_API UFunction* Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CosmosArcadeCpp();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_ACosmosArcadeCppGameModeBase_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_ACosmosArcadeCppGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UEnemySpawnController_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_UGameHealthComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CosmosArcadeCpp, nullptr, "GameOverEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACosmosArcadeCppGameModeBase::execendGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->endGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACosmosArcadeCppGameModeBase::execrecoverPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->recoverPawn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACosmosArcadeCppGameModeBase::execexplodePawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->explodePawn_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACosmosArcadeCppGameModeBase_explodePawn = FName(TEXT("explodePawn"));
	void ACosmosArcadeCppGameModeBase::explodePawn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACosmosArcadeCppGameModeBase_explodePawn),NULL);
	}
	static FName NAME_ACosmosArcadeCppGameModeBase_recoverPawn = FName(TEXT("recoverPawn"));
	void ACosmosArcadeCppGameModeBase::recoverPawn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACosmosArcadeCppGameModeBase_recoverPawn),NULL);
	}
	void ACosmosArcadeCppGameModeBase::StaticRegisterNativesACosmosArcadeCppGameModeBase()
	{
		UClass* Class = ACosmosArcadeCppGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "endGame", &ACosmosArcadeCppGameModeBase::execendGame },
			{ "explodePawn", &ACosmosArcadeCppGameModeBase::execexplodePawn },
			{ "recoverPawn", &ACosmosArcadeCppGameModeBase::execrecoverPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_endGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_endGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_endGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACosmosArcadeCppGameModeBase, nullptr, "endGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_endGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_endGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_endGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_endGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_explodePawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_explodePawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_explodePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACosmosArcadeCppGameModeBase, nullptr, "explodePawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_explodePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_explodePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_explodePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_explodePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_recoverPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_recoverPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_recoverPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACosmosArcadeCppGameModeBase, nullptr, "recoverPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_recoverPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_recoverPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_recoverPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_recoverPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACosmosArcadeCppGameModeBase_NoRegister()
	{
		return ACosmosArcadeCppGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemySpawnController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemySpawnController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healthsComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onGameOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onGameOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerRecoverTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerRecoverTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_endGame, "endGame" }, // 319213615
		{ &Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_explodePawn, "explodePawn" }, // 1689091023
		{ &Z_Construct_UFunction_ACosmosArcadeCppGameModeBase_recoverPawn, "recoverPawn" }, // 3215965414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CosmosArcadeCppGameModeBase.h" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerPawn_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerPawn = { "playerPawn", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACosmosArcadeCppGameModeBase, playerPawn), Z_Construct_UClass_APlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController_MetaData[] = {
		{ "Category", "Enemies" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController = { "enemySpawnController", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACosmosArcadeCppGameModeBase, enemySpawnController), Z_Construct_UClass_UEnemySpawnController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_healthsComponent_MetaData[] = {
		{ "Category", "Game Healths" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_healthsComponent = { "healthsComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACosmosArcadeCppGameModeBase, healthsComponent), Z_Construct_UClass_UGameHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_healthsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_healthsComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_onGameOver_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_onGameOver = { "onGameOver", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACosmosArcadeCppGameModeBase, onGameOver), Z_Construct_UDelegateFunction_CosmosArcadeCpp_GameOverEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_onGameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_onGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerRecoverTime_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "CosmosArcadeCppGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerRecoverTime = { "playerRecoverTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACosmosArcadeCppGameModeBase, playerRecoverTime), METADATA_PARAMS(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerRecoverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerRecoverTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_enemySpawnController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_healthsComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_onGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::NewProp_playerRecoverTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACosmosArcadeCppGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::ClassParams = {
		&ACosmosArcadeCppGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ACosmosArcadeCppGameModeBase, 4022772114);
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
