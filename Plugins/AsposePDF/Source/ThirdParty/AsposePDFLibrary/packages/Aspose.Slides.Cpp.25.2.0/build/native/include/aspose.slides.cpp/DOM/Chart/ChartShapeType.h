#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a shape of chart.
/// </summary>
enum class ChartShapeType
{
    /// <summary>
    /// Chart shape is not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Specifies the chart shall be drawn with a box shape.
    /// </summary>
    Box = 0,
    /// <summary>
    /// Specifies the chart shall be drawn as a cone, with the base of the cone on the floor and the point of the cone at the top of the data marker.
    /// </summary>
    Cone,
    /// <summary>
    /// Specifies the chart shall be drawn with truncated cones such that the point of the cone would be the maximum data value.
    /// </summary>
    ConeToMax,
    /// <summary>
    /// Specifies the chart shall be drawn as a cylinder.
    /// </summary>
    Cylinder,
    /// <summary>
    /// Specifies the chart shall be drawn as a rectangular pyramid, with the base of the pyramid on the floor and the point of the pyramid at the top of the data marker.
    /// </summary>
    Pyramid,
    /// <summary>
    /// Specifies the chart shall be drawn with truncated cones such that the point of the cone would be the maximum data value.
    /// </summary>
    PyramidToMaximum
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::ChartShapeType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::ChartShapeType, const char_t*>, 7>& values();
};
/// @endcond



