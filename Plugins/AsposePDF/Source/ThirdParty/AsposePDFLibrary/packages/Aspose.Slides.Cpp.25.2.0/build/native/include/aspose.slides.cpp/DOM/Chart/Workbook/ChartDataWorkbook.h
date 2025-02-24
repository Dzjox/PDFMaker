#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/collections/keyvalue_pair.h>
#include <DOM/Chart/IChartDataWorkbook.h>
#include <cstdint>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartData.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Blob
{
class BlobManager;
} // namespace Blob
} // namespace Foundation
namespace Slides
{
namespace Charts
{
class Chart;
class ChartCategoryCollection;
class ChartCellCollection;
class ChartDataCell;
class ChartDataDirector;
class ChartDataWorkbookFormula;
class ChartDataWorksheet;
class ChartDataWorksheetCollection;
class ChartSeriesCollection;
class DataWorkbookOptions;
class IChartCellCollection;
class IChartData;
class IChartDataCell;
class IChartDataWorksheet;
class IChartDataWorksheetCollection;
class SpreadsheetWorkbookAdapter;
class SpreadsheetWorksheetAdapter;
class WorkbookManager;
} // namespace Charts
namespace DOM
{
namespace Ole
{
class OleEmbedder;
} // namespace Ole
} // namespace DOM
class InterruptionToken;
namespace OdpSerialization
{
namespace PartParser
{
class ChartOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartCategoryCollectionPPTXSerialization;
class ChartDataCachePPTXSerialization;
class ChartDataPPTXSerialization;
class ChartExPPTXSerialization;
class ChartPPTXSerialization;
class WorkbookPPTXSerialization;
} // namespace Chart
namespace XmlParser
{
class cht_CT_NumRefElementData;
class cht_CT_StrRefElementData;
} // namespace XmlParser
} // namespace PartParser
} // namespace PptxSerialization
namespace Xlsx
{
class NumFormatCollection;
namespace PresentationML
{
class PptxBaseXmlDocument;
class PptxPartEntry;
class PptxSaveContext;
class Relationships;
} // namespace PresentationML
class SharedStringCollection;
class StylesPartXLSXUnsupportedProps;
class TableCollection;
namespace WorkbookML
{
class SharedStringsDocument;
class StylesDocument;
class WorkbookDocument;
class WorkbookElement;
class XlsxFile;
} // namespace WorkbookML
class WorkbookPartXLSXUnsupportedProps;
class XlsxCellFormatCollection;
class XlsxLoadOptions;
class XlsxTable;
} // namespace Xlsx
namespace XlsxSerialization
{
namespace PartParser
{
class ChartDataCellXLSXSerialization;
class SharedStringsPartParser;
class SheetPartParser;
class WorkbookPartParser;
class XlsxStylesPartParser;
} // namespace PartParser
enum class WorkbookType;
class XlsxDeserializationContext;
class XlsxDeserializator;
class XlsxSerializationContext;
class XlsxSerializator;
} // namespace XlsxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlDocument;
class XmlElement;
} // namespace Xml
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Provides access to embedded Excel workbook
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartDataWorkbook : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartData>>, public Aspose::Slides::Charts::IChartDataWorkbook
{
    typedef ChartDataWorkbook ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartData>> BaseType;
    typedef Aspose::Slides::Charts::IChartDataWorkbook BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::ChartDataDirector;
    friend class Aspose::Slides::Charts::ChartDataCell;
    friend class Aspose::Slides::Charts::ChartDataWorksheet;
    friend class Aspose::Slides::Charts::DataWorkbookOptions;
    friend class Aspose::Slides::Charts::SpreadsheetWorkbookAdapter;
    friend class Aspose::Slides::Charts::SpreadsheetWorksheetAdapter;
    friend class Aspose::Slides::Charts::WorkbookManager;
    friend class Aspose::Slides::Charts::ChartCategoryCollection;
    friend class Aspose::Slides::Charts::ChartCellCollection;
    friend class Aspose::Slides::Charts::ChartData;
    friend class Aspose::Slides::Charts::ChartSeriesCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataCachePPTXSerialization;
    friend class Aspose::Slides::XlsxSerialization::XlsxSerializationContext;
    friend class Aspose::Slides::XlsxSerialization::XlsxDeserializationContext;
    friend class Aspose::Slides::XlsxSerialization::PartParser::ChartDataCellXLSXSerialization;
    friend class Aspose::Slides::XlsxSerialization::PartParser::WorkbookPartParser;
    friend class Aspose::Slides::XlsxSerialization::PartParser::SheetPartParser;
    friend class Aspose::Slides::XlsxSerialization::PartParser::XlsxStylesPartParser;
    friend class Aspose::Slides::XlsxSerialization::PartParser::SharedStringsPartParser;
    friend class Aspose::Slides::XlsxSerialization::XlsxSerializator;
    friend class Aspose::Slides::XlsxSerialization::XlsxDeserializator;
    friend class Aspose::Slides::DOM::Ole::OleEmbedder;
    friend class Aspose::Slides::Charts::ChartDataWorksheetCollection;
    friend class Aspose::Slides::Xlsx::TableCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCategoryCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    friend class Aspose::Slides::Xlsx::XlsxTable;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataWorksheetCollection> get_Worksheets() override;
    
    /// <summary>
    /// Gets the set of cells.
    /// </summary>
    /// <param name="formula">Excel formula like "Sheet1!$A$2:$A$5".</param>
    /// <param name="skipHiddenCells">If true then method returns collection without hidden cells.</param>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCellCollection> GetCellCollection(System::String formula, bool skipHiddenCells) override;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetName">Name of the worksheet.</param>
    /// <param name="row">The row.</param>
    /// <param name="column">The column.</param>
    /// <returns>Cell object</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> GetCell(System::String worksheetName, int32_t row, int32_t column) override;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetIndex">Index of the worksheet.</param>
    /// <param name="row">The row.</param>
    /// <param name="column">The column.</param>
    /// <returns>Cell object</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> GetCell(int32_t worksheetIndex, int32_t row, int32_t column) override;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetIndex">Index of the worksheet.</param>
    /// <param name="cellName">Name of the cell.</param>
    /// <returns>Cell object</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> GetCell(int32_t worksheetIndex, System::String cellName) override;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetIndex">Index of the worksheet.</param>
    /// <param name="cellName">Name of the cell.</param>
    /// <param name="value">The value.</param>
    /// <returns>
    /// Cell object
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> GetCell(int32_t worksheetIndex, System::String cellName, System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Gets the cell that can be used for chart series or categories
    /// </summary>
    /// <param name="worksheetIndex">Index of the worksheet.</param>
    /// <param name="row">The row.</param>
    /// <param name="column">The column.</param>
    /// <param name="value">The value.</param>
    /// <returns>Cell object</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> GetCell(int32_t worksheetIndex, int32_t row, int32_t column, System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Clear all cells values on sheet
    /// </summary>
    /// <param name="sheetIndex">Index of sheet</param>
    ASPOSE_SLIDES_SHARED_API void Clear(int32_t sheetIndex) override;
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
    ASPOSE_SLIDES_SHARED_API void CalculateFormulas() override;
    /// <summary>
    /// Returns worksheet of this workbook at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataWorksheet> get_Worksheet(int32_t index) override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_IsCalculating() const;
    ASPOSE_SLIDES_LOCAL_API void set_IsCalculating(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SpreadsheetWorkbookAdapter> get_Adapter() const;
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::XlsxSerialization::WorkbookType get_WorkbookType();
    ASPOSE_SLIDES_LOCAL_API void set_WorkbookType(Aspose::Slides::XlsxSerialization::WorkbookType value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::XlsxLoadOptions> get_LoadOptions();
    ASPOSE_SLIDES_LOCAL_API bool get_IsDataChanged() const;
    ASPOSE_SLIDES_LOCAL_API void set_IsDataChanged(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::StylesPartXLSXUnsupportedProps> get_StylesPartXLSXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::WorkbookPartXLSXUnsupportedProps> get_WorkbookPartXLSXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::String get_NameInternal();
    ASPOSE_SLIDES_LOCAL_API void set_NameInternal(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Chart> get_ChartInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartData> get_ChartDataInternal();
    
    System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::XlsxFile> m_package;
    System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::WorkbookDocument> m_workbookDoc;
    System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::WorkbookElement> m_workbook;
    System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::SharedStringsDocument> m_sharedStringsDoc;
    System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::StylesDocument> m_stylesDoc;
    System::SharedPtr<Aspose::Slides::Xlsx::SharedStringCollection> m_sst;
    System::SharedPtr<Aspose::Slides::Xlsx::NumFormatCollection> m_numFmts;
    System::SharedPtr<Aspose::Slides::Xlsx::XlsxCellFormatCollection> m_cellFmts;
    
    ASPOSE_SLIDES_LOCAL_API ChartDataWorkbook(System::SharedPtr<IChartData> parentImmediate, System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Foundation::Blob::BlobManager> blobManager, System::SharedPtr<InterruptionToken> interruptionToken);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataWorkbook, CODEPORTING_ARGS(System::SharedPtr<IChartData> parentImmediate, System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Foundation::Blob::BlobManager> blobManager, System::SharedPtr<InterruptionToken> interruptionToken));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ChartDataWorkbook(System::SharedPtr<IChartData> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataWorkbook, CODEPORTING_ARGS(System::SharedPtr<IChartData> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Write(System::SharedPtr<System::IO::Stream> output);
    ASPOSE_SLIDES_LOCAL_API System::String GetWorkbookFileExtention();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataCell> GetEmptyCell();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataWorksheet> GetOrCreateWorksheet(System::String worksheetName);
    ASPOSE_SLIDES_LOCAL_API void AddDefinedName(System::String name, System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataCell>>> GetCells(System::String formulasString, bool skipHiddenCells, bool createNotExistedSheets);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataWorkbookFormula>>> ParseFormulas(System::String s);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataWorkbookFormula>>> TryRepareFormulas(uint32_t pointsCount, System::String& strF);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataWorkbookFormula>>> ParseFormulas(System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::cht_CT_StrRefElementData> strRefElementData);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataWorkbookFormula>>> ParseFormulas(System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::cht_CT_NumRefElementData> strRefElementData);
    ASPOSE_SLIDES_LOCAL_API bool CheckFStringCanBeResolved(System::String s);
    ASPOSE_SLIDES_LOCAL_API void UpdateWorkbookTableRanges();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataWorksheet> GetChartDataWorksheet(System::SharedPtr<ChartData> chartData);
    ASPOSE_SLIDES_LOCAL_API void GetParentChartTableRange(int32_t& columnIndexFrom, int32_t& rowIndexFrom, int32_t& columnIndexTo, int32_t& rowIndexTo);
    static ASPOSE_SLIDES_LOCAL_API bool ParseCellsAdress(System::String cellAdress, int32_t& columnIndex, int32_t& rowIndex);
    ASPOSE_SLIDES_LOCAL_API void ReadWorkbook(System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::XlsxFile> package);
    static ASPOSE_SLIDES_LOCAL_API void SaveXmpDocumentToEntry(System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::PptxSaveContext> context, System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::Xml::XmlDocument> document);
    static ASPOSE_SLIDES_LOCAL_API void CheckUsedRelationships(System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::PptxBaseXmlDocument> document);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartDataWorkbook();
    
private:

    bool pr_IsCalculating;
    System::SharedPtr<SpreadsheetWorkbookAdapter> pr_Adapter;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void set_Adapter(System::SharedPtr<SpreadsheetWorkbookAdapter> value);
    /// @endcond
    
    bool pr_IsDataChanged;
    System::WeakPtr<Chart> m_parentChart;
    System::SharedPtr<ChartDataWorksheetCollection> m_sheets;
    Aspose::Slides::XlsxSerialization::WorkbookType m_workbookType;
    System::SharedPtr<Aspose::Slides::Xlsx::XlsxLoadOptions> m_loadOptions;
    System::SharedPtr<System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<System::String, System::String>>> m_definedNames;
    System::SharedPtr<Aspose::Slides::Xlsx::StylesPartXLSXUnsupportedProps> m_stylesPartXlsxUnsupportedProps;
    System::SharedPtr<Aspose::Slides::Xlsx::WorkbookPartXLSXUnsupportedProps> m_workbookPartXlsxUnsupportedProps;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_officeNamespace;
    static ASPOSE_SLIDES_LOCAL_API char16_t NextCol;
    System::String m_workbookName;
    
    ASPOSE_SLIDES_LOCAL_API void InitializeFromStream(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Foundation::Blob::BlobManager> blobManager, System::SharedPtr<InterruptionToken> interruptionToken);
    ASPOSE_SLIDES_LOCAL_API bool HasDuplicateRanges(System::String strF);
    ASPOSE_SLIDES_LOCAL_API System::String GetDefindNameValue(System::String name);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataWorksheet> GetOrCreateWorksheet(int32_t index);
    ASPOSE_SLIDES_LOCAL_API void CheckCategoriesTableRange(int32_t& minCol, int32_t& minRow, int32_t& maxCol, int32_t& maxRow);
    ASPOSE_SLIDES_LOCAL_API void CheckIfTableNamesUnique();
    ASPOSE_SLIDES_LOCAL_API void CheckSeriesTableRange(int32_t& minCol, int32_t& minRow, int32_t& maxCol, int32_t& maxRow);
    static ASPOSE_SLIDES_LOCAL_API void CheckCellRange(System::SharedPtr<IChartDataCell> cell, int32_t& colMin, int32_t& rowMin, int32_t& colMax, int32_t& rowMax);
    static ASPOSE_SLIDES_LOCAL_API int32_t FastIntParse(System::String value);
    static ASPOSE_SLIDES_LOCAL_API bool TryParseFormula(System::String formula, System::String& sheetName, System::String& cellsAdress);
    ASPOSE_SLIDES_LOCAL_API void WriteWorkbook(System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::PptxSaveContext> context);
    static ASPOSE_SLIDES_LOCAL_API void TraverseParts(System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::XlsxFile> package, System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::Relationships> rels, System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::PptxPartEntry>, System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::PptxPartEntry>>> found);
    static ASPOSE_SLIDES_LOCAL_API void CheckUsedRelationships(System::SharedPtr<System::Xml::XmlElement> elem, System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::Relationships> rels, System::String namespaceURI);
    static ASPOSE_SLIDES_LOCAL_API void CheckUsedRelationships(System::SharedPtr<System::Xml::XmlElement> elem, System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::Relationships> rels, System::String namespaceURI, System::String localName);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


