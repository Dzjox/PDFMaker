#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartSeriesGroup.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class BubbleSizeRepresentationType;
class Chart;
class ChartSeries;
class ChartSeriesGroupCollection;
class ChartSeriesReadonlyCollection;
class ChartSeriesRenderContext;
enum class CombinableSeriesTypesGroup;
class IChart;
class IChartDataPoint;
class IChartLinesFormat;
class IChartSeries;
class IChartSeriesReadonlyCollection;
class IPieSplitCustomPointCollection;
class IUpDownBarsManager;
class PieSplitCustomPointCollection;
enum class PieSplitType;
class UpDownBarsManager;
} // namespace Charts
class IBaseSlide;
class IPresentation;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartDataPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class ChartSeriesGroupPPTXUnsupportedProps;
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
/// Represents group of series.
/// </summary>
/// <remarks>
/// 1) See summary and remarks for ChartSeriesGroupCollection class and CombinableSeriesTypesGroup enum.
/// 2) Group of series contains some series properies whitch is common for 
/// each series in group ("series group properties").
/// "Series group properties" in ChartSeriesGroup class is read/write.
/// Each of "series group properties" can have a read-only projection in ChartSeries class.
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS ChartSeriesGroup : public Aspose::Slides::Charts::IChartSeriesGroup, public Aspose::Slides::IDOMObject
{
    typedef ChartSeriesGroup ThisType;
    typedef Aspose::Slides::Charts::IChartSeriesGroup BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::Charts::ChartSeriesGroupCollection;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a type of this series group.
    /// Read-only <see cref="CombinableSeriesTypesGroup"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API CombinableSeriesTypesGroup get_Type() override;
    /// <summary>
    /// Indicates if series of this group is plotted on secondary axis.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_PlotOnSecondAxis() override;
    /// <summary>
    /// Returns a collection of series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeriesReadonlyCollection">IChartSeriesReadonlyCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeriesReadonlyCollection> get_Series() override;
    /// <summary>
    /// Provede access to up/down bars of Line- or Stock-chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IUpDownBarsManager">IUpDownBarsManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IUpDownBarsManager> get_UpDownBars() override;
    /// <summary>
    /// Specifies the space between bar or column clusters, as a percentage of the bar or column width.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_GapWidth() override;
    /// <summary>
    /// Specifies the space between bar or column clusters, as a percentage of the bar or column width.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GapWidth(uint16_t value) override;
    /// <summary>
    /// Returns the distance, as a percentage of the marker width, between the data series in a 3D chart.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_GapDepth() override;
    /// <summary>
    /// Sets the distance, as a percentage of the marker width, between the data series in a 3D chart.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GapDepth(uint16_t value) override;
    /// <summary>
    /// Gets the angle of the first pie or doughnut chart slice, 
    /// in degrees (clockwise from up, from 0 to 360 degrees).
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_FirstSliceAngle() override;
    /// <summary>
    /// Sets the angle of the first pie or doughnut chart slice, 
    /// in degrees (clockwise from up, from 0 to 360 degrees).
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FirstSliceAngle(uint16_t value) override;
    /// <summary>
    /// Specifies the size of the hole in a doughnut chart (can be between 0 and 90 percents 
    /// of the size of the plot area.).
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint8_t get_DoughnutHoleSize() override;
    /// <summary>
    /// Specifies the size of the hole in a doughnut chart (can be between 0 and 90 percents 
    /// of the size of the plot area.).
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DoughnutHoleSize(uint8_t value) override;
    /// <summary>
    /// Specifies how much bars and columns shall overlap on 2-D charts, as a percentage (from -100% to 100%).
    /// - -100%: Maximum spacing (bars are completely separated).
    /// - 0%: Bars are placed side by side without overlap or spacing.
    /// - 100%: Maximum overlap (bars completely overlap each other).
    /// This property is read/write <see cref="int8_t"></see>.
    /// </summary>
    /// <example>
    /// The following example demonstrates how to set the overlap for a chart series group 
    /// and render the resulting chart on a form:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// System::SharedPtr<ISlide> slide = pres->get_Slide(0);
    /// 
    /// System::SharedPtr<IChart> chart = slide->get_Shapes()->AddChart(ChartType::ClusteredColumn, 10.0f, 10.0f, 600.0f, 300.0f);
    /// System::SharedPtr<IChartSeriesCollection> series = chart->get_ChartData()->get_Series();
    /// series->idx_get(0)->get_ParentSeriesGroup()->set_Overlap(55); // Set overlap to 55%
    /// 
    /// auto image = slide->GetImage(1.0f, 1.0f);
    /// image->Save(u"image.png", ImageFormat::Png);
    /// </code>
    /// </example>
    /// <exception cref="System::ArgumentOutOfRangeException">
    /// Thrown when the value is set outside the valid range of -100 to 100.
    /// </exception>
    ASPOSE_SLIDES_SHARED_API int8_t get_Overlap() override;
    /// <summary>
    /// Specifies how much bars and columns shall overlap on 2-D charts, as a percentage (from -100% to 100%).
    /// - -100%: Maximum spacing (bars are completely separated).
    /// - 0%: Bars are placed side by side without overlap or spacing.
    /// - 100%: Maximum overlap (bars completely overlap each other).
    /// This property is read/write <see cref="int8_t"></see>.
    /// </summary>
    /// <example>
    /// The following example demonstrates how to set the overlap for a chart series group 
    /// and render the resulting chart on a form:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// System::SharedPtr<ISlide> slide = pres->get_Slide(0);
    /// 
    /// System::SharedPtr<IChart> chart = slide->get_Shapes()->AddChart(ChartType::ClusteredColumn, 10.0f, 10.0f, 600.0f, 300.0f);
    /// System::SharedPtr<IChartSeriesCollection> series = chart->get_ChartData()->get_Series();
    /// series->idx_get(0)->get_ParentSeriesGroup()->set_Overlap(55); // Set overlap to 55%
    /// 
    /// auto image = slide->GetImage(1.0f, 1.0f);
    /// image->Save(u"image.png", ImageFormat::Png);
    /// </code>
    /// </example>
    /// <exception cref="System::ArgumentOutOfRangeException">
    /// Thrown when the value is set outside the valid range of -100 to 100.
    /// </exception>
    ASPOSE_SLIDES_SHARED_API void set_Overlap(int8_t value) override;
    /// <summary>
    /// Specifies the size of the second pie or bar of a pie-of-pie chart or 
    /// a bar-of-pie chart, as a percentage of the size of the first pie (can 
    /// be between 5 and 200 percents).
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_SecondPieSize() override;
    /// <summary>
    /// Specifies the size of the second pie or bar of a pie-of-pie chart or 
    /// a bar-of-pie chart, as a percentage of the size of the first pie (can 
    /// be between 5 and 200 percents).
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SecondPieSize(uint16_t value) override;
    /// <summary>
    /// Specifies how the bubble size values are represented on the bubble chart.
    /// Read <see cref="BubbleSizeRepresentationType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API BubbleSizeRepresentationType get_BubbleSizeRepresentation() override;
    /// <summary>
    /// Specifies how the bubble size values are represented on the bubble chart.
    /// Write <see cref="BubbleSizeRepresentationType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BubbleSizeRepresentation(BubbleSizeRepresentationType value) override;
    /// <summary>
    /// Specifies a value that shall be used to determine which data points 
    /// are in the second pie or bar on a pie-of-pie or bar-of-pie chart. 
    /// Is used together with PieSplitBy property.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_PieSplitPosition() override;
    /// <summary>
    /// Specifies a value that shall be used to determine which data points 
    /// are in the second pie or bar on a pie-of-pie or bar-of-pie chart. 
    /// Is used together with PieSplitBy property.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PieSplitPosition(double value) override;
    /// <summary>
    /// Specifies how to determine which data points are in the second pie or bar 
    /// on a pie-of-pie or bar-of-pie chart.
    /// Read <see cref="PieSplitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PieSplitType get_PieSplitBy() override;
    /// <summary>
    /// Specifies how to determine which data points are in the second pie or bar 
    /// on a pie-of-pie or bar-of-pie chart.
    /// Write <see cref="PieSplitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PieSplitBy(PieSplitType value) override;
    /// <summary>
    /// Specifies that each data marker in the series has a different color.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsColorVaried() override;
    /// <summary>
    /// Specifies that each data marker in the series has a different color.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsColorVaried(bool value) override;
    /// <summary>
    /// True if chart has series lines. Applied to stacked bar and OfPie charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasSeriesLines() override;
    /// <summary>
    /// True if chart has series lines. Applied to stacked bar and OfPie charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasSeriesLines(bool value) override;
    /// <summary>
    /// Specifies HiLowLines format. 
    /// HiLowLines applied with HiLowClose, OpenHiLowClose, VolumeHiLowClose and VolumeOpenHiLowClose chart types.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartLinesFormat> get_HiLowLinesFormat() override;
    /// <summary>
    /// Specifies the scale factor for the bubble chart (can be 
    /// between 0 and 300 percents of the default size).
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_BubbleSizeScale() override;
    /// <summary>
    /// Specifies the scale factor for the bubble chart (can be 
    /// between 0 and 300 percents of the default size).
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BubbleSizeScale(int32_t value) override;
    /// <summary>
    /// The custom split information for a pie-of-pie or bar-of-pie chart with a custom split.
    /// Contains data points that shall be drawn in the second pie or bar in a pie-of-pie or 
    /// bar-of-pie chart.
    /// Read-only <see cref="Aspose::Slides::Charts::PieSplitCustomPointCollection">PieSplitCustomPointCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPieSplitCustomPointCollection> get_PieSplitCustomPoints() override;
    /// <summary>
    /// Returns the parent chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> idx_get(int32_t index) override;
    
    /// <summary>
    /// Returns the chart series in the group at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> get_ChartSeries(int32_t index) override;
    /// <summary>
    /// The custom split information for a pie-of-pie or bar-of-pie chart with a custom split.
    /// Returns data point that shall be drawn in the second pie or bar in a pie-of-pie or bar-of-pie chart by index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> get_PieSplitCustomPoint(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_ShowNegativeBubbles();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartLinesFormat> get_SeriesLinesFormat();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartLinesFormat> get_DropLinesFormat();
    ASPOSE_SLIDES_LOCAL_API bool get_HasDropLines();
    ASPOSE_SLIDES_LOCAL_API bool get_HasHiLowLines();
    ASPOSE_SLIDES_LOCAL_API bool get_Wireframe();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartSeriesGroupPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API ChartSeriesGroup(System::SharedPtr<ChartSeriesGroupCollection> parentImmediate, System::SharedPtr<ChartSeries> firstSeries);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartSeriesGroup, CODEPORTING_ARGS(System::SharedPtr<ChartSeriesGroupCollection> parentImmediate, System::SharedPtr<ChartSeries> firstSeries));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartSeriesGroup();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
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
    
    System::WeakPtr<ChartSeriesGroupCollection> m_parentImmediate;
    System::WeakPtr<Aspose::Slides::Charts::Chart> m_parentChart;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartSeriesGroupPPTXUnsupportedProps> m_pptxUnsupportedProps;
    CombinableSeriesTypesGroup m_type;
    bool m_plotOnSecondAxis;
    System::SharedPtr<ChartSeriesReadonlyCollection> m_series;
    System::SharedPtr<UpDownBarsManager> m_upDownBars;
    uint16_t m_gapWidth;
    uint16_t m_gapDepth;
    bool m_varyColors;
    uint16_t m_firstSliceAngle;
    int8_t m_overlap;
    System::SharedPtr<IChartLinesFormat> m_dropLines;
    System::SharedPtr<IChartLinesFormat> m_hiLowLines;
    System::SharedPtr<IChartLinesFormat> m_seriesLines;
    BubbleSizeRepresentationType m_bubbleSizeRepresentation;
    System::SharedPtr<PieSplitCustomPointCollection> m_pieSplitCustomPoints;
    double m_pieSplitPosition;
    PieSplitType m_pieSplitBy;
    uint8_t m_doughnutHoleSize;
    uint16_t m_secondPieSize;
    int32_t m_bubbleSizeScale;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


