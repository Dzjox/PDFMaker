#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a type of data source of the chart
/// </summary>
enum class ChartDataSourceType
{
    /// <summary>
    /// Internal data source.
    /// </summary> 
    InternalWorkbook,
    /// <summary>
    /// External data source.
    /// </summary>
    ExternalWorkbook
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::ChartDataSourceType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::ChartDataSourceType, const char_t*>, 2>& values();
};
/// @endcond



