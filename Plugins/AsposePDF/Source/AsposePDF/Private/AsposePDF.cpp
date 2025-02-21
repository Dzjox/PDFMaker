// Copyright Epic Games, Inc. All Rights Reserved.

#include "AsposePDF.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

#define LOCTEXT_NAMESPACE "FAsposePDFModule"

void FAsposePDFModule::StartupModule()
{
	git lfs track "*.nupkg"
	
	const FString BaseDir = IPluginManager::Get().FindPlugin("AsposePDF")->GetBaseDir();
	const FString LibDir = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/AsposePDFLibrary/x64/Release"));

	FString CodeportingTranslatorPath = FPaths::Combine(*LibDir, TEXT("codeporting.translator.cs2cpp.framework_vc14x64.dll"));
	LibraryHandle_CodeportingTranslator = !CodeportingTranslatorPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*CodeportingTranslatorPath) : nullptr;
	if (!LibraryHandle_CodeportingTranslator)
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "CodeportingTranslatorPath"));
		UE_LOG(LogTemp,Warning, TEXT("CodeportingTranslatorPath = %s"), *CodeportingTranslatorPath);
	}

	FString AsposeCppPath = FPaths::Combine(*LibDir, TEXT("aspose_cpp_vc14x64.dll"));
	LibraryHandle_AsposeCpp = !AsposeCppPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*AsposeCppPath) : nullptr;
	if (!LibraryHandle_AsposeCpp)
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to aspose_cpp_vc14x64.dll"));
	}

	FString AsposePdfCppPath = FPaths::Combine(*LibDir, TEXT("Aspose.Pdf.Cpp_vc14x64.dll"));
	LibraryHandle_AsposePdfCpp = !AsposePdfCppPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*AsposePdfCppPath) : nullptr;
	if (!LibraryHandle_AsposePdfCpp)
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to Aspose.Pdf.Cpp_vc14x64.dll"));
	}
	
	FString AsposeHelperPath = FPaths::Combine(*LibDir, TEXT("AsposeHelper.dll"));
	LibraryHandle_AsposeHelper = !AsposeHelperPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*AsposeHelperPath) : nullptr;
	if (!LibraryHandle_AsposeHelper)
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to AsposeHelper.dll"));
	}
}

void FAsposePDFModule::ShutdownModule()
{
	FPlatformProcess::FreeDllHandle(LibraryHandle_AsposeHelper);
	FPlatformProcess::FreeDllHandle(LibraryHandle_AsposePdfCpp);
	FPlatformProcess::FreeDllHandle(LibraryHandle_AsposeCpp);
	FPlatformProcess::FreeDllHandle(LibraryHandle_CodeportingTranslator);
	
	LibraryHandle_AsposeHelper = nullptr;
	LibraryHandle_AsposePdfCpp = nullptr;
	LibraryHandle_AsposeCpp = nullptr;
	LibraryHandle_CodeportingTranslator = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAsposePDFModule, AsposePDF)
