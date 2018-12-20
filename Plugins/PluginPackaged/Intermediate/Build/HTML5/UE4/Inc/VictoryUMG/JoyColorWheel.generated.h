// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef VICTORYUMG_JoyColorWheel_generated_h
#error "JoyColorWheel.generated.h already included, missing '#pragma once' in JoyColorWheel.h"
#endif
#define VICTORYUMG_JoyColorWheel_generated_h

#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_16_DELEGATE \
struct _Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms \
{ \
	FLinearColor NewColor; \
}; \
static inline void FOnJoyColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnJoyColorChangedEvent, FLinearColor const& NewColor) \
{ \
	_Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms Parms; \
	Parms.NewColor=NewColor; \
	OnJoyColorChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor); \
		P_GET_UBOOL(Z_Param_SkipAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColor(Z_Param_NewColor,Z_Param_SkipAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColor(); \
		P_NATIVE_END; \
	}


#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor); \
		P_GET_UBOOL(Z_Param_SkipAnimation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColor(Z_Param_NewColor,Z_Param_SkipAnimation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColor(); \
		P_NATIVE_END; \
	}


#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoyColorWheel(); \
	friend VICTORYUMG_API class UClass* Z_Construct_UClass_UJoyColorWheel(); \
public: \
	DECLARE_CLASS(UJoyColorWheel, UWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryUMG"), NO_API) \
	DECLARE_SERIALIZER(UJoyColorWheel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUJoyColorWheel(); \
	friend VICTORYUMG_API class UClass* Z_Construct_UClass_UJoyColorWheel(); \
public: \
	DECLARE_CLASS(UJoyColorWheel, UWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryUMG"), NO_API) \
	DECLARE_SERIALIZER(UJoyColorWheel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyColorWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyColorWheel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyColorWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyColorWheel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyColorWheel(UJoyColorWheel&&); \
	NO_API UJoyColorWheel(const UJoyColorWheel&); \
public:


#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyColorWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyColorWheel(UJoyColorWheel&&); \
	NO_API UJoyColorWheel(const UJoyColorWheel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyColorWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyColorWheel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyColorWheel)


#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_PRIVATE_PROPERTY_OFFSET
#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_18_PROLOG
#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_PRIVATE_PROPERTY_OFFSET \
	MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_RPC_WRAPPERS \
	MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_INCLASS \
	MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_PRIVATE_PROPERTY_OFFSET \
	MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_INCLASS_NO_PURE_DECLS \
	MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class JoyColorWheel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediocreMapper_Plugins_PluginPackaged_Source_VictoryUMG_Public_JoyColorWheel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
