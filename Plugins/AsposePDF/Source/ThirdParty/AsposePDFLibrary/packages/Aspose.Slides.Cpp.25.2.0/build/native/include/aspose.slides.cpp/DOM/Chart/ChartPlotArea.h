#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartPlotArea.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/Chart.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChart;
class IFormat;
enum class LayoutTargetType;
class PlotAreaElement;
} // namespace Charts
class IBaseSlide;
class IPresentation;
namespace OdpSerialization
{
namespace PartParser
{
class ChartOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartPlotAreaExPPTXSerialization;
class ChartPlotAreaPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class ChartPlotAreaPPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents rectangle where chart should be plotted.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartPlotArea : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>>, public Aspose::Slides::Charts::IChartPlotArea
{
    typedef ChartPlotArea ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>> BaseType;
    typedef Aspose::Slides::Charts::IChartPlotArea BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartPlotAreaExPPTXSerialization;
    friend class Aspose::Slides::Charts::PlotAreaElement;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartPlotAreaPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the format of a plot area.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Returns the x coordinate of the upper left corner of plot area bounding box as a fraction of the width of the chart (from 0 to 1).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_X() override;
    /// <summary>
    /// Sets the x coordinate of the upper left corner of plot area bounding box as a fraction of the width of the chart (from 0 to 1).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_X(float value) override;
    /// <summary>
    /// Returns the y coordinate of the upper left corner of plot area bounding box as a fraction of the height of the chart (from 0 to 1).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Y() override;
    /// <summary>
    /// Sets the y coordinate of the upper left corner of plot area bounding box as a fraction of the height of the chart (from 0 to 1).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Y(float value) override;
    /// <summary>
    /// Returns the width of a plot area bounding box as a fraction of the width of the chart (from 0 to 1).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Width() override;
    /// <summary>
    /// Sets the width of a plot area bounding box as a fraction of the width of the chart (from 0 to 1).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Width(float value) override;
    /// <summary>
    /// Returns the height of a plot area bounding box as a fraction of the height of the chart (from 0 to 1).
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Height() override;
    /// <summary>
    /// Sets the height of a plot area bounding box as a fraction of the height of the chart (from 0 to 1).
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Height(float value) override;
    /// <summary>
    /// Right.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Right() override;
    /// <summary>
    /// Bottom.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Bottom() override;
    /// <summary>
    /// Chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    /// <summary>
    /// Defines how location should be calculated: true – calculated automatically; defined by the X, Y, Width, Height properties.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsLocationAutocalculated();
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
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Charts::LayoutTargetType get_LayoutTargetType() override;
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
    ASPOSE_SLIDES_SHARED_API void set_LayoutTargetType(Aspose::Slides::Charts::LayoutTargetType value) override;
    /// <summary>
    /// Specifies actual x location (left) of the chart element relative to the left top corner of the chart.
    /// Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_ActualX() override;
    /// <summary>
    /// Specifies actual top of the chart element relative to the left top corner of the chart.
    /// Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_ActualY() override;
    /// <summary>
    /// Specifies actual width of the chart element. Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_ActualWidth() override;
    /// <summary>
    /// Specifies actual height of the chart element. Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_ActualHeight() override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    bool _isLocationAutocalculated;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartPlotAreaPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API float get_XInternal();
    ASPOSE_SLIDES_LOCAL_API float get_YInternal();
    ASPOSE_SLIDES_LOCAL_API float get_WidthInternal();
    ASPOSE_SLIDES_LOCAL_API float get_HeightInternal();
    /// <summary>
    /// Specifies actual x location (left) of the chart element relative to the left top corner of the chart.
    /// Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualX(float value);
    /// <summary>
    /// Specifies actual top of the chart element relative to the left top corner of the chart.
    /// Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualY(float value);
    /// <summary>
    /// Specifies actual width of the chart element. Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualWidth(float value);
    /// <summary>
    /// Specifies actual height of the chart element. Call method IChart::ValidateChartLayout before to get actual values. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualHeight(float value);
    
    ASPOSE_SLIDES_LOCAL_API ChartPlotArea(System::SharedPtr<Aspose::Slides::Charts::Chart> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartPlotArea, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Charts::Chart> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartPlotArea();
    
private:

    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartPlotAreaPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<IFormat> m_format;
    Aspose::Slides::Charts::LayoutTargetType m_layoutTargetType;
    float pr_ActualX;
    float pr_ActualY;
    float pr_ActualWidth;
    float pr_ActualHeight;
    
    /// <summary>
    /// Returns the parent slide of a FillFormat.
    /// Read-only <see cref="BaseSlide"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a FillFormat.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


