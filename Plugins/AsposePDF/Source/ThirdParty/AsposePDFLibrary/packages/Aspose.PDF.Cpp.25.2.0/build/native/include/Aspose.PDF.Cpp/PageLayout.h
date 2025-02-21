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
/// Descibes page layout.
/// </summary>
enum class PageLayout
{
    /// <summary>
    /// Single page.
    /// </summary>
    SinglePage,
    /// <summary>
    /// Display the pages in one column.
    /// </summary>
    OneColumn,
    /// <summary>
    /// Display the pages in two columns, with odd-numbered pages on the left.
    /// </summary>
    TwoColumnLeft,
    /// <summary>
    /// Display the pages in two columns, with odd-numbered pages on the right.
    /// </summary>
    TwoColumnRight,
    /// <summary>
    /// Display the pages two at a time, with odd-numbered pages on the left.
    /// </summary>
    TwoPageLeft,
    /// <summary>
    /// Display the pages two at a time, with odd-numbered pages on the right.
    /// </summary>
    TwoPageRight,
    /// <summary>
    /// Default layout.
    /// </summary>
    Default
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS PageLayoutConverter : public System::Object
{
    typedef PageLayoutConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(PageLayout value);
    static ASPOSE_PDF_SHARED_API PageLayout ToEnum(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose


