// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Updater.generated.h"

/**
 * 
 */
UCLASS()
class MEDIOCREMAPPER_API UUpdater : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UpdateUpdater"), Category = "updaterUpdater")
		static bool updateUpdater();
	
	
};
