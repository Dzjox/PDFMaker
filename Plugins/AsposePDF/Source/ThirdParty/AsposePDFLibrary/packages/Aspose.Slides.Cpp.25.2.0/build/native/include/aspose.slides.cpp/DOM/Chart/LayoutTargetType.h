#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// If layout of the plot area defined manually this property specifies whether 
/// to layout the plot area by its inside (not including axis and axis labels) or outside
/// (including axis and axis labels).
/// </summary>
enum class LayoutTargetType
{
    /// <summary>
    /// Specifies that the plot area size shall determine the
    /// size of the plot area, not including the tick marks and
    /// axis labels.
    /// </summary>
    Inner,
    /// <summary>
    /// Specifies that the plot area size shall determine the
    /// size of the plot area, the tick marks, and the axis
    /// labels.
    /// </summary>
    Outer
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::LayoutTargetType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::LayoutTargetType, const char_t*>, 2>& values();
};
/// @endcond



