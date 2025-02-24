#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Specifies actual position of a chart element.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IActualLayout : public virtual System::Object
{
    typedef IActualLayout ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies actual x location (left) of the chart element relative to the left top corner of the chart.
    /// Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_ActualX() = 0;
    /// <summary>
    /// Specifies actual top of the chart element relative to the left top corner of the chart.
    /// Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_ActualY() = 0;
    /// <summary>
    /// Specifies actual width of the chart element. Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_ActualWidth() = 0;
    /// <summary>
    /// Specifies actual height of the chart element. Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_ActualHeight() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


