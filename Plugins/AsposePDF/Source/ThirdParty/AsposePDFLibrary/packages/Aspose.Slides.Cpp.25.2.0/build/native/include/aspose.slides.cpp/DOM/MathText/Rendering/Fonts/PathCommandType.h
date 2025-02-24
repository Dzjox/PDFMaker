#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

namespace Rendering {

enum class PathCommandType
{
    M,
    Q,
    L,
    T,
    Z,
    H,
    V
};

} // namespace Rendering
} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::Rendering::PathCommandType>
{
    static const ASPOSE_SLIDES_SHARED_API std::array<std::pair<Aspose::Slides::MathText::Rendering::PathCommandType, const char_t*>, 7>& values();
};
/// @endcond



