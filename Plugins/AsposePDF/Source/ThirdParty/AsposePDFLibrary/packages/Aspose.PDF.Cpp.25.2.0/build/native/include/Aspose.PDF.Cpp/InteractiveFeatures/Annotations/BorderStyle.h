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
/// Describes style of the annotation border.
/// </summary>
enum class BorderStyle
{
    /// <summary>
    /// Solid border.
    /// </summary>
    Solid,
    /// <summary>
    /// Dashed border.
    /// </summary>
    Dashed,
    /// <summary>
    /// Bevelled border.
    /// </summary>
    Beveled,
    /// <summary>
    /// Inset border.
    /// </summary>
    Inset,
    /// <summary>
    /// Underlined border.
    /// </summary>
    Underline
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS BorderStyleConverter : public System::Object
{
    typedef BorderStyleConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(BorderStyle value);
    static ASPOSE_PDF_SHARED_API System::String ToXfdfString(BorderStyle value);
    static ASPOSE_PDF_SHARED_API BorderStyle ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


