#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class DataSourceType;
class IChartDataCell;
class IChartDataPoint;
class IDataSourceTypeForErrorBarsCustomValues;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents collection of a series data point.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartDataPointCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartDataPoint>>
{
    typedef IChartDataPointCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartDataPoint>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property
    /// is actual in data points XValue property object. In other words it specifies
    /// the type of value of ChartDataPointEx.XValue.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API DataSourceType get_DataSourceTypeForXValues() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property
    /// is actual in data points XValue property object. In other words it specifies
    /// the type of value of ChartDataPointEx.XValue.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceTypeForXValues(DataSourceType value) = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property
    /// is actual in data points YValue property object. In other words it specifies
    /// the type of value of ChartDataPointEx.YValue.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API DataSourceType get_DataSourceTypeForYValues() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property
    /// is actual in data points YValue property object. In other words it specifies
    /// the type of value of ChartDataPointEx.YValue.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceTypeForYValues(DataSourceType value) = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property
    /// is actual in data points BubbleSize property object. In other words it specifies
    /// the type of value of ChartDataPointEx.BubbleSize.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API DataSourceType get_DataSourceTypeForBubbleSizes() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property
    /// is actual in data points BubbleSize property object. In other words it specifies
    /// the type of value of ChartDataPointEx.BubbleSize.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceTypeForBubbleSizes(DataSourceType value) = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property
    /// is actual in data points Value property object. In other words it specifies
    /// the type of value of ChartDataPoint.Value.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API DataSourceType get_DataSourceTypeForValues() = 0;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property
    /// is actual in data points Value property object. In other words it specifies
    /// the type of value of ChartDataPoint.Value.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DataSourceTypeForValues(DataSourceType value) = 0;
    /// <summary>
    /// Specifies the type of values in ChartDataPoint.ErrorBarsCustomValues properties list.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataSourceTypeForErrorBarsCustomValues">IDataSourceTypeForErrorBarsCustomValues</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataSourceTypeForErrorBarsCustomValues> get_DataSourceTypeForErrorBarsCustomValues() = 0;
    
    /// <summary>
    /// Returns the series data point by index (its serial number in this collection).
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> idx_get(int32_t index) = 0;
    /// <summary>
    /// Return index (serial number in this collection) of data point in this collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t idx_get(System::SharedPtr<IChartDataPoint> pt) = 0;
    
