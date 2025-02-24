#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents different color modes.
/// </summary>
enum class ColorType
{
    /// <summary>
    /// Color is not defined at all.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Standard 24bit RGB color.
    /// </summary>
    RGB = 0,
    /// <summary>
    /// High definition RGB color.
    /// </summary>
    RGBPercentage = 1,
    /// <summary>
    /// High definition HSL color.
    /// </summary>
    HSL = 2,
    /// <summary>
    /// Scheme color.
    /// </summary>
    Scheme = 3,
    /// <summary>
    /// System color.
    /// </summary>
    System = 4,
    /// <summary>
    /// Preset Color.
    /// </summary>
    Preset = 5
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ColorType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ColorType, const char_t*>, 7>& values();
};
/// @endcond



