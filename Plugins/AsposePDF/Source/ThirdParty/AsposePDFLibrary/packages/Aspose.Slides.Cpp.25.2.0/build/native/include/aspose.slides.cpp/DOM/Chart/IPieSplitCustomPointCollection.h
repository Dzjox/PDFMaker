#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/icollection.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataPoint;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a collection of points that shall be drawn in the second pie or bar on a bar-of-pie or pie-of-pie chart with a custom split.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPieSplitCustomPointCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Slides::Charts::IChartDataPoint>>
{
    typedef IPieSplitCustomPointCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Slides::Charts::IChartDataPoint>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns chart data point by index.
    /// </summary>
    /// <param name="index">Index of  data-point.</param>
    /// <returns>Chart data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds data point by its index in parent series points collection.
    /// </summary>
    /// <param name="dataPointIndex">Index of data point in parent series points collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(const int32_t& dataPointIndex) = 0;
    /// <summary>
    /// Removes item from collection by it index in parent series points collection.
    /// </summary>
    /// <param name="dataPointIndex">Index of data point in parent series points collection..</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(int32_t dataPointIndex) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


