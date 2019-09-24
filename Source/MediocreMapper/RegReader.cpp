// Fill out your copyright notice in the Description page of Project Settings.


#include "RegReader.h"

FString URegReader::ReadRegistryValue(const FString& KeyName, const FString& ValueName)
{
	HKEY hKey;
	LONG Result = RegOpenKeyExW(HKEY_LOCAL_MACHINE, *KeyName, 0, KEY_READ | KEY_WOW64_32KEY, &hKey);
	if (Result != ERROR_SUCCESS)
	{
		// Handle error 
	}
	TCHAR Buffer[MAX_PATH];
	DWORD BufferSize = sizeof(Buffer);
	HRESULT hResult = RegQueryValueEx(hKey, *ValueName, 0, nullptr, reinterpret_cast<LPBYTE>(Buffer), &BufferSize);
	if (hResult != ERROR_SUCCESS)
	{
		// Handle error 
	}
	return FString(Buffer);
}
