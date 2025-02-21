#pragma once
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
/// Enumerates the intents of the line annotation.
/// </summary>
enum class LineIntent
{
    /// <summary>
    /// Undefined state.
    /// </summary>
    Undefined,
    /// <summary>
    /// Means that the annotation is intended to function as an arrow.
    /// </summary>
    LineArrow,
    /// <summary>
    /// Means that the annotation is intended to function as a dimension line.
    /// </summary>
    LineDimension
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS LineIntentConverter : public System::Object
{
    typedef LineIntentConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(LineIntent value);
    static ASPOSE_PDF_SHARED_API System::String ToXfdfString(LineIntent value);
    static ASPOSE_PDF_SHARED_API LineIntent ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


