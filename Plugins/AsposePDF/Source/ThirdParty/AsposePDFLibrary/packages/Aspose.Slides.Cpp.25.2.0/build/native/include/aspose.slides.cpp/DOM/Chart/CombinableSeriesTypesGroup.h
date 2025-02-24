#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Enumeration of groups of combinable series types.
/// Each element relates to group of types of chart series that can persist simultaneously in one ChartSeriesGroup.
/// For example: ChartType::PercentsStackedArea series cannot be simultaneously with ChartType::StackedArea series 
/// in one ChartSeriesGroup. But two or more ChartType::PercentsStackedArea can be in one ChartSeriesGroup 
/// simultaneously (CombinableSeriesTypesGroup::AreaChart_PercentsStackedArea). And ChartType::Line series can be 
/// with ChartType::LineWithMarkers series simultaneously in one CombinableSeriesTypesGroup::LineChart_Line 
/// ChartSeriesGroup.
/// </summary>
enum class CombinableSeriesTypesGroup
{
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Area }
    /// </summary>
    AreaChart_Area = 4,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedArea }
    /// </summary>
    AreaChart_PercentsStackedArea = 5,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedArea }
    /// </summary>
    AreaChart_StackedArea = 6,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Area3D }
    /// </summary>
    AreaChart_Area3D = 24,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedArea3D }
    /// </summary>
    AreaChart_StackedArea3D = 25,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedArea3D }
    /// </summary>
    AreaChart_PercentsStackedArea3D = 26,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Line, ChartType::LineWithMarkers }
    /// </summary>
    LineChart_Line = 13,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedLine, ChartType::StackedLineWithMarkers }
    /// </summary>
    LineChart_StackedLine = 14,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedLine, ChartType::PercentsStackedLineWithMarkers }
    /// </summary>
    LineChart_PercentsStackedLine = 15,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Line3D }
    /// </summary>
    Line3DChart = 27,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::HighLowClose }
    /// </summary>
    StockHighLowClose = 18,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::OpenHighLowClose }
    /// </summary>
    StockOpenHighLowClose = 19,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::VolumeHighLowClose }
    /// </summary>
    StockVolumeHighLowClose = 20,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::VolumeOpenHighLowClose }
    /// </summary>
    StockVolumeOpenHighLowClose = 21,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Radar, ChartType::RadarWithMarkers }
    /// </summary>
    RadarChart = 16,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::FilledRadar }
    /// </summary>
    FilledRadarChart = 17,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::ScatterWithMarkers, ChartType::ScatterWithStraightLines, ChartType::ScatterWithStraightLinesAndMarkers }
    /// </summary>
    ScatterStraightMarker = 22,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::ScatterWithSmoothLines, ChartType::ScatterWithSmoothLinesAndMarkers }
    /// </summary>
    ScatterSmoothMarker = 23,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Pie, ChartType::ExplodedPie }
    /// </summary>
    PieChart = 3,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Pie3D, ChartType::ExplodedPie3D }
    /// </summary>
    Pie3DChart = 28,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Doughnut, ChartType::ExplodedDoughnut }
    /// </summary>
    DoughnutChart = 2,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::ClusteredColumn }
    /// </summary>
    BarChart_VertClustered = 10,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedColumn }
    /// </summary>
    BarChart_VertStacked = 11,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedColumn }
    /// </summary>
    BarChart_VertPercentsStacked = 12,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::ClusteredBar }
    /// </summary>
    BarChart_HorizClustered = 7,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedBar }
    /// </summary>
    BarChart_HorizStacked = 8,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedBar }
    /// </summary>
    BarChart_HorizPercentsStacked = 9,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Column3D, ChartType::Cylinder3D, ChartType::Cone3D, ChartType::Pyramid3D }
    /// </summary>
    Bar3DChart_Vert = 29,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::ClusteredColumn3D, ChartType::ClusteredCone, ChartType::ClusteredCylinder, ChartType::ClusteredPyramid }
    /// </summary>
    Bar3DChart_VertClustered = 30,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedColumn3D }
    /// </summary>
    Bar3DChart_VertPercentsStackedColumn3D = 31,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedCone }
    /// </summary>
    Bar3DChart_VertPercentsStackedCone = 32,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedCylinder }
    /// </summary>
    Bar3DChart_VertPercentsStackedCylinder = 33,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedPyramid }
    /// </summary>
    Bar3DChart_VertPercentsStackedPyramid = 34,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedColumn3D }
    /// </summary>
    Bar3DChart_VertStackedColumn3D = 35,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedCone }
    /// </summary>
    Bar3DChart_VertStackedCone = 36,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedCylinder }
    /// </summary>
    Bar3DChart_VertStackedCylinder = 37,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedPyramid }
    /// </summary>
    Bar3DChart_VertStackedPyramid = 38,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::ClusteredBar3D, ChartType::ClusteredHorizontalCone, ChartType::ClusteredHorizontalCylinder, ChartType::ClusteredHorizontalPyramid }
    /// </summary>
    Bar3DChart_HorizClustered = 39,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedBar3D }
    /// </summary>
    Bar3DChart_HorizStackedBar3D = 40,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedHorizontalCone }
    /// </summary>
    Bar3DChart_HorizStackedCone = 41,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedHorizontalCylinder }
    /// </summary>
    Bar3DChart_HorizStackedCylinder = 42,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::StackedHorizontalPyramid }
    /// </summary>
    Bar3DChart_HorizStackedPyramid = 43,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedBar3D }
    /// </summary>
    Bar3DChart_HorizPercentsStackedBar3D = 44,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedHorizontalCone }
    /// </summary>
    Bar3DChart_HorizPercentsStackedCone = 45,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedHorizontalCylinder }
    /// </summary>
    Bar3DChart_HorizPercentsStackedCylinder = 46,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PercentsStackedHorizontalPyramid }
    /// </summary>
    Bar3DChart_HorizPercentsStackedPyramid = 47,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::BarOfPie }
    /// </summary>
    BarOfPieChart = 0,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::PieOfPie }
    /// </summary>
    PieOfPieChart = 1,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Contour }
    /// </summary>
    SurfaceChart_Contour = 48,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::WireframeContour }
    /// </summary>
    SurfaceChart_WireframeContour = 49,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Surface3D }
    /// </summary>
    SurfaceChart_Surface3D = 50,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::WireframeSurface3D }
    /// </summary>
    SurfaceChart_WireframeSurface3D = 51,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Bubble, ChartType::BubbleWith3D }
    /// </summary>
    BubbleChart = 52,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Histogram }
    /// </summary>
    HistogramChart = 53,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::ParetoLine }
    /// </summary>
    ParetoLineChart = 54,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::BoxAndWhisker }
    /// </summary>
    BoxAndWhiskerChart = 55,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Waterfall }
    /// </summary>
    WaterfallChart = 56,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Funnel }
    /// </summary>
    FunnelChart = 57,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Treemap }
    /// </summary>
    TreemapChart = 58,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Map }
    /// </summary>
    MapChart = 59,
    /// <summary>
    /// Groups this set of series types:
    /// { ChartType::Sunburst }
    /// </summary>
    SunburstChart = 60
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::CombinableSeriesTypesGroup>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::CombinableSeriesTypesGroup, const char_t*>, 61>& values();
};
/// @endcond



