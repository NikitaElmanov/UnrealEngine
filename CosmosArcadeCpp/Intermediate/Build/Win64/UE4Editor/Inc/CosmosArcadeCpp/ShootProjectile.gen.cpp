// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosArcadeCpp/Actors/Projectiles/ShootProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootProjectile() {}
// Cross Module References
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_AShootProjectile_NoRegister();
	COSMOSARCADECPP_API UClass* Z_Construct_UClass_AShootProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CosmosArcadeCpp();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShootProjectile::StaticRegisterNativesAShootProjectile()
	{
	}
	UClass* Z_Construct_UClass_AShootProjectile_NoRegister()
	{
		return AShootProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AShootProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosArcadeCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Projectiles/ShootProjectile.h" },
		{ "ModuleRelativePath", "Actors/Projectiles/ShootProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootProjectile_Statics::NewProp_collision_MetaData[] = {
		{ "Category", "Shooting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Projectiles/ShootProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootProjectile_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootProjectile, collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootProjectile_Statics::NewProp_collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootProjectile_Statics::NewProp_collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootProjectile_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Shooting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Projectiles/ShootProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootProjectile_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootProjectile, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootProjectile_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootProjectile_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootProjectile_Statics::NewProp_collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootProjectile_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootProjectile_Statics::ClassParams = {
		&AShootProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootProjectile, 3038688917);
	template<> COSMOSARCADECPP_API UClass* StaticClass<AShootProjectile>()
	{
		return AShootProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootProjectile(Z_Construct_UClass_AShootProjectile, &AShootProjectile::StaticClass, TEXT("/Script/CosmosArcadeCpp"), TEXT("AShootProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
