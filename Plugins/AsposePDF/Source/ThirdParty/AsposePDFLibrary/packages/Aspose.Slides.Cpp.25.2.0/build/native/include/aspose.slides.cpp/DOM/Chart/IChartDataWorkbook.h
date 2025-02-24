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
class IChartCellCollection;
class IChartDataCell;
class IChartDataWorksheet;
class IChartDataWorksheetCollection;
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
/// Provides access to embedded Excel workbook
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartDataWorkbook : public virtual System::Object
{
    typedef IChartDataWorkbook ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets a collection of worksheets.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(ChartType::Pie, 50.0f, 50.0f, 400.0f, 500.0f);
    /// auto workbook = chart->get_ChartData()->get_ChartDataWorkbook();
    /// for (const auto& worksheet : workbook->get_Worksheets())
    /// {
    ///     System::String worksheetName = worksheet->get_Name();
    /// }
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataWorksheetCollection> get_Worksheets() = 0;
    
    /// <summary>
    /// Calculates all formulas in the workbook and updates corresponding cells values. 
    /// </summary>
    /// <exception cref="Aspose::Slides::Spreadsheet::CellCircularReferenceException">Workbook contains formulas with a circular reference.</exception>
    /// <exception cref="Aspose::Slides::Spreadsheet::CellUnsupportedDataException">Cell data is not supported.</exception>
    /// <example>
    /// Example shows how to assign a formula to the cell and to calculate a value. The value of the "B4" cell is getting set to 5.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    ///     
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(ChartType::Pie, 100.0f, 100.0f, 300.0f, 400.0f);
    /// auto wb = chart->get_ChartData()->get_ChartDataWorkbook();
    /// wb->GetCell(0, u"B2", ObjectExt::Box<int32_t>(2));
    /// wb->GetCell(0, u"B3", ObjectExt::Box<int32_t>(3));
    /// wb->GetCell(0, u"B4")->set_Formula(u"B2+B3");
    /// wb->CalculateFormulas();
    /// //...
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CalculateFormulas() = 0;
    /// <summary>
    /// Gets the set of cells.
    /// </summary>
    /// <param name="formula">Excel formula like "Sheet1!$A$2:$A$5".</param>
    /// <param name="skipHiddenCells">If true then method returns collection without hidden cells.</param>
    /// <returns>Set of cells <see cref="Aspose::Slides::Charts::IChartCellCollection">IChartCellCollection</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCellCollection> GetCellCollection(System::String formula, bool skipHiddenCells) = 0;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetName">Name of the worksheet.</param>
    /// <param name="row">The row.</param>
    /// <param name="column">The column.</param>
    /// <returns>Cell object</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> GetCell(System::String worksheetName, int32_t row, int32_t column) = 0;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetIndex">Index of the worksheet.</param>
    /// <param name="row">The row.</param>
    /// <param name="column">The column.</param>
    /// <returns>Cell object</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> GetCell(int32_t worksheetIndex, int32_t row, int32_t column) = 0;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetIndex">Index of the worksheet.</param>
    /// <param name="cellName">Name of the cell.</param>
    /// <returns>Cell object</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> GetCell(int32_t worksheetIndex, System::String cellName) = 0;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetIndex">Index of the worksheet.</param>
    /// <param name="cellName">Name of the cell.</param>
    /// <param name="value">The value.</param>
    /// <returns>
    /// Cell object
    /// </returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> GetCell(int32_t worksheetIndex, System::String cellName, System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetIndex">Index of the worksheet.</param>
    /// <param name="row">The row.</param>
    /// <param name="column">The column.</param>
    /// <param name="value">The value.</param>
    /// <returns>Cell object</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> GetCell(int32_t worksheetIndex, int32_t row, int32_t column, System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Clear all cells values on sheet
    /// </summary>
    /// <param name="sheetIndex">Index of sheet</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear(int32_t sheetIndex) = 0;
    /// <summary>
    /// Returns worksheet of this workbook at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataWorksheet> get_Worksheet(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


