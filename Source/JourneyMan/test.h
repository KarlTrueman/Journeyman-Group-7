// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Runtime\Core\Public\Misc\FileHelper.h>
#include "test.generated.h"


/**
 * 
 */
UCLASS()
class JOURNEYMAN_API Utest : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, category = "File I/O")
		static FString LoadFileToString(FString Filename);


		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static bool FileSaveString(FString SaveTextB, FString FileNameB);



};
