#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the type of a placeholder.
/// </summary>
enum class PlaceholderType : int8_t
{
    /// <summary>
    /// Title.
    /// </summary>
    Title = 0,
    /// <summary>
    /// Body.
    /// </summary>
    Body = 1,
    /// <summary>
    /// Centered Title.
    /// </summary>
    CenteredTitle = 2,
    /// <summary>
    /// Subtitle.
    /// </summary>
    Subtitle = 3,
    /// <summary>
    /// Date and Time.
    /// </summary>
    DateAndTime = 4,
    /// <summary>
    /// Slide Number.
    /// </summary>
    SlideNumber = 5,
    /// <summary>
    /// Footer.
    /// </summary>
    Footer = 6,
    /// <summary>
    /// Header.
    /// </summary>
    Header = 7,
    /// <summary>
    /// Object.
    /// </summary>
    Object = 8,
    /// <summary>
    /// Chart.
    /// </summary>
    Chart = 9,
    /// <summary>
    /// Table.
    /// </summary>
    Table = 10,
    /// <summary>
    /// Clip Art.
    /// </summary>
    ClipArt = 11,
    /// <summary>
    /// Diagram.
    /// </summary>
    Diagram = 12,
    /// <summary>
    /// Media.
    /// </summary>
    Media = 13,
    /// <summary>
    /// Slide Image.
    /// </summary>
    SlideImage = 14,
    /// <summary>
    /// Picture.
    /// </summary>
    Picture = 15
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PlaceholderType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PlaceholderType, const char_t*>, 16>& values();
};
/// @endcond



