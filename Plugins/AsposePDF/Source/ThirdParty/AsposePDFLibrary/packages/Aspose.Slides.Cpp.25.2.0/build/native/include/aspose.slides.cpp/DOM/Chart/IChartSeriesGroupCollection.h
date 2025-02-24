#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartSeries;
class IChartSeriesGroup;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents the collection of groups of combinable series.
/// </summary>
/// <remarks>
/// 1) Each group of series contains series with combinable types. Groups of 
/// combinable series types defined and described with CombinableSeriesTypesGroup 
/// enum.
/// Also each group of series contains series witch is plotted whether 
/// on primary axes or on secondary axes (not both cases in one group).
/// So, principle of series grouping is a grouping by type groups mentioned 
/// above and by primary/secondary plotting type.
/// 
/// 2) Group of series contains some series properties which is common for 
/// each series in group ("series group properties").
/// "Series group properties" in ChartSeriesGroup class is read/write.
/// Each of "series group properties" can have a read-only projection in ChartSeries class.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartSeriesGroupCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartSeriesGroup>>
{
    typedef IChartSeriesGroupCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartSeriesGroup>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the series group by series.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeriesGroup> idx_get(System::SharedPtr<IChartSeries> ofSeries) = 0;
    /// <summary>
    /// Gets the series group by index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeriesGroup> idx_get(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


