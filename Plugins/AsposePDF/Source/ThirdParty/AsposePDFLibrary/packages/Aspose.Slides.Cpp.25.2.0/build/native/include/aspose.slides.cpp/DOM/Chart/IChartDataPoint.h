#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Chart/IActualLayout.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataPointLevel;
class IChartDataPointLevelsManager;
class IDataLabel;
class IDoubleChartValue;
class IErrorBarsCustomValues;
class IFormat;
class ILegendEntryProperties;
class IMarker;
class IStringOrDoubleChartValue;
} // namespace Charts
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
class ASPOSE_SLIDES_API_SHARED_CLASS IChartDataPoint : public Aspose::Slides::Charts::IActualLayout
{
    typedef IChartDataPoint ThisType;
    typedef Aspose::Slides::Charts::IActualLayout BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the x value of chart data point.
    /// Read-only <see cref="Aspose::Slides::Charts::IStringOrDoubleChartValue">IStringOrDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IStringOrDoubleChartValue> get_XValue() = 0;
    /// <summary>
    /// Returns the y value of chart data point.
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_YValue() = 0;
    /// <summary>
    /// Returns the bubble size of chart data point.
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_BubbleSize() = 0;
    /// <summary>
    /// Returns the value of chart data point.
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_Value() = 0;
    /// <summary>
    /// Returns the size value of chart data point.
    /// Used with Treemap and Sunburst charts. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_SizeValue() = 0;
    /// <summary>
    /// Returns the color value of chart data point.
    /// Used with Map charts. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_ColorValue() = 0;
    /// <summary>
    /// Represents series error bars values in case of Custom value type.
    /// Read-only <see cref="Aspose::Slides::Charts::IErrorBarsCustomValues">IErrorBarsCustomValues</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IErrorBarsCustomValues> get_ErrorBarsCustomValues() = 0;
    /// <summary>
    /// Represents the lable of chart data point.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabel">IDataLabel</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataLabel> get_Label() = 0;
    /// <summary>
    /// Specifies that the bubbles have a 3-D effect applied to them.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsBubble3D() = 0;
    /// <summary>
    /// Specifies that the bubbles have a 3-D effect applied to them.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsBubble3D(bool value) = 0;
    /// <summary>
    /// Specifies the amount the data point shall be moved from the center of the pie.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Explosion() = 0;
    /// <summary>
    /// Specifies the amount the data point shall be moved from the center of the pie.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Explosion(int32_t value) = 0;
    /// <summary>
    /// Represents the formatting properties.
    /// Read <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// Represents the formatting properties.
    /// Write <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>  
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Format(System::SharedPtr<IFormat> value) = 0;
    /// <summary>
    /// Specifies a data marker.
    /// Read-only <see cref="Aspose::Slides::Charts::IMarker">IMarker</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMarker> get_Marker() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILegendEntryProperties> get_RelatedLegendEntry() = 0;
    /// <summary>
    /// Sets data point as total. Applied for Waterfall series type only.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SetAsTotal() = 0;
    /// <summary>
    /// Sets data point as total. Applied for Waterfall series type only.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SetAsTotal(bool value) = 0;
    /// <summary>
    /// Specifies the data point shall invert its colors if the value is negative.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_InvertIfNegative() = 0;
    /// <summary>
    /// Specifies the data point shall invert its colors if the value is negative.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_InvertIfNegative(bool value) = 0;
    /// <summary>
    /// Returns container of  data point levels. Applied for Treeamp and Sunburst series.
    /// Data point levels indexing is zero-based.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPointLevelsManager> get_DataPointLevels() = 0;
    /// <summary>
    /// Determines which of the parent's children collection this data point applies to.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_Index() = 0;
    
    /// <summary>
    /// Removes DataPoint from chart series.
    /// </summary>
    /// <exception cref="PptxEditException">
    /// Thrown if data point is already removed from chart series.
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove() = 0;
    /// <summary>
    /// Returns an automatic color of data point based on series index, data point index, ParentSeriesGroup.IsColorVaried propery and chart style. 
    /// This color is used by default if FillType equals NotDefined. 
    /// </summary>
    /// <returns>Automatic color of data point <see cref="System::Drawing::Color"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color GetAutomaticDataPointColor() = 0;
    /// <summary>
    /// Returns a data point level at the specified index. Applied for Treeamp and Sunburst series.
    /// Data point levels indexing is zero-based.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataPointLevel> get_DataPointLevel(int32_t level) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


