#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Chart/IChartComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class BubbleSizeRepresentationType;
enum class CombinableSeriesTypesGroup;
class IChartDataPoint;
class IChartLinesFormat;
class IChartSeries;
class IChartSeriesReadonlyCollection;
class IPieSplitCustomPointCollection;
class IUpDownBarsManager;
enum class PieSplitType;
} // namespace Charts
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
class ASPOSE_SLIDES_API_SHARED_CLASS IChartSeriesGroup : public Aspose::Slides::Charts::IChartComponent
{
    typedef IChartSeriesGroup ThisType;
    typedef Aspose::Slides::Charts::IChartComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a type of this series group.
    /// Read-only <see cref="CombinableSeriesTypesGroup"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API CombinableSeriesTypesGroup get_Type() = 0;
    /// <summary>
    /// Indicates if series of this group is plotted on secondary axis.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PlotOnSecondAxis() = 0;
    /// <summary>
    /// Returns a readonly collection of chart series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeriesReadonlyCollection">IChartSeriesReadonlyCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeriesReadonlyCollection> get_Series() = 0;
    /// <summary>
    /// Provede access to up/down bars of Line- or Stock-chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IUpDownBarsManager">IUpDownBarsManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IUpDownBarsManager> get_UpDownBars() = 0;
    /// <summary>
    /// Specifies the space between bar or column clusters, as a percentage of the bar or column width.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_GapWidth() = 0;
    /// <summary>
    /// Specifies the space between bar or column clusters, as a percentage of the bar or column width.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GapWidth(uint16_t value) = 0;
    /// <summary>
    /// Returns the distance, as a percentage of the marker width, between the data series in a 3D chart.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_GapDepth() = 0;
    /// <summary>
    /// Sets the distance, as a percentage of the marker width, between the data series in a 3D chart.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_GapDepth(uint16_t value) = 0;
    /// <summary>
    /// Gets the angle of the first pie or doughnut chart slice, 
    /// in degrees (clockwise from up, from 0 to 360 degrees).
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_FirstSliceAngle() = 0;
    /// <summary>
    /// Sets the angle of the first pie or doughnut chart slice, 
    /// in degrees (clockwise from up, from 0 to 360 degrees).
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FirstSliceAngle(uint16_t value) = 0;
    /// <summary>
    /// Specifies that each data marker in the series has a different color.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsColorVaried() = 0;
    /// <summary>
    /// Specifies that each data marker in the series has a different color.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsColorVaried(bool value) = 0;
    /// <summary>
    /// True if chart has series lines. Applied to stacked bar and OfPie charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasSeriesLines() = 0;
    /// <summary>
    /// True if chart has series lines. Applied to stacked bar and OfPie charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasSeriesLines(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API int8_t get_Overlap() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Overlap(int8_t value) = 0;
    /// <summary>
    /// Specifies the size of the second pie or bar of a pie-of-pie chart or 
    /// a bar-of-pie chart, as a percentage of the size of the first pie (can 
    /// be between 5 and 200 percents).
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_SecondPieSize() = 0;
    /// <summary>
    /// Specifies the size of the second pie or bar of a pie-of-pie chart or 
    /// a bar-of-pie chart, as a percentage of the size of the first pie (can 
    /// be between 5 and 200 percents).
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SecondPieSize(uint16_t value) = 0;
    /// <summary>
    /// Specifies a value that shall be used to determine which data points 
    /// are in the second pie or bar on a pie-of-pie or bar-of-pie chart. 
    /// Is used together with PieSplitBy property.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_PieSplitPosition() = 0;
    /// <summary>
    /// Specifies a value that shall be used to determine which data points 
    /// are in the second pie or bar on a pie-of-pie or bar-of-pie chart. 
    /// Is used together with PieSplitBy property.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PieSplitPosition(double value) = 0;
    /// <summary>
    /// Specifies how to determine which data points are in the second pie or bar 
    /// on a pie-of-pie or bar-of-pie chart.
    /// Read <see cref="PieSplitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API PieSplitType get_PieSplitBy() = 0;
    /// <summary>
    /// Specifies how to determine which data points are in the second pie or bar 
    /// on a pie-of-pie or bar-of-pie chart.
    /// Write <see cref="PieSplitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PieSplitBy(PieSplitType value) = 0;
    /// <summary>
    /// The custom split information for a pie-of-pie or bar-of-pie chart with a custom split.
    /// Contains data points that shall be drawn in the second pie or bar in a pie-of-pie or 
    /// bar-of-pie chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IPieSplitCustomPointCollection">IPieSplitCustomPointCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPieSplitCustomPointCollection> get_PieSplitCustomPoints() = 0;
    /// <summary>
    /// Specifies the size of the hole in a doughnut chart (can be between 10 and 90 percents 
    /// of the size of the plot area.).
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_DoughnutHoleSize() = 0;
    /// <summary>
    /// Specifies the size of the hole in a doughnut chart (can be between 10 and 90 percents 
    /// of the size of the plot area.).
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DoughnutHoleSize(uint8_t value) = 0;
    /// <summary>
    /// Specifies the scale factor for the bubble chart (can be 
    /// between 0 and 300 percents of the default size).
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_BubbleSizeScale() = 0;
    /// <summary>
    /// Specifies the scale factor for the bubble chart (can be 
    /// between 0 and 300 percents of the default size).
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BubbleSizeScale(int32_t value) = 0;
    /// <summary>
    /// Specifies HiLowLines format. 
    /// HiLowLines applied with HiLowClose, OpenHiLowClose, VolumeHiLowClose and VolumeOpenHiLowClose chart types.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartLinesFormat> get_HiLowLinesFormat() = 0;
    /// <summary>
    /// Specifies how the bubble size values are represented on the bubble chart.
    /// Read <see cref="BubbleSizeRepresentationType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API BubbleSizeRepresentationType get_BubbleSizeRepresentation() = 0;
    /// <summary>
    /// Specifies how the bubble size values are represented on the bubble chart.
    /// Write <see cref="BubbleSizeRepresentationType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BubbleSizeRepresentation(BubbleSizeRepresentationType value) = 0;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Returns the chart series in the group at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> get_ChartSeries(int32_t index) = 0;
    /// <summary>
    /// The custom split information for a pie-of-pie or bar-of-pie chart with a custom split.
    /// Returns data point that shall be drawn in the second pie or bar in a pie-of-pie or bar-of-pie chart by index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> get_PieSplitCustomPoint(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


