﻿#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enumerates the intents of the free text annotation.
/// </summary>
enum class FreeTextIntent
{
    /// <summary>
    /// Not defined state.
    /// </summary>
    Undefined,
    /// <summary>
    /// Means that the annotation is intended to function as a callout.
    /// </summary>
    FreeTextCallout,
    /// <summary>
    /// Means that the annotation is intended to function as a click-to-type or typewriter object.
    /// </summary>
    FreeTextTypeWriter
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS FreeTextIntentConverter : public System::Object
{
    typedef FreeTextIntentConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(FreeTextIntent value);
    static ASPOSE_PDF_SHARED_API System::String ToXfdfString(FreeTextIntent value);
    static ASPOSE_PDF_SHARED_API FreeTextIntent ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


