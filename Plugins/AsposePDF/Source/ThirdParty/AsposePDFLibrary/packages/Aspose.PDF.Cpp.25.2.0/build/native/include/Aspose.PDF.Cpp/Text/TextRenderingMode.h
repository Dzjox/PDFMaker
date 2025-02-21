#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum_helpers.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// The text rendering mode, Tmode, determines whether showing text shall cause glyph outlines to be stroked, filled, used as a clipping boundary, or some combination of the three.
/// </summary>
enum class TextRenderingMode
{
    /// <summary>
    /// Fill text.
    /// </summary>
    FillText = 0,
    /// <summary>
    /// Stroke text.
    /// </summary>
    StrokeText = 1,
    /// <summary>
    /// Fill, then stroke text.
    /// </summary>
    FillThenStrokeText = 2,
    /// <summary>
    /// Neither fill nor stroke text (invisible).
    /// </summary>
    Invisible = 3,
    /// <summary>
    /// Fill text and add to path for clipping (see 9.3.6, "Text Rendering Mode,").
    /// </summary>
    FillTextAndAddPathToClipping = 4,
    /// <summary>
    /// Stroke text and add to path for clipping.
    /// </summary>
    StrokeTextAndAddPathToClipping = 5,
    /// <summary>
    /// Fill, then stroke text and add to path for clipping.
    /// </summary>
    FillThenStrokeTextAndAddPathToClipping = 6,
    /// <summary>
    /// Add text to path for clipping.
    /// </summary>
    AddPathToClipping = 7
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::TextRenderingMode);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Text);
template<>
struct EnumMetaInfo<Aspose::Pdf::Text::TextRenderingMode>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Text::TextRenderingMode, const char_t*>, 8>& values();
};



