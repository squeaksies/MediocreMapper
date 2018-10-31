// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ColorConverter.generated.h"

/**
 * 
 */
UCLASS()
class MEDIOCREMAPPER_API UColorConverter : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Color to Int"), Category = "RGB Integers")
		static int ColortoInt(FLinearColor color);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Int to Color"), Category = "RGB Integers")
		static FLinearColor InttoColor(int color);
	
	
};
