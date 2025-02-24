#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents aggregation type of category axis. Used with Histogram or HistogramPareto series only.
/// </summary>
enum class AxisAggregationType
{
    /// <summary>
    /// Aggregate by categories
    /// </summary>
    ByCategory,
    /// <summary>
    /// Aggregate categories automatically. 
    /// </summary>
    Automatic,
    /// <summary>
    /// Aggregate categories by bin width. Property IAxis::get(set)_BinWidth must be setted. 
    /// </summary>
    ByBinWidth,
    /// <summary>
    /// Aggregate categories by number of bins. Property IAxis::get(set)_NumberOfBins must be setted. 
    /// </summary>
    ByNumberOfBins
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::AxisAggregationType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::AxisAggregationType, const char_t*>, 4>& values();
};
/// @endcond



