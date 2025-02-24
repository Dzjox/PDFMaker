#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Determines how colored shape should be transformed into black and white.
/// </summary>
enum class BlackWhiteMode : int8_t
{
    /// <summary>
    /// The property isn't set
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// The object is rendered with normal coloring
    /// </summary>
    Color,
    /// <summary>
    /// The object is rendered with automatic coloring
    /// </summary>
    Automatic,
    /// <summary>
    /// The object is rendered with gray coloring 
    /// </summary>
    Gray,
    /// <summary>
    /// The object is rendered with light gray coloring 
    /// </summary>
    LightGray,
    /// <summary>
    /// The object is rendered with inverse gray coloring 
    /// </summary>
    InverseGray,
    /// <summary>
    /// The object is rendered with gray and white coloring 
    /// </summary>
    GrayWhite,
    /// <summary>
    /// The object is rendered with black and gray coloring
    /// </summary>
    BlackGray,
    /// <summary>
    ///  The object is rendered with black and white coloring
    /// </summary>
    BlackWhite,
    /// <summary>
    ///  The object is rendered only with black coloring
    /// </summary>
    Black,
    /// <summary>
    ///  The object is rendered with white coloring
    /// </summary>
    White,
    /// <summary>
    ///  The object is not rendered 
    /// </summary>
    Hidden
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::BlackWhiteMode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::BlackWhiteMode, const char_t*>, 12>& values();
};
/// @endcond



