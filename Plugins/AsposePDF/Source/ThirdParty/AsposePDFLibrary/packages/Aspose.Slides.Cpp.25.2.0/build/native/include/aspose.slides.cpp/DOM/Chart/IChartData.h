#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class ChartDataSourceType;
class IChartCategory;
class IChartCategoryCollection;
class IChartDataWorkbook;
class IChartSeries;
class IChartSeriesCollection;
class IChartSeriesGroup;
class IChartSeriesGroupCollection;
} // namespace Charts
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
class ASPOSE_SLIDES_API_SHARED_CLASS IChartData : public virtual System::Object
{
    typedef IChartData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the cells factory to create cells used for chart series or categories.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartDataWorkbook">IChartDataWorkbook</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataWorkbook> get_ChartDataWorkbook() = 0;
    /// <summary>
    /// Gets the series.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartSeriesCollection">IChartSeriesCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeriesCollection> get_Series() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeriesGroupCollection> get_SeriesGroups() = 0;
    /// <summary>
    /// Gets the primary categories (or both primary and secondary categories
    /// if <see cref="IChartData::set_UseSecondaryCategories"></see> is set to false).
    /// Read-only <see cref="Aspose::Slides::Charts::IChartCategoryCollection">IChartCategoryCollection</see>.
    /// </summary>
    /// <remarks>
    /// If <see cref="IChartData::set_UseSecondaryCategories"></see> is set to false then <see cref="IChartData::get_SecondaryCategories"></see>
    /// returns null and data in <see cref="IChartData::get_Categories"></see> is used both for primary and secondary series.
    /// If <see cref="IChartData::set_UseSecondaryCategories"></see> is set to true then data in <see cref="IChartData::get_SecondaryCategories"></see>
    /// is used for secondary series and data in <see cref="IChartData::get_Categories"></see> is used for primary series.
    /// </remarks>
    /// <example>
    /// Example. What categories are related to series - ChartData.Categories or ChartData.SecondaryCategories?
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCategoryCollection> get_Categories() = 0;
    /// <summary>
    /// If set to false then <see cref="IChartData::get_SecondaryCategories"></see> returns null and data 
    /// in <see cref="IChartData::get_Categories"></see> is used both for primary and secondary series.
    /// If set to true then data in <see cref="IChartData::get_SecondaryCategories"></see> is used for secondary series and data
    /// in <see cref="IChartData::get_Categories"></see> is used for primary series.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// Example. What categories are related to series - ChartData.Categories or ChartData.SecondaryCategories?
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UseSecondaryCategories() = 0;
    /// <summary>
    /// If set to false then <see cref="IChartData::get_SecondaryCategories"></see> returns null and data 
    /// in <see cref="IChartData::get_Categories"></see> is used both for primary and secondary series.
    /// If set to true then data in <see cref="IChartData::get_SecondaryCategories"></see> is used for secondary series and data
    /// in <see cref="IChartData::get_Categories"></see> is used for primary series.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// Example. What categories are related to series - ChartData.Categories or ChartData.SecondaryCategories?
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UseSecondaryCategories(bool value) = 0;
    /// <summary>
    /// Gets the secondary categories if <see cref="IChartData::get_UseSecondaryCategories"></see> is true.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartCategoryCollection">IChartCategoryCollection</see>.
    /// </summary>
    /// <remarks>
    /// If <see cref="IChartData::set_UseSecondaryCategories"></see> is set to false then <see cref="IChartData::get_SecondaryCategories"></see>
    /// returns null and data in <see cref="IChartData::get_Categories"></see> is used both for primary 
    /// and secondary series.
    /// If <see cref="IChartData::set_UseSecondaryCategories"></see> is set to true then data in 
    /// <see cref="IChartData::get_SecondaryCategories"></see> is used for secondary series and data 
    /// in <see cref="IChartData::get_Categories"></see> is used for primary series.
    /// </remarks>
    /// <example>
    /// Example. What categories are related to series - ChartData.Categories or ChartData.SecondaryCategories?
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCategoryCollection> get_SecondaryCategories() = 0;
    /// <summary>
    /// Represents data source of the chart
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ChartDataSourceType get_DataSourceType() = 0;
    /// <summary>
    /// Represents external workbook path if data source is external, null otherwise
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ExternalWorkbookPath() = 0;
    
    /// <summary>
    /// Writes the internally contained Excel workbook it into an in-memory stream.
    /// </summary>
    /// <returns>
    /// Returns an instance of <c>MemoryStream</c> containing a copy of the internally contained Excel workbook.
    /// </returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::IO::MemoryStream> ReadWorkbookStream() = 0;
    /// <summary>
    /// Initializes the internally contained Excel workbook with user-specified value.
    /// </summary>
    /// <param name="ms">
    /// The user-supplied stream containing the entire Excel workbook.
    /// </param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteWorkbookStream(System::SharedPtr<System::IO::MemoryStream> ms) = 0;
    /// <summary>
    /// Set chart data range. Series and categories will be updated based on new data range.
    /// If amount of series in data range greater than count of series in the chart data then additional series with the same type
    /// as a last series in the current collection will be added to the end of the collection. 
    /// </summary>
    /// <param name="formula">The cells data range formula. E.g: "Sheet1!$A$1:$C$4" , "SomeSheetName!A1:B100", "Sheet1!$A$1:$B$5;Sheet1!$D$1:$D$5".</param>
    /// <exception cref="System::ArgumentNullException">formula is null.</exception>
    /// <exception cref="System::ArgumentException">formula has incorrect format.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetRange(System::String formula) = 0;
    /// <summary>
    /// Gets chart data range.
    /// </summary>
    /// <returns>Cells data range formula. E.g: "Sheet1!$A$1:$C$4"</returns>
    /// <exception cref="System::InvalidOperationException">Chart doesn't use workbook as a data source</exception>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(Charts::ChartType::PercentsStackedBar, 100.0f, 100.0f, 500.0f, 400.0f);
    /// String result = (AsCast<Charts::ChartData>(chart->get_ChartData()))->GetRange();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetRange() = 0;
    /// <summary>
    /// Swap the data over the axis.
    /// Data being charted on the X axis will move to the Y axis and vice versa. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SwitchRowColumn() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetExternalWorkbook(System::String workbookPath) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetExternalWorkbook(System::String workbookPath, bool updateChartData) = 0;
    /// <summary>
    /// Returns the series at the specified index.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">
    ///     <paramref name="index"></paramref> is not a valid index in the <see cref="System::Collections::Generic::IList"></see>.
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> get_ChartSeries(int32_t index) = 0;
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeriesGroup> get_SeriesGroup(System::SharedPtr<IChartSeries> ofSeries) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeriesGroup> get_SeriesGroup(int32_t index) = 0;
    /// <summary>
    /// Returns the primary category at the specified index. If <see cref="get_UseSecondaryCategories"></see> is false, get among all categories.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">
    ///     <paramref name="index"></paramref> is not a valid index in the <see cref="System::Collections::Generic::IList"></see>.
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCategory> get_Category(int32_t index) = 0;
    /// <summary>
    /// Returns the secondary category at the specified index. If <see cref="get_UseSecondaryCategories"></see> is false, then <see cref="IChartData::get_SecondaryCategories"></see> is null.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">
    ///     <paramref name="index"></paramref> is not a valid index in the <see cref="System::Collections::Generic::IList"></see>.
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCategory> get_SecondaryCategory(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


