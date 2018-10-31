// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Http.h"
#include "FileDownloader.generated.h"

/**
* Possible results from a download request.
*/
UENUM(BlueprintType, Category = "HTTP")
enum class EDownloadResult : uint8
{
	Success,
	DownloadFailed,
	SaveFailed,
	DirectoryCreationFailed
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResult, const EDownloadResult, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnProgress, const int32, BytesSent, const int32, BytesReceived, const int32, ContentLength);

/**
 * Download a file from a URL and save it locally.
 */
UCLASS(BlueprintType, Category = "HTTP")
class MEDIOCREMAPPER_API UFileDownloader : public UObject
{
	GENERATED_BODY()

public:
	/**
	* Bind to know when the download is complete (even if it fails).
	*/
	UPROPERTY(BlueprintAssignable, Category = "HTTP")
	FOnResult OnResult;
	/**
	* Bind to know when the download is complete (even if it fails).
	*/
	UPROPERTY(BlueprintAssignable, Category = "HTTP")
	FOnProgress OnProgress;

	/**
	* The URL used to start this download.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "HTTP")
	FString FileUrl;
	/**
	* The path set to save the downloaded file.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "HTTP")
	FString FileSavePath;

	UFileDownloader();
	~UFileDownloader();

	/**
	* Instantiates a FileDownloader object, starts downloading and saves it when done.
	* 
	* @return The FileDownloader object. Bind to it's OnResult event to know when it's done downloading.
	*/
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Create Downloader"), Category = "HTTP")
	static UFileDownloader* MakeDownloader();

	/**
	* Starts downloading a file and saves it when done. Bind to the OnResult
	* event to know when the download is done (preferrably, before calling this function).
	* 
	* @param Url		The file Url to be downloaded.
	* @param SavePath	The absolute path and file name to save the downloaded file.
	* @return Returns itself.
	*/
	UFUNCTION(BlueprintCallable, Category = "HTTP")
	UFileDownloader* DownloadFile(const FString& Url, FString SavePath);

private:

	void OnReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnProgress_Internal(FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived);
};
