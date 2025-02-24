#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents the position type of tick-mark labels on the specified axis.
/// </summary>
enum class TickLabelPositionType
{
    /// <summary>
    /// Specifies the axis labels shall be at the high end of the perpendicular axis. 
    /// </summary>
    High = 0,
    /// <summary>
    /// Specifies the axis labels shall be at the low end of the perpendicular axis. 
    /// </summary>
    Low,
    /// <summary>
    /// Specifies the axis labels shall be next to the axis. 
    /// </summary>
    NextTo,
    /// <summary>
    /// Specifies the axis labels are not drawn. 
    /// </summary>
    None
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::TickLabelPositionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::TickLabelPositionType, const char_t*>, 4>& values();
};
/// @endcond



