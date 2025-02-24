#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents the type of an animation effect for chart's element in series or category.
/// </summary>
enum class EffectChartMinorGroupingType
{
    /// <summary>
    /// Animate chart by element in series
    /// </summary>
    ByElementInSeries,
    /// <summary>
    /// Animate chart by element in category
    /// </summary>
    ByElementInCategory
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::EffectChartMinorGroupingType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::EffectChartMinorGroupingType, const char_t*>, 2>& values();
};
/// @endcond



