// Fill out your copyright notice in the Description page of Project Settings.

#include "MMServerRequest.h"
#include "BeatSaberEditor.h"
#include "UnrealString.h"

UMMServerRequest::UMMServerRequest():
		uploadFile(TEXT(""))
	, output(TEXT(""))
{
}

UMMServerRequest::~UMMServerRequest()
{
}

UMMServerRequest* UMMServerRequest::MakeRequester()
{
	UMMServerRequest* Requester = NewObject<UMMServerRequest>();
	return Requester;
}
void UMMServerRequest::SendSong()
{
	FHttpModule* Http = &FHttpModule::Get();
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();
	//This is the url on which to process the request
	TArray<uint8> UpFileRawData;
	Request->SetURL("http://5.196.73.28/useragent/");
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "MediocreMapper");
	Request->SetHeader("Content-Type", TEXT("text/plain"));
	Request->OnProcessRequestComplete().BindUObject(this, &UMMServerRequest::OnResponseReceived);
	Request->ProcessRequest();
	AddToRoot();
}

void UMMServerRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	RemoveFromRoot();
	//output = BytesToString(Response->GetContent().GetData(), Response->GetContentLength());
	
	////Create a pointer to hold the json serialized data
	//TSharedPtr<FJsonObject> JsonObject;

	////Create a reader pointer to read the json data
	//TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	////Deserialize the json data given Reader and the actual object to deserialize
	//if (FJsonSerializer::Deserialize(Reader, JsonObject))
	//{
	//	//Get the value of the json object by field name
	//	int32 recievedInt = JsonObject->GetIntegerField("customInt");

	//	//Output it to the engine
	//	GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, FString::FromInt(recievedInt));
	//}
}

FString UMMServerRequest::getOutput()
{
	return UMMServerRequest::output;
}