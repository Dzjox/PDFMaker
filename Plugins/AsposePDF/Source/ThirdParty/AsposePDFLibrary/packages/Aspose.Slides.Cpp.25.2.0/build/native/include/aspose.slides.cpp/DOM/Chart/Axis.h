#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/IAxis.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/AxesManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class AxisAggregationType;
class AxisFormat;
enum class AxisPositionType;
class AxisRenderContext;
class CategoryAxisBase;
enum class CategoryAxisType;
class Chart;
class ChartLinesFormat;
class ChartTextFormat;
class ChartTitle;
class CoordinateSystemElement;
enum class CrossesType;
class DateTimeAxisBase;
class DisplayUnitElement;
class DisplayUnitLabel;
class DisplayUnitRenderContext;
enum class DisplayUnitType;
class HorizontalCategoryAxis;
class IAxisFormat;
class IChart;
class IChartLinesFormat;
class IChartTextFormat;
class IChartTitle;
enum class TickLabelPositionType;
enum class TickMarkType;
enum class TimeUnitType;
class ValueAxisBase;
class WaterfallSeriesElement;
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
enum class CrossBetweenType;
namespace PartParser
{
namespace Chart
{
class AxesManagerPPTXSerialization;
class AxisExPPTXSerialization;
class AxisPPTXSerialization;
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
class AxisPPTXUnsupportedProps;
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
/// Encapsulates the object that represents a chart's axis.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Axis : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::AxesManager>>, public Aspose::Slides::Charts::IAxis
{
    typedef Axis ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::AxesManager>> BaseType;
    typedef Aspose::Slides::Charts::IAxis BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::AxesManager;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxisExPPTXSerialization;
    friend class Aspose::Slides::Charts::DisplayUnitElement;
    friend class Aspose::Slides::Charts::HorizontalCategoryAxis;
    friend class Aspose::Slides::Charts::CategoryAxisBase;
    friend class Aspose::Slides::Charts::WaterfallSeriesElement;
    friend class Aspose::Slides::Charts::DisplayUnitRenderContext;
    friend class Aspose::Slides::Charts::DateTimeAxisBase;
    friend class Aspose::Slides::Charts::ValueAxisBase;
    friend class Aspose::Slides::Charts::CoordinateSystemElement;
    friend class Aspose::Slides::Charts::AxisRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxesManagerPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxisPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the parent chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    /// <summary>
    /// Represents if the value axis crosses the category axis between categories.
    /// This property applies only to category axes, and it doesn't apply to 3-D charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AxisBetweenCategories() override;
    /// <summary>
    /// Represents if the value axis crosses the category axis between categories.
    /// This property applies only to category axes, and it doesn't apply to 3-D charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AxisBetweenCategories(bool value) override;
    /// <summary>
    /// Specifies the type of the category axis.
    /// Read <see cref="Charts::CategoryAxisType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Charts::CategoryAxisType get_CategoryAxisType() override;
    /// <summary>
    /// Specifies the type of the category axis.
    /// Write <see cref="Charts::CategoryAxisType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CategoryAxisType(Aspose::Slides::Charts::CategoryAxisType value) override;
    /// <summary>
    /// Represents the point on the axis where the perpendicular axis crosses it.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_CrossAt() override;
    /// <summary>
    /// Represents the point on the axis where the perpendicular axis crosses it.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CrossAt(float value) override;
    /// <summary>
    /// Specifies the scaling value of the display units for the value axis.
    /// Read <see cref="DisplayUnitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DisplayUnitType get_DisplayUnit() override;
    /// <summary>
    /// Specifies the scaling value of the display units for the value axis.
    /// Write <see cref="DisplayUnitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DisplayUnit(DisplayUnitType value) override;
    /// <summary>
    /// Specifies actual maximum value on the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ActualMaxValue() override;
    /// <summary>
    /// Specifies actual minimum value on the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ActualMinValue() override;
    /// <summary>
    /// Specifies actual major unit of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ActualMajorUnit() override;
    /// <summary>
    /// Specifies actual minor unit of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ActualMinorUnit() override;
    /// <summary>
    /// Specifies actual major unit scale of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TimeUnitType get_ActualMajorUnitScale() override;
    /// <summary>
    /// Specifies actual minor unit scale of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TimeUnitType get_ActualMinorUnitScale() override;
    /// <summary>
    /// Indicates whether the max value is automatically assigned.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAutomaticMaxValue() override;
    /// <summary>
    /// Indicates whether the max value is automatically assigned.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAutomaticMaxValue(bool value) override;
    /// <summary>
    /// Represents the maximum value on the value axis.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MaxValue() override;
    /// <summary>
    /// Represents the maximum value on the value axis.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MaxValue(double value) override;
    /// <summary>
    /// Represents the minor units for the date or value axis.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MinorUnit() override;
    /// <summary>
    /// Represents the minor units for the date or value axis.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MinorUnit(double value) override;
    /// <summary>
    /// Indicates whether the minor unit of the axis is automatically assigned.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAutomaticMinorUnit() override;
    /// <summary>
    /// Indicates whether the minor unit of the axis is automatically assigned.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAutomaticMinorUnit(bool value) override;
    /// <summary>
    /// Represents the major units for the date or value axis.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MajorUnit() override;
    /// <summary>
    /// Represents the major units for the date or value axis.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MajorUnit(double value) override;
    /// <summary>
    /// Indicates whether the major unit of the axis is automatically assigned. 
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAutomaticMajorUnit() override;
    /// <summary>
    /// Indicates whether the major unit of the axis is automatically assigned. 
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAutomaticMajorUnit(bool value) override;
    /// <summary>
    /// Indicates whether the min value is automatically assigned.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAutomaticMinValue() override;
    /// <summary>
    /// Indicates whether the min value is automatically assigned.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAutomaticMinValue(bool value) override;
    /// <summary>
    /// Represents the minimum value on the value axis.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MinValue() override;
    /// <summary>
    /// Represents the minimum value on the value axis.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MinValue(double value) override;
    /// <summary>
    /// Represents if the value axis scale type is logarithmic or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsLogarithmic() override;
    /// <summary>
    /// Represents if the value axis scale type is logarithmic or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsLogarithmic(bool value) override;
    /// <summary>
    /// Represents the logarithmic base. Default value is 10.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_LogBase() override;
    /// <summary>
    /// Represents the logarithmic base. Default value is 10.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LogBase(double value) override;
    /// <summary>
    /// Represents if MS PowerPoint plots data points from last to first.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsPlotOrderReversed() override;
    /// <summary>
    /// Represents if MS PowerPoint plots data points from last to first.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsPlotOrderReversed(bool value) override;
    /// <summary>
    /// Represents if the axis is visible.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsVisible() override;
    /// <summary>
    /// Represents if the axis is visible.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsVisible(bool value) override;
    /// <summary>
    /// Represents the type of major tick mark for the specified axis.
    /// Read <see cref="TickMarkType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TickMarkType get_MajorTickMark() override;
    /// <summary>
    /// Represents the type of major tick mark for the specified axis.
    /// Write <see cref="TickMarkType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MajorTickMark(TickMarkType value) override;
    /// <summary>
    /// Represents the type of minor tick mark for the specified axis.
    /// Read <see cref="TickMarkType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TickMarkType get_MinorTickMark() override;
    /// <summary>
    /// Represents the type of minor tick mark for the specified axis.
    /// Write <see cref="TickMarkType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MinorTickMark(TickMarkType value) override;
    /// <summary>
    /// Represents the position of tick-mark labels on the specified axis.
    /// Read <see cref="TickLabelPositionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TickLabelPositionType get_TickLabelPosition() override;
    /// <summary>
    /// Represents the position of tick-mark labels on the specified axis.
    /// Write <see cref="TickLabelPositionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TickLabelPosition(TickLabelPositionType value) override;
    /// <summary>
    /// Represents the major unit scale for the date axis.
    /// Read <see cref="TimeUnitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TimeUnitType get_MajorUnitScale() override;
    /// <summary>
    /// Represents the major unit scale for the date axis.
    /// Write <see cref="TimeUnitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MajorUnitScale(TimeUnitType value) override;
    /// <summary>
    /// Represents the major unit scale for the date axis.
    /// Read <see cref="TimeUnitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TimeUnitType get_MinorUnitScale() override;
    /// <summary>
    /// Represents the major unit scale for the date axis.
    /// Write <see cref="TimeUnitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MinorUnitScale(TimeUnitType value) override;
    /// <summary>
    /// Specifies the smallest time unit that is represented on the date axis.
    /// Read <see cref="TimeUnitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TimeUnitType get_BaseUnitScale() override;
    /// <summary>
    /// Specifies the smallest time unit that is represented on the date axis.
    /// Write <see cref="TimeUnitType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BaseUnitScale(TimeUnitType value) override;
    /// <summary>
    /// Represents minor gridlines format on a chart axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartLinesFormat">IChartLinesFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartLinesFormat> get_MinorGridLinesFormat() override;
    /// <summary>
    /// Represents major gridlines format on a chart axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartLinesFormat">IChartLinesFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartLinesFormat> get_MajorGridLinesFormat() override;
    /// <summary>
    /// To hide minor gridline set get_MinorGridLinesFormat()->get_Line()->get_FillFormat()->get(set)_FillType() to FillType::NoFill.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMinorGridLines() override;
    /// <summary>
    /// To hide major gridline set get_MajorGridLinesFormat()->get_Line()->get_FillFormat()->get(set)_FillType() to FillType::NoFill.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMajorGridLines() override;
    /// <summary>
    /// Represents format of axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxisFormat">IAxisFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAxisFormat> get_Format() override;
    /// <summary>
    /// Represents format of text.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextFormat> get_TextFormat() override;
    /// <summary>
    /// Gets the axis' title.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTitle">IChartTitle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTitle> get_Title() override;
    /// <summary>
    /// Represents the CrossType on the specified axis where the other axis crosses.
    /// Read <see cref="CrossesType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API CrossesType get_CrossType() override;
    /// <summary>
    /// Represents the CrossType on the specified axis where the other axis crosses.
    /// Write <see cref="CrossesType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CrossType(CrossesType value) override;
    /// <summary>
    /// Represents position of axis.
    /// Read <see cref="AxisPositionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API AxisPositionType get_Position() override;
    /// <summary>
    /// Represents position of axis.
    /// Write <see cref="AxisPositionType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Position(AxisPositionType value) override;
    /// <summary>
    /// Determines whether a axis has a visible title.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasTitle() override;
    /// <summary>
    /// Determines whether a axis has a visible title.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasTitle(bool value) override;
    /// <summary>
    /// Represents the format string for the Axis Labels.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_NumberFormat() override;
    /// <summary>
    /// Represents the format string for the Axis Labels.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NumberFormat(System::String value) override;
    /// <summary>
    /// Indicates whether the format is linked source data.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsNumberFormatLinkedToSource() override;
    /// <summary>
    /// Indicates whether the format is linked source data.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsNumberFormatLinkedToSource(bool value) override;
    /// <summary>
    /// Represents the rotation angle of tick labels.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_TickLabelRotationAngle() override;
    /// <summary>
    /// Represents the rotation angle of tick labels.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TickLabelRotationAngle(float value) override;
    /// <summary>
    /// Specifies how many tick labels to skip between label that is drawn. Applied to category or series axis.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_TickLabelSpacing() override;
    /// <summary>
    /// Specifies how many tick labels to skip between label that is drawn. Applied to category or series axis.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TickLabelSpacing(uint32_t value) override;
    /// <summary>
    /// Specifies automatic tick label spacing value. If false: use TickLabelSpacing property.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAutomaticTickLabelSpacing() override;
    /// <summary>
    /// Specifies automatic tick label spacing value. If false: use TickLabelSpacing property.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAutomaticTickLabelSpacing(bool value) override;
    /// <summary>
    /// Specifies how many tick marks shall be skipped before the next one shall be 
    /// drawn. Applied to category or series axis.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_TickMarksSpacing() override;
    /// <summary>
    /// Specifies how many tick marks shall be skipped before the next one shall be 
    /// drawn. Applied to category or series axis.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TickMarksSpacing(uint32_t value) override;
    /// <summary>
    /// Specifies automatic tick marks spacing value. If false: use TickMarksSpacing property.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAutomaticTickMarksSpacing() override;
    /// <summary>
    /// Specifies automatic tick marks spacing value. If false: use TickMarksSpacing property.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAutomaticTickMarksSpacing(bool value) override;
    /// <summary>
    /// Specifies the distance of labels from the axis. Applied to category or date axis. Value must be between 0% and 1000%.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_LabelOffset() override;
    /// <summary>
    /// Specifies the distance of labels from the axis. Applied to category or date axis. Value must be between 0% and 1000%.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LabelOffset(uint16_t value) override;
    /// <summary>
    /// Represents aggregation type of category axis (binning). Applied to category. Used with Histogram or HistogramPareto series only.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API AxisAggregationType get_AggregationType() override;
    /// <summary>
    /// Represents aggregation type of category axis (binning). Applied to category. Used with Histogram or HistogramPareto series only.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AggregationType(AxisAggregationType value) override;
    /// <summary>
    /// Specifies bin width when AggregationType property value setted to AxisAggregationType::ByBinWidth. 
    /// Applied to category axes. Used with Histogram or HistogramPareto series only.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_BinWidth() override;
    /// <summary>
    /// Specifies bin width when AggregationType property value setted to AxisAggregationType::ByBinWidth. 
    /// Applied to category axes. Used with Histogram or HistogramPareto series only.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BinWidth(double value) override;
    /// <summary>
    /// Specifies number of bins when AggregationType property value setted to AxisAggregationType::ByNumberOfBins. 
    /// Applied to category axes. Used with Histogram or HistogramPareto series only.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_NumberOfBins() override;
    /// <summary>
    /// Specifies number of bins when AggregationType property value setted to AxisAggregationType::ByNumberOfBins. 
    /// Applied to category axes. Used with Histogram or HistogramPareto series only.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NumberOfBins(uint32_t value) override;
    /// <summary>
    /// Specifies if overflow bin applied. Use IsAutomaticOverflowBin and OverflowBin to adjust overflow bin value.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsOverflowBin() override;
    /// <summary>
    /// Specifies if overflow bin applied. Use IsAutomaticOverflowBin and OverflowBin to adjust overflow bin value.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsOverflowBin(bool value) override;
    /// <summary>
    /// Specifies automatic overflow bin value. If false: use OverflowBin property.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAutomaticOverflowBin() override;
    /// <summary>
    /// Specifies automatic overflow bin value. If false: use OverflowBin property.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAutomaticOverflowBin(bool value) override;
    /// <summary>
    /// Specifies overflow bin custom value. Applied when IsAutomaticOverflowBin property setted to false and IsOverflowBin property equals true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_OverflowBin() override;
    /// <summary>
    /// Specifies overflow bin custom value. Applied when IsAutomaticOverflowBin property setted to false and IsOverflowBin property equals true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_OverflowBin(double value) override;
    /// <summary>
    /// Specifies if underflow bin applied. Use IsAutomaticUnderflowBin and UnderflowBin to adjust underflow bin value.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsUnderflowBin() override;
    /// <summary>
    /// Specifies if underflow bin applied. Use IsAutomaticUnderflowBin and UnderflowBin to adjust underflow bin value.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsUnderflowBin(bool value) override;
    /// <summary>
    /// Specifies automatic underflow bin value. If false: use UnderflowBin property.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsAutomaticUnderflowBin() override;
    /// <summary>
    /// Specifies automatic underflow bin value. If false: use UnderflowBin property.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsAutomaticUnderflowBin(bool value) override;
    /// <summary>
    /// Specifies underflow bin custom value. Applied when IsAutomaticUnderflowBin property setted to false and IsUnderflowBin property equals true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_UnderflowBin() override;
    /// <summary>
    /// Specifies underflow bin custom value. Applied when IsAutomaticUnderflowBin property setted to false and IsUnderflowBin property equals true. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UnderflowBin(double value) override;
    
    /// <summary>
    /// Sets IAxis::get(set)_CategoryAxisType property with a value that is automatically determined based on axis data.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void SetCategoryAxisTypeAutomatically() override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::AxisPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API double get_GapWidth() const;
    ASPOSE_SLIDES_LOCAL_API void set_GapWidth(double value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Charts::DisplayUnitLabel> get_DisplayUnitLabel();
    /// <summary>
    /// Specifies actual maximum value on the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualMaxValue(double value);
    /// <summary>
    /// Specifies actual minimum value on the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualMinValue(double value);
    /// <summary>
    /// Specifies actual major unit of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualMajorUnit(double value);
    /// <summary>
    /// Specifies actual minor unit of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualMinorUnit(double value);
    /// <summary>
    /// Specifies actual major unit scale of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualMajorUnitScale(TimeUnitType value);
    /// <summary>
    /// Specifies actual minor unit scale of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ActualMinorUnitScale(TimeUnitType value);
    ASPOSE_SLIDES_LOCAL_API bool get_IsAutomaticBaseUnitScale();
    ASPOSE_SLIDES_LOCAL_API void set_IsAutomaticBaseUnitScale(bool value);
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::PptxSerialization::CrossBetweenType get_CrossBetween();
    ASPOSE_SLIDES_LOCAL_API bool get_IsSecondaryAxis();
    
    ASPOSE_SLIDES_LOCAL_API Axis(System::SharedPtr<AxesManager> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Axis, CODEPORTING_ARGS(System::SharedPtr<AxesManager> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Axis> GetOppositePrimaryAxis();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Axis();
    
private:

    float m_crossAt;
    DisplayUnitType m_displayUnit;
    System::SharedPtr<Aspose::Slides::Charts::DisplayUnitLabel> m_displayUnitLabel;
    bool m_isAutomaticMaxValue;
    double m_maxValue;
    bool m_isAutomaticMajorUnit;
    double m_majorUnit;
    bool m_isAutomaticMinorUnit;
    double m_minorUnit;
    bool m_isAutomaticMinValue;
    double m_minValue;
    bool m_isLogarithmic;
    double m_logBase;
    bool m_isPlotOrderReversed;
    bool m_isVisible;
    TickMarkType m_majorTickMark;
    TickMarkType m_minorTickMark;
    TickLabelPositionType m_tickLabelPosition;
    TimeUnitType m_majorUnitScale;
    TimeUnitType m_minorUnitScale;
    TimeUnitType m_baseUnitScale;
    bool m_isAutomaticBaseUnitScale;
    System::SharedPtr<ChartLinesFormat> m_minorGridLinesFormat;
    System::SharedPtr<ChartLinesFormat> m_majorGridLinesFormat;
    System::SharedPtr<AxisFormat> m_format;
    System::SharedPtr<ChartTitle> m_title;
    CrossesType m_crossType;
    AxisPositionType m_position;
    uint32_t m_tickLblSkip;
    bool m_isAutotickLblSkip;
    uint32_t m_tickMarksSkip;
    bool m_isAutotickMarksSkip;
    System::String m_numFormat;
    bool m_sourceLinked;
    bool hasTitle;
    uint16_t m_labelOffset;
    Aspose::Slides::Charts::CategoryAxisType m_categoryAxisType;
    System::SharedPtr<ChartTextFormat> m_textFormatOfAutoText;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::AxisPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::WeakPtr<Aspose::Slides::Charts::Chart> m_parentChart;
    AxisAggregationType m_aggregationType;
    double m_binWidth;
    uint32_t m_numberOfBins;
    bool m_isOverflowBin;
    bool m_isAutomaticOverflowBin;
    double m_overflowBin;
    bool m_isUnderflowBin;
    bool m_isAutomaticUnderflowBin;
    double m_underflowBin;
    double pr_GapWidth;
    double pr_ActualMaxValue;
    double pr_ActualMinValue;
    double pr_ActualMajorUnit;
    double pr_ActualMinorUnit;
    TimeUnitType pr_ActualMajorUnitScale;
    TimeUnitType pr_ActualMinorUnitScale;
    
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


