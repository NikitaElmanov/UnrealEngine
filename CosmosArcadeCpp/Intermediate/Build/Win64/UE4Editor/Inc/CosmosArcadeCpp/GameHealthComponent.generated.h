// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COSMOSARCADECPP_GameHealthComponent_generated_h
#error "GameHealthComponent.generated.h already included, missing '#pragma once' in GameHealthComponent.h"
#endif
#define COSMOSARCADECPP_GameHealthComponent_generated_h

#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_10_DELEGATE \
struct _Script_CosmosArcadeCpp_eventHealthsChangedEvent_Parms \
{ \
	int32 changeValue; \
}; \
static inline void FHealthsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& HealthsChangedEvent, int32 changeValue) \
{ \
	_Script_CosmosArcadeCpp_eventHealthsChangedEvent_Parms Parms; \
	Parms.changeValue=changeValue; \
	HealthsChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_9_DELEGATE \
static inline void FHealthsEndedEvent_DelegateWrapper(const FMulticastScriptDelegate& HealthsEndedEvent) \
{ \
	HealthsEndedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_SPARSE_DATA
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetHealths); \
	DECLARE_FUNCTION(execchangeHealths);


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetHealths); \
	DECLARE_FUNCTION(execchangeHealths);


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameHealthComponent(); \
	friend struct Z_Construct_UClass_UGameHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UGameHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CosmosArcadeCpp"), NO_API) \
	DECLARE_SERIALIZER(UGameHealthComponent)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameHealthComponent(); \
	friend struct Z_Construct_UClass_UGameHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UGameHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CosmosArcadeCpp"), NO_API) \
	DECLARE_SERIALIZER(UGameHealthComponent)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHealthComponent(UGameHealthComponent&&); \
	NO_API UGameHealthComponent(const UGameHealthComponent&); \
public:


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHealthComponent(UGameHealthComponent&&); \
	NO_API UGameHealthComponent(const UGameHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameHealthComponent)


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__healths() { return STRUCT_OFFSET(UGameHealthComponent, healths); }


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_12_PROLOG
#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_SPARSE_DATA \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_RPC_WRAPPERS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_INCLASS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_SPARSE_DATA \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COSMOSARCADECPP_API UClass* StaticClass<class UGameHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CosmosArcadeCpp_Source_CosmosArcadeCpp_GameHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
