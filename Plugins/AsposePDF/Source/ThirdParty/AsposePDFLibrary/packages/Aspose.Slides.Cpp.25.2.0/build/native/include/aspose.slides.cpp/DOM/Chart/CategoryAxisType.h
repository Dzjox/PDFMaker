#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a type of a category axis.
/// </summary>
enum class CategoryAxisType
{
    /// <summary>
    /// Specifies category axis is a text axis.
    /// </summary>
    Text,
    /// <summary>
    /// Specifies category axis is a date axis.
    /// </summary>
    Date
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::CategoryAxisType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::CategoryAxisType, const char_t*>, 2>& values();
};
/// @endcond



