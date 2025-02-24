#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Determines a position of legend on a chart.
/// </summary>
enum class LegendPositionType
{
    /// <summary>
    /// Specifies that the legend shall be drawn at the bottom of the chart.
    /// </summary>
    Bottom = 0,
    /// <summary>
    /// Specifies that the legend shall be drawn at the left of the chart.
    /// </summary>
    Left,
    /// <summary>
    /// Specifies that the legend shall be drawn at the right of the chart.
    /// </summary>
    Right,
    /// <summary>
    /// Specifies that the legend shall be drawn at the top of the chart.
    /// </summary>
    Top,
    /// <summary>
    /// Specifies that the legend shall be drawn at the top right of the chart.
    /// </summary>
    TopRight
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::LegendPositionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::LegendPositionType, const char_t*>, 5>& values();
};
/// @endcond



