#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the style of a line.
/// </summary>
enum class LineStyle : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Single = 0,
    /// <summary>
    /// 
    /// </summary>
    ThinThin = 1,
    /// <summary>
    /// 
    /// </summary>
    ThickThin = 2,
    /// <summary>
    /// 
    /// </summary>
    ThinThick = 3,
    /// <summary>
    /// 
    /// </summary>
    ThickBetweenThin = 4
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LineStyle>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LineStyle, const char_t*>, 6>& values();
};
/// @endcond



