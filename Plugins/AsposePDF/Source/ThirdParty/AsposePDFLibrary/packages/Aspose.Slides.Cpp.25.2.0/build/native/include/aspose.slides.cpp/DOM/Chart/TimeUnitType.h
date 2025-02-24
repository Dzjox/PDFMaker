#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents the base unit for the category axis
/// </summary>
enum class TimeUnitType
{
    /// <summary>
    /// Values will displayed as is.
    /// </summary>
    None = 0,
    /// <summary>
    /// Specifies the chart data shall be shown in days.
    /// </summary>
    Days,
    /// <summary>
    /// Specifies the chart data shall be shown in months. 
    /// </summary>
    Months,
    /// <summary>
    /// Specifies the chart data shall be shown in years. 
    /// </summary>
    Years
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::TimeUnitType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::TimeUnitType, const char_t*>, 4>& values();
};
/// @endcond



