#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an index in a colorscheme.
/// </summary>
enum class ColorSchemeIndex : uint8_t
{
    /// <summary>
    /// Dark 1.
    /// </summary>
    Dark1,
    /// <summary>
    /// Light 1.
    /// </summary>
    Light1,
    /// <summary>
    /// Dark 2.
    /// </summary>
    Dark2,
    /// <summary>
    /// Light 2.
    /// </summary>
    Light2,
    /// <summary>
    /// Accent 1.
    /// </summary>
    Accent1,
    /// <summary>
    /// Accent 2.
    /// </summary>
    Accent2,
    /// <summary>
    /// Accent 3.
    /// </summary>
    Accent3,
    /// <summary>
    /// Accent 4.
    /// </summary>
    Accent4,
    /// <summary>
    /// Accent 5.
    /// </summary>
    Accent5,
    /// <summary>
    /// Accent 6.
    /// </summary>
    Accent6,
    /// <summary>
    /// Hyperlink.
    /// </summary>
    Hyperlink,
    /// <summary>
    /// Followed Hyperlink.
    /// </summary>
    FollowedHyperlink
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ColorSchemeIndex>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ColorSchemeIndex, const char_t*>, 12>& values();
};
/// @endcond



