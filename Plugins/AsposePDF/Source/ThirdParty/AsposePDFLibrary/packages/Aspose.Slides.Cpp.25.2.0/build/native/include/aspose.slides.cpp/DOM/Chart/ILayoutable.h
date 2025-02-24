#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IChartComponent.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Specifies the exact position of a chart element.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILayoutable : public virtual Aspose::Slides::Charts::IChartComponent
{
    typedef ILayoutable ThisType;
    typedef Aspose::Slides::Charts::IChartComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the x location (left) of the chart element as a fraction of the width of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_X() = 0;
    /// <summary>
    /// Specifies the x location (left) of the chart element as a fraction of the width of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_X(float value) = 0;
    /// <summary>
    /// Specifies the top of the chart element as a fraction of the height of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Y() = 0;
    /// <summary>
    /// Specifies the top of the chart element as a fraction of the height of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Y(float value) = 0;
    /// <summary>
    /// Specifies the width of the chart element as a fraction of the width of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Width() = 0;
    /// <summary>
    /// Specifies the width of the chart element as a fraction of the width of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Width(float value) = 0;
    /// <summary>
    /// Specifies the height of the chart element as a fraction of the height of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Height() = 0;
    /// <summary>
    /// Specifies the height of the chart element as a fraction of the height of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Height(float value) = 0;
    /// <summary>
    /// Gets the right of the chart element as a fraction of the width of the chart.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Right() = 0;
    /// <summary>
    /// Gets the top of the chart element as a fraction of the height of the chart.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Bottom() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


