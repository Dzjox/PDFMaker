#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/IChartSeries.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Cells
{
namespace Render
{
namespace Chart2007
{
class ThemeColors_Chart2007;
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
namespace Charts
{
class AggregatedDataPointCollection;
class BannerDataLabelText;
class BoxAndWhiskerDataLabelText;
class BoxAndWhiskerSeriesElement;
class BubbleChartDataBuilder;
class BubbleSeriesGroupElement;
enum class BubbleSizeRepresentationType;
class CategoryValueChartDataBuilder;
class Chart;
class ChartDataPointCollection;
class ChartDataWorkbook;
class ChartRenderContext;
class ChartSeriesCollection;
class ChartSeriesGroup;
class ChartSeriesReadonlyCollection;
class ChartSeriesRenderContext;
enum class ChartShapeType;
enum class ChartType;
class CoordinateSystemElement;
class DataLabel;
class DataLabelCollection;
class DataLabelFormat;
class DataLabelRenderContext;
enum class DataSourceType;
class ErrorBarsFormat;
class Format;
class HistogramDataLabelText;
class HistogramSeriesElement;
class HorizontalCategoryAxisEx;
class IChart;
class IChartDataPoint;
class IChartDataPointCollection;
class IChartSeriesGroup;
class IDataLabel;
class IDataLabelCollection;
class IErrorBarsFormat;
class IFormat;
class ILegendEntryProperties;
class IMarker;
class IPieSplitCustomPointCollection;
class IStringChartValue;
class ITrendline;
class ITrendlineCollection;
class LegendEntryCollection;
class LegendEntryProperties;
class Marker;
class MarkerElement;
class MarkerRenderContext;
enum class ParentLabelLayoutType;
class ParetoLineSeriesElement;
enum class PieSplitType;
enum class QuartileMethodType;
class ScatterChartDataBuilder;
class SeriesGroupElement;
class StringChartValue;
class TreemapDataLabelText;
class TrendlineCollection;
} // namespace Charts
class IBaseSlide;
class IColorFormat;
class IPresentation;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartCacheDataSerializer;
class ChartDataCachePPTXSerialization;
class ChartDataExPPTXSerialization;
class ChartDataPPTXSerialization;
class ChartPPTXSerialization;
class ChartSeriesExPPTXSerialization;
class ChartSeriesPPTXSerialization;
class DataLabelsExPPTXSerialization;
class MapLayoutPrElementParser;
class WorkbookPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class ChartSeriesPPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a chart series.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartSeries : public Aspose::Slides::Charts::IChartSeries, public Aspose::Slides::IDOMObject
{
    typedef ChartSeries ThisType;
    typedef Aspose::Slides::Charts::IChartSeries BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::CategoryValueChartDataBuilder;
    friend class Aspose::Slides::Charts::BubbleChartDataBuilder;
    friend class Aspose::Slides::Charts::ScatterChartDataBuilder;
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::Charts::AggregatedDataPointCollection;
    friend class Aspose::Slides::Charts::ChartSeriesReadonlyCollection;
    friend class Aspose::Slides::Charts::DataLabelFormat;
    friend class Aspose::Slides::Charts::ChartSeriesCollection;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::LegendEntryCollection;
    friend class Aspose::Slides::Charts::Marker;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelsExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::MapLayoutPrElementParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCacheDataSerializer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataCachePPTXSerialization;
    friend class Aspose::Slides::Charts::HorizontalCategoryAxisEx;
    friend class Aspose::Slides::Charts::BoxAndWhiskerDataLabelText;
    friend class Aspose::Slides::Charts::BoxAndWhiskerSeriesElement;
    friend class Aspose::Slides::Charts::SeriesGroupElement;
    friend class Aspose::Slides::Charts::BubbleSeriesGroupElement;
    friend class Aspose::Slides::Charts::HistogramDataLabelText;
    friend class Aspose::Slides::Charts::HistogramSeriesElement;
    friend class Aspose::Slides::Charts::ParetoLineSeriesElement;
    friend class Aspose::Slides::Charts::BannerDataLabelText;
    friend class Aspose::Slides::Charts::TreemapDataLabelText;
    friend class Aspose::Cells::Render::Chart2007::ThemeColors_Chart2007;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::Charts::CoordinateSystemElement;
    friend class Aspose::Slides::Charts::MarkerElement;
    friend class Aspose::Slides::Charts::ChartRenderContext;
    friend class Aspose::Slides::Charts::MarkerRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the parent chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    /// <summary>
    /// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Explosion() override;
    /// <summary>
    /// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Explosion(int32_t value) override;
    /// <summary>
    /// Represents curve smoothing. True if curve smoothing is turned on for the line chart or scatter chart.
    /// Applies only to line and scatter connected by lines charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Smooth() override;
    /// <summary>
    /// Represents curve smoothing. True if curve smoothing is turned on for the line chart or scatter chart.
    /// Applies only to line and scatter connected by lines charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Smooth(bool value) override;
    /// <summary>
    /// Return series name.
    /// Read-only <see cref="Aspose::Slides::Charts::IStringChartValue">IStringChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IStringChartValue> get_Name() override;
    /// <summary>
    /// Returns collection of data points of this series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartDataPointCollection">IChartDataPointCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPointCollection> get_DataPoints() override;
    /// <summary>
    /// Returns a type of this series.
    /// Read <see cref="ChartType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ChartType get_Type() override;
    /// <summary>
    /// Returns a type of this series.
    /// Write <see cref="ChartType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(ChartType value) override;
    /// <summary>
    /// Indicates if this series is plotted on secondary axis.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_PlotOnSecondAxis() override;
    /// <summary>
    /// Indicates if this series is plotted on secondary axis.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PlotOnSecondAxis(bool value) override;
    /// <summary>
    /// ParentSeriesGroup.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeriesGroup">IChartSeriesGroup</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeriesGroup> get_ParentSeriesGroup() override;
    /// <summary>
    /// Returns the format of a series.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Returns the order of a series.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Order() override;
    /// <summary>
    /// Returns the order of a series.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Order(int32_t value) override;
    /// <summary>
    /// Returns the Labels of a series.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabelCollection">IDataLabelCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataLabelCollection> get_Labels() override;
    /// <summary>
    /// Collection of series trend lines.
    /// Read-only <see cref="Aspose::Slides::Charts::ITrendlineCollection">ITrendlineCollection</see>.
    /// </summary>
    /// <remarks>
    /// TrendLines are available (not null) for data series in unstacked 2-D area, bar, column, line, 
    /// stock, xy (scatter), and bubble charts. A trendline are not available for data series 
    /// in any chart type that is stacked or 3-D. Trendlines are also not available for radar, 
    /// pie, surface, or doughnut charts. 
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITrendlineCollection> get_TrendLines() override;
    /// <summary>
    /// Represents ErrorBars of series with derection X. 
    /// <remarks>
    /// ErrorBars with X direction are avalible for series of type area, bar, scatter and bubble. 
    /// For any other types of chart this property returns null (including 3D charts).
    /// In case of custom values use DataPoints collection to specify value
    /// (with <see cref="Aspose::Slides::Charts::IChartDataPoint::get_ErrorBarsCustomValues">IChartDataPoint::get_ErrorBarsCustomValues()</see> property).
    /// </remarks>
    /// Read-only <see cref="Aspose::Slides::Charts::IErrorBarsFormat">IErrorBarsFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IErrorBarsFormat> get_ErrorBarsXFormat() override;
    /// <summary>
    /// Represents ErrorBars of series with derection Y.
    /// <remarks>
    /// ErrorBars with Y direction are avalible for series of type area, bar, line, scatter and bubble. 
    /// For any other types of chart this property returns null (including 3D charts). 
    /// In case of custom values use DataPoints collection to specify value
    /// (with <see cref="Aspose::Slides::Charts::IChartDataPoint::get_ErrorBarsCustomValues">IChartDataPoint::get_ErrorBarsCustomValues()</see> property).
    /// </remarks>
    /// Read-only <see cref="Aspose::Slides::Charts::IErrorBarsFormat">IErrorBarsFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IErrorBarsFormat> get_ErrorBarsYFormat() override;
    /// <summary>
    /// Represents legend entry related with this series
    /// Read-only <see cref="Aspose::Slides::Charts::ILegendEntryProperties">ILegendEntryProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILegendEntryProperties> get_RelatedLegendEntry() override;
    /// <summary>
    /// NumberFormatOfValues.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_NumberFormatOfValues() override;
    /// <summary>
    /// NumberFormatOfValues.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NumberFormatOfValues(System::String value) override;
    /// <summary>
    /// NumberFormatOfXValues.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_NumberFormatOfXValues() override;
    /// <summary>
    /// NumberFormatOfXValues.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NumberFormatOfXValues(System::String value) override;
    /// <summary>
    /// NumberFormatOfYValues.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_NumberFormatOfYValues() override;
    /// <summary>
    /// NumberFormatOfYValues.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NumberFormatOfYValues(System::String value) override;
    /// <summary>
    /// NumberFormatOfBubbleSizes.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_NumberFormatOfBubbleSizes() override;
    /// <summary>
    /// NumberFormatOfBubbleSizes.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NumberFormatOfBubbleSizes(System::String value) override;
    /// <summary>
    /// Marker.
    /// Read-only <see cref="Aspose::Slides::Charts::IMarker">IMarker</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMarker> get_Marker() override;
    /// <summary>
    /// Specifies the shape of a series of a 3-D bar chart.
    /// Changing of value of this property can cause to automatically changing Type of series.
    /// Read <see cref="ChartShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ChartShapeType get_Bar3DShape() override;
    /// <summary>
    /// Specifies the shape of a series of a 3-D bar chart.
    /// Changing of value of this property can cause to automatically changing Type of series.
    /// Write <see cref="ChartShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Bar3DShape(ChartShapeType value) override;
    /// <summary>
    /// Specifies the bar, column or bubble series shall invert its colors if the value is negative.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_InvertIfNegative() override;
    /// <summary>
    /// Specifies the bar, column or bubble series shall invert its colors if the value is negative.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_InvertIfNegative(bool value) override;
    /// <summary>
    /// Specifies invert solid color for series. To apply color setting set series format FillType to FillType::Solid.
    /// Read <see cref="ColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_InvertedSolidFillColor() override;
    /// <summary>
    /// Represents inner points. True if inner points are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowInnerPoints() override;
    /// <summary>
    /// Represents inner points. True if inner points are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowInnerPoints(bool value) override;
    /// <summary>
    /// Represents outlier points. True if outlier points are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowOutlierPoints() override;
    /// <summary>
    /// Represents outlier points. True if outlier points are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowOutlierPoints(bool value) override;
    /// <summary>
    /// Represents mean markers. True if mean markers are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMeanMarkers() override;
    /// <summary>
    /// Represents mean markers. True if mean markers are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowMeanMarkers(bool value) override;
    /// <summary>
    /// Represents mean line. True if mean line are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMeanLine() override;
    /// <summary>
    /// Represents mean line. True if mean line are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowMeanLine(bool value) override;
    /// <summary>
    /// Represents quartile method. Applies only to BoxAndWhisker charts.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API QuartileMethodType get_QuartileMethod() override;
    /// <summary>
    /// Represents quartile method. Applies only to BoxAndWhisker charts.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_QuartileMethod(QuartileMethodType value) override;
    /// <summary>
    /// Represents connector lines. Applies only to Waterfall charts.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowConnectorLines() override;
    /// <summary>
    /// Represents connector lines. Applies only to Waterfall charts.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowConnectorLines(bool value) override;
    /// <summary>
    /// Represents layout of parent category labels.   Applies only to Treemap charts.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ParentLabelLayoutType get_ParentLabelLayout() override;
    /// <summary>
    /// Represents layout of parent category labels.   Applies only to Treemap charts.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ParentLabelLayout(ParentLabelLayoutType value) override;
    /// <summary>
    /// Determines whether Line- or Stock-chart has a up/down bars.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get_UpDownBars()->get(set)_HasUpDownBars() read/write property for change value.
    /// Use get_ParentSeriesGroup()->get_UpDownBars() property for format up/down bars.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get_UpDownBars()->get(set)_HasUpDownBars().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_HasUpDownBars() override;
    /// <summary>
    /// Specifies the space between bar or column clusters, as a percentage of the bar or column width.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_GapWidth() read/write property for change value.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_GapWidth().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API int32_t get_GapWidth() override;
    /// <summary>
    /// Returns the distance, as a percentage of the marker width, between the data series in a 3D chart.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_GapDepth() read/write property for change value.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_GapDepth().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API int32_t get_GapDepth() override;
    /// <summary>
    /// Specifies the angle of the first pie or doughnut chart slice, 
    /// in degrees (clockwise from up, from 0 to 360 degrees).
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_FirstSliceAngle() read/write property for change value.
    /// Read-only <see cref="uint16_t"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_FirstSliceAngle().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API uint16_t get_FirstSliceAngle() override;
    /// <summary>
    /// Specifies the size of the hole in a doughnut chart (can be between 10 and 90 percents 
    /// of the size of the plot area.).
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_DoughnutHoleSize() read/write property for change value.
    /// Read-only <see cref="uint8_t"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_DoughnutHoleSize().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API uint8_t get_DoughnutHoleSize() override;
    /// <summary>
    /// Specifies how much bars and columns overlap on 2-D charts, as a percentage (from -100% to 100%). 
    /// This is the property not only of this series but of all series of parent series group. 
    /// It is a projection of the appropriate property in the parent series group, and so this property is read-only.
    /// To change the value, use the <see cref="get_ParentSeriesGroup()->Overlap()"></see> read/write property.
    /// Read-only <see cref="int8_t"></see>.
    /// </summary>
    /// <remarks>
    /// Overlap specifies the degree of overlap or spacing between bars and columns as a percentage of their width:
    /// - -100%: Maximum spacing (bars are completely separated).
    /// - 0%: Bars are placed side by side without overlap or spacing.
    /// - 100%: Maximum overlap (bars completely overlap each other).
    /// This is a projection of the property <see cref="get_ParentSeriesGroup()->Overlap()"></see>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API int8_t get_Overlap() override;
    /// <summary>
    /// Specifies the size of the second pie or bar of a pie-of-pie chart or 
    /// a bar-of-pie chart, as a percentage of the size of the first pie (can 
    /// be between 5 and 200 percents).
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_SecondPieSize() read/write property for change value.
    /// Read-only <see cref="uint16_t"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_SecondPieSize().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API uint16_t get_SecondPieSize() override;
    /// <summary>
    /// Determines whether there are series lines for this series and kindred series.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_HasSeriesLines() read/write property for change value.
    /// Use ParentSeriesGroup.SeriesLinesFormat property for format series lines.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_HasSeriesLines().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_HasSeriesLines() override;
    /// <summary>
    /// Specifies how the bubble size values are represented on the bubble chart.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_BubbleSizeRepresentation() read/write property for change value.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_BubbleSizeRepresentation().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API BubbleSizeRepresentationType get_BubbleSizeRepresentation() override;
    /// <summary>
    /// Specifies a value that shall be used to determine which data points 
    /// are in the second pie or bar on a pie-of-pie or bar-of-pie chart. 
    /// Is used together with PieSplitBy property.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_PieSplitPosition() read/write property for change value.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_PieSplitPosition().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API double get_PieSplitPosition() override;
    /// <summary>
    /// Specifies how to determine which data points are in the second pie or bar 
    /// on a pie-of-pie or bar-of-pie chart.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_PieSplitBy() read/write property for change value.
    /// Read-only <see cref="PieSplitType"></see>.
    /// </summary>
    /// <remarks>
    /// 1) This is the projection of the property get_ParentSeriesGroup()->get(set)_PieSplitBy().
    /// 2) If property value is PieSplitType::Custom then you can define custom split 
    /// information with get_ParentSeriesGroup()->get_PieSplitCustomPoints() property.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API PieSplitType get_PieSplitBy() override;
    /// <summary>
    /// The custom split information for a pie-of-pie or bar-of-pie chart with a custom split.
    /// Contains data points that shall be drawn in the second pie or bar in a pie-of-pie or 
    /// bar-of-pie chart.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property
    /// Read-only <see cref="Aspose::Slides::Charts::PieSplitCustomPointCollection">PieSplitCustomPointCollection</see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get_PieSplitCustomPoints().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPieSplitCustomPointCollection> get_PieSplitCustomPoints() override;
    /// <summary>
    /// Specifies that each data marker in the series has a different color.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_IsColorVaried() read/write property for change value.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_IsColorVaried().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_IsColorVaried() override;
    /// <summary>
    /// Specifies the scale factor for the bubble chart (can be 
    /// between 0 and 300 percents of the default size).
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property. And so this property 
    /// is read-only.
    /// Use ParentSeriesGroup property for access to parent series group.
    /// Use get_ParentSeriesGroup()->get(set)_BubbleSizeScale() read/write property for change value.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get(set)_BubbleSizeScale().
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API int32_t get_BubbleSizeScale() override;
    
    /// <summary>
    /// Returns an automatic color of series based on series index and chart style. This color is used by default if FillType equals NotDefined. 
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Color GetAutomaticSeriesColor() override;
    /// <summary>
    /// Returns data point of this series at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> get_DataPoint(int32_t index) override;
    ASPOSE_SLIDES_SHARED_API int32_t get_DataPoint(System::SharedPtr<IChartDataPoint> pt) override;
    /// <summary>
    /// Returns chart series in the parent series group at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> get_ParentSeries(int32_t index) override;
    /// <summary>
    /// Returns data label for the data point of this series at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataLabel> get_Label(int32_t index) override;
    /// <summary>
    /// Returns trend line at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITrendline> get_TrendLine(int32_t index) override;
    /// <summary>
    /// The custom split information for a pie-of-pie or bar-of-pie chart with a custom split.
    /// Returns data point that shall be drawn in the second pie or bar in a pie-of-pie or bar-of-pie chart at the specified index.
    /// </summary>
    /// <remarks>
    /// This is projection of the get_PieSplitCustomPoint(index) in get_ParentSeriesGroup().
    /// </remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> get_PieSplitCustomPoint(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartSeriesPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API bool get_IsCorrupted() const;
    ASPOSE_SLIDES_LOCAL_API void set_IsCorrupted(bool value);
    /// <summary>
    /// Return series name.
    /// Read-only <see cref="Aspose::Slides::Charts::IStringChartValue">IStringChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::SharedPtr<IStringChartValue> value);
    ASPOSE_SLIDES_LOCAL_API System::String get_NumberFormatOfSizeValues();
    ASPOSE_SLIDES_LOCAL_API void set_NumberFormatOfSizeValues(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_NumberFormatOfColorValues();
    ASPOSE_SLIDES_LOCAL_API void set_NumberFormatOfColorValues(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AggregatedDataPointCollection> get_AggregatedDataPointsInternal();
    ASPOSE_SLIDES_LOCAL_API System::String get_SeriesNameCachedAsString();
    
    System::SharedPtr<System::Collections::Generic::List<System::String>> SeriesNameCachedAsList;
    
    ASPOSE_SLIDES_LOCAL_API System::String get_SeriesNameFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_SeriesNameFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API DataSourceType get_DataSourceTypeForSeriesName() const;
    ASPOSE_SLIDES_LOCAL_API void set_DataSourceTypeForSeriesName(DataSourceType value);
    ASPOSE_SLIDES_LOCAL_API bool get_HasDropLines();
    ASPOSE_SLIDES_LOCAL_API bool get_HasHiLowLines();
    ASPOSE_SLIDES_LOCAL_API bool get_ShowNegativeBubbles();
    ASPOSE_SLIDES_LOCAL_API bool get_Wireframe();
    
    ASPOSE_SLIDES_LOCAL_API ChartSeries(System::SharedPtr<ChartSeriesCollection> parentImmediate, ChartType type, bool isDeserializtion);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartSeries, CODEPORTING_ARGS(System::SharedPtr<ChartSeriesCollection> parentImmediate, ChartType type, bool isDeserializtion));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void AfterTypeChanged();
    ASPOSE_SLIDES_LOCAL_API void ValidateSeriesType();
    ASPOSE_SLIDES_LOCAL_API void InitializePlotOnSecondAxis(bool value);
    ASPOSE_SLIDES_LOCAL_API void SetParentSeriesGroup(System::SharedPtr<ChartSeriesGroup> parentSeriesGroup);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AggregatedDataPointCollection> GetAggregatedDataPoints();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartSeries();
    
private:

    System::WeakPtr<Aspose::Slides::Charts::Chart> m_parentChart;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    ChartType m_type;
    int32_t m_order;
    System::SharedPtr<Aspose::Slides::Charts::Marker> m_marker;
    System::SharedPtr<DataLabelCollection> m_labels;
    bool m_smooth;
    int32_t m_explosion;
    System::SharedPtr<IColorFormat> m_invertedSolidFillColor;
    ChartShapeType m_barShape;
    System::String m_numberFormatOfValues;
    System::String m_numberFormatOfXValues;
    System::String m_numberFormatOfYValues;
    System::String m_numberFormatOfBubbleSizes;
    System::String m_numberFormatOfSizeValues;
    System::String m_numberFormatOfColorValues;
    System::SharedPtr<TrendlineCollection> m_trendLines;
    bool m_invertIfNegative;
    bool m_plotOnSecondAxis;
    System::SharedPtr<LegendEntryProperties> m_legendEntryProperties;
    System::SharedPtr<StringChartValue> m_name;
    System::WeakPtr<ChartSeriesGroup> m_parentSeriesGroup;
    System::SharedPtr<ChartDataPointCollection> m_dataPoints;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartSeriesPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<ErrorBarsFormat> m_errorBarsXFormat;
    System::SharedPtr<ErrorBarsFormat> m_errorBarsYFormat;
    System::SharedPtr<AggregatedDataPointCollection> m_aggregatedDataPoints;
    bool m_showInnerPoints;
    bool m_showOutlierPoints;
    bool m_showMeanMarkers;
    bool m_showMeanLine;
    bool m_showConnectorLines;
    QuartileMethodType m_quartileMethod;
    ParentLabelLayoutType m_parentLabelLayout;
    bool pr_IsCorrupted;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::String pr_SeriesNameFormula;
    DataSourceType pr_DataSourceTypeForSeriesName;
    
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
    
    ASPOSE_SLIDES_LOCAL_API void ValidateMarkerSmoothNoLineBarShape();
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


