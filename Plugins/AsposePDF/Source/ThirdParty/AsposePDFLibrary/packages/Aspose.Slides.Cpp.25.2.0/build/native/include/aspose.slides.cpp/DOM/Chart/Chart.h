#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
#include <DOM/IChart.h>
#include <cstdint>

#include "DOM/GraphicalObject.h"
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
class PieChart3D_Chart2007;
} // namespace ChartHelpers
class ThemeColors_Chart2007;
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
class ChartPortionFormatEffectiveData;
namespace Charts
{
class AggregatedDataPoint;
class AxesManager;
class AxisRenderContext;
class ChartData;
class ChartDataPoint;
class ChartDataPointLevel;
class ChartDataWorkbook;
class ChartDefaultStyle;
class ChartDefaultStyles;
class ChartFrame;
enum class ChartGrouping;
class ChartLayout;
class ChartPlotArea;
class ChartRenderContext;
class ChartSeriesRenderContext;
class ChartTextFormat;
class ChartTitle;
class ChartTitleRenderContext;
enum class ChartType;
class ChartWall;
class ConnectorLineElement;
class DataLabelRenderContext;
class DataPointRenderContext;
class DataTable;
class DataTableRenderContext;
enum class DisplayBlanksAsType;
class DisplayUnitRenderContext;
class ErrorBarRenderContext;
class FormatOverrides;
class IAxesManager;
class IChartData;
class IChartPlotArea;
class IChartTextFormat;
class IChartTitle;
class IChartWall;
class IDataTable;
class ILegend;
class IRotation3D;
class LeaderLineElement;
class Legend;
class LegendEntryPropertyRenderContext;
class LegendRenderContext;
class LegendTextElement;
class LineSeriesElement;
class PiePercentagePointContainer;
class RenderingHelper;
class Rotation3D;
enum class StyleType;
class TrendlineRenderContext;
class WorkbookManager;
} // namespace Charts
class ColorFormatImpl;
enum class ColorSchemeIndex : uint8_t;
namespace DOM
{
namespace Xlsx
{
namespace Charts
{
namespace Chart3DNew
{
class Chart3DMeasure;
class Chart3DRenderer;
namespace Surface3D
{
class SurfaceColorMap;
} // namespace Surface3D
} // namespace Chart3DNew
} // namespace Charts
namespace Drawing
{
class ChartWallBackRenderContext;
class ChartWallFloorRenderContext;
class ChartWallRenderContext;
class ChartWallSideRenderContext;
} // namespace Drawing
} // namespace Xlsx
} // namespace DOM
class FontData;
class GroupShape;
class IGroupShape;
class ITextFrame;
namespace PptxSerialization
{
class ChartTemplateDeserializator;
namespace PartParser
{
namespace Chart
{
class ChartExPPTXSerialization;
class ChartPPTXSerialization;
class ChartRefPPTXSerialization;
} // namespace Chart
class ColorMappingPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Shape;
class ShapeCollection;
class TextFrame;
namespace Theme
{
class ChartThemeManager;
class ColorMapping;
class IOverrideThemeManager;
class IThemeEffectiveData;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class ChartPPTXUnsupportedProps;
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
class Font;
enum class FontStyle;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents an graphic chart on a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Chart : public Aspose::Slides::GraphicalObject, public Aspose::Slides::Charts::IChart
{
    typedef Chart ThisType;
    typedef Aspose::Slides::GraphicalObject BaseType;
    typedef Aspose::Slides::Charts::IChart BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::Charts::ChartLayout;
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::Charts::WorkbookManager;
    friend class Aspose::Slides::Charts::ChartDefaultStyle;
    friend class Aspose::Slides::ChartPortionFormatEffectiveData;
    friend class Aspose::Slides::Charts::AggregatedDataPoint;
    friend class Aspose::Slides::ColorFormatImpl;
    friend class Aspose::Slides::Charts::AxesManager;
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartExPPTXSerialization;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DRenderer;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DMeasure;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Surface3D::SurfaceColorMap;
    friend class Aspose::Slides::DOM::Xlsx::Drawing::ChartWallBackRenderContext;
    friend class Aspose::Slides::DOM::Xlsx::Drawing::ChartWallRenderContext;
    friend class Aspose::Slides::DOM::Xlsx::Drawing::ChartWallFloorRenderContext;
    friend class Aspose::Slides::DOM::Xlsx::Drawing::ChartWallSideRenderContext;
    friend class Aspose::Slides::Charts::ConnectorLineElement;
    friend class Aspose::Cells::Render::Chart2007::ThemeColors_Chart2007;
    friend class Aspose::Slides::Charts::ChartFrame;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::Charts::DataPointRenderContext;
    friend class Aspose::Slides::Charts::DisplayUnitRenderContext;
    friend class Aspose::Slides::Charts::LeaderLineElement;
    friend class Aspose::Slides::Charts::LegendTextElement;
    friend class Aspose::Slides::Charts::LineSeriesElement;
    friend class Aspose::Slides::Charts::PiePercentagePointContainer;
    friend class Aspose::Slides::Charts::ErrorBarRenderContext;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::PieChart3D_Chart2007;
    friend class Aspose::Slides::Charts::AxisRenderContext;
    friend class Aspose::Slides::Charts::ChartRenderContext;
    friend class Aspose::Slides::Charts::ChartTitleRenderContext;
    friend class Aspose::Slides::Charts::DataTableRenderContext;
    friend class Aspose::Slides::Charts::LegendEntryPropertyRenderContext;
    friend class Aspose::Slides::Charts::LegendRenderContext;
    friend class Aspose::Slides::Charts::RenderingHelper;
    friend class Aspose::Slides::Charts::TrendlineRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartRefPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ColorMappingPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::ChartTemplateDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Determines whether the only visible cells are plotted. False to plot both visible and hidden cells.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_PlotVisibleCellsOnly() override;
    /// <summary>
    /// Determines whether the only visible cells are plotted. False to plot both visible and hidden cells.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PlotVisibleCellsOnly(bool value) override;
    /// <summary>
    /// Returns the way to plot blank cells on a chart.
    /// Read <see cref="DisplayBlanksAsType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DisplayBlanksAsType get_DisplayBlanksAs() override;
    /// <summary>
    /// Sets the way to plot blank cells on a chart.
    /// Write <see cref="DisplayBlanksAsType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DisplayBlanksAs(DisplayBlanksAsType value) override;
    /// <summary>
    /// Returns information about the linked or embedded data associated with a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartData">IChartData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartData> get_ChartData() override;
    /// <summary>
    /// Determines whether a chart has a visible title.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasTitle() override;
    /// <summary>
    /// Determines whether a chart has a visible title.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasTitle(bool value) override;
    /// <summary>
    /// Returns a chart title.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTitle">IChartTitle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTitle> get_ChartTitle() override;
    /// <summary>
    /// Determines whether a chart has a data table.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasDataTable() override;
    /// <summary>
    /// Determines whether a chart has a data table.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasDataTable(bool value) override;
    /// <summary>
    /// Determines whether a chart has a legend.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasLegend() override;
    /// <summary>
    /// Determines whether a chart has a legend.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasLegend(bool value) override;
    /// <summary>
    /// Returns a legend for a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::ILegend">ILegend</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILegend> get_Legend() override;
    /// <summary>
    /// Returns a data table of a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataTable">IDataTable</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataTable> get_ChartDataTable() override;
    /// <summary>
    /// Returns the chart style.
    /// Read <see cref="StyleType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API StyleType get_Style() override;
    /// <summary>
    /// Sets the chart style.
    /// Write <see cref="StyleType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Style(StyleType value) override;
    /// <summary>
    /// Returns the chart type.
    /// Read <see cref="ChartType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ChartType get_Type() override;
    /// <summary>
    /// Sets the chart type.
    /// Write <see cref="ChartType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(ChartType value) override;
    /// <summary>
    /// Represents the plot area of a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartPlotArea">IChartPlotArea</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartPlotArea> get_PlotArea() override;
    /// <summary>
    /// Returns a 3D rotation of a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IRotation3D">IRotation3D</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IRotation3D> get_Rotation3D() override;
    /// <summary>
    /// Returns an object which allows to change format of the back wall of a 3D chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartWall">IChartWall</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartWall> get_BackWall() override;
    /// <summary>
    /// Returns an object which allows to change format of the side wall of a 3D chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartWall">IChartWall</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartWall> get_SideWall() override;
    /// <summary>
    /// Returns an object which allows to change format of the floor of a 3D chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartWall">IChartWall</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartWall> get_Floor() override;
    /// <summary>
    /// Returns chart text format.
    /// The property is not applicable for the following types: <see cref="ChartType::Treemap"></see>, <see cref="ChartType::Sunburst"></see>,
    /// <see cref="ChartType::Waterfall"></see>, <see cref="ChartType::Histogram"></see>, <see cref="ChartType::Funnel"></see>,<see cref="ChartType::BoxAndWhisker"></see>.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextFormat> get_TextFormat() override;
    /// <summary>
    /// Returns theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IOverrideThemeManager"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::Theme::IOverrideThemeManager> get_ThemeManager() override;
    /// <summary>
    /// Specify the shapes drawn on top of the chart.
    /// Read-only <see cref="IGroupShape"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGroupShape> get_UserShapes() override;
    /// <summary>
    /// Provide access to chart axes.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxesManager">IAxesManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAxesManager> get_Axes() override;
    /// <summary>
    /// Specifies data labels over the maximum of the chart shall be shown.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowDataLabelsOverMaximum() override;
    /// <summary>
    /// Specifies data labels over the maximum of the chart shall be shown.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowDataLabelsOverMaximum(bool value) override;
    /// <summary>
    /// Specifies the chart area shall have rounded corners.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HasRoundedCorners() override;
    /// <summary>
    /// Specifies the chart area shall have rounded corners.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HasRoundedCorners(bool value) override;
    
