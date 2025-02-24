// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FAsposePDFModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void*	LibraryHandle_AsposeHelper;
	void*	LibraryHandle_AsposePdfCpp;
	void*	LibraryHandle_AsposeCpp;
	void*	LibraryHandle_CodeportingTranslator;
	void*	LibraryHandle_AsposeSlides;
};
