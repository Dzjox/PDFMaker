#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the available gradient styles.
/// </summary>
enum class GradientStyle
{
    /// <summary>
    /// The default gradient style.
    /// </summary>
    Default,
    /// <summary>
    /// The gradient style as it appears in the PowerPoint user interface.
    /// </summary>
    PowerPointUI
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::GradientStyle>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::GradientStyle, const char_t*>, 2>& values();
};
/// @endcond



