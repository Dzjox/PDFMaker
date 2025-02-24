#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the style of an arrowhead.
/// </summary>
enum class LineArrowheadStyle : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    None = 0,
    /// <summary>
    /// 
    /// </summary>
    Triangle = 1,
    /// <summary>
    /// 
    /// </summary>
    Stealth = 2,
    /// <summary>
    /// 
    /// </summary>
    Diamond = 3,
    /// <summary>
    /// 
    /// </summary>
    Oval = 4,
    /// <summary>
    /// 
    /// </summary>
    Open = 5
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LineArrowheadStyle>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LineArrowheadStyle, const char_t*>, 7>& values();
};
/// @endcond



