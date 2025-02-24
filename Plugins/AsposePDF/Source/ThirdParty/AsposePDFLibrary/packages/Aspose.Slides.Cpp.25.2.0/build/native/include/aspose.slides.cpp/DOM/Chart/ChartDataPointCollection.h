#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/predicate.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Chart/IChartDataPointCollection.h>
#include <DOM/Chart/IChartDataPoint.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartSeries.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class BannerDataLabelElement;
class BannerDataLabelText;
class ChartDataBuilder;
class ChartDataPoint;
class ChartDataPointLevel;
class ChartDataPointLevelsManager;
class ChartSeriesRenderContext;
class DataLabel;
enum class DataSourceType;
class DataSourceTypeForErrorBarsCustomValues;
class DataSourceTypeHolder;
class ErrorBarsCustomValues;
class IChartDataCell;
class IChartDataPointLevel;
class IDataSourceTypeForErrorBarsCustomValues;
template <typename> class ListOfChartDataItems;
class TreemapDataLabelText;
} // namespace Charts
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
class ChartCacheDataSerializer;
class ChartDataCachePPTXSerialization;
class ChartDataPointPPTXSerialization;
class ChartDataPPTXSerialization;
class ChartDataSerializer;
class ChartSeriesExPPTXSerialization;
class ChartSeriesPPTXSerialization;
class DataLabelsExPPTXSerialization;
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
class ChartDataPointCollectionPPTXUnsupportedProps;
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
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents collection of a series data point.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartDataPointCollection : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartSeries>>, public Aspose::Slides::Charts::IChartDataPointCollection
{
    typedef ChartDataPointCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartSeries>> BaseType;
    typedef Aspose::Slides::Charts::IChartDataPointCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::ChartDataBuilder;
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::Charts::ChartDataPointLevelsManager;
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::ErrorBarsCustomValues;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelsExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCacheDataSerializer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataSerializer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataCachePPTXSerialization;
    friend class Aspose::Slides::Charts::BannerDataLabelElement;
    friend class Aspose::Slides::Charts::BannerDataLabelText;
    friend class Aspose::Slides::Charts::TreemapDataLabelText;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPointPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IChartDataPoint>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XValue property object. In other words it specifies 
    /// the type of value of ChartDataPoint.XValue.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DataSourceType get_DataSourceTypeForXValues() override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points XValue property object. In other words it specifies 
    /// the type of value of ChartDataPoint.XValue.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceTypeForXValues(DataSourceType value) override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YValue property object. In other words it specifies 
    /// the type of value of ChartDataPoint.YValue.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DataSourceType get_DataSourceTypeForYValues() override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points YValue property object. In other words it specifies 
    /// the type of value of ChartDataPoint.YValue.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceTypeForYValues(DataSourceType value) override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points BubbleSize property object. In other words it specifies 
    /// the type of value of ChartDataPoint.BubbleSize.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DataSourceType get_DataSourceTypeForBubbleSizes() override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points BubbleSize property object. In other words it specifies 
    /// the type of value of ChartDataPoint.BubbleSize.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceTypeForBubbleSizes(DataSourceType value) override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points Value property object. In other words it specifies 
    /// the type of value of ChartDataPoint.Value.Data property.
    /// Read <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DataSourceType get_DataSourceTypeForValues() override;
    /// <summary>
    /// Specifies whether AsCell or AsLiteralString or AsLiteralDouble property 
    /// is actual in data points Value property object. In other words it specifies 
    /// the type of value of ChartDataPoint.Value.Data property.
    /// Write <see cref="DataSourceType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DataSourceTypeForValues(DataSourceType value) override;
    /// <summary>
    /// Specifies types of values in ChartDataPoint::get_ErrorBarsCustomValues properties list.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataSourceTypeForErrorBarsCustomValues">IDataSourceTypeForErrorBarsCustomValues</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataSourceTypeForErrorBarsCustomValues> get_DataSourceTypeForErrorBarsCustomValues() override;
    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Returns the series data point by index (its serial number in this collection).
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> idx_get(int32_t index) override;
    /// <summary>
    /// Return index (serial number) of data point in this collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t idx_get(System::SharedPtr<IChartDataPoint> pt) override;
    
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> GetOrCreateDataPointByIdx(uint32_t index) override;
    /// <summary>
    /// Copy to specified array.
    /// </summary>
    /// <param name="array">Array to copy to.</param>
    /// <param name="arrayIndex">Index to begin copying.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IChartDataPoint>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IChartDataPoint>>> GetEnumerator() override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Stock subtypes
    /// (see also <see cref="ChartTypeCharacterizer::IsChartTypeStock(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value.</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForStockSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Stock subtypes 
    /// (see also <see cref="ChartTypeCharacterizer::IsChartTypeStock(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value.</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForStockSeries(double value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Line subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeLine(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value.</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForLineSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Line subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeLine(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value.</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForLineSeries(double value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeScatter(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(System::SharedPtr<IChartDataCell> xValue, System::SharedPtr<IChartDataCell> yValue) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeScatter(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(double xValue, System::SharedPtr<IChartDataCell> yValue) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeScatter(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(System::String xValue, System::SharedPtr<IChartDataCell> yValue) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeScatter(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(System::SharedPtr<IChartDataCell> xValue, double yValue) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeScatter(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(double xValue, double yValue) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Scatter subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeScatter(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForScatterSeries(System::String xValue, double yValue) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Radar subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeRadar(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForRadarSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Radar subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeRadar(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForRadarSeries(double value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Column or Bar subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeColumn(ChartType)"></see> and <see cref="ChartTypeCharacterizer::IsChartTypeBar(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBarSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Column or Bar subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeColumn(ChartType)"></see> and <see cref="ChartTypeCharacterizer::IsChartTypeBar(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBarSeries(double value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Area subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeArea(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForAreaSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Area subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeArea(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForAreaSeries(double value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Pie subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypePie(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForPieSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Pie subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypePie(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForPieSeries(double value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Doughnut subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeDoughnut(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForDoughnutSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Doughnut subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeDoughnut(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForDoughnutSeries(double value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::SharedPtr<IChartDataCell> xValue, System::SharedPtr<IChartDataCell> yValue, System::SharedPtr<IChartDataCell> bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(double xValue, System::SharedPtr<IChartDataCell> yValue, System::SharedPtr<IChartDataCell> bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::String xValue, System::SharedPtr<IChartDataCell> yValue, System::SharedPtr<IChartDataCell> bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::SharedPtr<IChartDataCell> xValue, double yValue, System::SharedPtr<IChartDataCell> bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(double xValue, double yValue, System::SharedPtr<IChartDataCell> bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::String xValue, double yValue, System::SharedPtr<IChartDataCell> bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::SharedPtr<IChartDataCell> xValue, System::SharedPtr<IChartDataCell> yValue, double bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(double xValue, System::SharedPtr<IChartDataCell> yValue, double bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::String xValue, System::SharedPtr<IChartDataCell> yValue, double bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::SharedPtr<IChartDataCell> xValue, double yValue, double bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(double xValue, double yValue, double bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Bubble subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeBubble(ChartType)"></see> method).
    /// </summary>
    /// <param name="xValue">Data point XValue</param>
    /// <param name="yValue">Data point YValue</param>
    /// <param name="bubbleSize">Data point BubbleSize</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBubbleSeries(System::String xValue, double yValue, double bubbleSize) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Surface subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeSurface(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForSurfaceSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chartType is one of Surface subtypes (see also <see cref="ChartTypeCharacterizer::IsChartTypeSurface(ChartType)"></see> method).
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForSurfaceSeries(double value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Sunburst.
    /// </summary>
    /// <param name="sizeValue">Data point SizeValue</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForSunburstSeries(System::SharedPtr<IChartDataCell> sizeValue) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Treemap.
    /// </summary>
    /// <param name="sizeValue">Data point SizeValue</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForTreemapSeries(System::SharedPtr<IChartDataCell> sizeValue) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is BoxAndWhisker.
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForBoxAndWhiskerSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Waterfall.
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForWaterfallSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Histogram.
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForHistogramSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Creates the new data point and adds it to the end of collection.
    /// Applicable for series which chart type is Funnel.
    /// </summary>
    /// <param name="value">Data point Value</param>
    /// <returns>New data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForFunnelSeries(System::SharedPtr<IChartDataCell> value) override;
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> AddDataPointForMapSeries(System::SharedPtr<IChartDataCell> value) override;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Removes the specified value.
    /// </summary>
    /// <param name="value">The value.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IChartDataPoint> value) override;
    /// <summary>
    /// Removes the element at the given index.
    /// </summary>
    /// <param name="index">Index of a data point to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartSeries> get_ParentSeries();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::Charts::ChartDataPointCollectionPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::String get_XValuesCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_XValuesCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_YValuesCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_YValuesCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_ValuesCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_ValuesCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_BubbleSizeCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_BubbleSizeCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_XPlusCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_XPlusCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_XMinusCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_XMinusCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_YPlusCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_YPlusCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_YMinusCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_YMinusCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_SizeValuesCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_SizeValuesCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_ColorValuesCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_ColorValuesCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API bool get_IsValidXValueCachedData() const;
    ASPOSE_SLIDES_LOCAL_API void set_IsValidXValueCachedData(bool value);
    ASPOSE_SLIDES_LOCAL_API uint32_t get_DataPointsCountCached() const;
    ASPOSE_SLIDES_LOCAL_API void set_DataPointsCountCached(uint32_t value);
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataPoint> AddEmptyPoint();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointWithValue(System::SharedPtr<IChartDataCell> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointWithValue(double value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointWithSizeValue(System::SharedPtr<IChartDataCell> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataPoint> AddDataPointWithColorValue(System::SharedPtr<IChartDataCell> value);
    ASPOSE_SLIDES_LOCAL_API void RemoveInternal(System::SharedPtr<ChartDataPoint> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataPointLevel> GetDataPointLevelByIndex(int32_t desiredIndex);
    
    ASPOSE_SLIDES_LOCAL_API ChartDataPointCollection(System::SharedPtr<ChartSeries> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataPointCollection, CODEPORTING_ARGS(System::SharedPtr<ChartSeries> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForXValuesHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForYValuesHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForBubbleSizesHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForSizeValuesHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForValuesHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataSourceTypeHolder> GetDataSourceTypeForColorValuesHolder();
    ASPOSE_SLIDES_LOCAL_API int32_t IndexOf(System::SharedPtr<IChartDataPoint> dataPoint);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataPoint> Find(System::Predicate<System::SharedPtr<IChartDataPoint>> match);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartDataPointCollection();
    
private:

    System::String pr_XValuesCachedFormula;
    System::String pr_YValuesCachedFormula;
    System::String pr_ValuesCachedFormula;
    System::String pr_BubbleSizeCachedFormula;
    System::String pr_XPlusCachedFormula;
    System::String pr_XMinusCachedFormula;
    System::String pr_YPlusCachedFormula;
    System::String pr_YMinusCachedFormula;
    System::String pr_SizeValuesCachedFormula;
    System::String pr_ColorValuesCachedFormula;
    bool pr_IsValidXValueCachedData;
    uint32_t pr_DataPointsCountCached;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::Charts::ChartDataPointCollectionPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForXValues;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForYValues;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForBubbleSizes;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForValues;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForSizeValues;
    System::SharedPtr<DataSourceTypeHolder> m_dataSourceTypeForColorValues;
    System::SharedPtr<ListOfChartDataItems<System::SharedPtr<IChartDataPoint>>> m_dataPoints;
    System::SharedPtr<Aspose::Slides::Charts::DataSourceTypeForErrorBarsCustomValues> m_dataSourceTypeForErrorBarsCustomValues;
    
    ASPOSE_SLIDES_LOCAL_API void Add(System::SharedPtr<ChartDataPoint> dataPoint);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


