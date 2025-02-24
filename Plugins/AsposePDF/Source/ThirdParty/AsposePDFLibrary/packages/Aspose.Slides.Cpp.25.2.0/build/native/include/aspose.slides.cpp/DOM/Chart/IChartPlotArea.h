#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/ILayoutable.h"
#include "DOM/Chart/IActualLayout.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IFormat;
enum class LayoutTargetType;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents chart title properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartPlotArea : public Aspose::Slides::Charts::ILayoutable, public Aspose::Slides::Charts::IActualLayout
{
    typedef IChartPlotArea ThisType;
    typedef Aspose::Slides::Charts::ILayoutable BaseType;
    typedef Aspose::Slides::Charts::IActualLayout BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the format of a plot area.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// If layout of the plot area defined manually this property specifies whether 
    /// to layout the plot area by its inside (not including axis and axis labels) or outside
    /// (including axis and axis labels).
    /// Read <see cref="LayoutTargetType"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = MakeObject<Presentation>();
    /// auto slide = presentation->get_Slides()->idx_get(0);
    /// auto chart = slide->get_Shapes()->AddChart(ChartType::ClusteredColumn, 20.0f, 100.0f, 600.0f, 400.0f);
    /// 
    /// chart->get_PlotArea()->set_X(0.2f);
    /// chart->get_PlotArea()->set_Y(0.2f);
    /// chart->get_PlotArea()->set_Width(0.7f);
    /// chart->get_PlotArea()->set_Height(0.7f);
    /// 
    /// chart->get_PlotArea()->set_LayoutTargetType(LayoutTargetType::Inner);
    /// // ...
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Charts::LayoutTargetType get_LayoutTargetType() = 0;
    /// <summary>
    /// If layout of the plot area defined manually this property specifies whether 
    /// to layout the plot area by its inside (not including axis and axis labels) or outside
    /// (including axis and axis labels).
    /// Write <see cref="LayoutTargetType"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = MakeObject<Presentation>();
    /// auto slide = presentation->get_Slides()->idx_get(0);
    /// auto chart = slide->get_Shapes()->AddChart(ChartType::ClusteredColumn, 20.0f, 100.0f, 600.0f, 400.0f);
    /// 
    /// chart->get_PlotArea()->set_X(0.2f);
    /// chart->get_PlotArea()->set_Y(0.2f);
    /// chart->get_PlotArea()->set_Width(0.7f);
    /// chart->get_PlotArea()->set_Height(0.7f);
    /// 
    /// chart->get_PlotArea()->set_LayoutTargetType(LayoutTargetType::Inner);
    /// // ...
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LayoutTargetType(Aspose::Slides::Charts::LayoutTargetType value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


