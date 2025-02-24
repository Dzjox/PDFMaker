#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Determines a position of axis.
/// </summary>
enum class AxisPositionType
{
    /// <summary>
    /// Specifies that the axis shall be displayed at the bottom of the plot area. 
    /// </summary>
    Bottom = 0,
    /// <summary>
    /// Specifies that the axis shall be displayed at the left of the plot area. 
    /// </summary>
    Left,
    /// <summary>
    /// Specifies that the axis shall be displayed at the right of the plot area. 
    /// </summary>
    Right,
    /// <summary>
    /// Specifies that the axis shall be displayed at the top of the plot area. 
    /// </summary>
    Top
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::AxisPositionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::AxisPositionType, const char_t*>, 4>& values();
};
/// @endcond



