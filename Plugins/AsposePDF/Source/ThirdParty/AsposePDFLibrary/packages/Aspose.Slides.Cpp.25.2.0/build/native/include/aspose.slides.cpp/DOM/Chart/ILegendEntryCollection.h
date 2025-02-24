#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ILegendEntryProperties;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents legends collection.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILegendEntryCollection : public virtual System::Object
{
    typedef ILegendEntryCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Gets properties of the legend entry corresponding to Chart.ChartData.Series[0].DataPoints[index]
    /// in case of chart type from this list:
    ///   ChartType::BarOfPie,
    ///   ChartType::ExplodedPie,
    ///   ChartType::ExplodedPie3D,
    ///   ChartType::Pie,
    ///   ChartType::Pie3D,
    ///   ChartType::PieOfPie;
    /// or corresponding to Chart.ChartData.Series[index] for other chart types.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILegendEntryProperties> idx_get(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


