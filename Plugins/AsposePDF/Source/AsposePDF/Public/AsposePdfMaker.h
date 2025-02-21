// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AsposePdfMaker.generated.h"

/**
 * 
 */
UCLASS()
class ASPOSEPDF_API UAsposePdfMaker : public UObject
{
	GENERATED_BODY()

public:
	static void CreatePdf(TArray<FString> Lines, FString ImagePath);
	static void CreatePPTX(TArray<FString> Lines, FString ImagePath);
};
