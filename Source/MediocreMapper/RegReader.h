// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"



#include <windows.h>
#include "Kismet/BlueprintFunctionLibrary.h"

//#include "Framework/Application/SlateApplication.h"
//#include "Modules/ModuleInterface.h"
//#include "Modules/ModuleManager.h"
//#include "Windows/WindowsApplication.h"
//#include "shellapi.h"

#include "RegReader.generated.h"

UCLASS()
class MEDIOCREMAPPER_API URegReader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// Reads a registry key value
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Registry"), Category = "Registry Reader")
	static FString ReadRegistryValue(const FString& KeyName, const FString& ValueName);
	

private:
	static const int MaxBufferSize = 256;
};