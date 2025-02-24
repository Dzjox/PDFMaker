#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/IDataLabel.h>

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
class DataLabelsHelper;
} // namespace ChartHelpers
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
class ChartPortionFormatEffectiveData;
namespace Charts
{
class AggregatedDataPoint;
class ChartDataCellWrapper;
class ChartDataPointLevel;
class ChartSeries;
class CommonDataLabelText;
class DataLabelElement;
class DataLabelFormat;
class DataLabelRenderContext;
class DataLabelTextBase;
class DataPointRenderContext;
class IAxis;
class IChart;
class IChartCategory;
class IChartDataCell;
class IChartDataPoint;
class IChartSeries;
class IChartTextFormat;
class IDataLabelFormat;
enum class LegendDataLabelPosition;
class PieDataLabelText;
class XYDataLabelText;
} // namespace Charts
namespace DOM
{
namespace Xlsx
{
namespace Charts
{
namespace Chart3DNew
{
class Chart3DPlotDataLabelRendererHelper;
} // namespace Chart3DNew
} // namespace Charts
} // namespace Xlsx
} // namespace DOM
class GeometryShape;
class IBaseSlide;
class IPresentation;
class ITextFrame;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartDataCachePPTXSerialization;
class ChartSeriesPPTXSerialization;
class DataLabelExPPTXSerialization;
class DataLabelPPTXSerialization;
class FormatPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
class TextFrame;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class DataLabelPPTXUnsupportedProps;
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
/// Represents a series labels.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS DataLabel : public Aspose::Slides::Charts::IDataLabel, public Aspose::Slides::IDOMObject
{
    typedef DataLabel ThisType;
    typedef Aspose::Slides::Charts::IDataLabel BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::ChartPortionFormatEffectiveData;
    friend class Aspose::Slides::Charts::AggregatedDataPoint;
    friend class Aspose::Slides::Charts::DataLabelFormat;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataCachePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelExPPTXSerialization;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DPlotDataLabelRendererHelper;
    friend class Aspose::Slides::Charts::DataLabelTextBase;
    friend class Aspose::Slides::Charts::DataLabelElement;
    friend class Aspose::Slides::Charts::XYDataLabelText;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::DataLabelsHelper;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::Charts::DataPointRenderContext;
    friend class Aspose::Slides::Charts::CommonDataLabelText;
    friend class Aspose::Slides::Charts::PieDataLabelText;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::FormatPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the parent chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    /// <summary>
    /// False means that data label is not visible (and so all Show*-flags (ShowValue, ...) are false).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If data label is visible you can make it hidden with Hide() method.
    /// But if data label is not visible (IsVisible is false) you can make data label visible 
    /// with setting Show*-flags (ShowValue, ...) to true state.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_IsVisible() override;
    /// <summary>
    /// Can contain a rich formatted text. If this property is not null then this 
    /// formatted text value overrides auto-generated text of data label.
    /// Auto-generated text of data label means text that is managed by ShowSeriesName, 
    /// ShowValue, ... properties and is formatted with the TextFormatManager.TextFormat property.
    /// Read-only <see cref="Aspose::Slides::ITextFrame">ITextFrame</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> get_TextFrameForOverriding() override;
    /// <summary>
    /// Returns text format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextFormat> get_TextFormat() override;
    /// <summary>
    /// Returns the x coordinate of a title as a fraction of the width of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_X() override;
    /// <summary>
    /// Sets the x coordinate of a title as a fraction of the width of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_X(float value) override;
    /// <summary>
    /// Returns the y coordinate of a title as a fraction of the height of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Y() override;
    /// <summary>
    /// Sets the y coordinate of a title as a fraction of the height of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Y(float value) override;
    /// <summary>
    /// Returns the width of a title as a fraction of the width of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Width() override;
    /// <summary>
    /// Sets the width of a title as a fraction of the width of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Width(float value) override;
    /// <summary>
    /// Returns the height of a title as a fraction of the height of the chart.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Height() override;
    /// <summary>
    /// Sets the height of a title as a fraction of the height of the chart.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Height(float value) override;
    /// <summary>
    /// Right.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Right() override;
    /// <summary>
    /// Bottom.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Bottom() override;
    /// <summary>
    /// Returns data label format.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabelFormat">IDataLabelFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataLabelFormat> get_DataLabelFormat() override;
    /// <summary>
    /// Gets workbook data cell. Applied if IDataLabelFormat::get(set)_ShowLabelValueFromCell property equals true.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> get_ValueFromCell() override;
    /// <summary>
    /// Sets workbook data cell. Applied if IDataLabelFormat::get(set)_ShowLabelValueFromCell property equals true.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ValueFromCell(System::SharedPtr<IChartDataCell> value) override;
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
    /// Creates a new instance of DataLabel class.
    /// </summary>
    /// <param name="parentImmediate">Parent ChartDataPoint.</param>
    ASPOSE_SLIDES_SHARED_API DataLabel(System::SharedPtr<IChartDataPoint> parentImmediate);
    
    /// <summary>
    /// Make data label hidden by setting all Show*-flags (ShowValue, ...) to false state.
    /// IsVisible will be false after this.
    /// </summary>
    /// <remarks>
    /// If data label is not visible (IsVisible is false) you can make data label visible with 
    /// setting Show*-flags (ShowValue, ...) to true state.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void Hide() override;
    /// <summary>
    /// Returns actual label text based on DataLabelFormat settings or get_TextFrameForOverriding()->get(set)_Text() value.
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::String GetActualLabelText() override;
    /// <summary>
    /// Initialize TextFrameForOverriding with the text in paramener "text".
    /// If TextFrameForOverriding is already initialized then simply changes its text.
    /// </summary>
    /// <param name="text">Text for a new TextFrameForOverriding.</param>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> AddTextFrameForOverriding(System::String text) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::String get_DataCellCachedValue() const;
    ASPOSE_SLIDES_LOCAL_API void set_DataCellCachedValue(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::DataLabelPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::DataLabelPPTXUnsupportedProps> get_PPTXUnsupportedPropsInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ITextFrame> get_TextFrameForOverridingInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartTextFormat> get_TextFormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartSeries> get_ParentSeries();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GeometryShape> get_CalloutShape();
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
    
    ASPOSE_SLIDES_LOCAL_API DataLabel(System::SharedPtr<IChartCategory> parentImmediate, System::SharedPtr<ChartSeries> parentSeries);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DataLabel, CODEPORTING_ARGS(System::SharedPtr<IChartCategory> parentImmediate, System::SharedPtr<ChartSeries> parentSeries));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API DataLabel(System::SharedPtr<AggregatedDataPoint> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DataLabel, CODEPORTING_ARGS(System::SharedPtr<AggregatedDataPoint> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API DataLabel(System::SharedPtr<ChartDataPointLevel> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DataLabel, CODEPORTING_ARGS(System::SharedPtr<ChartDataPointLevel> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::String GetBubbleSize();
    ASPOSE_SLIDES_LOCAL_API System::String GetValueString();
    ASPOSE_SLIDES_LOCAL_API System::String GetPercentageString();
    static ASPOSE_SLIDES_LOCAL_API System::String VerifyLabelPosition(System::SharedPtr<IChartSeries> series, LegendDataLabelPosition position);
    ASPOSE_SLIDES_LOCAL_API void CopyFrom(System::SharedPtr<IDataLabel> sourceLabel);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~DataLabel();
    
private:

    System::SharedPtr<Aspose::Slides::Charts::DataLabelFormat> m_dataLabelFormat;
    System::SharedPtr<TextFrame> m_txrich;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::DataLabelPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<ChartSeries> m_parentSeries;
    System::SharedPtr<ChartDataCellWrapper> m_cellWrapper;
    System::SharedPtr<GeometryShape> m_calloutShape;
    System::String pr_DataCellCachedValue;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataCellWrapper> get_CellWrapper();
    
    float pr_ActualX;
    float pr_ActualY;
    float pr_ActualWidth;
    float pr_ActualHeight;
    
    /// <summary>
    /// Returns the parent slide of a FillFormat.
    /// Read-only <see cref="Aspose::Slides::BaseSlide">BaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a FillFormat.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    ASPOSE_SLIDES_LOCAL_API System::String FormatScale(System::SharedPtr<System::Object> obj, System::String format, bool isCulture);
    ASPOSE_SLIDES_LOCAL_API double ApplyDisplayUnitToDoubleValue(double value);
    ASPOSE_SLIDES_LOCAL_API double GetDisplayUnitScale(System::SharedPtr<IAxis> axis);
    ASPOSE_SLIDES_LOCAL_API System::String GetCategoryString();
    ASPOSE_SLIDES_LOCAL_API System::String GetSeriesName();
    ASPOSE_SLIDES_LOCAL_API void UpdateLabelFormatFromSeries();
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


