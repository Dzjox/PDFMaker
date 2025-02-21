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
/// Enumerates the icons to be used in displaying the annotation.
/// </summary>
enum class TextIcon
{
    /// <summary>
    /// Note icon.
    /// </summary>
    Note,
    /// <summary>
    /// Comment icon.
    /// </summary>
    Comment,
    /// <summary>
    /// Key    icon.
    /// </summary>
    Key,
    /// <summary>
    /// Help icon.
    /// </summary>
    Help,
    /// <summary>
    /// NewParagraph icon.
    /// </summary>
    NewParagraph,
    /// <summary>
    /// Paragraph icon.
    /// </summary>
    Paragraph,
    /// <summary>
    /// Insert icon.
    /// </summary>
    Insert,
    /// <summary>
    /// Check icon.
    /// </summary>
    Check,
    /// <summary>
    /// Cross icon.
    /// </summary>
    Cross,
    /// <summary>
    /// Circle icon.
    /// </summary>
    Circle,
    /// <summary>
    /// Star icon.
    /// </summary>
    Star
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS TextIconConverter : public System::Object
{
    typedef TextIconConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(TextIcon value);
    static ASPOSE_PDF_SHARED_API TextIcon ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