    /// <summary>
    /// If collection already contains data point with index <paramref name="index"></paramref> then returns this data point.
    /// If collection doesn't contains data point with index <paramref name="index"></paramref>==N
    /// (when number of data points in this collection is less or equal then N)
    /// then adds deficient data points and returns last (which has requested index).
    /// For example, collection indexes are {0, 1, 2}, and requested index is 5.
    /// Then method adds deficient data points: {0, 1, 2, 3, 4, 5}. And returns data point with index 5.
    /// </summary>
    /// <param name="index">Index.</param>
    /// <returns>Returns data point with requested index.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> GetOrCreateDataPointByIdx(uint32_t index) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Stock subtypes (see also ChartTypeCharacterizer.IsChartTypeStock(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value.</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForStockSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Stock subtypes (see also ChartTypeCharacterizer.IsChartTypeStock(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value.</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForStockSeries(double value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Line subtypes (see also ChartTypeCharacterizer.IsChartTypeLine(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value.</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForLineSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Line subtypes (see also ChartTypeCharacterizer.IsChartTypeLine(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value.</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForLineSeries(double value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also ChartTypeCharacterizer.IsChartTypeScatter(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(System::SharedPtr<IChartDataCell> xValue, System::SharedPtr<IChartDataCell> yValue) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also ChartTypeCharacterizer.IsChartTypeScatter(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(double xValue, System::SharedPtr<IChartDataCell> yValue) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also ChartTypeCharacterizer.IsChartTypeScatter(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(System::String xValue, System::SharedPtr<IChartDataCell> yValue) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also ChartTypeCharacterizer.IsChartTypeScatter(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(System::SharedPtr<IChartDataCell> xValue, double yValue) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also ChartTypeCharacterizer.IsChartTypeScatter(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(double xValue, double yValue) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also ChartTypeCharacterizer.IsChartTypeScatter(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(System::String xValue, double yValue) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Radar subtypes (see also ChartTypeCharacterizer.IsChartTypeRadar(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForRadarSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Radar subtypes (see also ChartTypeCharacterizer.IsChartTypeRadar(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForRadarSeries(double value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Column or Bar subtypes (see also ChartTypeCharacterizer.IsChartTypeColumn(ChartType) and ChartTypeCharacterizer.IsChartTypeBar(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBarSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Column or Bar subtypes (see also ChartTypeCharacterizer.IsChartTypeColumn(ChartType) and ChartTypeCharacterizer.IsChartTypeBar(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBarSeries(double value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Area subtypes (see also ChartTypeCharacterizer.IsChartTypeArea(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForAreaSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Area subtypes (see also ChartTypeCharacterizer.IsChartTypeArea(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForAreaSeries(double value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Pie subtypes (see also ChartTypeCharacterizer.IsChartTypePie(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForPieSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Pie subtypes (see also ChartTypeCharacterizer.IsChartTypePie(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForPieSeries(double value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Doughnut subtypes (see also ChartTypeCharacterizer.IsChartTypeDoughnut(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForDoughnutSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Doughnut subtypes (see also ChartTypeCharacterizer.IsChartTypeDoughnut(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForDoughnutSeries(double value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::SharedPtr<IChartDataCell> xValue, System::SharedPtr<IChartDataCell> yValue, System::SharedPtr<IChartDataCell> bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(double xValue, System::SharedPtr<IChartDataCell> yValue, System::SharedPtr<IChartDataCell> bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::String xValue, System::SharedPtr<IChartDataCell> yValue, System::SharedPtr<IChartDataCell> bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::SharedPtr<IChartDataCell> xValue, double yValue, System::SharedPtr<IChartDataCell> bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(double xValue, double yValue, System::SharedPtr<IChartDataCell> bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::String xValue, double yValue, System::SharedPtr<IChartDataCell> bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::SharedPtr<IChartDataCell> xValue, System::SharedPtr<IChartDataCell> yValue, double bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(double xValue, System::SharedPtr<IChartDataCell> yValue, double bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::String xValue, System::SharedPtr<IChartDataCell> yValue, double bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::SharedPtr<IChartDataCell> xValue, double yValue, double bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(double xValue, double yValue, double bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also ChartTypeCharacterizer.IsChartTypeBubble(ChartType) method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::String xValue, double yValue, double bubbleSize) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Surface subtypes (see also ChartTypeCharacterizer.IsChartTypeSurface(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForSurfaceSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Surface subtypes (see also ChartTypeCharacterizer.IsChartTypeSurface(ChartType) method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForSurfaceSeries(double value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Sunburst.
    /// </summary>
    /// <param name="sizeValue">Data point SizeValue</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForSunburstSeries(System::SharedPtr<IChartDataCell> sizeValue) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Waterfall.
    /// </summary>
    /// <param name="value">Data point value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForWaterfallSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is BoxAndWhisker.
    /// </summary>
    /// <param name = "value">Data point Value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForBoxAndWhiskerSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Treemap.
    /// </summary>
    /// <param name="sizeValue">Data point SizeValue</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForTreemapSeries(System::SharedPtr<IChartDataCell> sizeValue) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Histogram.
    /// </summary>
    /// <param name="value">Data point value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForHistogramSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Funnel.
    /// </summary>
    /// <param name="value">Data point value</param>
    /// <returns>New data point.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForFunnelSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Map.
    /// </summary>
    /// <param name="value">Data point ColorValue</param>
    /// <returns>New data point.</returns>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(Aspose::Slides::Charts::ChartType::Map, 50.0f, 50.0f, 500.0f, 400.0f, false);
    /// auto wb = chart->get_ChartData()->get_ChartDataWorkbook();
    /// 
    /// auto series = chart->get_ChartData()->get_Series()->Add(Aspose::Slides::Charts::ChartType::Map);
    /// series->get_DataPoints()->AddDataPointForMapSeries(wb->GetCell(0, u"B2", System::ObjectExt::Box<int32_t>(5)));
    /// series->get_DataPoints()->AddDataPointForMapSeries(wb->GetCell(0, u"B3", System::ObjectExt::Box<int32_t>(1)));
    /// series->get_DataPoints()->AddDataPointForMapSeries(wb->GetCell(0, u"B4", System::ObjectExt::Box<int32_t>(10)));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointForMapSeries(System::SharedPtr<IChartDataCell> value) = 0;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Removes the specified value.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <exception cref="System::ArgumentException ">The value parameter was not found in the collection.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IChartDataPoint> value) = 0;
    /// <summary>
    /// Removes the element at the given index.
    /// </summary>
    /// <param name="index">Index of a data point to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


