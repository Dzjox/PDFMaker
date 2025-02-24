#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a type of hyperlink action.
/// </summary>
enum class ColorStringFormat
{
    /// <summary>
    /// VML color string format.
    /// </summary>
    Vml
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ColorStringFormat>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ColorStringFormat, const char_t*>, 1>& values();
};
/// @endcond



