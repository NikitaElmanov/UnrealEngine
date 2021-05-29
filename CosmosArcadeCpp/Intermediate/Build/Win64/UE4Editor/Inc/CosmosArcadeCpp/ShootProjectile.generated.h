// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef COSMOSARCADECPP_ShootProjectile_generated_h
#error "ShootProjectile.generated.h already included, missing '#pragma once' in ShootProjectile.h"
#endif
#define COSMOSARCADECPP_ShootProjectile_generated_h

#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_SPARSE_DATA
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonProjectileOverlap);


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonProjectileOverlap);


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootProjectile(); \
	friend struct Z_Construct_UClass_AShootProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CosmosArcadeCpp"), NO_API) \
	DECLARE_SERIALIZER(AShootProjectile)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAShootProjectile(); \
	friend struct Z_Construct_UClass_AShootProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CosmosArcadeCpp"), NO_API) \
	DECLARE_SERIALIZER(AShootProjectile)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootProjectile(AShootProjectile&&); \
	NO_API AShootProjectile(const AShootProjectile&); \
public:


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootProjectile(AShootProjectile&&); \
	NO_API AShootProjectile(const AShootProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootProjectile)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_PRIVATE_PROPERTY_OFFSET
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_8_PROLOG
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_PRIVATE_PROPERTY_OFFSET \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_SPARSE_DATA \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_RPC_WRAPPERS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_INCLASS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_PRIVATE_PROPERTY_OFFSET \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_SPARSE_DATA \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_INCLASS_NO_PURE_DECLS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COSMOSARCADECPP_API UClass* StaticClass<class AShootProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CosmosArcadeCpp_Source_CosmosArcadeCpp_Actors_Projectiles_ShootProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
