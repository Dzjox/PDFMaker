#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the mode to use during text extraction
/// </summary>
enum class TextExtractionArrangingMode
{
    /// <summary>
    /// The raw text with no respect to position on the slide
    /// </summary>
    Unarranged,
    /// <summary>
    /// The text is positioned in the same order as on the slide
    /// </summary>
    Arranged
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TextExtractionArrangingMode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TextExtractionArrangingMode, const char_t*>, 2>& values();
};
/// @endcond



