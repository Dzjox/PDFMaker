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
/// Describes effect which should be applied to the border of the annotations.
/// </summary>
enum class BorderEffect
{
    /// <summary>
    /// No effect.
    /// </summary>
    None,
    /// <summary>
    /// The border will appear "cloudly".
    /// </summary>
    Cloudy
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS BorderEffectConverter : public System::Object
{
    typedef BorderEffectConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(BorderEffect value);
    static ASPOSE_PDF_SHARED_API System::String ToXfdfString(BorderEffect value);
    static ASPOSE_PDF_SHARED_API BorderEffect ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


