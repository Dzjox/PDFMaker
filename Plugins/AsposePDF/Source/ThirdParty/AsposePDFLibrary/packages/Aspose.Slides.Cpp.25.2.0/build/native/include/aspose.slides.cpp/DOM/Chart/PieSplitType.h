#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a type of splitting points in the second pie or bar 
/// on a pie-of-pie or bar-of-pie chart.
/// </summary>
enum class PieSplitType
{
    /// <summary>
    /// Specifies the data points shall be split using the default 
    /// mechanism for this chart type.
    /// </summary>
    Default = 0,
    /// <summary>
    /// Specifies the data points shall be split between the 
    /// pie and the second chart according to the Custom Split values.
    /// </summary>
    Custom,
    /// <summary>
    /// Specifies the data points shall be split between the pie and the 
    /// second chart by putting the points with percentage less than 
    /// Split Position percent in the second chart. 
    /// </summary>
    ByPercentage,
    /// <summary>
    /// Specifies the data points shall be split between the pie and the 
    /// second chart by putting the last Split Position of the data points 
    /// in the second chart.
    /// </summary>
    ByPos,
    /// <summary>
    /// Specifies the data points shall be split between the pie and the 
    /// second chart by putting the data points with value less than 
    /// Split Position in the second chart.
    /// </summary>
    ByValue
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::PieSplitType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::PieSplitType, const char_t*>, 5>& values();
};
/// @endcond



