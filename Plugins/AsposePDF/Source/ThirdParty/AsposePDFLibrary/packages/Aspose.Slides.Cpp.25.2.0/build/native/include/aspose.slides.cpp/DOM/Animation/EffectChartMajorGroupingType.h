#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents the type of an animation effect for chart's element.
/// </summary>
enum class EffectChartMajorGroupingType
{
    /// <summary>
    /// Animate chart by series
    /// </summary>
    BySeries,
    /// <summary>
    /// Animate chart by category
    /// </summary>
    ByCategory
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::EffectChartMajorGroupingType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::EffectChartMajorGroupingType, const char_t*>, 2>& values();
};
/// @endcond



