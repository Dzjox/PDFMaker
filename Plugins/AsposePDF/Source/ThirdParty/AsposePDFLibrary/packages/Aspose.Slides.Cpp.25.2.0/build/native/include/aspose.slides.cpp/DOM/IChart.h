#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Theme/IOverrideThemeable.h"
#include "DOM/IGraphicalObject.h"
#include "DOM/Chart/IFormattedTextContainer.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class ChartType;
enum class DisplayBlanksAsType;
class IAxesManager;
class IChartData;
class IChartPlotArea;
class IChartTitle;
class IChartWall;
class IDataTable;
class ILegend;
class IRotation3D;
enum class StyleType;
} // namespace Charts
class IGroupShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents an graphic chart on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChart : public virtual Aspose::Slides::IGraphicalObject, public Aspose::Slides::Charts::IFormattedTextContainer, public Aspose::Slides::Theme::IOverrideThemeable
{
    typedef IChart ThisType;
    typedef Aspose::Slides::IGraphicalObject BaseType;
    typedef Aspose::Slides::Charts::IFormattedTextContainer BaseType1;
    typedef Aspose::Slides::Theme::IOverrideThemeable BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether the only visible cells are plotted. False to plot both visible and hidden cells.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_PlotVisibleCellsOnly() = 0;
    /// <summary>
    /// Determines whether the only visible cells are plotted. False to plot both visible and hidden cells.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PlotVisibleCellsOnly(bool value) = 0;
    /// <summary>
    /// Returns the way to plot blank cells on a chart.
    /// Read <see cref="DisplayBlanksAsType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API DisplayBlanksAsType get_DisplayBlanksAs() = 0;
    /// <summary>
    /// Sets the way to plot blank cells on a chart.
    /// Write <see cref="DisplayBlanksAsType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisplayBlanksAs(DisplayBlanksAsType value) = 0;
    /// <summary>
    /// Returns information about the linked or embedded data associated with a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartData">IChartData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartData> get_ChartData() = 0;
    /// <summary>
    /// Determines whether a chart has a visible title.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasTitle() = 0;
    /// <summary>
    /// Determines whether a chart has a visible title.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasTitle(bool value) = 0;
    /// <summary>
    /// Returns a chart title
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTitle">IChartTitle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartTitle> get_ChartTitle() = 0;
    /// <summary>
    /// Determines whether a chart has a data table.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasDataTable() = 0;
    /// <summary>
    /// Determines whether a chart has a data table.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasDataTable(bool value) = 0;
    /// <summary>
    /// Determines whether a chart has a legend.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasLegend() = 0;
    /// <summary>
    /// Determines whether a chart has a legend.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasLegend(bool value) = 0;
    /// <summary>
    /// Returns a legend for a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::ILegend">ILegend</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILegend> get_Legend() = 0;
    /// <summary>
    /// Returns a data table of a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataTable">IDataTable</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataTable> get_ChartDataTable() = 0;
    /// <summary>
    /// Returns the chart style.
    /// Read <see cref="StyleType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API StyleType get_Style() = 0;
    /// <summary>
    /// Sets the chart style.
    /// Write <see cref="StyleType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Style(StyleType value) = 0;
    /// <summary>
    /// Returns the chart type.
    /// Read <see cref="ChartType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ChartType get_Type() = 0;
    /// <summary>
    /// Sets the chart type.
    /// Write <see cref="ChartType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(ChartType value) = 0;
    /// <summary>
    /// Represents the plot area of a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartPlotArea">IChartPlotArea</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartPlotArea> get_PlotArea() = 0;
    /// <summary>
    /// Returns a 3D rotation of a chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IRotation3D">IRotation3D</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IRotation3D> get_Rotation3D() = 0;
    /// <summary>
    /// Returns an object which allows to change format of the back wall of a 3D chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartWall">IChartWall</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartWall> get_BackWall() = 0;
    /// <summary>
    /// Returns an object which allows to change format of the side wall of a 3D chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartWall">IChartWall</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartWall> get_SideWall() = 0;
    /// <summary>
    /// Returns an object which allows to change format of the floor of a 3D chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartWall">IChartWall</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartWall> get_Floor() = 0;
    /// <summary>
    /// Specify the shapes drawn on top of the chart.
    /// Read-only <see cref="IGroupShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGroupShape> get_UserShapes() = 0;
    /// <summary>
    /// Provide access to chart axes.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxesManager">IAxesManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAxesManager> get_Axes() = 0;
    /// <summary>
    /// Specifies data labels over the maximum of the chart shall be shown.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowDataLabelsOverMaximum() = 0;
    /// <summary>
    /// Specifies data labels over the maximum of the chart shall be shown.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowDataLabelsOverMaximum(bool value) = 0;
    /// <summary>
    /// Specifies the chart area shall have rounded corners.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasRoundedCorners() = 0;
    /// <summary>
    /// Specifies the chart area shall have rounded corners.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasRoundedCorners(bool value) = 0;
    
    /// <summary>
    /// Calculates actual values of chart elements. Actual values inlude position of elements that implement IActualLayout interface 
    /// (IActualLayout::get_ActualX, IActualLayout::get_ActualY, IActualLayout::get_ActualWidth, IActualLayout::get_ActualHeight)
    /// and actual axes values (IAxis::get_ActualMaxValue, IAxis::get_ActualMinValue, IAxis::get_ActualMajorUnit, IAxis::get_ActualMinorUnit, 
    /// IAxis::get_ActualMajorUnitScale, IAxis::get_ActualMinorUnitScale)
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ValidateChartLayout() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


