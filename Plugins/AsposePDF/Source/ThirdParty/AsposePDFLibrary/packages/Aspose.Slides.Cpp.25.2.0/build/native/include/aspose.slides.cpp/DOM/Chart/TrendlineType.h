#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents type of trend line
/// </summary>
enum class TrendlineType
{
    /// <summary>
    /// Specifies the trendline shall be an exponential curve in the form. 
    /// </summary>
    Exponential,
    /// <summary>
    /// Specifies the trendline shall be a line in the form. 
    /// </summary>
    Linear,
    /// <summary>
    /// Specifies the trendline shall be a logarithmic curve in  the form  , where log is the natural logarithm. 
    /// </summary>
    Logarithmic,
    /// <summary>
    /// Specifies the trendline shall be a moving average of period Period. 
    /// </summary>
    MovingAverage,
    /// <summary>
    /// Specifies the trendline shall be a polynomial curve of order Order in the form. 
    /// </summary>
    Polynomial,
    /// <summary>
    /// Specifies the trendline shall be a power curve in the form.
    /// </summary>
    Power
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::TrendlineType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::TrendlineType, const char_t*>, 6>& values();
};
/// @endcond



