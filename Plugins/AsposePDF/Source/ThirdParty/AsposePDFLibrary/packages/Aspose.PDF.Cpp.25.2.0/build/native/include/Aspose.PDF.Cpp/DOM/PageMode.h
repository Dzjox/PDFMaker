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

/// <summary>
/// Class descibes used components of the document page.
/// </summary>
enum class PageMode
{
    /// <summary>
    /// Dont use any components.
    /// </summary>
    UseNone,
    /// <summary>
    /// Document outline visible.
    /// </summary>
    UseOutlines,
    /// <summary>
    /// Thumbnail images visible.
    /// </summary>
    UseThumbs,
    /// <summary>
    /// FullScreenFull-screen mode, with no menu bar, window controls, or any other window visible.
    /// </summary>
    FullScreen,
    /// <summary>
    /// Optional content group panel visible.
    /// </summary>
    UseOC,
    /// <summary>
    /// Attachments panel visible.
    /// </summary>
    UseAttachments
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS PageModeConverter : public System::Object
{
    typedef PageModeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(PageMode value);
    static ASPOSE_PDF_SHARED_API PageMode ToEnum(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose


