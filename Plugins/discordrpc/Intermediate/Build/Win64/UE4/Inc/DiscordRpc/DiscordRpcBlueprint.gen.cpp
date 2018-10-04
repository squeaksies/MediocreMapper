// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DiscordRpcPrivatePCH.h"
#include "Public/DiscordRpcBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordRpcBlueprint() {}
// Cross Module References
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordRpc();
	DISCORDRPC_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserData();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature();
	DISCORDRPC_API UEnum* Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes();
	DISCORDRPC_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordRichPresence();
	DISCORDRPC_API UClass* Z_Construct_UClass_UDiscordRpc_NoRegister();
	DISCORDRPC_API UClass* Z_Construct_UClass_UDiscordRpc();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_ClearPresence();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_Initialize();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_Respond();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_RunCallbacks();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_Shutdown();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_UpdatePresence();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature()
	{
		struct _Script_DiscordRpc_eventDiscordJoinRequest_Parms
		{
			FDiscordUserData joinRequest;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinRequest_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_joinRequest = { UE4CodeGen_Private::EPropertyClass::Struct, "joinRequest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordJoinRequest_Parms, joinRequest), Z_Construct_UScriptStruct_FDiscordUserData, METADATA_PARAMS(NewProp_joinRequest_MetaData, ARRAY_COUNT(NewProp_joinRequest_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_joinRequest,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, "DiscordJoinRequest__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_DiscordRpc_eventDiscordJoinRequest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature()
	{
		struct _Script_DiscordRpc_eventDiscordSpectate_Parms
		{
			FString spectateSecret;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spectateSecret_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_spectateSecret = { UE4CodeGen_Private::EPropertyClass::Str, "spectateSecret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordSpectate_Parms, spectateSecret), METADATA_PARAMS(NewProp_spectateSecret_MetaData, ARRAY_COUNT(NewProp_spectateSecret_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spectateSecret,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, "DiscordSpectate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_DiscordRpc_eventDiscordSpectate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature()
	{
		struct _Script_DiscordRpc_eventDiscordJoin_Parms
		{
			FString joinSecret;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinSecret_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_joinSecret = { UE4CodeGen_Private::EPropertyClass::Str, "joinSecret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordJoin_Parms, joinSecret), METADATA_PARAMS(NewProp_joinSecret_MetaData, ARRAY_COUNT(NewProp_joinSecret_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_joinSecret,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, "DiscordJoin__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_DiscordRpc_eventDiscordJoin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature()
	{
		struct _Script_DiscordRpc_eventDiscordErrored_Parms
		{
			int32 errorCode;
			FString errorMessage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "errorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordErrored_Parms, errorMessage), METADATA_PARAMS(NewProp_errorMessage_MetaData, ARRAY_COUNT(NewProp_errorMessage_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_errorCode = { UE4CodeGen_Private::EPropertyClass::Int, "errorCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordErrored_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_errorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_errorCode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, "DiscordErrored__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_DiscordRpc_eventDiscordErrored_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature()
	{
		struct _Script_DiscordRpc_eventDiscordDisconnected_Parms
		{
			int32 errorCode;
			FString errorMessage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "errorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordDisconnected_Parms, errorMessage), METADATA_PARAMS(NewProp_errorMessage_MetaData, ARRAY_COUNT(NewProp_errorMessage_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_errorCode = { UE4CodeGen_Private::EPropertyClass::Int, "errorCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordDisconnected_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_errorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_errorCode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, "DiscordDisconnected__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_DiscordRpc_eventDiscordDisconnected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature()
	{
		struct _Script_DiscordRpc_eventDiscordConnected_Parms
		{
			FDiscordUserData joinRequest;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinRequest_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_joinRequest = { UE4CodeGen_Private::EPropertyClass::Struct, "joinRequest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordConnected_Parms, joinRequest), Z_Construct_UScriptStruct_FDiscordUserData, METADATA_PARAMS(NewProp_joinRequest_MetaData, ARRAY_COUNT(NewProp_joinRequest_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_joinRequest,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, "DiscordConnected__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_DiscordRpc_eventDiscordConnected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EDiscordJoinResponseCodes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes, Z_Construct_UPackage__Script_DiscordRpc(), TEXT("EDiscordJoinResponseCodes"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordJoinResponseCodes(EDiscordJoinResponseCodes_StaticEnum, TEXT("/Script/DiscordRpc"), TEXT("EDiscordJoinResponseCodes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_CRC() { return 2532223064U; }
	UEnum* Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRpc();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordJoinResponseCodes"), 0, Get_Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordJoinResponseCodes::DISCORD_REPLY_NO", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_NO },
				{ "EDiscordJoinResponseCodes::DISCORD_REPLY_YES", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_YES },
				{ "EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DISCORD_REPLY_IGNORE.DisplayName", "Ignore" },
				{ "DISCORD_REPLY_NO.DisplayName", "No" },
				{ "DISCORD_REPLY_YES.DisplayName", "Yes" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
				{ "ToolTip", "Valid response codes for Respond function" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDiscordJoinResponseCodes",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDiscordJoinResponseCodes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDiscordRichPresence::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDRPC_API uint32 Get_Z_Construct_UScriptStruct_FDiscordRichPresence_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordRichPresence, Z_Construct_UPackage__Script_DiscordRpc(), TEXT("DiscordRichPresence"), sizeof(FDiscordRichPresence), Get_Z_Construct_UScriptStruct_FDiscordRichPresence_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordRichPresence(FDiscordRichPresence::StaticStruct, TEXT("/Script/DiscordRpc"), TEXT("DiscordRichPresence"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordRichPresence
{
	FScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordRichPresence()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DiscordRichPresence")),new UScriptStruct::TCppStructOps<FDiscordRichPresence>);
	}
} ScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordRichPresence;
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordRichPresence()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordRichPresence_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRpc();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordRichPresence"), sizeof(FDiscordRichPresence), Get_Z_Construct_UScriptStruct_FDiscordRichPresence_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
				{ "ToolTip", "Rich presence data" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordRichPresence>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			auto NewProp_instance_SetBit = [](void* Obj){ ((FDiscordRichPresence*)Obj)->instance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_instance = { UE4CodeGen_Private::EPropertyClass::Bool, "instance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDiscordRichPresence), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_instance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_instance_MetaData, ARRAY_COUNT(NewProp_instance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spectateSecret_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_spectateSecret = { UE4CodeGen_Private::EPropertyClass::Str, "spectateSecret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, spectateSecret), METADATA_PARAMS(NewProp_spectateSecret_MetaData, ARRAY_COUNT(NewProp_spectateSecret_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinSecret_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_joinSecret = { UE4CodeGen_Private::EPropertyClass::Str, "joinSecret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, joinSecret), METADATA_PARAMS(NewProp_joinSecret_MetaData, ARRAY_COUNT(NewProp_joinSecret_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchSecret_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchSecret = { UE4CodeGen_Private::EPropertyClass::Str, "matchSecret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, matchSecret), METADATA_PARAMS(NewProp_matchSecret_MetaData, ARRAY_COUNT(NewProp_matchSecret_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partyMax_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_partyMax = { UE4CodeGen_Private::EPropertyClass::Int, "partyMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, partyMax), METADATA_PARAMS(NewProp_partyMax_MetaData, ARRAY_COUNT(NewProp_partyMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partySize_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_partySize = { UE4CodeGen_Private::EPropertyClass::Int, "partySize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, partySize), METADATA_PARAMS(NewProp_partySize_MetaData, ARRAY_COUNT(NewProp_partySize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partyId_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_partyId = { UE4CodeGen_Private::EPropertyClass::Str, "partyId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, partyId), METADATA_PARAMS(NewProp_partyId_MetaData, ARRAY_COUNT(NewProp_partyId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smallImageText_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_smallImageText = { UE4CodeGen_Private::EPropertyClass::Str, "smallImageText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, smallImageText), METADATA_PARAMS(NewProp_smallImageText_MetaData, ARRAY_COUNT(NewProp_smallImageText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smallImageKey_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_smallImageKey = { UE4CodeGen_Private::EPropertyClass::Str, "smallImageKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, smallImageKey), METADATA_PARAMS(NewProp_smallImageKey_MetaData, ARRAY_COUNT(NewProp_smallImageKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_largeImageText_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_largeImageText = { UE4CodeGen_Private::EPropertyClass::Str, "largeImageText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, largeImageText), METADATA_PARAMS(NewProp_largeImageText_MetaData, ARRAY_COUNT(NewProp_largeImageText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_largeImageKey_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_largeImageKey = { UE4CodeGen_Private::EPropertyClass::Str, "largeImageKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, largeImageKey), METADATA_PARAMS(NewProp_largeImageKey_MetaData, ARRAY_COUNT(NewProp_largeImageKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endTimestamp_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_endTimestamp = { UE4CodeGen_Private::EPropertyClass::Int, "endTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, endTimestamp), METADATA_PARAMS(NewProp_endTimestamp_MetaData, ARRAY_COUNT(NewProp_endTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startTimestamp_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
				{ "ToolTip", "todo, timestamps are 64bit, does that even matter?" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_startTimestamp = { UE4CodeGen_Private::EPropertyClass::Int, "startTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, startTimestamp), METADATA_PARAMS(NewProp_startTimestamp_MetaData, ARRAY_COUNT(NewProp_startTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_details = { UE4CodeGen_Private::EPropertyClass::Str, "details", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, details), METADATA_PARAMS(NewProp_details_MetaData, ARRAY_COUNT(NewProp_details_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[] = {
				{ "Category", "DiscordRichPresence" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_state = { UE4CodeGen_Private::EPropertyClass::Str, "state", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FDiscordRichPresence, state), METADATA_PARAMS(NewProp_state_MetaData, ARRAY_COUNT(NewProp_state_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_instance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spectateSecret,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_joinSecret,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_matchSecret,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_partyMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_partySize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_partyId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_smallImageText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_smallImageKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_largeImageText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_largeImageKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_endTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_startTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_details,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_state,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DiscordRichPresence",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDiscordRichPresence),
				alignof(FDiscordRichPresence),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordRichPresence_CRC() { return 1613447826U; }
class UScriptStruct* FDiscordUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDRPC_API uint32 Get_Z_Construct_UScriptStruct_FDiscordUserData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordUserData, Z_Construct_UPackage__Script_DiscordRpc(), TEXT("DiscordUserData"), sizeof(FDiscordUserData), Get_Z_Construct_UScriptStruct_FDiscordUserData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordUserData(FDiscordUserData::StaticStruct, TEXT("/Script/DiscordRpc"), TEXT("DiscordUserData"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordUserData
{
	FScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordUserData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DiscordUserData")),new UScriptStruct::TCppStructOps<FDiscordUserData>);
	}
} ScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordUserData;
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordUserData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRpc();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordUserData"), sizeof(FDiscordUserData), Get_Z_Construct_UScriptStruct_FDiscordUserData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
				{ "ToolTip", "Ask to join callback data" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordUserData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatar_MetaData[] = {
				{ "Category", "DiscordUserData" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_avatar = { UE4CodeGen_Private::EPropertyClass::Str, "avatar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDiscordUserData, avatar), METADATA_PARAMS(NewProp_avatar_MetaData, ARRAY_COUNT(NewProp_avatar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_discriminator_MetaData[] = {
				{ "Category", "DiscordUserData" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_discriminator = { UE4CodeGen_Private::EPropertyClass::Str, "discriminator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDiscordUserData, discriminator), METADATA_PARAMS(NewProp_discriminator_MetaData, ARRAY_COUNT(NewProp_discriminator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[] = {
				{ "Category", "DiscordUserData" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_username = { UE4CodeGen_Private::EPropertyClass::Str, "username", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDiscordUserData, username), METADATA_PARAMS(NewProp_username_MetaData, ARRAY_COUNT(NewProp_username_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[] = {
				{ "Category", "DiscordUserData" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId = { UE4CodeGen_Private::EPropertyClass::Str, "userId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FDiscordUserData, userId), METADATA_PARAMS(NewProp_userId_MetaData, ARRAY_COUNT(NewProp_userId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_avatar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_discriminator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_username,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_userId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DiscordUserData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDiscordUserData),
				alignof(FDiscordUserData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordUserData_CRC() { return 636588304U; }
	void UDiscordRpc::StaticRegisterNativesUDiscordRpc()
	{
		UClass* Class = UDiscordRpc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPresence", &UDiscordRpc::execClearPresence },
			{ "Initialize", &UDiscordRpc::execInitialize },
			{ "Respond", &UDiscordRpc::execRespond },
			{ "RunCallbacks", &UDiscordRpc::execRunCallbacks },
			{ "Shutdown", &UDiscordRpc::execShutdown },
			{ "UpdatePresence", &UDiscordRpc::execUpdatePresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDiscordRpc_ClearPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "Clear presence" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, "ClearPresence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDiscordRpc_Initialize()
	{
		struct DiscordRpc_eventInitialize_Parms
		{
			FString applicationId;
			bool autoRegister;
			FString optionalSteamId;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_optionalSteamId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_optionalSteamId = { UE4CodeGen_Private::EPropertyClass::Str, "optionalSteamId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DiscordRpc_eventInitialize_Parms, optionalSteamId), METADATA_PARAMS(NewProp_optionalSteamId_MetaData, ARRAY_COUNT(NewProp_optionalSteamId_MetaData)) };
			auto NewProp_autoRegister_SetBit = [](void* Obj){ ((DiscordRpc_eventInitialize_Parms*)Obj)->autoRegister = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoRegister = { UE4CodeGen_Private::EPropertyClass::Bool, "autoRegister", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DiscordRpc_eventInitialize_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_autoRegister_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_applicationId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_applicationId = { UE4CodeGen_Private::EPropertyClass::Str, "applicationId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DiscordRpc_eventInitialize_Parms, applicationId), METADATA_PARAMS(NewProp_applicationId_MetaData, ARRAY_COUNT(NewProp_applicationId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_optionalSteamId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_autoRegister,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_applicationId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "Initialize connection" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DiscordRpc_eventInitialize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDiscordRpc_Respond()
	{
		struct DiscordRpc_eventRespond_Parms
		{
			FString userId;
			int32 reply;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_reply = { UE4CodeGen_Private::EPropertyClass::Int, "reply", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DiscordRpc_eventRespond_Parms, reply), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId = { UE4CodeGen_Private::EPropertyClass::Str, "userId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DiscordRpc_eventRespond_Parms, userId), METADATA_PARAMS(NewProp_userId_MetaData, ARRAY_COUNT(NewProp_userId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_reply,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_userId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "Respond to join request" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, "Respond", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DiscordRpc_eventRespond_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDiscordRpc_RunCallbacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "Check for callbacks" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, "RunCallbacks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDiscordRpc_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "Shut down connection" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, "Shutdown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDiscordRpc_UpdatePresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "Send presence" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, "UpdatePresence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordRpc_NoRegister()
	{
		return UDiscordRpc::StaticClass();
	}
	UClass* Z_Construct_UClass_UDiscordRpc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDiscordRpc_ClearPresence, "ClearPresence" }, // 510145216
				{ &Z_Construct_UFunction_UDiscordRpc_Initialize, "Initialize" }, // 1572649349
				{ &Z_Construct_UFunction_UDiscordRpc_Respond, "Respond" }, // 4089312034
				{ &Z_Construct_UFunction_UDiscordRpc_RunCallbacks, "RunCallbacks" }, // 2574395339
				{ &Z_Construct_UFunction_UDiscordRpc_Shutdown, "Shutdown" }, // 2738986725
				{ &Z_Construct_UFunction_UDiscordRpc_UpdatePresence, "UpdatePresence" }, // 2597121176
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Discord" },
				{ "DisplayName", "Discord RPC" },
				{ "IncludePath", "DiscordRpcBlueprint.h" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichPresence_MetaData[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "Rich presence info" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RichPresence = { UE4CodeGen_Private::EPropertyClass::Struct, "RichPresence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UDiscordRpc, RichPresence), Z_Construct_UScriptStruct_FDiscordRichPresence, METADATA_PARAMS(NewProp_RichPresence_MetaData, ARRAY_COUNT(NewProp_RichPresence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJoinRequest_MetaData[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "When Discord another user sends a join request" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinRequest = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnJoinRequest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDiscordRpc, OnJoinRequest), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature, METADATA_PARAMS(NewProp_OnJoinRequest_MetaData, ARRAY_COUNT(NewProp_OnJoinRequest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSpectate_MetaData[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "When Discord user presses spectate" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpectate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSpectate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDiscordRpc, OnSpectate), Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature, METADATA_PARAMS(NewProp_OnSpectate_MetaData, ARRAY_COUNT(NewProp_OnSpectate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJoin_MetaData[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "When Discord user presses join" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoin = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnJoin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDiscordRpc, OnJoin), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature, METADATA_PARAMS(NewProp_OnJoin_MetaData, ARRAY_COUNT(NewProp_OnJoin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnErrored_MetaData[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "On error message" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnErrored = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnErrored", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDiscordRpc, OnErrored), Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature, METADATA_PARAMS(NewProp_OnErrored_MetaData, ARRAY_COUNT(NewProp_OnErrored_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "On disconnection" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDisconnected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDiscordRpc, OnDisconnected), Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature, METADATA_PARAMS(NewProp_OnDisconnected_MetaData, ARRAY_COUNT(NewProp_OnDisconnected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "On connection" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnConnected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UDiscordRpc, OnConnected), Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature, METADATA_PARAMS(NewProp_OnConnected_MetaData, ARRAY_COUNT(NewProp_OnConnected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsConnected_MetaData[] = {
				{ "Category", "Discord" },
				{ "DisplayName", "Is Discord connected" },
				{ "Keywords", "Discord rpc" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
			};
#endif
			auto NewProp_IsConnected_SetBit = [](void* Obj){ ((UDiscordRpc*)Obj)->IsConnected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsConnected = { UE4CodeGen_Private::EPropertyClass::Bool, "IsConnected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDiscordRpc), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsConnected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsConnected_MetaData, ARRAY_COUNT(NewProp_IsConnected_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RichPresence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnJoinRequest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSpectate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnJoin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnErrored,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDisconnected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnConnected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsConnected,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDiscordRpc>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDiscordRpc::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordRpc, 1261885565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordRpc(Z_Construct_UClass_UDiscordRpc, &UDiscordRpc::StaticClass, TEXT("/Script/DiscordRpc"), TEXT("UDiscordRpc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordRpc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
