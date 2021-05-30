// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COSMOSARCADECPP_CosmosArcadeCppGameModeBase_generated_h
#error "CosmosArcadeCppGameModeBase.generated.h already included, missing '#pragma once' in CosmosArcadeCppGameModeBase.h"
#endif
#define COSMOSARCADECPP_CosmosArcadeCppGameModeBase_generated_h

#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_11_DELEGATE \
static inline void FGameOverEvent_DelegateWrapper(const FMulticastScriptDelegate& GameOverEvent) \
{ \
	GameOverEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_SPARSE_DATA
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_RPC_WRAPPERS \
	virtual void recoverPawn_Implementation(); \
	virtual void explodePawn_Implementation(); \
 \
	DECLARE_FUNCTION(execendGame); \
	DECLARE_FUNCTION(execrecoverPawn); \
	DECLARE_FUNCTION(execexplodePawn);


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execendGame); \
	DECLARE_FUNCTION(execrecoverPawn); \
	DECLARE_FUNCTION(execexplodePawn);


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_EVENT_PARMS
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_CALLBACK_WRAPPERS
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACosmosArcadeCppGameModeBase(); \
	friend struct Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACosmosArcadeCppGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CosmosArcadeCpp"), NO_API) \
	DECLARE_SERIALIZER(ACosmosArcadeCppGameModeBase)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACosmosArcadeCppGameModeBase(); \
	friend struct Z_Construct_UClass_ACosmosArcadeCppGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACosmosArcadeCppGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CosmosArcadeCpp"), NO_API) \
	DECLARE_SERIALIZER(ACosmosArcadeCppGameModeBase)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACosmosArcadeCppGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACosmosArcadeCppGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACosmosArcadeCppGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACosmosArcadeCppGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACosmosArcadeCppGameModeBase(ACosmosArcadeCppGameModeBase&&); \
	NO_API ACosmosArcadeCppGameModeBase(const ACosmosArcadeCppGameModeBase&); \
public:


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACosmosArcadeCppGameModeBase(ACosmosArcadeCppGameModeBase&&); \
	NO_API ACosmosArcadeCppGameModeBase(const ACosmosArcadeCppGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACosmosArcadeCppGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACosmosArcadeCppGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACosmosArcadeCppGameModeBase)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerPawn() { return STRUCT_OFFSET(ACosmosArcadeCppGameModeBase, playerPawn); }


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_13_PROLOG \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_EVENT_PARMS


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_SPARSE_DATA \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_RPC_WRAPPERS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_CALLBACK_WRAPPERS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_INCLASS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_SPARSE_DATA \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_CALLBACK_WRAPPERS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COSMOSARCADECPP_API UClass* StaticClass<class ACosmosArcadeCppGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CosmosArcadeCpp_Source_CosmosArcadeCpp_CosmosArcadeCppGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
