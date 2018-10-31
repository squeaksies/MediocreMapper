// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USocket;
#ifdef SOCKETER_SocketerBPLibrary_generated_h
#error "SocketerBPLibrary.generated.h already included, missing '#pragma once' in SocketerBPLibrary.h"
#endif
#define SOCKETER_SocketerBPLibrary_generated_h

#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseConnection) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USocketerBPLibrary::CloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPendingData) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USocketerBPLibrary::HasPendingData(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessage) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USocketerBPLibrary::GetMessage(Z_Param_Connection,Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessage) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USocketerBPLibrary::SendMessage(Z_Param_Connection,Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USocket**)Z_Param__Result=USocketerBPLibrary::Connect(Z_Param_IP,Z_Param_port,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSocketerSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USocketerBPLibrary::SocketerSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseConnection) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USocketerBPLibrary::CloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPendingData) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USocketerBPLibrary::HasPendingData(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessage) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USocketerBPLibrary::GetMessage(Z_Param_Connection,Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessage) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USocketerBPLibrary::SendMessage(Z_Param_Connection,Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USocket**)Z_Param__Result=USocketerBPLibrary::Connect(Z_Param_IP,Z_Param_port,Z_Param_Out_success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSocketerSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USocketerBPLibrary::SocketerSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocketerBPLibrary(); \
	friend SOCKETER_API class UClass* Z_Construct_UClass_USocketerBPLibrary(); \
public: \
	DECLARE_CLASS(USocketerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Socketer"), NO_API) \
	DECLARE_SERIALIZER(USocketerBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSocketerBPLibrary(); \
	friend SOCKETER_API class UClass* Z_Construct_UClass_USocketerBPLibrary(); \
public: \
	DECLARE_CLASS(USocketerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Socketer"), NO_API) \
	DECLARE_SERIALIZER(USocketerBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketerBPLibrary(USocketerBPLibrary&&); \
	NO_API USocketerBPLibrary(const USocketerBPLibrary&); \
public:


#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketerBPLibrary(USocketerBPLibrary&&); \
	NO_API USocketerBPLibrary(const USocketerBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketerBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketerBPLibrary)


#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_PRIVATE_PROPERTY_OFFSET
#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_29_PROLOG
#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_RPC_WRAPPERS \
	MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_INCLASS \
	MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_INCLASS_NO_PURE_DECLS \
	MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SocketerBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediocreMapper_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
