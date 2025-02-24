#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartDataPoint.h>
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
namespace ChartHelpers
{
class LegendHelper;
} // namespace ChartHelpers
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
namespace Charts
{
class AggregatedDataPointCollection;
class BannerDataLabelElement;
class BannerDataLabelText;
class ChartCacheValue;
class ChartDataPointCollection;
class ChartDataPointLevel;
class ChartDataPointLevelsManager;
class ChartSeriesRenderContext;
class DataLabel;
class DataPointElement;
class DataPointRenderContext;
class DoubleChartValue;
class ErrorBarsCustomValues;
class Format;
class IChartDataPointLevel;
class IChartDataPointLevelsManager;
class IDataLabel;
class IDoubleChartValue;
class IErrorBarsCustomValues;
class IFormat;
class ILegendEntryProperties;
class IMarker;
class IStringOrDoubleChartValue;
class LegendElement;
class LegendEntryProperties;
class LineSeriesBaseElement;
class LineSeriesElement;
class Marker;
class RadarPointElement;
class ScatterPointElement;
class StringOrDoubleChartValue;
class SunburstElement;
class TreemapDataLabelText;
class TreemapSquareElement;
class WaterfallSeriesElement;
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
class ChartDataPointExPPTXSerialization;
class ChartDataPointPPTXSerialization;
class ChartSeriesPPTXSerialization;
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
class ChartDataPointPPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
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
/// Represents series data point.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartDataPoint : public Aspose::Slides::Charts::IChartDataPoint, public Aspose::Slides::IDOMObject
{
    typedef ChartDataPoint ThisType;
    typedef Aspose::Slides::Charts::IChartDataPoint BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::Charts::ChartDataPointLevelsManager;
    friend class Aspose::Slides::Charts::AggregatedDataPointCollection;
    friend class Aspose::Slides::Charts::ChartDataPointCollection;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::ErrorBarsCustomValues;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPointExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCacheDataSerializer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataCachePPTXSerialization;
    friend class Aspose::Slides::Charts::DataPointElement;
    friend class Aspose::Slides::Charts::LineSeriesBaseElement;
    friend class Aspose::Slides::Charts::RadarPointElement;
    friend class Aspose::Slides::Charts::ScatterPointElement;
    friend class Aspose::Slides::Charts::SunburstElement;
    friend class Aspose::Slides::Charts::BannerDataLabelElement;
    friend class Aspose::Slides::Charts::BannerDataLabelText;
    friend class Aspose::Slides::Charts::TreemapDataLabelText;
    friend class Aspose::Slides::Charts::TreemapSquareElement;
    friend class Aspose::Slides::Charts::WaterfallSeriesElement;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::Charts::DataPointRenderContext;
    friend class Aspose::Slides::Charts::LegendElement;
    friend class Aspose::Slides::Charts::LineSeriesElement;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::LegendHelper;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPointPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// XValue.
    /// Read-only <see cref="Aspose::Slides::Charts::IStringOrDoubleChartValue">IStringOrDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IStringOrDoubleChartValue> get_XValue() override;
    /// <summary>
    /// YValue.
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_YValue() override;
    /// <summary>
    /// BubbleSize.
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_BubbleSize() override;
    /// <summary>
    /// Value.
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_Value() override;
    /// <summary>
    /// Returns the size value of chart data point.
    /// Used with Treemap and Sunburst charts. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_SizeValue() override;
    /// <summary>
    /// Returns the color value of chart data point.
    /// Used with Map charts. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_ColorValue() override;
    /// <summary>
    /// Represents series error bars values in case of Custom value type.
    /// Read-only <see cref="Aspose::Slides::Charts::IErrorBarsCustomValues">IErrorBarsCustomValues</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IErrorBarsCustomValues> get_ErrorBarsCustomValues() override;
    /// <summary>
    /// Label.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabel">IDataLabel</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataLabel> get_Label() override;
    /// <summary>
    /// Specifies that the bubbles have a 3-D effect applied to them.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsBubble3D() override;
    /// <summary>
    /// Specifies that the bubbles have a 3-D effect applied to them.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsBubble3D(bool value) override;
    /// <summary>
    /// Specifies the amount the data point shall be moved from the center of the pie.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Explosion() override;
    /// <summary>
    /// Specifies the amount the data point shall be moved from the center of the pie.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Explosion(int32_t value) override;
    /// <summary>
    /// Represents the formatting properties.
    /// Read <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Represents the formatting properties.
    /// Write <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    ASPOSE_SLIDES_SHARED_API void set_Format(System::SharedPtr<IFormat> value) override;
    /// <summary>
    /// Specifies a data marker.
    /// Read-only <see cref="Aspose::Slides::Charts::IMarker">IMarker</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMarker> get_Marker() override;
    /// <summary>
    /// Sets data point as total. Applied for Waterfall series type only.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SetAsTotal() override;
    /// <summary>
    /// Sets data point as total. Applied for Waterfall series type only.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SetAsTotal(bool value) override;
    /// <summary>
    /// Properties of corresponding legend entry in case of chart type from this list:
    /// ChartType::BarOfPie,
    /// ChartType::ExplodedPie,
    /// ChartType::ExplodedPie3D,
    /// ChartType::Pie,
    /// ChartType::Pie3D,
    /// ChartType::PieOfPie.
    /// Read-only <see cref="Aspose::Slides::Charts::ILegendEntryProperties">ILegendEntryProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILegendEntryProperties> get_RelatedLegendEntry() override;
    /// <summary>
    /// Returns container of  data point levels. Applied for Treeamp and Sunburst series.
    /// Data point levels indexing is zero-based.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPointLevelsManager> get_DataPointLevels() override;
    /// <inheritdoc ></inheritdoc>
    ASPOSE_SLIDES_SHARED_API uint32_t get_Index() override;
    /// <summary>
    /// Specifies the data point shall invert its colors if the value is negative.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_InvertIfNegative() override;
    /// <summary>
    /// Specifies the data point shall invert its colors if the value is negative.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_InvertIfNegative(bool value) override;
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
    
    /// <summary>
    /// Removes DataPoint from chart series.
    /// </summary>
    /// <exception cref="PptxEditException">
    /// Thrown if data point is already removed from chart series.
    /// </exception>
    ASPOSE_SLIDES_SHARED_API void Remove() override;
    /// <summary>
    /// Returns an automatic color of data point based on series index, data point index, ParentSeriesGroup.IsColorVaried property and chart style.
    /// This color is used by default if FillType equals NotDefined.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Color GetAutomaticDataPointColor() override;
    /// <summary>
    /// Returns a data point level at the specified index. Applied for Treeamp and Sunburst series.
    /// Data point levels indexing is zero-based.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPointLevel> get_DataPointLevel(int32_t level) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IFormat> get_FormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IMarker> get_MarkerInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartDataPointPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    /// <inheritdoc ></inheritdoc>
    ASPOSE_SLIDES_SHARED_API void set_Index(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataPointCollection> get_ParentDataPointCollection();
    ASPOSE_SLIDES_LOCAL_API bool get_IsOtherPoint() const;
    ASPOSE_SLIDES_LOCAL_API void set_IsOtherPoint(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_ValueCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_XValueCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_YValueCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_BubbleSizeCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_XPlusCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_XMinusCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_YPlusCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_YMinusCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_SizeCached();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCacheValue> get_ColorValueCached();
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
    
    ASPOSE_SLIDES_LOCAL_API ChartDataPoint(System::SharedPtr<ChartDataPointCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataPoint, CODEPORTING_ARGS(System::SharedPtr<ChartDataPointCollection> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IFormat> GetAutomaticDataPointFormat();
    ASPOSE_SLIDES_LOCAL_API bool IsAllowedAutomaticFormat();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartDataPoint();
    
private:

    uint32_t pr_Index;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    bool pr_InvertIfNegative;
    bool pr_IsOtherPoint;
    float pr_ActualX;
    float pr_ActualY;
    float pr_ActualWidth;
    float pr_ActualHeight;
    System::WeakPtr<ChartDataPointCollection> m_parentImmediate;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartDataPointPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<StringOrDoubleChartValue> m_xValue;
    System::SharedPtr<DoubleChartValue> m_yValue;
    System::SharedPtr<DoubleChartValue> m_bubbleSize;
    System::SharedPtr<DoubleChartValue> m_value;
    System::SharedPtr<DoubleChartValue> m_sizeValue;
    System::SharedPtr<DoubleChartValue> m_colorValue;
    System::SharedPtr<DataLabel> m_labelProperties;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    bool m_isBubble3D;
    int32_t m_explosion;
    System::SharedPtr<Aspose::Slides::Charts::Marker> m_marker;
    System::SharedPtr<LegendEntryProperties> m_legendEntryProperties;
    System::SharedPtr<Aspose::Slides::Charts::ErrorBarsCustomValues> m_errorBarCustomValues;
    System::SharedPtr<IFormat> m_automaticFormatCached;
    int32_t m_automaticFormatCachedLastIndex;
    int32_t m_automaticFormatCachedLastCount;
    bool m_setAsTotal;
    System::SharedPtr<ChartCacheValue> m_valueCached;
    System::SharedPtr<ChartCacheValue> m_xValueCached;
    System::SharedPtr<ChartCacheValue> m_yValueCached;
    System::SharedPtr<ChartCacheValue> m_BubbleSizeCached;
    System::SharedPtr<ChartCacheValue> m_xPlusCached;
    System::SharedPtr<ChartCacheValue> m_xMinusCached;
    System::SharedPtr<ChartCacheValue> m_yPlusCached;
    System::SharedPtr<ChartCacheValue> m_yMinusCached;
    System::SharedPtr<ChartCacheValue> m_sizeCached;
    System::SharedPtr<ChartCacheValue> m_colorValueCached;
    System::SharedPtr<IChartDataPointLevelsManager> m_levels;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


