// Fill out your copyright notice in the Description page of Project Settings.


#include "AsposePDFMaker.h"
#include "ThirdParty/AsposePDFLibrary/AsposeHelper/AsposeHelper.h"

void UAsposePdfMaker::CreatePdf(TArray<FString> Lines, FString ImagePath)
{
	std::vector<std::string> Result;
	for (FString Line : Lines)
	{
		Result.push_back(TCHAR_TO_UTF8(*Line));
	}
	AsposeHelper::CreatePDF(Result,TCHAR_TO_UTF8(*ImagePath));
}

void UAsposePdfMaker::CreatePPTX(TArray<FString> Lines, FString ImagePath)
{
	std::vector<std::string> Result;
	for (FString Line : Lines)
	{
		Result.push_back(TCHAR_TO_UTF8(*Line));
	}
	AsposeHelper::CreatePPTX(Result,TCHAR_TO_UTF8(*ImagePath));
}
