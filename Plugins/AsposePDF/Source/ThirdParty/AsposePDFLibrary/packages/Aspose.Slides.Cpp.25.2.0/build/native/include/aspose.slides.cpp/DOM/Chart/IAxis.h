#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Chart/IFormattedTextContainer.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class AxisAggregationType;
enum class AxisPositionType;
enum class CategoryAxisType;
enum class CrossesType;
enum class DisplayUnitType;
class IAxisFormat;
class IChartLinesFormat;
class IChartTitle;
enum class TickLabelPositionType;
enum class TickMarkType;
enum class TimeUnitType;
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
/// Encapsulates the object that represents a chart's axis.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAxis : public Aspose::Slides::Charts::IFormattedTextContainer
{
    typedef IAxis ThisType;
    typedef Aspose::Slides::Charts::IFormattedTextContainer BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents if the value axis crosses the category axis between categories.
    /// This property applies only to category axes, and it doesn't apply to 3-D charts.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AxisBetweenCategories() = 0;
    /// <summary>
    /// Represents if the value axis crosses the category axis between categories.
    /// This property applies only to category axes, and it doesn't apply to 3-D charts.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AxisBetweenCategories(bool value) = 0;
    /// <summary>
    /// Represents the point on the axis where the perpendicular axis crosses it.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CrossAt() = 0;
    /// <summary>
    /// Represents the point on the axis where the perpendicular axis crosses it.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CrossAt(float value) = 0;
    /// <summary>
    /// Specifies the scaling value of the display units for the value axis.
    /// Read <see cref="DisplayUnitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API DisplayUnitType get_DisplayUnit() = 0;
    /// <summary>
    /// Specifies the scaling value of the display units for the value axis.
    /// Write <see cref="DisplayUnitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisplayUnit(DisplayUnitType value) = 0;
    /// <summary>
    /// Specifies actual maximum value on the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ActualMaxValue() = 0;
    /// <summary>
    /// Specifies actual minimum value on the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ActualMinValue() = 0;
    /// <summary>
    /// Specifies actual major unit of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ActualMajorUnit() = 0;
    /// <summary>
    /// Specifies actual minor unit of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ActualMinorUnit() = 0;
    /// <summary>
    /// Specifies actual major unit scale of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TimeUnitType get_ActualMajorUnitScale() = 0;
    /// <summary>
    /// Specifies actual minor unit scale of the axis. Call method IChart::ValidateChartLayout previously to get actual value. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TimeUnitType get_ActualMinorUnitScale() = 0;
    /// <summary>
    /// Indicates whether the max value is automatically assigned.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAutomaticMaxValue() = 0;
    /// <summary>
    /// Indicates whether the max value is automatically assigned.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAutomaticMaxValue(bool value) = 0;
    /// <summary>
    /// Represents the maximum value on the value axis.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MaxValue() = 0;
    /// <summary>
    /// Represents the maximum value on the value axis.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MaxValue(double value) = 0;
    /// <summary>
    /// Represents the minor units for the date or value axis.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MinorUnit() = 0;
    /// <summary>
    /// Represents the minor units for the date or value axis.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MinorUnit(double value) = 0;
    /// <summary>
    /// Indicates whether the minor unit of the axis is automatically assigned.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAutomaticMinorUnit() = 0;
    /// <summary>
    /// Indicates whether the minor unit of the axis is automatically assigned.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAutomaticMinorUnit(bool value) = 0;
    /// <summary>
    /// Represents the major units for the date or value axis.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MajorUnit() = 0;
    /// <summary>
    /// Represents the major units for the date or value axis.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MajorUnit(double value) = 0;
    /// <summary>
    /// Indicates whether the major unit of the axis is automatically assigned.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAutomaticMajorUnit() = 0;
    /// <summary>
    /// Indicates whether the major unit of the axis is automatically assigned.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAutomaticMajorUnit(bool value) = 0;
    /// <summary>
    /// Indicates whether the min value is automatically assigned.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAutomaticMinValue() = 0;
    /// <summary>
    /// Indicates whether the min value is automatically assigned.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAutomaticMinValue(bool value) = 0;
    /// <summary>
    /// Represents the minimum value on the value axis.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MinValue() = 0;
    /// <summary>
    /// Represents the minimum value on the value axis.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MinValue(double value) = 0;
    /// <summary>
    /// Represents if the value axis scale type is logarithmic or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsLogarithmic() = 0;
    /// <summary>
    /// Represents if the value axis scale type is logarithmic or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsLogarithmic(bool value) = 0;
    /// <summary>
    /// Represents the logarithmic base. Default value is 10.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_LogBase() = 0;
    /// <summary>
    /// Represents the logarithmic base. Default value is 10.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LogBase(double value) = 0;
    /// <summary>
    /// Represents if MS PowerPoint plots data points from last to first.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsPlotOrderReversed() = 0;
    /// <summary>
    /// Represents if MS PowerPoint plots data points from last to first.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsPlotOrderReversed(bool value) = 0;
    /// <summary>
    /// Represents if the axis is visible.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsVisible() = 0;
    /// <summary>
    /// Represents if the axis is visible.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsVisible(bool value) = 0;
    /// <summary>
    /// Represents the type of major tick mark for the specified axis.
    /// Read <see cref="TickMarkType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TickMarkType get_MajorTickMark() = 0;
    /// <summary>
    /// Represents the type of major tick mark for the specified axis.
    /// Write <see cref="TickMarkType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MajorTickMark(TickMarkType value) = 0;
    /// <summary>
    /// Represents the type of minor tick mark for the specified axis.
    /// Read <see cref="TickMarkType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TickMarkType get_MinorTickMark() = 0;
    /// <summary>
    /// Represents the type of minor tick mark for the specified axis.
    /// Write <see cref="TickMarkType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MinorTickMark(TickMarkType value) = 0;
    /// <summary>
    /// Represents the position of tick-mark labels on the specified axis.
    /// Read <see cref="TickLabelPositionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TickLabelPositionType get_TickLabelPosition() = 0;
    /// <summary>
    /// Represents the position of tick-mark labels on the specified axis.
    /// Write <see cref="TickLabelPositionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TickLabelPosition(TickLabelPositionType value) = 0;
    /// <summary>
    /// Represents the major unit scale for the date axis.
    /// Read <see cref="TimeUnitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TimeUnitType get_MajorUnitScale() = 0;
    /// <summary>
    /// Represents the major unit scale for the date axis.
    /// Write <see cref="TimeUnitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MajorUnitScale(TimeUnitType value) = 0;
    /// <summary>
    /// Represents the major unit scale for the date axis.
    /// Read <see cref="TimeUnitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TimeUnitType get_MinorUnitScale() = 0;
    /// <summary>
    /// Represents the major unit scale for the date axis.
    /// Write <see cref="TimeUnitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MinorUnitScale(TimeUnitType value) = 0;
    /// <summary>
    /// Specifies the smallest time unit that is represented on the date axis.
    /// Read <see cref="TimeUnitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TimeUnitType get_BaseUnitScale() = 0;
    /// <summary>
    /// Specifies the smallest time unit that is represented on the date axis.
    /// Write <see cref="TimeUnitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BaseUnitScale(TimeUnitType value) = 0;
    /// <summary>
    /// Represents minor gridlines format on a chart axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartLinesFormat">IChartLinesFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartLinesFormat> get_MinorGridLinesFormat() = 0;
    /// <summary>
    /// Represents major gridlines format on a chart axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartLinesFormat">IChartLinesFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartLinesFormat> get_MajorGridLinesFormat() = 0;
    /// <summary>
    /// Represents if the minor gridlines showed.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowMinorGridLines() = 0;
    /// <summary>
    /// Represents if the major gridlines showed.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowMajorGridLines() = 0;
    /// <summary>
    /// Represents format of axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxisFormat">IAxisFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAxisFormat> get_Format() = 0;
    /// <summary>
    /// Gets the axis' title.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTitle">IChartTitle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartTitle> get_Title() = 0;
    /// <summary>
    /// Represents the CrossType on the specified axis where the other axis crosses.
    /// Read <see cref="CrossesType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API CrossesType get_CrossType() = 0;
    /// <summary>
    /// Represents the CrossType on the specified axis where the other axis crosses.
    /// Write <see cref="CrossesType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CrossType(CrossesType value) = 0;
    /// <summary>
    /// Represents position of axis.
    /// Read <see cref="AxisPositionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API AxisPositionType get_Position() = 0;
    /// <summary>
    /// Represents position of axis.
    /// Write <see cref="AxisPositionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(AxisPositionType value) = 0;
    /// <summary>
    /// Determines whether a axis has a visible title.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasTitle() = 0;
    /// <summary>
    /// Determines whether a axis has a visible title.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasTitle(bool value) = 0;
    /// <summary>
    /// Represents the format string for the Axis Labels.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_NumberFormat() = 0;
    /// <summary>
    /// Represents the format string for the Axis Labels.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberFormat(System::String value) = 0;
    /// <summary>
    /// Indicates whether the format is linked source data.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsNumberFormatLinkedToSource() = 0;
    /// <summary>
    /// Indicates whether the format is linked source data.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsNumberFormatLinkedToSource(bool value) = 0;
    /// <summary>
    /// Represents the rotation angle of tick labels
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TickLabelRotationAngle() = 0;
    /// <summary>
    /// Represents the rotation angle of tick labels
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TickLabelRotationAngle(float value) = 0;
    /// <summary>
    /// Specifies how many tick labels to skip between label that is drawn.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_TickLabelSpacing() = 0;
    /// <summary>
    /// Specifies how many tick labels to skip between label that is drawn.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TickLabelSpacing(uint32_t value) = 0;
    /// <summary>
    /// Specifies automatic tick label spacing value. If false: use TickLabelSpacing property.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAutomaticTickLabelSpacing() = 0;
    /// <summary>
    /// Specifies automatic tick label spacing value. If false: use TickLabelSpacing property.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAutomaticTickLabelSpacing(bool value) = 0;
    /// <summary>
    /// Specifies how many tick marks shall be skipped before the next one shall be 
    /// drawn. Applied to category or series axis.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_TickMarksSpacing() = 0;
    /// <summary>
    /// Specifies how many tick marks shall be skipped before the next one shall be 
    /// drawn. Applied to category or series axis.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TickMarksSpacing(uint32_t value) = 0;
    /// <summary>
    /// Specifies automatic tick marks spacing value. If false: use TickMarksSpacing property.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAutomaticTickMarksSpacing() = 0;
    /// <summary>
    /// Specifies automatic tick marks spacing value. If false: use TickMarksSpacing property.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAutomaticTickMarksSpacing(bool value) = 0;
    /// <summary>
    /// Specifies the distance of labels from the axis. Applied to category or date axis. Value must be between 0% and 1000%.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_LabelOffset() = 0;
    /// <summary>
    /// Specifies the distance of labels from the axis. Applied to category or date axis. Value must be between 0% and 1000%.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LabelOffset(uint16_t value) = 0;
    /// <summary>
    /// Specifies the type of the category axis.
    /// Read <see cref="CategoryAxisType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Charts::CategoryAxisType get_CategoryAxisType() = 0;
    /// <summary>
    /// Specifies the type of the category axis.
    /// Write <see cref="CategoryAxisType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CategoryAxisType(Aspose::Slides::Charts::CategoryAxisType value) = 0;
    /// <summary>
    /// Represents aggregation type of category axis (binning). Applied to category. Used with Histogram or HistogramPareto series only.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API AxisAggregationType get_AggregationType() = 0;
    /// <summary>
    /// Represents aggregation type of category axis (binning). Applied to category. Used with Histogram or HistogramPareto series only.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AggregationType(AxisAggregationType value) = 0;
    /// <summary>
    /// Specifies bin width when AggregationType property value setted to AxisAggregationType::ByBinWidth. 
    /// Applied to category axes. Used with Histogram or HistogramPareto series only.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_BinWidth() = 0;
    /// <summary>
    /// Specifies bin width when AggregationType property value setted to AxisAggregationType::ByBinWidth. 
    /// Applied to category axes. Used with Histogram or HistogramPareto series only.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BinWidth(double value) = 0;
    /// <summary>
    /// Specifies number of bins when AggregationType property value setted to AxisAggregationType::ByNumberOfBins. 
    /// Applied to category axes. Used with Histogram or HistogramPareto series only.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_NumberOfBins() = 0;
    /// <summary>
    /// Specifies number of bins when AggregationType property value setted to AxisAggregationType::ByNumberOfBins. 
    /// Applied to category axes. Used with Histogram or HistogramPareto series only.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberOfBins(uint32_t value) = 0;
    /// <summary>
    /// Specifies if overflow bin applied. Use IsAutomaticOverflowBin and OverflowBin to adjust overflow bin value.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsOverflowBin() = 0;
    /// <summary>
    /// Specifies if overflow bin applied. Use IsAutomaticOverflowBin and OverflowBin to adjust overflow bin value.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsOverflowBin(bool value) = 0;
    /// <summary>
    /// Specifies automatic overflow bin value. If false: use OverflowBin property.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAutomaticOverflowBin() = 0;
    /// <summary>
    /// Specifies automatic overflow bin value. If false: use OverflowBin property.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAutomaticOverflowBin(bool value) = 0;
    /// <summary>
    /// Specifies overflow bin custom value. Applied when IsAutomaticOverflowBin property setted to false and IsOverflowBin property equals true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_OverflowBin() = 0;
    /// <summary>
    /// Specifies overflow bin custom value. Applied when IsAutomaticOverflowBin property setted to false and IsOverflowBin property equals true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OverflowBin(double value) = 0;
    /// <summary>
    /// Specifies if underflow bin applied. Use IsAutomaticUnderflowBin and UnderflowBin to adjust underflow bin value.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsUnderflowBin() = 0;
    /// <summary>
    /// Specifies if underflow bin applied. Use IsAutomaticUnderflowBin and UnderflowBin to adjust underflow bin value.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsUnderflowBin(bool value) = 0;
    /// <summary>
    /// Specifies automatic underflow bin value. If false: use UnderflowBin property.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsAutomaticUnderflowBin() = 0;
    /// <summary>
    /// Specifies automatic underflow bin value. If false: use UnderflowBin property.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsAutomaticUnderflowBin(bool value) = 0;
    /// <summary>
    /// Specifies underflow bin custom value. Applied when IsAutomaticUnderflowBin property setted to false and IsUnderflowBin property equals true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_UnderflowBin() = 0;
    /// <summary>
    /// Specifies underflow bin custom value. Applied when IsAutomaticUnderflowBin property setted to false and IsUnderflowBin property equals true. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UnderflowBin(double value) = 0;
    
    /// <summary>
    /// Sets IAxis::get(set)_CategoryAxisType property with a value that is automatically determined based on axis data.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetCategoryAxisTypeAutomatically() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


