#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

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
class Axis3DHelper;
class AxisHelper;
class Bar3DHelper;
class Chart2DHelper;
class Column3DHelper;
class LegendHelper;
class Util_Chart2007;
} // namespace ChartHelpers
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
class ChartPortionFormatEffectiveData;
namespace Charts
{
class AreaSeriesElement;
enum class AxesCompositionType;
class AxesManager;
class BarElement;
class BarSeriesElement;
class CategoryAxisBase;
class CategoryValueChartDataBuilder;
class Chart;
class ChartData;
class ChartDataWorkbook;
class ChartRenderContext;
class ChartSeries;
class ChartSeriesCollection;
class ChartSeriesGroup;
class ChartSeriesGroupCollection;
class ChartSeriesRenderContext;
enum class ChartType;
class ColumnElement;
enum class CombinableSeriesTypesGroup;
class CoordinateSystemElement;
class DataLabelFormat;
class DataPointLegendKeyElement;
class DataPointRenderContext;
class HorizontalCategoryAxis;
class IChartSeries;
class IChartSeriesGroup;
class LegendElement;
class LegendRenderContext;
class LineSeriesElement;
class LogValueAxis;
class ManualPlotAreaAxesCompositor;
class SeriesBaseElement;
class SeriesGroupElement;
class SeriesLegendKeyElement;
class TableBodyElement;
class TableSeriesColumnElement;
class TitleElement;
class ValueAxis;
class ValueAxisBase;
class VerticalCategoryAxis;
} // namespace Charts
namespace DOM
{
namespace Xlsx
{
namespace Charts
{
namespace Chart3DNew
{
class Axis3DMeasureHelper;
namespace Bar3D
{
class Bar3DAxesRenderer;
} // namespace Bar3D
class BaseAxes3DRenderer;
class Chart3DDataTableRenderer;
class Chart3DMeasure;
} // namespace Chart3DNew
} // namespace Charts
} // namespace Xlsx
} // namespace DOM
namespace OdpSerialization
{
namespace PartParser
{
class ChartOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
class ChartTemplateDeserializator;
namespace PartParser
{
namespace Chart
{
class AxesManagerPPTXSerialization;
class ChartDataPPTXSerialization;
class ChartRefPPTXSerialization;
class ChartSeriesExPPTXSerialization;
class DataLabelPPTXSerialization;
} // namespace Chart
class GroupShapePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class ShapeCollection;
} // namespace Slides
} // namespace Aspose
namespace System
{
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Helper for getting additional information about charts and series by its ChartType.
/// </summary>
// It is necessary to implement class as singleton to use it via COM.
// Attibutes is not deleted for saving earlier generated GUID.
// [ComVisible(true), ClassInterface(ClassInterfaceType.None), Guid("1c1351a9-d80a-42d0-80d7-0eee228b8b56")]
class ASPOSE_SLIDES_SHARED_CLASS ChartTypeCharacterizer
{
    typedef ChartTypeCharacterizer ThisType;
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::CategoryValueChartDataBuilder;
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::ChartPortionFormatEffectiveData;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Bar3D::Bar3DAxesRenderer;
    friend class Aspose::Slides::Charts::DataLabelFormat;
    friend class Aspose::Slides::Charts::AxesManager;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Charts::ChartData;
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::Charts::ChartSeriesCollection;
    friend class Aspose::Slides::Charts::ChartSeriesGroup;
    friend class Aspose::Slides::Charts::ChartSeriesGroupCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesExPPTXSerialization;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::BaseAxes3DRenderer;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DDataTableRenderer;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Axis3DMeasureHelper;
    friend class Aspose::Slides::DOM::Xlsx::Charts::Chart3DNew::Chart3DMeasure;
    friend class Aspose::Slides::Charts::ManualPlotAreaAxesCompositor;
    friend class Aspose::Slides::Charts::HorizontalCategoryAxis;
    friend class Aspose::Slides::Charts::CategoryAxisBase;
    friend class Aspose::Slides::Charts::SeriesBaseElement;
    friend class Aspose::Slides::Charts::SeriesGroupElement;
    friend class Aspose::Slides::Charts::ColumnElement;
    friend class Aspose::Slides::Charts::DataPointLegendKeyElement;
    friend class Aspose::Slides::Charts::SeriesLegendKeyElement;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::Axis3DHelper;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::AxisHelper;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::Bar3DHelper;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::Chart2DHelper;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::Column3DHelper;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::Charts::DataPointRenderContext;
    friend class Aspose::Slides::Charts::AreaSeriesElement;
    friend class Aspose::Slides::Charts::LogValueAxis;
    friend class Aspose::Slides::Charts::ValueAxisBase;
    friend class Aspose::Slides::Charts::ValueAxis;
    friend class Aspose::Slides::Charts::BarElement;
    friend class Aspose::Slides::Charts::BarSeriesElement;
    friend class Aspose::Slides::Charts::CoordinateSystemElement;
    friend class Aspose::Slides::Charts::TableBodyElement;
    friend class Aspose::Slides::Charts::TableSeriesColumnElement;
    friend class Aspose::Slides::Charts::LegendElement;
    friend class Aspose::Slides::Charts::LineSeriesElement;
    friend class Aspose::Slides::Charts::TitleElement;
    friend class Aspose::Slides::Charts::VerticalCategoryAxis;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::LegendHelper;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::Util_Chart2007;
    friend class Aspose::Slides::Charts::ChartRenderContext;
    friend class Aspose::Slides::Charts::LegendRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxesManagerPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartRefPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::ChartTemplateDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Return true if chartType is one of bar3DChart subtypes (3D columns or bars).
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsBar3DChart(ChartType chartType);
    /// <summary>
    /// Return true if <paramref name="chartType"></paramref> is one of 2D chart types.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool Is2DChart(ChartType chartType);
    /// <summary>
    /// Return true if <paramref name="chartType"></paramref> is one of 3D chart types.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool Is3DChart(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Column subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::ClusteredColumn"></see>,
    /// <see cref="ChartType::ClusteredColumn3D"></see>,
    /// <see cref="ChartType::ClusteredCone"></see>,
    /// <see cref="ChartType::ClusteredCylinder"></see>,
    /// <see cref="ChartType::ClusteredPyramid"></see>,
    /// <see cref="ChartType::PercentsStackedColumn"></see>,
    /// <see cref="ChartType::PercentsStackedColumn3D"></see>,
    /// <see cref="ChartType::PercentsStackedCone"></see>,
    /// <see cref="ChartType::PercentsStackedCylinder"></see>,
    /// <see cref="ChartType::PercentsStackedPyramid"></see>,
    /// <see cref="ChartType::StackedColumn"></see>,
    /// <see cref="ChartType::StackedColumn3D"></see>,
    /// <see cref="ChartType::StackedCone"></see>,
    /// <see cref="ChartType::StackedCylinder"></see>,
    /// <see cref="ChartType::StackedPyramid"></see>,
    /// <see cref="ChartType::Column3D"></see>,
    /// <see cref="ChartType::Cylinder3D"></see>,
    /// <see cref="ChartType::Cone3D"></see>,
    /// <see cref="ChartType::Pyramid3D"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeColumn(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Line subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::Line"></see>,
    /// <see cref="ChartType::LineWithMarkers"></see>,
    /// <see cref="ChartType::PercentsStackedLine"></see>,
    /// <see cref="ChartType::PercentsStackedLineWithMarkers"></see>,
    /// <see cref="ChartType::StackedLine"></see>,
    /// <see cref="ChartType::StackedLineWithMarkers"></see>,
    /// <see cref="ChartType::Line3D"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeLine(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Pie subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::BarOfPie"></see>,
    /// <see cref="ChartType::ExplodedPie"></see>,
    /// <see cref="ChartType::ExplodedPie3D"></see>,
    /// <see cref="ChartType::Pie"></see>,
    /// <see cref="ChartType::Pie3D"></see>,
    /// <see cref="ChartType::PieOfPie"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypePie(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Bar subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::ClusteredBar"></see>,
    /// <see cref="ChartType::ClusteredBar3D"></see>,
    /// <see cref="ChartType::PercentsStackedBar"></see>,
    /// <see cref="ChartType::PercentsStackedBar3D"></see>,
    /// <see cref="ChartType::StackedBar"></see>,
    /// <see cref="ChartType::StackedBar3D"></see>,
    /// <see cref="ChartType::ClusteredHorizontalCone"></see>,
    /// <see cref="ChartType::ClusteredHorizontalCylinder"></see>,
    /// <see cref="ChartType::ClusteredHorizontalPyramid"></see>,
    /// <see cref="ChartType::StackedHorizontalCone"></see>,
    /// <see cref="ChartType::StackedHorizontalCylinder"></see>,
    /// <see cref="ChartType::StackedHorizontalPyramid"></see>,
    /// <see cref="ChartType::PercentsStackedHorizontalCone"></see>,
    /// <see cref="ChartType::PercentsStackedHorizontalCylinder"></see>,
    /// <see cref="ChartType::PercentsStackedHorizontalPyramid"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeBar(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Area subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::Area"></see>,
    /// <see cref="ChartType::PercentsStackedArea"></see>,
    /// <see cref="ChartType::PercentsStackedArea3D"></see>,
    /// <see cref="ChartType::StackedArea"></see>,
    /// <see cref="ChartType::StackedArea3D"></see>,
    /// <see cref="ChartType::Area3D"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeArea(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Scatter subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::ScatterWithMarkers"></see>,
    /// <see cref="ChartType::ScatterWithSmoothLines"></see>,
    /// <see cref="ChartType::ScatterWithSmoothLinesAndMarkers"></see>,
    /// <see cref="ChartType::ScatterWithStraightLines"></see>,
    /// <see cref="ChartType::ScatterWithStraightLinesAndMarkers"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeScatter(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Stock subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::HighLowClose"></see>,
    /// <see cref="ChartType::OpenHighLowClose"></see>,
    /// <see cref="ChartType::VolumeHighLowClose"></see>,
    /// <see cref="ChartType::VolumeOpenHighLowClose"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeStock(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Surface subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::Surface3D"></see>,
    /// <see cref="ChartType::WireframeSurface3D"></see>,
    /// <see cref="ChartType::Contour"></see>,
    /// <see cref="ChartType::WireframeContour"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeSurface(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Doughnut subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::Doughnut"></see>,
    /// <see cref="ChartType::ExplodedDoughnut"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeDoughnut(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Bubble subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::Bubble"></see>,
    /// <see cref="ChartType::BubbleWith3D"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeBubble(ChartType chartType);
    /// <summary>
    /// Return true if chartType is one of Radar subtypes.
    /// Subtypes set corresponds to the appropriate set in PowerPoint (see "Change Chart Type" dialog in PowerPoint):
    /// <see cref="ChartType::FilledRadar"></see>,
    /// <see cref="ChartType::Radar"></see>,
    /// <see cref="ChartType::RadarWithMarkers"></see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API bool IsChartTypeRadar(ChartType chartType);
    /// <summary>
    /// Returns if specified series type uses X value coordinates.
    /// </summary>
    /// <param name="seriesType">Series type.</param>
    /// <returns>True if uses otherwise false.</returns>
    static ASPOSE_SLIDES_SHARED_API bool IsSeriesUsesXValueCoordinate(ChartType seriesType);
    /// <summary>
    /// Returns if specified series type uses Y value coordinates.
    /// </summary>
    /// <param name="seriesType">Series type.</param>
    /// <returns>True if uses otherwise false.</returns>
    static ASPOSE_SLIDES_SHARED_API bool IsSeriesUsesYValueCoordinate(ChartType seriesType);
    /// <summary>
    /// Returns if specified series type uses value coordinates.
    /// </summary>
    /// <param name="seriesType">Series type.</param>
    /// <returns>True if uses otherwise false.</returns>
    static ASPOSE_SLIDES_SHARED_API bool IsSeriesUsesValueCoordinate(ChartType seriesType);
    /// <summary>
    /// Returns if bubble size coordinates can be used for specified series type.
    /// </summary>
    /// <param name="seriesType">Series type.</param>
    /// <returns>True if can be used, otherwise false.</returns>
    static ASPOSE_SLIDES_SHARED_API bool IsSeriesUsesBubbleSizeCoordinate(ChartType seriesType);
    /// <summary>
    /// Returns if there are series trend lines for specified series type.
    /// </summary>
    /// <param name="seriesType">Series type.</param>
    /// <returns>True if present otherwise false.</returns>
    static ASPOSE_SLIDES_SHARED_API bool HasSeriesTrendLines(ChartType seriesType);
    /// <summary>
    /// Returns if error bars X allowed for specified series type.
    /// </summary>
    /// <param name="seriesType">Series type.</param>
    /// <returns>True if allowed, otherwise false.</returns>
    static ASPOSE_SLIDES_SHARED_API bool IsErrorBarsXAllowed(ChartType seriesType);
    /// <summary>
    /// Returns if error bars Y allowed for specified series type.
    /// </summary>
    /// <param name="seriesType">Series type.</param>
    /// <returns>True if allowed, otherwise false.</returns>
    static ASPOSE_SLIDES_SHARED_API bool IsErrorBarsYAllowed(ChartType seriesType);
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API AxesCompositionType GetBaseAxesComposition(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API uint16_t GetBaseGapWidth(ChartType type);
    static ASPOSE_SLIDES_LOCAL_API System::String GetAxesCompositionTypeDescription(AxesCompositionType compositionType);
    static ASPOSE_SLIDES_LOCAL_API bool IsChartExType(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API bool IsDrawMarkerInPlot(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API bool IsAreaPercentSeries(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API bool IsWideKeyInLegend(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API bool IsStackedSeries(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API bool IsAreaStatckedSeries(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API bool IsPercentSeries(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API CombinableSeriesTypesGroup GetIdOfCombinableSeriesTypesGroup(ChartType chartType);
    static ASPOSE_SLIDES_LOCAL_API bool IsCompatible(System::SharedPtr<IChartSeries> series, System::SharedPtr<IChartSeriesGroup> seriesGroup);
    static ASPOSE_SLIDES_LOCAL_API bool IsSeriesUseSizeValueCoordinate(ChartType seriesType);
    static ASPOSE_SLIDES_LOCAL_API bool IsTopValueChart(System::SharedPtr<Chart> chart);
    static ASPOSE_SLIDES_LOCAL_API bool IsAggregatedDataPointsAllowed(ChartType seriesType);
    /// @endcond
    
public:
    ChartTypeCharacterizer() = delete;
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