    /// <summary>
    /// Calculates actual values of chart elements. The actual values include position of elements that implement IActualLayout interface 
    /// (IActualLayout::get_ActualX, IActualLayout::get_ActualY, IActualLayout::get_ActualWidth, IActualLayout::get_ActualHeight)
    /// and actual axes values (IAxis::get_ActualMaxValue, IAxis::get_ActualMinValue, IAxis::get_ActualMajorUnit, IAxis::get_ActualMinorUnit, 
    /// IAxis::get_ActualMajorUnitScale, IAxis::get_ActualMinorUnitScale)
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void ValidateChartLayout() override;
    /// <summary>
    /// Returns an effective theme for this chart.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::Theme::IThemeEffectiveData> CreateThemeEffective() override;
    
protected:

    /// @cond
    ChartType m_type;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Charts::ChartLayout> get_ChartLayout();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::Drawing::Color> get_SeriesColors();
    ASPOSE_SLIDES_LOCAL_API ChartGrouping get_Grouping() const;
    ASPOSE_SLIDES_LOCAL_API void set_Grouping(ChartGrouping value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> get_ColorMappingOverride();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GroupShape> get_UserShapesInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDefaultStyles> get_DefaultStyles();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Charts::FormatOverrides> get_FormatOverrides();
    
    ASPOSE_SLIDES_LOCAL_API Chart(System::SharedPtr<ShapeCollection> parentImmediate, ChartType type);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Chart, CODEPORTING_ARGS(System::SharedPtr<ShapeCollection> parentImmediate, ChartType type));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::Drawing::Color DefineFontColor(System::SharedPtr<IChartTextFormat> textFormatOfAutoText, System::Drawing::Color colorToSet);
    ASPOSE_SLIDES_LOCAL_API System::Drawing::Color DefineFontColor(System::Drawing::Color colorToSet, System::SharedPtr<ITextFrame> textFrameForOverriding);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Font> DefineFontProperties(System::SharedPtr<IChartTextFormat> textFormatOfAutoText);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Font> DefineFontProperties(System::SharedPtr<IChartTextFormat> textFormatOfAutoText, System::SharedPtr<TextFrame> textFrameForOverriding);
    /// @endcond
    /// <summary>
    /// Sets all formats to NotDefined state. For shapes with placeholders this will cause default state.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Reset() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool CanDrawNewMode();
    ASPOSE_SLIDES_LOCAL_API bool MixedChartIsSupported();
    ASPOSE_SLIDES_LOCAL_API bool CanDrawNewMode(ChartType type);
    ASPOSE_SLIDES_LOCAL_API System::Drawing::Color GetFromChartSchemeColor(ColorSchemeIndex colorSchemeIndex);
    ASPOSE_SLIDES_LOCAL_API void ValidateConsistencyOf_ChartType_SeriesType();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Shape> CreateFallbackShapeFromCurrent();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Chart();
    
private:

