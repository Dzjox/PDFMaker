#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/IChartDataWorksheet.h>

#include "Xlsx/ChartDataWorksheetCollection.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartCategoryLevelsManager;
class ChartData;
class ChartDataCell;
class ChartDataWorkbook;
class SpreadsheetCellAdapter;
class SpreadsheetWorkbookAdapter;
class SpreadsheetWorksheetAdapter;
} // namespace Charts
namespace DOM
{
namespace Ole
{
class OleEmbedder;
} // namespace Ole
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
namespace PartParser
{
namespace Chart
{
class ChartCategoryCollectionPPTXSerialization;
class WorkbookPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace Xlsx
{
class ChartDataCellCollection;
namespace PresentationML
{
class PptxSaveContext;
} // namespace PresentationML
class SharedStringCollection;
class SheetPartXLSXUnsupportedProps;
class TableCollection;
namespace WorkbookML
{
class ColElement;
class WorksheetDocument;
class WorkSheetElement;
} // namespace WorkbookML
class XlsxTable;
} // namespace Xlsx
namespace XlsxSerialization
{
namespace PartParser
{
class SheetPartParser;
class WorkbookPartParser;
class XlsxTablePartParser;
} // namespace PartParser
class XlsxDeserializator;
} // namespace XlsxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents worksheet associated with <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartDataWorksheet : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartDataWorksheetCollection>>, public Aspose::Slides::Charts::IChartDataWorksheet
{
    typedef ChartDataWorksheet ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartDataWorksheetCollection>> BaseType;
    typedef Aspose::Slides::Charts::IChartDataWorksheet BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::ChartDataCell;
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::Charts::SpreadsheetCellAdapter;
    friend class Aspose::Slides::Charts::SpreadsheetWorkbookAdapter;
    friend class Aspose::Slides::Charts::SpreadsheetWorksheetAdapter;
    friend class Aspose::Slides::Charts::ChartCategoryLevelsManager;
    friend class Aspose::Slides::Charts::ChartData;
    friend class Aspose::Slides::XlsxSerialization::PartParser::XlsxTablePartParser;
    friend class Aspose::Slides::XlsxSerialization::PartParser::WorkbookPartParser;
    friend class Aspose::Slides::XlsxSerialization::PartParser::SheetPartParser;
    friend class Aspose::Slides::XlsxSerialization::XlsxDeserializator;
    friend class Aspose::Slides::DOM::Ole::OleEmbedder;
    friend class Aspose::Slides::Charts::ChartDataWorksheetCollection;
    friend class Aspose::Slides::Xlsx::TableCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCategoryCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    friend class Aspose::Slides::Xlsx::XlsxTable;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the name of the worksheet.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Gets the index of the worksheet.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Index() override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API void set_NameInternal(System::String value);
    ASPOSE_SLIDES_LOCAL_API void set_IndexInternal(int32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::TableCollection> get_Tables();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> get_Cells();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_SheetId();
    ASPOSE_SLIDES_LOCAL_API void set_SheetId(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataWorkbook> get_ParentWorkbook();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::SheetPartXLSXUnsupportedProps> get_SheetPartXLSXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SpreadsheetWorksheetAdapter> get_Adapter() const;
    
    System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::WorksheetDocument> m_wsDoc;
    System::SharedPtr<Aspose::Slides::Xlsx::TableCollection> m_tables;
    static const ASPOSE_SLIDES_LOCAL_API System::String RelationshipNamespace;
    static const ASPOSE_SLIDES_LOCAL_API System::String SheetRelationshipType;
    
    ASPOSE_SLIDES_LOCAL_API ChartDataWorksheet(System::SharedPtr<ChartDataWorksheetCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataWorksheet, CODEPORTING_ARGS(System::SharedPtr<ChartDataWorksheetCollection> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ChartDataWorksheet(System::SharedPtr<ChartDataWorksheetCollection> parentImmediate, System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::WorkSheetElement> elem, System::SharedPtr<Aspose::Slides::Xlsx::SharedStringCollection> sst);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataWorksheet, CODEPORTING_ARGS(System::SharedPtr<ChartDataWorksheetCollection> parentImmediate, System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::WorkSheetElement> elem, System::SharedPtr<Aspose::Slides::Xlsx::SharedStringCollection> sst));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Load(System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::WorkSheetElement> elem, System::SharedPtr<Aspose::Slides::Xlsx::SharedStringCollection> sst);
    ASPOSE_SLIDES_LOCAL_API void PrepareForSvaing(System::SharedPtr<Aspose::Slides::Xlsx::PresentationML::PptxSaveContext> context);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartDataWorksheet();
    
private:

    System::SharedPtr<SpreadsheetWorksheetAdapter> pr_Adapter;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void set_Adapter(System::SharedPtr<SpreadsheetWorksheetAdapter> value);
    /// @endcond
    
    uint32_t m_sheetId;
    System::String m_sheetName;
    System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> m_cells;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::ColElement>>> colsSettings;
    int32_t m_index;
    System::SharedPtr<Aspose::Slides::Xlsx::SheetPartXLSXUnsupportedProps> m_sheetPartXlsxUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API void Init(System::SharedPtr<ChartDataWorksheetCollection> parentImmediate, System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::WorkSheetElement> elem, System::SharedPtr<Aspose::Slides::Xlsx::SharedStringCollection> sst);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


