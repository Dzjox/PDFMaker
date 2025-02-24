#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartData.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/Chart.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class AggregatedDataPointCollection;
class Axis;
class BannerDataLabelText;
class ChartCategory;
class ChartCategoryCollection;
class ChartDataCellWrapper;
class ChartDataPoint;
class ChartDataPointLevel;
enum class ChartDataSourceType;
class ChartDataWorkbook;
class ChartRenderContext;
class ChartSeriesCollection;
class ChartSeriesGroupCollection;
class ChartSeriesRenderContext;
class CommonDataLabelText;
class DataLabel;
class DataLabelRenderContext;
class DataPointRenderContext;
class DoubleChartValue;
class ErrorBarsCustomValues;
class IChartCategory;
class IChartCategoryCollection;
class IChartDataCell;
class IChartDataWorkbook;
class IChartSeries;
class IChartSeriesCollection;
class IChartSeriesGroup;
class IChartSeriesGroupCollection;
class IWorkbookManager;
class PieDataLabelText;
class StringChartValue;
class SunburstElement;
class TreemapDataLabelText;
class TreemapSquareElement;
class XYDataLabelText;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class AxesManagerPPTXSerialization;
class ChartCategoryCollectionPPTXSerialization;
class ChartExPPTXSerialization;
class ChartPPTXSerialization;
class ChartSeriesExPPTXSerialization;
class ChartSeriesPPTXSerialization;
class WorkbookPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class MemoryStream;
} // namespace IO
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents data used for a chart plotting.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartData : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>>, public Aspose::Slides::Charts::IChartData
{
    typedef ChartData ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>> BaseType;
    typedef Aspose::Slides::Charts::IChartData BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::Charts::ChartDataCellWrapper;
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::Charts::AggregatedDataPointCollection;
    friend class Aspose::Slides::Charts::Axis;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Charts::ChartCategory;
    friend class Aspose::Slides::Charts::ChartCategoryCollection;
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::Charts::ChartSeriesCollection;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::ErrorBarsCustomValues;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesExPPTXSerialization;
    friend class Aspose::Slides::Charts::XYDataLabelText;
    friend class Aspose::Slides::Charts::SunburstElement;
    friend class Aspose::Slides::Charts::BannerDataLabelText;
    friend class Aspose::Slides::Charts::TreemapDataLabelText;
    friend class Aspose::Slides::Charts::TreemapSquareElement;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::Charts::DataPointRenderContext;
    friend class Aspose::Slides::Charts::CommonDataLabelText;
    friend class Aspose::Slides::Charts::PieDataLabelText;
    friend class Aspose::Slides::Charts::ChartRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxesManagerPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCategoryCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    friend class Aspose::Slides::Charts::DoubleChartValue;
    friend class Aspose::Slides::Charts::StringChartValue;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the cells factory to create cells used for chart series or categories.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartDataWorkbook">IChartDataWorkbook</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataWorkbook> get_ChartDataWorkbook() override;
    /// <summary>
    /// Gets the series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeriesCollection">IChartSeriesCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeriesCollection> get_Series() override;
    /// <summary>
    /// Gets the groups of series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeriesGroupCollection">IChartSeriesGroupCollection</see>.
    /// </summary>
    /// <remarks>
    /// 1) Each group of series contains series with combinable types. Groups of 
    /// combinable series types defined and described with CombinableSeriesTypesGroup 
    /// enum.
    /// Also each group of series contains series witch is plotted whether 
    /// on primary axes or on secondary axes (not both cases in one group).
    /// So, principle of series grouping is a grouping by type groups mentioned 
    /// above and by primary/secondary plotting type.
    /// 
    /// 2) Group of series contains some series properies whitch is common for 
    /// each series in group ("series group properties").
    /// "Series group properties" in ChartSeriesGroup class is read/write.
    /// Each of "series group properties" can have a read-only projection in ChartSeries class.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeriesGroupCollection> get_SeriesGroups() override;
    /// <summary>
    /// Gets the primary categories (or both primary and secondary categories
    /// if <see cref="ChartData::set_UseSecondaryCategories"></see> is set to false).
    /// Read-only <see cref="Aspose::Slides::Charts::IChartCategoryCollection">IChartCategoryCollection</see>.
    /// </summary>
    /// <remarks>
    /// If <see cref="ChartData::set_UseSecondaryCategories"></see> is set to false then <see cref="ChartData::get_SecondaryCategories"></see>
    /// returns null and data in <see cref="ChartData::get_Categories"></see> is used both for primary and secondary series.
    /// If <see cref="ChartData::set_UseSecondaryCategories"></see> is set to true then data in <see cref="ChartData::get_SecondaryCategories"></see>
    /// is used for secondary series and data in <see cref="ChartData::get_Categories"></see> is used for primary series.
    /// </remarks>
    /// <example>
    /// Example. What categories are related to series - ChartData::get_Categories or ChartData::get_SecondaryCategories?
    /// <code>
    /// if (series->get_PlotOnSecondAxis() && series->get_Chart()->get_ChartData()->get_UseSecondaryCategories())
    /// {
    /// // related categories are series->get_Chart()->get_ChartData()->get_SecondaryCategories()
    /// }
    /// else
    /// {
    /// // related categories are series->get_Chart()->get_ChartData()->get_Categories()
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCategoryCollection> get_Categories() override;
    /// <summary>
    /// If set to false then <see cref="ChartData::get_SecondaryCategories"></see> returns null and data 
    /// in <see cref="ChartData::get_Categories"></see> is used both for primary and secondary series.
    /// If set to true then data in <see cref="ChartData::get_SecondaryCategories"></see> is used for secondary series and data
    /// in <see cref="ChartData::get_Categories"></see> is used for primary series.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// Example. What categories are related to series - ChartData::get_Categories or ChartData::get_SecondaryCategories?
    /// <code>
    /// if (series->get_PlotOnSecondAxis() && series->get_Chart()->get_ChartData()->get_UseSecondaryCategories())
    /// {
    ///     // related categories are series->get_Chart()->get_ChartData()->get_SecondaryCategories()
    /// }
    /// else
    /// {
    ///     // related categories are series->get_Chart()->get_ChartData()->get_Categories()
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_UseSecondaryCategories() override;
    /// <summary>
    /// If set to false then <see cref="ChartData::get_SecondaryCategories"></see> returns null and data 
    /// in <see cref="ChartData::get_Categories"></see> is used both for primary and secondary series.
    /// If set to true then data in <see cref="ChartData::get_SecondaryCategories"></see> is used for secondary series and data
    /// in <see cref="ChartData::get_Categories"></see> is used for primary series.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// Example. What categories are related to series - ChartData::get_Categories or ChartData::get_SecondaryCategories?
    /// <code>
    /// if (series->get_PlotOnSecondAxis() && series->get_Chart()->get_ChartData()->get_UseSecondaryCategories())
    /// {
    ///     // related categories are series->get_Chart()->get_ChartData()->get_SecondaryCategories()
    /// }
    /// else
    /// {
    ///     // related categories are series->get_Chart()->get_ChartData()->get_Categories()
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_UseSecondaryCategories(bool value) override;
    /// <summary>
    /// Gets the secondary categories if <see cref="ChartData::get_UseSecondaryCategories"></see> is true.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartCategoryCollection">IChartCategoryCollection</see>.
    /// </summary>
    /// <remarks>
    /// If <see cref="ChartData::set_UseSecondaryCategories"></see> is set to false then <see cref="ChartData::get_SecondaryCategories"></see>
    /// returns null and data in <see cref="ChartData::get_Categories"></see> is used both for primary 
    /// and secondary series.
    /// If <see cref="ChartData::set_UseSecondaryCategories"></see> is set to true then data in 
    /// <see cref="ChartData::get_SecondaryCategories"></see> is used for secondary series and data 
    /// in <see cref="ChartData::get_Categories"></see> is used for primary series.
    /// </remarks>
    /// <example>
    /// Example. What categories are related to series - ChartData::get_Categories or ChartData::get_SecondaryCategories?
    /// <code>
    /// if (series->get_PlotOnSecondAxis() && series->get_Chart()->get_ChartData()->get_UseSecondaryCategories())
    /// {
    ///     // related categories are series->get_Chart()->get_ChartData()->get_SecondaryCategories()
    /// }
    /// else
    /// {
    ///     // related categories are series->get_Chart()->get_ChartData()->get_Categories()
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCategoryCollection> get_SecondaryCategories() override;
    /// <summary>
    /// Represents external workbook path if external data source, null otherwise
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ChartDataSourceType get_DataSourceType() override;
    /// <summary>
    /// Represents data source of the chart
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ExternalWorkbookPath() override;
    
    /// <summary>
    /// Writes the internally contained Excel workbook it into an in-memory stream.
    /// </summary>
    /// <returns>
    /// Returns an instance of <c>MemoryStream</c> containing a copy of the internally contained Excel workbook.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::IO::MemoryStream> ReadWorkbookStream() override;
    /// <summary>
    /// Initializes the internally contained Excel workbook with user-specified value.
    /// </summary>
    /// <param name="ms">
    /// The user-supplied stream containing the entire Excel workbook.
    /// </param>
    ASPOSE_SLIDES_SHARED_API void WriteWorkbookStream(System::SharedPtr<System::IO::MemoryStream> ms) override;
    /// <summary>
    /// Gets chart data range.
    /// </summary>
    /// <returns>Cells data range formula. E.g: "Sheet1!$A$1:$C$4"</returns>
    /// <exception cref="System::InvalidOperationException">Chart doesn't use workbook as a data source</exception>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(Charts::ChartType::PercentsStackedBar, 0.0f, 0.0f, 100.0f, 100.0f);
    /// String result = (AsCast<Charts::ChartData>(chart->get_ChartData()))->GetRange();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String GetRange() override;
    /// <summary>
    /// Set chart data range. Series and categories will be updated based on new data range.
    /// If amount of series in data range greater than count of series in the chart data then additional series with the same type
    /// as a last series in the current collection will be added to the end of the collection. 
    /// </summary>
    /// <param name="formula">The cells data range formula. E.g: "Sheet1!$A$1:$C$4" , "SomeSheetName!A1:B100", "Sheet1!$A$1:$B$5;Sheet1!$D$1:$D$5".</param>
    /// <exception cref="System::ArgumentNullException">formula is null.</exception>
    /// <exception cref="System::InvalidOperationException">Unsupported chart type</exception>
    /// <exception cref="System::ArgumentException">formula has incorrect format.</exception>
    ASPOSE_SLIDES_SHARED_API void SetRange(System::String formula) override;
    /// <summary>
    /// Sets external workbook as a data source for the chart. Chart data will be updated from the target workbook.  
    /// </summary>
    /// <param name="workbookPath">Path to the target workbook</param>
    /// <exception cref="System::InvalidOperationException">External workbook is not available or can't be loaded.</exception>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject&lt;Presentation&gt;();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(Aspose::Slides::Charts::ChartType::Pie, 50.0f, 50.0f, 400.0f, 600.0f, true);
    /// auto chartData = chart->get_ChartData();
    /// (System::AsCast&lt;Aspose::Slides::Charts::ChartData&gt;(chartData))->SetExternalWorkbook(u"../../workbook.xlsx");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void SetExternalWorkbook(System::String workbookPath) override;
    /// <summary>
    /// Sets external workbook as a data source for the chart. 
    /// </summary>
    /// <param name="workbookPath">Path to the target workbook</param>
    /// <param name="updateChartData"> If value is false only workbook path will be updated. 
    /// Chart data won't be loaded and updated from the target workbook. Can be used when target workbook doesn't exist or it's not available.
    /// If value is true chart data will be updated from the target workbook. </param>
    /// <exception cref="System::InvalidOperationException">External workbook is not available or can't be loaded.</exception>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject&lt;Presentation&gt;();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(Aspose::Slides::Charts::ChartType::Pie, 50.0f, 50.0f, 400.0f, 600.0f, true);
    /// auto chartData = chart->get_ChartData();
    /// (System::AsCast&lt;Aspose::Slides::Charts::ChartData&gt;(chartData))->SetExternalWorkbook(u"http://path/doesnt/exists", false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void SetExternalWorkbook(System::String workbookPath, bool updateChartData) override;
    /// <summary>
    /// Swap the data over the axis.
    /// Data being charted on the X axis will move to the Y axis and vice versa. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void SwitchRowColumn() override;
    /// <summary>
    /// Returns the series at the specified index.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">
    ///     <paramref name="index"></paramref> is not a valid index in the <see cref="System::Collections::Generic::IList"></see>.
    /// </exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> get_ChartSeries(int32_t index) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeriesGroup> get_SeriesGroup(System::SharedPtr<IChartSeries> ofSeries) override;
    /// <summary>
    /// Returns the group of series at the specified index.
    /// </summary>
    /// <remarks>
    /// 1) Each group of series contains series with combinable types. Groups of
    /// combinable series types defined and described with CombinableSeriesTypesGroup enum.
    /// Also each group of series contains series witch is plotted whether
    /// on primary axes or on secondary axes (not both cases in one group).
    /// So, principle of series grouping is a grouping by type groups mentioned
    /// above and by primary/secondary plotting type.
    /// 2) Group of series contains some series properies whitch is common for
    /// each series in group ("series group properties").
    /// "Series group properties" in ChartSeriesGroup class is read/write.
    /// Each of "series group properties" can have a read-only projection in ChartSeries class.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeriesGroup> get_SeriesGroup(int32_t index) override;
    /// <summary>
    /// Returns the primary category at the specified index. If <see cref="get_UseSecondaryCategories"></see> is false, get among all categories.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">
    ///     <paramref name="index"></paramref> is not a valid index in the <see cref="System::Collections::Generic::IList"></see>.
    /// </exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCategory> get_Category(int32_t index) override;
    /// <summary>
    /// Returns the secondary category at the specified index. If <see cref="get_UseSecondaryCategories"></see> is false, then <see cref="ChartData::get_SecondaryCategories"></see> is null.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">
    ///     <paramref name="index"></paramref> is not a valid index in the <see cref="System::Collections::Generic::IList"></see>.
    /// </exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCategory> get_SecondaryCategory(int32_t index) override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IWorkbookManager> get_WorkbookManager();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Chart> get_ChartInternal();
    
    ASPOSE_SLIDES_LOCAL_API ChartData(System::SharedPtr<Chart> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartData, CODEPORTING_ARGS(System::SharedPtr<Chart> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void ChartDataUpdate();
    ASPOSE_SLIDES_LOCAL_API void SetSeriesToPosition(int32_t index, System::SharedPtr<IChartSeries> series);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartData();
    
private:

    System::SharedPtr<IWorkbookManager> m_workbookManager;
    System::SharedPtr<ChartSeriesCollection> m_series;
    System::SharedPtr<ChartSeriesGroupCollection> m_seriesGroups;
    System::SharedPtr<ChartCategoryCollection> m_categories;
    System::SharedPtr<ChartCategoryCollection> m_secondaryCategories;
    bool m_useSecondaryCategories;
    
    ASPOSE_SLIDES_LOCAL_API void SwitchValueValueAxes();
    ASPOSE_SLIDES_LOCAL_API void UpdateRowColumnValues(System::SharedPtr<IChartDataCell> cell, int32_t& minRow, int32_t& maxRow, int32_t& minCol, int32_t& maxCol);
    ASPOSE_SLIDES_LOCAL_API void SwitchCategoryValueAxes();
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


