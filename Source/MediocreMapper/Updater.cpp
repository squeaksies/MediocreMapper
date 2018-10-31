// Fill out your copyright notice in the Description page of Project Settings.

#include "Updater.h"
#include "FileManagerGeneric.h"
#include "Paths.h"
#include <windows.h>

bool UUpdater::updateUpdater()
{
	FString source = FPaths::GameDir()+"Updates/MediocreMapper/MediocreUpdater.exe"; 
	FString target = FPaths::GameDir() +"MediocreUpdater.exe";
	UE_LOG(LogTemp, Warning, TEXT("%s"), *source);
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*source)) 
	{ 
		IFileManager& fManager = FFileManagerGeneric::Get();
		fManager.Copy(*source,*target,true,true);
		return FPlatformFileManager::Get().GetPlatformFile().FileExists(*target);
	}
	return false;
}


