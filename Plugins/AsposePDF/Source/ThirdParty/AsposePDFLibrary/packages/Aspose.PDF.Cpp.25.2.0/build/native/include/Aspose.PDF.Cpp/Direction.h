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

/// <summary>
/// Text direction.
/// </summary>
enum class Direction
{
    /// <summary>
    /// Left to right direction.
    /// </summary>
    L2R,
    /// <summary>
    /// Right to left direction.
    /// </summary>
    R2L
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS DirectionConverter : public System::Object
{
    typedef DirectionConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(Direction value);
    static ASPOSE_PDF_SHARED_API Direction ToEnum(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose


