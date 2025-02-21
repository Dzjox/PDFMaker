// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetPDFMaker.h"

#include "ImageUtils.h"
#include "AsposePDF/Public/AsposePdfMaker.h"

void UWidgetPDFMaker::CreatePDF(TArray<FString> Lines, FString ImagePath)
{
	UAsposePdfMaker::CreatePdf(Lines, ImagePath);
}

void UWidgetPDFMaker::CreatePPTX(TArray<FString> Lines, FString ImagePath)
{
	UAsposePdfMaker::CreatePPTX(Lines,ImagePath);
}

UTexture2D* UWidgetPDFMaker::LoadTextureFromFile(const FString& FullFilePath)
{
	TArray<uint8> ImageData;
    
	// Load file data into ImageData array
	if (!FFileHelper::LoadFileToArray(ImageData, *FullFilePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load image from path: %s"), *FullFilePath);
		return nullptr;
	}

	// Convert to Texture2D
	return FImageUtils::ImportBufferAsTexture2D(ImageData);
}
