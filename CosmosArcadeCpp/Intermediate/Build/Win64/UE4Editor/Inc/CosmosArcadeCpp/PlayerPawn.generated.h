// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef COSMOSARCADECPP_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define COSMOSARCADECPP_PlayerPawn_generated_h

#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_12_DELEGATE \
static inline void FPawnDamagedEvent_DelegateWrapper(const FMulticastScriptDelegate& PawnDamagedEvent) \
{ \
	PawnDamagedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_SPARSE_DATA
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_RPC_WRAPPERS \
	virtual void recoverPawn_Implementation(); \
	virtual void explodePawn_Implementation(); \
 \
	DECLARE_FUNCTION(execrecoverPawn); \
	DECLARE_FUNCTION(execexplodePawn); \
	DECLARE_FUNCTION(execTakeDamage);


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execrecoverPawn); \
	DECLARE_FUNCTION(execexplodePawn); \
	DECLARE_FUNCTION(execTakeDamage);


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_EVENT_PARMS
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_CALLBACK_WRAPPERS
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CosmosArcadeCpp"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CosmosArcadeCpp"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_14_PROLOG \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_EVENT_PARMS


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_SPARSE_DATA \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_RPC_WRAPPERS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_CALLBACK_WRAPPERS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_INCLASS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_SPARSE_DATA \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_CALLBACK_WRAPPERS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COSMOSARCADECPP_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CosmosArcadeCpp_Source_CosmosArcadeCpp_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
