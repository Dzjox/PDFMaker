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
/// Enumerates the forms of quadding (justification) to be used in displaying the annotation's text.
/// </summary>
enum class Justification
{
    /// <summary>
    /// Left justification.
    /// </summary>
    Left = 0,
    /// <summary>
    /// Center justification.
    /// </summary>
    Center = 1,
    /// <summary>
    /// Right justification.
    /// </summary>
    Right = 2
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS JustificationConverter : public System::Object
{
    typedef JustificationConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToXfdfString(Justification value);
    static ASPOSE_PDF_SHARED_API Justification ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


