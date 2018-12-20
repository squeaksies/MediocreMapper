// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/VictoryUMGPrivatePCH.h"
#include "Public/JoyColorWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyColorWheel() {}
// Cross Module References
	VICTORYUMG_API UFunction* Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VictoryUMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VICTORYUMG_API UClass* Z_Construct_UClass_UJoyColorWheel_NoRegister();
	VICTORYUMG_API UClass* Z_Construct_UClass_UJoyColorWheel();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	VICTORYUMG_API UFunction* Z_Construct_UFunction_UJoyColorWheel_GetColor();
	VICTORYUMG_API UFunction* Z_Construct_UFunction_UJoyColorWheel_SetColor();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature()
	{
		struct _Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms
		{
			FLinearColor NewColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_NewColor_MetaData, ARRAY_COUNT(NewProp_NewColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VictoryUMG, "OnJoyColorChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VictoryUMG_eventOnJoyColorChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UJoyColorWheel::StaticRegisterNativesUJoyColorWheel()
	{
		UClass* Class = UJoyColorWheel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UJoyColorWheel::execGetColor },
			{ "SetColor", &UJoyColorWheel::execSetColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UJoyColorWheel_GetColor()
	{
		struct JoyColorWheel_eventGetColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JoyColorWheel_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Joy Color Wheel" },
				{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
				{ "ToolTip", "Get Color!" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyColorWheel, "GetColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(JoyColorWheel_eventGetColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJoyColorWheel_SetColor()
	{
		struct JoyColorWheel_eventSetColor_Parms
		{
			FLinearColor NewColor;
			bool SkipAnimation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_SkipAnimation_SetBit = [](void* Obj){ ((JoyColorWheel_eventSetColor_Parms*)Obj)->SkipAnimation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "SkipAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JoyColorWheel_eventSetColor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SkipAnimation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JoyColorWheel_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkipAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Joy Color Wheel" },
				{ "CPP_Default_SkipAnimation", "false" },
				{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
				{ "ToolTip", "Set Color Picker's Color!" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyColorWheel, "SetColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(JoyColorWheel_eventSetColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJoyColorWheel_NoRegister()
	{
		return UJoyColorWheel::StaticClass();
	}
	UClass* Z_Construct_UClass_UJoyColorWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_VictoryUMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UJoyColorWheel_GetColor, "GetColor" }, // 1577920794
				{ &Z_Construct_UFunction_UJoyColorWheel_SetColor, "SetColor" }, // 3661312286
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "JoyColorWheel.h" },
				{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "DisplayName", "OnColorChanged (Joy Color Wheel)" },
				{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
				{ "ToolTip", "Called whenever the color is changed! Yay!" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnColorChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UJoyColorWheel, OnColorChanged), Z_Construct_UDelegateFunction_VictoryUMG_OnJoyColorChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnColorChanged_MetaData, ARRAY_COUNT(NewProp_OnColorChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimationOnConstruction_MetaData[] = {
				{ "Category", "Joy Color Wheel" },
				{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
				{ "ToolTip", "Should the color picker jump instantly to the chosen JoyColor when it is first created?" },
			};
#endif
			auto NewProp_bSkipAnimationOnConstruction_SetBit = [](void* Obj){ ((UJoyColorWheel*)Obj)->bSkipAnimationOnConstruction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimationOnConstruction = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipAnimationOnConstruction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UJoyColorWheel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipAnimationOnConstruction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipAnimationOnConstruction_MetaData, ARRAY_COUNT(NewProp_bSkipAnimationOnConstruction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoyColor_MetaData[] = {
				{ "Category", "Joy Color Wheel" },
				{ "ModuleRelativePath", "Public/JoyColorWheel.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoyColor = { UE4CodeGen_Private::EPropertyClass::Struct, "JoyColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UJoyColorWheel, JoyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_JoyColor_MetaData, ARRAY_COUNT(NewProp_JoyColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnColorChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipAnimationOnConstruction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoyColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UJoyColorWheel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UJoyColorWheel::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UJoyColorWheel, 2553591289);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJoyColorWheel(Z_Construct_UClass_UJoyColorWheel, &UJoyColorWheel::StaticClass, TEXT("/Script/VictoryUMG"), TEXT("UJoyColorWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyColorWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