    System::SharedPtr<ChartWall> m_backWall;
    System::SharedPtr<ChartWall> m_sideWall;
    System::SharedPtr<ChartWall> m_floor;
    StyleType m_style;
    bool m_hasTitle;
    System::SharedPtr<Aspose::Slides::Charts::ChartTitle> m_title;
    bool m_hasDataTable;
    System::SharedPtr<DataTable> m_dTable;
    DisplayBlanksAsType m_dispBlankAs;
    System::SharedPtr<Aspose::Slides::Charts::Rotation3D> m_3dRotation;
    bool m_hasLegend;
    System::SharedPtr<Aspose::Slides::Charts::Legend> m_legend;
    bool m_plotVisibleOnly;
    System::SharedPtr<Aspose::Slides::Charts::ChartData> m_chartData;
    System::SharedPtr<ChartPlotArea> m_plotArea;
    System::SharedPtr<ChartTextFormat> m_textFormatOfAutoText;
    System::SharedPtr<AxesManager> m_axesManager;
    System::SharedPtr<Aspose::Slides::Theme::ChartThemeManager> m_themeManager;
    System::SharedPtr<GroupShape> m_userShapes;
    System::SharedPtr<ChartDefaultStyles> m_defaultStyles;
    bool m_showDLblsOverMax;
    System::SharedPtr<Aspose::Slides::Theme::ColorMapping> m_clrMapOvr;
    System::SharedPtr<Aspose::Slides::Charts::FormatOverrides> m_formatOverrides;
    bool m_hasRoundedCorners;
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<System::Object>> pars;
    ChartGrouping pr_Grouping;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Font> CreateFont__(System::SharedPtr<FontData> fontData, float height, System::Drawing::FontStyle style, System::String languageId);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


