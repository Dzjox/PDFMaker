#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents a way to handle external fonts used for text drawing.
/// </summary>
enum class SvgExternalFontsHandling
{
    /// <summary>
    /// Add links to separate font files to style section of SVG file.
    /// </summary>
    AddLinksToFontFiles,
    /// <summary>
    /// Save fonts data directly to SVG file. Please check all external fonts license agreements before using this option.
    /// </summary>
    Embed,
    /// <summary>
    /// Save all text using external fonts as graphics.
    /// </summary>
    Vectorize
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::SvgExternalFontsHandling>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::SvgExternalFontsHandling, const char_t*>, 3>& values();
};
/// @endcond



