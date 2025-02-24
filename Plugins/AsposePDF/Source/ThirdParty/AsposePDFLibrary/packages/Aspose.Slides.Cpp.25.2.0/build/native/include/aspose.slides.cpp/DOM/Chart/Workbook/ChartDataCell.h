#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/IChartDataCell.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartCategoryCollection;
class ChartCategoryLevelsManager;
class ChartCellCollection;
class ChartData;
class ChartDataWorkbook;
class ChartDataWorksheet;
class ChartRenderContext;
class DataPointRenderContext;
class DoubleChartValue;
class IChartDataWorksheet;
class SpreadsheetCellAdapter;
class SpreadsheetWorksheetAdapter;
class StringOrDoubleChartValue;
class WorkbookManager;
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
class AxesManagerPPTXSerialization;
class ChartSeriesExPPTXSerialization;
class WorkbookDataSerializer;
} // namespace Chart
namespace XmlParser
{
enum class CellType : int8_t;
} // namespace XmlParser
} // namespace PartParser
} // namespace PptxSerialization
namespace Xlsx
{
class ChartDataCellCollection;
class NumberFormat;
namespace WorkbookML
{
class CellElement;
class RowElement;
} // namespace WorkbookML
class XlsxCellFormat;
class XlsxTable;
} // namespace Xlsx
namespace XlsxSerialization
{
class MasterFormulaCellCollection;
namespace PartParser
{
class ChartDataCellCollectionXLSXSerialization;
class ChartDataCellXLSXSerialization;
class SheetPartParser;
class XlsxTablePartParser;
} // namespace PartParser
} // namespace XlsxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents cell for chart data.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartDataCell : public Aspose::Slides::Charts::IChartDataCell
{
    typedef ChartDataCell ThisType;
    typedef Aspose::Slides::Charts::IChartDataCell BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::Charts::ChartDataWorksheet;
    friend class Aspose::Slides::Charts::SpreadsheetCellAdapter;
    friend class Aspose::Slides::Charts::SpreadsheetWorksheetAdapter;
    friend class Aspose::Slides::Charts::WorkbookManager;
    friend class Aspose::Slides::XlsxSerialization::MasterFormulaCellCollection;
    friend class Aspose::Slides::Charts::ChartCategoryCollection;
    friend class Aspose::Slides::Charts::ChartCategoryLevelsManager;
    friend class Aspose::Slides::Charts::ChartCellCollection;
    friend class Aspose::Slides::Charts::ChartData;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookDataSerializer;
    friend class Aspose::Slides::XlsxSerialization::PartParser::XlsxTablePartParser;
    friend class Aspose::Slides::XlsxSerialization::PartParser::ChartDataCellCollectionXLSXSerialization;
    friend class Aspose::Slides::XlsxSerialization::PartParser::ChartDataCellXLSXSerialization;
    friend class Aspose::Slides::XlsxSerialization::PartParser::SheetPartParser;
    friend class Aspose::Slides::DOM::Ole::OleEmbedder;
    friend class Aspose::Slides::Xlsx::ChartDataCellCollection;
    friend class Aspose::Slides::Charts::DataPointRenderContext;
    friend class Aspose::Slides::Charts::ChartRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxesManagerPPTXSerialization;
    friend class Aspose::Slides::Charts::StringOrDoubleChartValue;
    friend class Aspose::Slides::Charts::DoubleChartValue;
    friend class Aspose::Slides::Xlsx::XlsxTable;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the index of the row of worksheet in which the cell is located.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Row() override;
    /// <summary>
    /// Returns the index of the column of worksheet in which the cell is located.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Column() override;
    /// <summary>
    /// Gets the value of a cell.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// workbook->GetCell(0, u"F2")->set_Value(System::ObjectExt::Box<double>(-2.5));
    /// workbook->GetCell(0, u"G3")->set_Value(System::ObjectExt::Box<double>(6.3));
    /// </code>
    /// </example>    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_Value() override;
    /// <summary>
    /// Sets the value of a cell.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// workbook->GetCell(0, u"F2")->set_Value(System::ObjectExt::Box<double>(-2.5));
    /// workbook->GetCell(0, u"G3")->set_Value(System::ObjectExt::Box<double>(6.3));
    /// </code>
    /// </example>    
    ASPOSE_SLIDES_SHARED_API void set_Value(System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Gets the formula in A1-style.
    /// </summary>
    /// <example>
    /// <code>
    /// auto cell = workbook->GetCell(0, u"B2");
    /// cell->set_Formula(u"1 + SUM(F2:H5)");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String get_Formula() override;
    /// <summary>
    /// Sets the formula in A1-style.
    /// </summary>
    /// <example>
    /// <code>
    /// auto cell = workbook->GetCell(0, u"B2");
    /// cell->set_Formula(u"1 + SUM(F2:H5)");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Formula(System::String value) override;
    /// <summary>
    /// Gets the formula in R1C1-style.
    /// </summary>
    /// <example>
    /// <code>
    /// auto cell = workbook->GetCell(0, u"C2");
    /// cell->set_R1C1Formula(u"MAX(R2C6:R5C8) / 3");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String get_R1C1Formula() override;
    /// <summary>
    /// Sets the formula in R1C1-style.
    /// </summary>
    /// <example>
    /// <code>
    /// auto cell = workbook->GetCell(0, u"C2");
    /// cell->set_R1C1Formula(u"MAX(R2C6:R5C8) / 3");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_R1C1Formula(System::String value) override;
    /// <summary>
    /// Gets the worksheet.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartDataWorksheet">IChartDataWorksheet</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataWorksheet> get_ChartDataWorksheet() override;
    /// <summary>
    /// Determines whether the cell is hidden.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsHidden() override;
    /// <summary>
    /// Gets the custom display format of numbers and dates. 
    /// If value is empty will be used PresetNumberFormat value.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentNullException">Thrown if value is <c>null</c>.</exception>
    ASPOSE_SLIDES_SHARED_API System::String get_CustomNumberFormat() override;
    /// <summary>
    /// Sets the custom display format of numbers and dates. 
    /// If value is empty will be used PresetNumberFormat value.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentNullException">Thrown if value is <c>null</c>.</exception>
    ASPOSE_SLIDES_SHARED_API void set_CustomNumberFormat(System::String value) override;
    /// <summary>
    /// Gets the built-in display format of numbers and dates. Preset number must be in [0..22] or [37..49].
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// 0	General
    /// 1	0
    /// 2	0.00
    /// 3	#,##0
    /// 4	#,##0.00
    /// 5	$#,##0;$-#,##0
    /// 6	$#,##0;[Red]$-#,##0
    /// 7	$#,##0.00;$-#,##0.00
    /// 8	$#,##0.00;[Red]$-#,##0.00
    /// 9	0%
    /// 10	0.00%
    /// 11	0.00E+00
    /// 12	# ?/?
    /// 13	# /
    /// 14	m/d/yy
    /// 15	d-mmm-yy
    /// 16	d-mmm
    /// 17	mmm-yy
    /// 18	h:mm AM/PM
    /// 19	h:mm:ss AM/PM
    /// 20	h:mm
    /// 21	h:mm:ss
    /// 22	m/d/yy h:mm
    /// 37	#,##0;-#,##0
    /// 38	#,##0;[Red]-#,##0
    /// 39	#,##0.00;-#,##0.00
    /// 40	#,##0.00;[Red]-#,##0.00
    /// 41	_ * #,##0_ ;_ * "_ ;_ @_
    /// 42	_ $* #,##0_ ;_ $* "_ ;_ @_
    /// 43	_ * #,##0.00_ ;_ * "??_ ;_ @_
    /// 44	_("$"* # ##0,00_);_("$"* (# ##0,00);_("$"* "-"??_);_(@_)
    /// 45	mm:ss
    /// 46	h :mm:ss
    /// 47	mm:ss.0
    /// 48	##0.0E+00
    /// 49	@
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API uint8_t get_PresetNumberFormat() override;
    /// <summary>
    /// Sets the built-in display format of numbers and dates. Preset number must be in [0..22] or [37..49].
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// 0	General
    /// 1	0
    /// 2	0.00
    /// 3	#,##0
    /// 4	#,##0.00
    /// 5	$#,##0;$-#,##0
    /// 6	$#,##0;[Red]$-#,##0
    /// 7	$#,##0.00;$-#,##0.00
    /// 8	$#,##0.00;[Red]$-#,##0.00
    /// 9	0%
    /// 10	0.00%
    /// 11	0.00E+00
    /// 12	# ?/?
    /// 13	# /
    /// 14	m/d/yy
    /// 15	d-mmm-yy
    /// 16	d-mmm
    /// 17	mmm-yy
    /// 18	h:mm AM/PM
    /// 19	h:mm:ss AM/PM
    /// 20	h:mm
    /// 21	h:mm:ss
    /// 22	m/d/yy h:mm
    /// 37	#,##0;-#,##0
    /// 38	#,##0;[Red]-#,##0
    /// 39	#,##0.00;-#,##0.00
    /// 40	#,##0.00;[Red]-#,##0.00
    /// 41	_ * #,##0_ ;_ * "_ ;_ @_
    /// 42	_ $* #,##0_ ;_ $* "_ ;_ @_
    /// 43	_ * #,##0.00_ ;_ * "??_ ;_ @_
    /// 44	_("$"* # ##0,00_);_("$"* (# ##0,00);_("$"* "-"??_);_(@_)
    /// 45	mm:ss
    /// 46	h :mm:ss
    /// 47	mm:ss.0
    /// 48	##0.0E+00
    /// 49	@
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_PresetNumberFormat(uint8_t value) override;
    
    /// <summary>
    /// If the cell contains a formula, the value will be updated base on that formula. 
    /// </summary>
    /// <param name="updateValues">If false, no actual calculation will be performed. Use true for possible exceptions check.</param>
    ASPOSE_SLIDES_SHARED_API void Calculate(bool updateValues) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::PptxSerialization::PartParser::XmlParser::CellType get_Type();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Charts::ChartDataWorksheet> get_ParentWorksheetInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataWorkbook> get_ParentWorkbook();
    ASPOSE_SLIDES_LOCAL_API bool get_HasDefaultNumberFormat();
    ASPOSE_SLIDES_LOCAL_API System::String get_Name();
    ASPOSE_SLIDES_LOCAL_API void set_Name(System::String value);
    ASPOSE_SLIDES_LOCAL_API int32_t get_IntValue();
    ASPOSE_SLIDES_LOCAL_API System::String get_StringValue();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::XlsxCellFormat> get_Format();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SpreadsheetCellAdapter> get_Adapter() const;
    
    bool inCol;
    
    ASPOSE_SLIDES_LOCAL_API ChartDataCell(System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataCell, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> parent));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ChartDataCell(System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> parent, System::String name);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataCell, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> parent, System::String name));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void PutValue(int32_t value);
    ASPOSE_SLIDES_LOCAL_API void PutValue(System::String value);
    ASPOSE_SLIDES_LOCAL_API void PutValue(System::SharedPtr<System::Object> value);
    ASPOSE_SLIDES_LOCAL_API void PutA1Formula(System::String formula);
    ASPOSE_SLIDES_LOCAL_API void PutR1C1Formula(System::String formula);
    ASPOSE_SLIDES_LOCAL_API System::String GetEffectiveFormatCode(bool cultureDependent);
    ASPOSE_SLIDES_LOCAL_API int32_t GetCellFormatIdx();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::NumberFormat> GetNumberFormat();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Xlsx::NumberFormat> GetOrCreateNumberFormat();
    ASPOSE_SLIDES_LOCAL_API void CopyFormatFrom(System::SharedPtr<Aspose::Slides::Xlsx::XlsxCellFormat> cellFormat);
    ASPOSE_SLIDES_LOCAL_API void PrepareForSaving(System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::RowElement> target);
    
    ASPOSE_SLIDES_LOCAL_API ChartDataCell(System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> parent, System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::CellElement> elemCell);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataCell, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> parent, System::SharedPtr<Aspose::Slides::Xlsx::WorkbookML::CellElement> elemCell));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartDataCell();
    
private:

    System::SharedPtr<SpreadsheetCellAdapter> pr_Adapter;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void set_Adapter(System::SharedPtr<SpreadsheetCellAdapter> value);
    /// @endcond
    
    System::WeakPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> m_parent;
    System::String m_name;
    System::String m_customNumberFormat;
    System::SharedPtr<Aspose::Slides::Xlsx::XlsxCellFormat> m_cellFormat;
    
    ASPOSE_SLIDES_LOCAL_API void Init(System::SharedPtr<Aspose::Slides::Xlsx::ChartDataCellCollection> parent, System::String name);
    ASPOSE_SLIDES_LOCAL_API void AddCellInCollection();
    static ASPOSE_SLIDES_LOCAL_API System::String GetBuiltInFormatCode(int32_t index, bool cultureDependent);
    static ASPOSE_SLIDES_LOCAL_API System::String GetDateSeparator();
    static ASPOSE_SLIDES_LOCAL_API System::String GetShortDatePattern();
    static ASPOSE_SLIDES_LOCAL_API System::String GetAmPmDesignator();
    static ASPOSE_SLIDES_LOCAL_API System::String BuiltInNumberToFormat(int32_t number);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


