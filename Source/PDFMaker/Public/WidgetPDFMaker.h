// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetPDFMaker.generated.h"

/**
 * 
 */
UCLASS()
class PDFMAKER_API UWidgetPDFMaker : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void CreatePDF(TArray<FString> Lines, FString ImagePath);

	UFUNCTION(BlueprintCallable)
	void CreatePPTX(TArray<FString> Lines, FString ImagePath);
	
};
