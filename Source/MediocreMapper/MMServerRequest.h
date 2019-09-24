// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Http.h"
#include "MMServerRequest.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResponse, const FString, response);

/**
 * Download a file from a URL and save it locally.
 */
UCLASS(BlueprintType, Category = "MPServerRequest")
class MEDIOCREMAPPER_API UMMServerRequest : public UObject
{
	GENERATED_BODY()
public:
	FHttpModule* Http;
	
	UPROPERTY(BlueprintAssignable, Category = "MPServerRequest")
		FOnResponse OnResponse;

	UPROPERTY(BlueprintReadOnly, Category = "HTTP")
		FString uploadFile;

	UPROPERTY(BlueprintReadOnly, Category = "HTTP")
		FString output;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "getOutput"), Category = "MPServerRequest")
		FString getOutput();

	UMMServerRequest();
	~UMMServerRequest();

	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Create Requester"), Category = "HTTP")
		static UMMServerRequest* MakeRequester();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SendSong"), Category = "MPServerRequest")
		void SendSong();

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
};
