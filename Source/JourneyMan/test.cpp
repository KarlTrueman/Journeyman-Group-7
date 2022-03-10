// Fill out your copyright notice in the Description page of Project Settings.


#include "test.h"
#include <Runtime\Core\Public\HAL\PlatformFilemanager.h>
#include <Runtime/Core/Public/Misc/Paths.h>

FString Utest::LoadFileToString(FString Filename)
{
	FString directory = FPaths::ProjectContentDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory))
	{
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}

	return result;
}

TArray<FString> Utest::LoadFileToStringArray(FString Filename)
{
	return TArray<FString>();
}
