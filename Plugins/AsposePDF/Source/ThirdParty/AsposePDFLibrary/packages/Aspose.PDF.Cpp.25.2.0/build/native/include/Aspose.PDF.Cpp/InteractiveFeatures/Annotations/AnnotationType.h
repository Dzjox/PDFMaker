#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enumeration of annotation types.
/// </summary>
enum class AnnotationType
{
    /// <summary>
    /// Text annotation type.
    /// </summary>
    Text,
    /// <summary>
    /// Circle annotation type.
    /// </summary>
    Circle,
    /// <summary>
    /// Polygon annotation type. 
    /// </summary>
    Polygon,
    /// <summary>
    /// Plyline annotation type.
    /// </summary>
    PolyLine,
    /// <summary>
    /// Line annotation type.
    /// </summary>
    Line,
    /// <summary>
    /// Square annotatotion type.
    /// </summary>
    Square,
    /// <summary>
    /// Free text annotation type.
    /// </summary>
    FreeText,
    /// <summary>
    /// Highlight annotation type.
    /// </summary>
    Highlight,
    /// <summary>
    /// Underline annotation type.
    /// </summary>
    Underline,
    /// <summary>
    /// Squiggle annotation type.
    /// </summary>
    Squiggly,
    /// <summary>
    /// Strikeout annotation type.
    /// </summary>
    StrikeOut,
    /// <summary>
    /// Caret annotation type.
    /// </summary>
    Caret,
    /// <summary>
    /// Ink annotation type.
    /// </summary>
    Ink,
    /// <summary>
    /// Link annotation type.
    /// </summary>
    Link,
    /// <summary>
    /// Popup annotation type.
    /// </summary>
    Popup,
    /// <summary>
    /// File attachment annotation type.
    /// </summary>
    FileAttachment,
    /// <summary>
    /// Sound annotation type.
    /// </summary>
    Sound,
    /// <summary>
    /// Movie annotation type.
    /// </summary>
    Movie,
    /// <summary>
    /// Screen annotation type.
    /// </summary>
    Screen,
    /// <summary>
    /// Widget annotation type.
    /// </summary>
    Widget,
    /// <summary>
    /// Watermark annotation type.
    /// </summary>
    Watermark,
    /// <summary>
    /// Trap network annotation type.
    /// </summary>
    TrapNet,
    /// <summary>
    /// Printer mark annotation type.
    /// </summary>
    PrinterMark,
    /// <summary>
    /// Redaction annotation type.
    /// </summary>
    Redaction,
    /// <summary>
    /// Rubber stamp annotation type.
    /// </summary>
    Stamp,
    /// <summary>
    /// Rich media annotation type
    /// </summary>
    RichMedia,
    /// <summary>
    /// Unknown annotation.
    /// </summary>
    Unknown,
    /// <summary>
    /// 3D annotation.
    /// </summary>
    PDF3D,
    /// <summary>
    /// ColorBar annotation.
    /// </summary>
    ColorBar,
    /// <summary>
    /// Trim mark annotation.
    /// </summary>
    TrimMark,
    /// <summary>
    /// Bleed mark annotation.
    /// </summary>
    BleedMark,
    /// <summary>
    /// Registration mark annotation.
    /// </summary>
    RegistrationMark,
    /// <summary>
    /// Page information annotation.
    /// </summary>
    PageInformation
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::AnnotationType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::AnnotationType, const char_t*>, 33>& values();
};



