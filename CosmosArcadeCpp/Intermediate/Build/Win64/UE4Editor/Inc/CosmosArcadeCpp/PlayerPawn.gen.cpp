// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosArcadeCpp/PlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}
// Cross Module References
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_APlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CosmosArcadeCpp();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APlayerPawn::StaticRegisterNativesAPlayerPawn()
	{
	}
	UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
	{
		return APlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawn.h" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCollision_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCollision = { "pawnCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, pawnCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnMesh_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnMesh = { "pawnMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, pawnMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_cameraSpringArm_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_cameraSpringArm = { "cameraSpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, cameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_cameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_cameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCamera_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCamera = { "pawnCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, pawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_cameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_pawnCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Statics::ClassParams = {
		&APlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerPawn, 3885172162);
	template<> COSMOSARCADECPP_API UClass* StaticClass<APlayerPawn>()
	{
		return APlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerPawn(Z_Construct_UClass_APlayerPawn, &APlayerPawn::StaticClass, TEXT("/Script/CosmosArcadeCpp"), TEXT("APlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
