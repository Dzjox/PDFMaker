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
/// Colors included in the CMYK color model.
/// </summary>
enum class ColorsOfCMYK
{
    /// <summary>
    /// Cyan color.
    /// </summary>
    Cyan,
    /// <summary>
    /// Magenta color.
    /// </summary>
    Magenta,
    /// <summary>
    /// Yellow color.
    /// </summary>
    Yellow,
    /// <summary>
    /// Black color.
    /// </summary>
    Black
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS ColorsOfCMYKConverter : public System::Object
{
    typedef ColorsOfCMYKConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToXfdfString(ColorsOfCMYK color);
    static ASPOSE_PDF_SHARED_API ColorsOfCMYK ToEnum(System::String color);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


