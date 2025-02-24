#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

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
enum class ChartShapeType;
enum class ChartType;
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
enum class ParentLabelLayoutType;
enum class PieSplitType;
enum class QuartileMethodType;
} // namespace Charts
class IColorFormat;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a chart series.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartSeries : public Aspose::Slides::Charts::IChartComponent
{
    typedef IChartSeries ThisType;
    typedef Aspose::Slides::Charts::IChartComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Explosion() = 0;
    /// <summary>
    /// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Explosion(int32_t value) = 0;
    /// <summary>
    /// Represents curve smoothing. True if curve smoothing is turned on for the line chart or scatter chart. Applies only to line and scatter connected by lines charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Smooth() = 0;
    /// <summary>
    /// Represents curve smoothing. True if curve smoothing is turned on for the line chart or scatter chart. Applies only to line and scatter connected by lines charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Smooth(bool value) = 0;
    /// <summary>
    /// Return series marker.
    /// Read-only <see cref="Aspose::Slides::Charts::IMarker">IMarker</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMarker> get_Marker() = 0;
    /// <summary>
    /// Specifies the shape of a series of a 3-D bar chart.
    /// Changing of value of this property can cause to automatically changing Type of series.
    /// Read <see cref="ChartShapeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ChartShapeType get_Bar3DShape() = 0;
    /// <summary>
    /// Specifies the shape of a series of a 3-D bar chart.
    /// Changing of value of this property can cause to automatically changing Type of series.
    /// Write <see cref="ChartShapeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Bar3DShape(ChartShapeType value) = 0;
    /// <summary>
    /// Return series name.
    /// Read-only <see cref="Aspose::Slides::Charts::IStringChartValue">IStringChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IStringChartValue> get_Name() = 0;
    /// <summary>
    /// Returns collection of data points of this series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartDataPointCollection">IChartDataPointCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPointCollection> get_DataPoints() = 0;
    /// <summary>
    /// Returns a type of this series.
    /// Read <see cref="ChartType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ChartType get_Type() = 0;
    /// <summary>
    /// Returns a type of this series.
    /// Write <see cref="ChartType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(ChartType value) = 0;
    /// <summary>
    /// Returns parent series group.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeriesGroup">IChartSeriesGroup</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeriesGroup> get_ParentSeriesGroup() = 0;
    /// <summary>
    /// Returns the format of a series.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// Returns the order of a series.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Order() = 0;
    /// <summary>
    /// Returns the order of a series.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Order(int32_t value) = 0;
    /// <summary>
    /// Returns the Labels of a series.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabelCollection">IDataLabelCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataLabelCollection> get_Labels() = 0;
    /// <summary>
    /// Collection of series trend lines
    /// Read-only <see cref="Aspose::Slides::Charts::ITrendlineCollection">ITrendlineCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITrendlineCollection> get_TrendLines() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IErrorBarsFormat> get_ErrorBarsXFormat() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IErrorBarsFormat> get_ErrorBarsYFormat() = 0;
    /// <summary>
    /// Indicates if this series is plotted on second value axis.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PlotOnSecondAxis() = 0;
    /// <summary>
    /// Indicates if this series is plotted on second value axis.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PlotOnSecondAxis(bool value) = 0;
    /// <summary>
    /// Returns the number format for series values.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_NumberFormatOfValues() = 0;
    /// <summary>
    /// Sets the number format for series values.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberFormatOfValues(System::String value) = 0;
    /// <summary>
    /// Returns the number format for series x values.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_NumberFormatOfXValues() = 0;
    /// <summary>
    /// Sets the number format for series x values.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberFormatOfXValues(System::String value) = 0;
    /// <summary>
    /// Returns the number format for series y values.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_NumberFormatOfYValues() = 0;
    /// <summary>
    /// Sets the number format for series y values.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberFormatOfYValues(System::String value) = 0;
    /// <summary>
    /// Returns the number format for series bubble sizes.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_NumberFormatOfBubbleSizes() = 0;
    /// <summary>
    /// Sets the number format for series bubble sizes.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberFormatOfBubbleSizes(System::String value) = 0;
    /// <summary>
    /// Specifies the bar, column or bubble series shall invert its colors if the value is negative.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_InvertIfNegative() = 0;
    /// <summary>
    /// Specifies the bar, column or bubble series shall invert its colors if the value is negative.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_InvertIfNegative(bool value) = 0;
    /// <summary>
    /// Specifies invert solid color for series. To apply color setting set series format FillType to FillType::Solid.
    /// Read <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_InvertedSolidFillColor() = 0;
    /// <summary>
    /// Represents legend entry related with this series
    /// Read-only <see cref="Aspose::Slides::Charts::ILegendEntryProperties">ILegendEntryProperties</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILegendEntryProperties> get_RelatedLegendEntry() = 0;
    /// <summary>
    /// Represents inner points. True if inner points are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowInnerPoints() = 0;
    /// <summary>
    /// Represents inner points. True if inner points are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowInnerPoints(bool value) = 0;
    /// <summary>
    /// Represents outlier points. True if outlier points are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowOutlierPoints() = 0;
    /// <summary>
    /// Represents outlier points. True if outlier points are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowOutlierPoints(bool value) = 0;
    /// <summary>
    /// Represents mean markers. True if mean markers are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowMeanMarkers() = 0;
    /// <summary>
    /// Represents mean markers. True if mean markers are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowMeanMarkers(bool value) = 0;
    /// <summary>
    /// Represents mean markers. True if mean line are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowMeanLine() = 0;
    /// <summary>
    /// Represents mean markers. True if mean line are shown on the BoxAndWhisker chart. Applies only to BoxAndWhisker charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowMeanLine(bool value) = 0;
    /// <summary>
    /// Represents quartile method. Applies only to BoxAndWhisker charts.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API QuartileMethodType get_QuartileMethod() = 0;
    /// <summary>
    /// Represents quartile method. Applies only to BoxAndWhisker charts.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_QuartileMethod(QuartileMethodType value) = 0;
    /// <summary>
    /// Represents connector lines. Applies only to Waterfall charts.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowConnectorLines() = 0;
    /// <summary>
    /// Represents connector lines. Applies only to Waterfall charts.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowConnectorLines(bool value) = 0;
    /// <summary>
    /// Represents layout of parent category labels. Applies only to Treemap charts.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ParentLabelLayoutType get_ParentLabelLayout() = 0;
    /// <summary>
    /// Represents layout of parent category labels. Applies only to Treemap charts.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ParentLabelLayout(ParentLabelLayoutType value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_BubbleSizeScale() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasUpDownBars() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_GapWidth() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_GapDepth() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsColorVaried() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasSeriesLines() = 0;
    /// <summary>
    /// Specifies how much bars and columns overlap on 2-D charts, as a percentage (from -100% to 100%). 
    /// This is the property not only of this series but of all series of parent series group. 
    /// It is a projection of the appropriate property in the parent series group, and so this property is read-only.
    /// To change the value, use the get_ParentSeriesGroup()->get(set)_Overlap() read/write property.
    /// Read-only <see cref="int8_t"></see>.
    /// </summary>
    /// <remarks>
    /// Overlap specifies the degree of overlap or spacing between bars and columns as a percentage of their width:
    /// - -100%: Maximum spacing (bars are completely separated).
    /// - 0%: Bars are placed side by side without overlap or spacing.
    /// - 100%: Maximum overlap (bars completely overlap each other).
    /// This is a projection of the property get_ParentSeriesGroup()->get(set)_Overlap().
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API int8_t get_Overlap() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_SecondPieSize() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_PieSplitPosition() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API PieSplitType get_PieSplitBy() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_DoughnutHoleSize() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_FirstSliceAngle() = 0;
    /// <summary>
    /// The custom split information for a pie-of-pie or bar-of-pie chart with a custom split.
    /// Contains data points that shall be drawn in the second pie or bar in a pie-of-pie or 
    /// bar-of-pie chart.
    /// This is the property not only of this series but of all series of parent series 
    /// group - this is projection of appropriate group property
    /// Read-only <see cref="Aspose::Slides::Charts::IPieSplitCustomPointCollection">IPieSplitCustomPointCollection</see>.
    /// </summary>
    /// <remarks>
    /// This is the projection of the property get_ParentSeriesGroup()->get_PieSplitCustomPoints().
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPieSplitCustomPointCollection> get_PieSplitCustomPoints() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API BubbleSizeRepresentationType get_BubbleSizeRepresentation() = 0;
    
    /// <summary>
    /// Returns an automatic color of series based on series index and chart style. 
    /// This color is used by default if FillType equals NotDefined. 
    /// </summary>
    /// <returns>Automatic color of series <see cref="System::Drawing::Color"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color GetAutomaticSeriesColor() = 0;
    /// <summary>
    /// Returns data point of this series at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> get_DataPoint(int32_t index) = 0;
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_DataPoint(System::SharedPtr<IChartDataPoint> pt) = 0;
    /// <summary>
    /// Returns chart series in the parent series group at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> get_ParentSeries(int32_t index) = 0;
    /// <summary>
    /// Returns data label for the data point of this series at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataLabel> get_Label(int32_t index) = 0;
    /// <summary>
    /// Returns trend line at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITrendline> get_TrendLine(int32_t index) = 0;
    /// <summary>
    /// The custom split information for a pie-of-pie or bar-of-pie chart with a custom split.
    /// Returns data point that shall be drawn in the second pie or bar in a pie-of-pie or bar-of-pie chart at the specified index.
    /// </summary>
    /// <remarks>
    /// This is projection of the get_PieSplitCustomPoint(index) in get_ParentSeriesGroup().
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> get_PieSplitCustomPoint(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


