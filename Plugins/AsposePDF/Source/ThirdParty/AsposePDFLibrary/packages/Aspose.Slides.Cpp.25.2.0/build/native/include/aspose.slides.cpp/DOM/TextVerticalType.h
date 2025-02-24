#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Determines vertical writing mode for a text.
/// </summary>
enum class TextVerticalType : int8_t
{
    /// <summary>
    /// Not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Horizontal text.
    /// </summary>
    Horizontal = 0,
    /// <summary>
    /// Vertical text.
    /// </summary>
    Vertical,
    /// <summary>
    /// Vertical 270 degrees text.
    /// </summary>
    Vertical270,
    /// <summary>
    /// WordArt vertical text.
    /// </summary>
    WordArtVertical,
    /// <summary>
    /// East asian vertical text.
    /// </summary>
    EastAsianVertical,
    /// <summary>
    /// Mongolian vertical text.
    /// </summary>
    MongolianVertical,
    /// <summary>
    /// WordArt vertical right to left text.
    /// </summary>
    WordArtVerticalRightToLeft
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TextVerticalType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TextVerticalType, const char_t*>, 8>& values();
};
/// @endcond



