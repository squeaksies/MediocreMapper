// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Socketer.h"
#include "Public/SocketerBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketerBPLibrary() {}
// Cross Module References
	SOCKETER_API UClass* Z_Construct_UClass_USocketerBPLibrary_NoRegister();
	SOCKETER_API UClass* Z_Construct_UClass_USocketerBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Socketer();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_CloseConnection();
	SOCKETER_API UClass* Z_Construct_UClass_USocket_NoRegister();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_Connect();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessage();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_HasPendingData();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_SendMessage();
	SOCKETER_API UFunction* Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction();
// End Cross Module References
	void USocketerBPLibrary::StaticRegisterNativesUSocketerBPLibrary()
	{
		UClass* Class = USocketerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseConnection", &USocketerBPLibrary::execCloseConnection },
			{ "Connect", &USocketerBPLibrary::execConnect },
			{ "GetMessage", &USocketerBPLibrary::execGetMessage },
			{ "HasPendingData", &USocketerBPLibrary::execHasPendingData },
			{ "SendMessage", &USocketerBPLibrary::execSendMessage },
			{ "SocketerSampleFunction", &USocketerBPLibrary::execSocketerSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_CloseConnection()
	{
		struct SocketerBPLibrary_eventCloseConnection_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SocketerBPLibrary_eventCloseConnection_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventCloseConnection_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventCloseConnection_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connection,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking|Socketer" },
				{ "DisplayName", "Close connection to TCP server" },
				{ "Keywords", "Socketer disconnect close tcpclose tcp tcpdisconnect socketerdisconnect" },
				{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "CloseConnection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SocketerBPLibrary_eventCloseConnection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_Connect()
	{
		struct SocketerBPLibrary_eventConnect_Parms
		{
			FString IP;
			int32 port;
			bool success;
			USocket* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, ReturnValue), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_success_SetBit = [](void* Obj){ ((SocketerBPLibrary_eventConnect_Parms*)Obj)->success = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success = { UE4CodeGen_Private::EPropertyClass::Bool, "success", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventConnect_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_success_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_port = { UE4CodeGen_Private::EPropertyClass::Int, "port", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, port), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP = { UE4CodeGen_Private::EPropertyClass::Str, "IP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, IP), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_success,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_port,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking|Socketer" },
				{ "DisplayName", "Connect to a TCP server" },
				{ "Keywords", "Socketer connect tcp tcpconnect socketerconnect" },
				{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "Connect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SocketerBPLibrary_eventConnect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessage()
	{
		struct SocketerBPLibrary_eventGetMessage_Parms
		{
			USocket* Connection;
			FString Message;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SocketerBPLibrary_eventGetMessage_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventGetMessage_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Str, "Message", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessage_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Message,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connection,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking|Socketer" },
				{ "DisplayName", "Get buffer (converted to FText) from server" },
				{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
				{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "GetMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SocketerBPLibrary_eventGetMessage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_HasPendingData()
	{
		struct SocketerBPLibrary_eventHasPendingData_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SocketerBPLibrary_eventHasPendingData_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventHasPendingData_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventHasPendingData_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connection,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking|Socketer" },
				{ "DisplayName", "HasPendingData" },
				{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
				{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "HasPendingData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(SocketerBPLibrary_eventHasPendingData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_SendMessage()
	{
		struct SocketerBPLibrary_eventSendMessage_Parms
		{
			USocket* Connection;
			FString Message;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SocketerBPLibrary_eventSendMessage_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocketerBPLibrary_eventSendMessage_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Str, "Message", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventSendMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventSendMessage_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Message,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connection,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking|Socketer" },
				{ "DisplayName", "Send message to the server" },
				{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
				{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "SendMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SocketerBPLibrary_eventSendMessage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction()
	{
		struct SocketerBPLibrary_eventSocketerSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventSocketerSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Float, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocketerBPLibrary_eventSocketerSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SocketerTesting" },
				{ "DisplayName", "Execute Sample function" },
				{ "Keywords", "Socketer sample test testing" },
				{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, "SocketerSampleFunction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SocketerBPLibrary_eventSocketerSampleFunction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocketerBPLibrary_NoRegister()
	{
		return USocketerBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_USocketerBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Socketer,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USocketerBPLibrary_CloseConnection, "CloseConnection" }, // 530785938
				{ &Z_Construct_UFunction_USocketerBPLibrary_Connect, "Connect" }, // 216972410
				{ &Z_Construct_UFunction_USocketerBPLibrary_GetMessage, "GetMessage" }, // 3105976749
				{ &Z_Construct_UFunction_USocketerBPLibrary_HasPendingData, "HasPendingData" }, // 3168067041
				{ &Z_Construct_UFunction_USocketerBPLibrary_SendMessage, "SendMessage" }, // 2101541922
				{ &Z_Construct_UFunction_USocketerBPLibrary_SocketerSampleFunction, "SocketerSampleFunction" }, // 1537794797
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SocketerBPLibrary.h" },
				{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
				{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USocketerBPLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USocketerBPLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocketerBPLibrary, 1204992383);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocketerBPLibrary(Z_Construct_UClass_USocketerBPLibrary, &USocketerBPLibrary::StaticClass, TEXT("/Script/Socketer"), TEXT("USocketerBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketerBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
