#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a type of chart.
/// </summary>
enum class ChartType
{
    /// <summary>
    /// Represents Clustered Column Chart.
    /// </summary>
    ClusteredColumn = 0,
    /// <summary>
    /// Represents Stacked Column Chart.
    /// </summary>
    StackedColumn,
    /// <summary>
    /// Represents 100% Stacked Column Chart.
    /// </summary>
    PercentsStackedColumn,
    /// <summary>
    /// Represents 3D Colustered Column Chart.
    /// </summary>
    ClusteredColumn3D,
    /// <summary>
    /// Represents 3D Stacked Column Chart.
    /// </summary>
    StackedColumn3D,
    /// <summary>
    /// Represents 3D 100% Stacked Column Chart.
    /// </summary>
    PercentsStackedColumn3D,
    /// <summary>
    /// Represents 3D Column Chart.
    /// </summary>
    Column3D,
    /// <summary>
    /// Represents Cylinder Chart.
    /// </summary>
    ClusteredCylinder,
    /// <summary>
    /// Represents Stacked Cylinder Chart.
    /// </summary>
    StackedCylinder,
    /// <summary>
    /// Represents 100% Stacked Cylinder Chart.
    /// </summary>
    PercentsStackedCylinder,
    /// <summary>
    /// Represents 3D Cylindrical Column Chart.
    /// </summary>
    Cylinder3D,
    /// <summary>
    /// Represents Cone Chart.
    /// </summary>
    ClusteredCone,
    /// <summary>
    /// Represents Stacked Cone Chart.
    /// </summary>
    StackedCone,
    /// <summary>
    /// Represents 100% Stacked Cone Chart.
    /// </summary>
    PercentsStackedCone,
    /// <summary>
    /// Represents 3D Conical Column Chart.
    /// </summary>
    Cone3D,
    /// <summary>
    /// Represents Pyramid Chart.
    /// </summary>
    ClusteredPyramid,
    /// <summary>
    /// Represents Stacked Pyramid Chart.
    /// </summary>
    StackedPyramid,
    /// <summary>
    /// Represents 100% Stacked Pyramid Chart.
    /// </summary>
    PercentsStackedPyramid,
    /// <summary>
    /// Represents 3D Pyramid Column Chart.
    /// </summary>
    Pyramid3D,
    /// <summary>
    /// Represents Line Chart.
    /// </summary>
    Line,
    /// <summary>
    /// Represents Stacked Line Chart.
    /// </summary>
    StackedLine,
    /// <summary>
    /// Represents 100% Stacked Line Chart.
    /// </summary>
    PercentsStackedLine,
    /// <summary>
    /// Represents Line Chart with data markers.
    /// </summary>
    LineWithMarkers,
    /// <summary>
    /// Represents Stacked Line Chart with data markers.
    /// </summary>
    StackedLineWithMarkers,
    /// <summary>
    /// Represents 100% Stacked Line Chart with data markers.
    /// </summary>
    PercentsStackedLineWithMarkers,
    /// <summary>
    /// Represents 3D Line Chart.
    /// </summary>
    Line3D,
    /// <summary>
    /// Represents Pie Chart.
    /// </summary>
    Pie,
    /// <summary>
    /// Represents 3D Pie Chart.
    /// </summary>
    Pie3D,
    /// <summary>
    /// Represents Pie of Pie Chart.
    /// </summary>
    PieOfPie,
    /// <summary>
    /// Represents Exploded Pie Chart.
    /// </summary>
    ExplodedPie,
    /// <summary>
    /// Represents 3D Exploded Pie Chart.
    /// </summary>
    ExplodedPie3D,
    /// <summary>
    /// Represents Bar of Pie Chart.
    /// </summary>
    BarOfPie,
    /// <summary>
    /// Represents 100% Stacked Bar Chart.
    /// </summary>
    PercentsStackedBar,
    /// <summary>
    /// Represents 3D Colustered Bar Chart.
    /// </summary>
    ClusteredBar3D,
    /// <summary>
    /// Represents Clustered Bar Chart.
    /// </summary>
    ClusteredBar,
    /// <summary>
    /// Represents Stacked Bar Chart.
    /// </summary>
    StackedBar,
    /// <summary>
    /// Represents 3D Stacked Bar Chart.
    /// </summary>
    StackedBar3D,
    /// <summary>
    /// Represents 3D 100% Stacked Bar Chart.
    /// </summary>
    PercentsStackedBar3D,
    /// <summary>
    /// Represents Cylindrical Bar Chart.
    /// </summary>
    ClusteredHorizontalCylinder,
    /// <summary>
    /// Represents Stacked Cylindrical Bar Chart.
    /// </summary>
    StackedHorizontalCylinder,
    /// <summary>
    /// Represents 100% Stacked Cylindrical Bar Chart.
    /// </summary>
    PercentsStackedHorizontalCylinder,
    /// <summary>
    /// Represents Conical Bar Chart.
    /// </summary>
    ClusteredHorizontalCone,
    /// <summary>
    /// Represents Stacked Conical Bar Chart.
    /// </summary>
    StackedHorizontalCone,
    /// <summary>
    /// Represents 100% Stacked Conical Bar Chart.
    /// </summary>
    PercentsStackedHorizontalCone,
    /// <summary>
    /// Represents Pyramid Bar Chart.
    /// </summary>
    ClusteredHorizontalPyramid,
    /// <summary>
    /// Represents Stacked Pyramid Bar Chart.
    /// </summary>
    StackedHorizontalPyramid,
    /// <summary>
    /// Represents 100% Stacked Pyramid Bar Chart.
    /// </summary>
    PercentsStackedHorizontalPyramid,
    /// <summary>
    /// Represents Area Chart.
    /// </summary>
    Area,
    /// <summary>
    /// Represents Stacked Area Chart.
    /// </summary>
    StackedArea,
    /// <summary>
    /// Represents 100% Stacked Area Chart.
    /// </summary>
    PercentsStackedArea,
    /// <summary>
    /// Represents 3D Area Chart.
    /// </summary>
    Area3D,
    /// <summary>
    /// Represents 3D Stacked Area Chart.
    /// </summary>
    StackedArea3D,
    /// <summary>
    /// Represents 3D 100% Stacked Area Chart.
    /// </summary>
    PercentsStackedArea3D,
    /// <summary>
    /// Represents Scatter Chart.
    /// </summary>
    ScatterWithMarkers,
    /// <summary>
    /// Represents Scatter Chart connected by curves, with data markers.
    /// </summary>
    ScatterWithSmoothLinesAndMarkers,
    /// <summary>
    /// Represents Scatter Chart connected by curves, without data markers.
    /// </summary>
    ScatterWithSmoothLines,
    /// <summary>
    /// Represents Scatter Chart connected by lines, with data markers.
    /// </summary>
    ScatterWithStraightLinesAndMarkers,
    /// <summary>
    /// Represents Scatter Chart connected by lines, without data markers.
    /// </summary>
    ScatterWithStraightLines,
    /// <summary>
    /// Represents High-Low-Close Stock Chart.
    /// </summary>
    HighLowClose,
    /// <summary>
    /// Represents Open-High-Low-Close Stock Chart.
    /// </summary>
    OpenHighLowClose,
    /// <summary>
    /// Represents Volume-High-Low-Close Stock Chart.
    /// </summary>
    VolumeHighLowClose,
    /// <summary>
    /// Represents Volume-Open-High-Low-Close Stock Chart.
    /// </summary>
    VolumeOpenHighLowClose,
    /// <summary>
    /// Represents 3D Surface Chart.
    /// </summary>
    Surface3D,
    /// <summary>
    /// Represents Wireframe 3D Surface Chart.
    /// </summary>
    WireframeSurface3D,
    /// <summary>
    /// Represents Contour Chart.
    /// </summary>
    Contour,
    /// <summary>
    /// Represents Wireframe Contour Chart.
    /// </summary>
    WireframeContour,
    /// <summary>
    /// Represents Doughnut Chart.
    /// </summary>
    Doughnut,
    /// <summary>
    /// Represents Exploded Doughnut Chart.
    /// </summary>
    ExplodedDoughnut,
    /// <summary>
    /// Represents Bubble Chart.
    /// </summary>
    Bubble,
    /// <summary>
    /// Represents 3D Bubble Chart.
    /// </summary>
    BubbleWith3D,
    /// <summary>
    /// Represents Radar Chart.
    /// </summary>
    Radar,
    /// <summary>
    /// Represents Radar Chart with data markers.
    /// </summary>
    RadarWithMarkers,
    /// <summary>
    /// Represents Filled Radar Chart.
    /// </summary>
    FilledRadar,
    /// <summary>
    /// This value only can be returned by ChartEx.Type property. 
    /// It mean that chart has series of mixed types.
    /// </summary>
    SeriesOfMixedTypes,
    /// <summary>
    /// Represents Treemap chart.
    /// </summary>
    Treemap,
    /// <summary>
    /// Represents Sunburst chart.
    /// </summary>
    Sunburst,
    /// <summary>
    /// Represents Histogram chart.
    /// </summary>
    Histogram,
    /// <summary>
    /// Represents Pareto line series type (Histogram Pareto chart).
    /// </summary>
    ParetoLine,
    /// <summary>
    /// Represents BoxAndWhisker chart.
    /// </summary>
    BoxAndWhisker,
    /// <summary>
    /// Represents Waterfall chart.
    /// </summary>
    Waterfall,
    /// <summary>
    /// Represents Funnel chart.
    /// </summary>
    Funnel,
    /// <summary>
    /// Represents Map chart.
    /// </summary>
    Map
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::ChartType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::ChartType, const char_t*>, 82>& values();
};
/// @endcond



