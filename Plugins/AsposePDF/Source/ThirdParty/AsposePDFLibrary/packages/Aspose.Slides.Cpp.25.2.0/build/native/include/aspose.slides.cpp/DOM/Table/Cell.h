#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Table/ICell.h>
#include <cstdint>

#include "Drawing/Margin64d.h"
#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class CellCollection;
class CellFormat;
class CellFormatEffectiveData;
class CellFormatImpl;
class Column;
class ColumnCollection;
namespace Drawing
{
namespace ThreeD
{
class Cell3DRenderer;
} // namespace ThreeD
} // namespace Drawing
class FillFormatEffectiveData;
class IBaseSlide;
class ICellFormat;
class IColumn;
class IPresentation;
class IRow;
class ITable;
class ITextFrame;
class ITextFrameFormat;
namespace Layout
{
class TableLayout;
} // namespace Layout
class LineFormatEffectiveData;
namespace OdpSerialization
{
namespace PartParser
{
class TableOdpDeserialization;
class TableOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class ParagraphCollection;
class ParagraphFormat;
class ParagraphFormatEffectiveData;
class ParagraphFormatImpl;
class PortionFormatEffectiveData;
namespace PptSerialization
{
class TablePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class CellPPTXSerialization;
class PictureFillFormatPPTXSerialization;
class TablePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Row;
class RowCollection;
class StyleColorGetter;
class Table;
enum class TextAnchorType : int8_t;
class TextFrame;
enum class TextVerticalType : int8_t;
class ThemeableCellFormat;
class ThemeableTableFormat;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class CellPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a cell of a table.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Cell : public Aspose::Slides::IDOMObject, public Aspose::Slides::ICell
{
    typedef Cell ThisType;
    typedef Aspose::Slides::IDOMObject BaseType;
    typedef Aspose::Slides::ICell BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::ThreeD::Cell3DRenderer;
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::LineFormatEffectiveData;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::CellFormatEffectiveData;
    friend class Aspose::Slides::ParagraphFormatImpl;
    friend class Aspose::Slides::CellFormatImpl;
    friend class Aspose::Slides::CellFormat;
    friend class Aspose::Slides::ThemeableTableFormat;
    friend class Aspose::Slides::StyleColorGetter;
    friend class Aspose::Slides::CellCollection;
    friend class Aspose::Slides::Column;
    friend class Aspose::Slides::ColumnCollection;
    friend class Aspose::Slides::Row;
    friend class Aspose::Slides::RowCollection;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::OdpSerialization::PartParser::TableOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TableOdpSerialization;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::ParagraphFormat;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::PptxSerialization::PartParser::CellPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PictureFillFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TablePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a distance from left side of a table to left side of a cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_OffsetX() override;
    /// <summary>
    /// Returns a distance from top side of a table to top side of a cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_OffsetY() override;
    /// <summary>
    /// Returns an index of first row, covered by the cell.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_FirstRowIndex() override;
    /// <summary>
    /// Returns an index of first column, covered by the cell.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_FirstColumnIndex() override;
    /// <summary>
    /// Returns the width of the cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Width() override;
    /// <summary>
    /// Returns the height of the cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Height() override;
    /// <summary>
    /// Returns the minimum height of a cell.
    /// This is a sum of minimal heights of all rows cowered by the cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MinimalHeight() override;
    /// <summary>
    /// Returns the left margin in a TextFrame.
    /// Read <see cref="double"></see>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MarginLeft() override;
    /// <summary>
    /// Sets the left margin in a TextFrame.
    /// Write <see cref="double"></see>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginLeft(double value) override;
    /// <summary>
    /// Returns the right margin in a TextFrame.
    /// Read <see cref="double"></see>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MarginRight() override;
    /// <summary>
    /// Sets the right margin in a TextFrame.
    /// Write <see cref="double"></see>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginRight(double value) override;
    /// <summary>
    /// Returns the top margin in a TextFrame.
    /// Read <see cref="double"></see>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MarginTop() override;
    /// <summary>
    /// Sets the top margin in a TextFrame.
    /// Write <see cref="double"></see>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginTop(double value) override;
    /// <summary>
    /// Returns the bottom margin in a TextFrame.
    /// Read <see cref="double"></see>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MarginBottom() override;
    /// <summary>
    /// Sets the bottom margin in a TextFrame.
    /// Write <see cref="double"></see>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginBottom(double value) override;
    /// <summary>
    /// Returns the type of vertical text.
    /// Read <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::TextVerticalType get_TextVerticalType() override;
    /// <summary>
    /// Sets the type of vertical text.
    /// Write <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TextVerticalType(Aspose::Slides::TextVerticalType value) override;
    /// <summary>
    /// Returns the text anchor type.
    /// Read <see cref="Slides::TextAnchorType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::TextAnchorType get_TextAnchorType() override;
    /// <summary>
    /// Sets the text anchor type.
    /// Write <see cref="Slides::TextAnchorType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TextAnchorType(Aspose::Slides::TextAnchorType value) override;
    /// <summary>
    /// Determines whether or not text box centered inside a cell.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AnchorCenter() override;
    /// <summary>
    /// Determines whether or not text box centered inside a cell.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AnchorCenter(bool value) override;
    /// <summary>
    /// Gets first row of cell.
    /// Read-only <see cref="Aspose::Slides::IRow">IRow</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IRow> get_FirstRow() override;
    /// <summary>
    /// Gets first column of cell.
    /// Read-only <see cref="Aspose::Slides::IColumn">IColumn</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColumn> get_FirstColumn() override;
    /// <summary>
    /// Returns the number of grid columns in the parent table's table grid
    /// which shall be spanned by the current cell. This property allows cells
    /// to have the appearance of being merged, as they span vertical boundaries
    /// of other cells in the table.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_ColSpan() override;
    /// <summary>
    /// Returns the number of rows that a merged cell spans. This is used in combination
    /// with the vMerge attribute on other cells in order to specify the beginning cell
    /// of a horizontal merge.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_RowSpan() override;
    /// <summary>
    /// Returns the text frame of a cell.
    /// Read-only <see cref="Aspose::Slides::ITextFrame">ITextFrame</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> get_TextFrame() override;
    /// <summary>
    /// Returns the parent Table object for a cell.
    /// Read-only <see cref="Aspose::Slides::ITable">ITable</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITable> get_Table() override;
    /// <summary>
    /// Returns true if the cell is merged with any adjusted cell, false otherwise.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsMergedCell() override;
    /// <summary>
    /// Returns the CellFormat object that contains formatting properties for this cell.
    /// Read-only <see cref="Aspose::Slides::ICellFormat">ICellFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICellFormat> get_CellFormat() override;
    /// <summary>
    /// Returns the parent slide of a cell.
    /// Read-only <see cref="Aspose::Slides::IBaseSlide">IBaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a cell.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    /// <summary>
    /// Splits the cell to two cells by index of column.
    /// </summary>
    /// <param name="index">Index of column.</param>
    ASPOSE_SLIDES_SHARED_API void SplitByColSpan(int32_t index) override;
    /// <summary>
    /// Splits the cell to two cells by index of row.
    /// </summary>
    /// <param name="index">Index of row.</param>
    ASPOSE_SLIDES_SHARED_API void SplitByRowSpan(int32_t index) override;
    /// <summary>
    /// Splits the cell by height.
    /// </summary>
    /// <param name="height">Height of a row.</param>
    ASPOSE_SLIDES_SHARED_API void SplitByHeight(double height) override;
    /// <summary>
    /// Splits the cell by width.
    /// </summary>
    /// <param name="width">Width of a column.</param>
    ASPOSE_SLIDES_SHARED_API void SplitByWidth(double width) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API Drawing::Margin64d get_Margin();
    ASPOSE_SLIDES_LOCAL_API void set_Margin(Drawing::Margin64d value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::CellPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Table> get_TableInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Column> get_ParentColumnInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Cell> get_BaseCell();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Row> get_ParentRowInternal();
    ASPOSE_SLIDES_LOCAL_API bool get_IsMasterCell();
    ASPOSE_SLIDES_LOCAL_API bool get_IsSlaveCell();
    ASPOSE_SLIDES_LOCAL_API int32_t get_NextColumnIndex();
    ASPOSE_SLIDES_LOCAL_API int32_t get_NextRowIndex();
    ASPOSE_SLIDES_LOCAL_API bool get_NeedToUpdateSize();
    ASPOSE_SLIDES_LOCAL_API void set_NeedToUpdateSize(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::CellFormat> get_CellFormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::ThemeableCellFormat> get_ThemeableCellFormat();
    
    int32_t m_rowSpan;
    int32_t m_colSpan;
    System::SharedPtr<Cell> m_mergedTo;
    
    ASPOSE_SLIDES_LOCAL_API Cell(System::SharedPtr<Row> parentRow, System::SharedPtr<Column> parentColumn);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Cell, CODEPORTING_ARGS(System::SharedPtr<Row> parentRow, System::SharedPtr<Column> parentColumn));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void DropRelationsInternal();
    ASPOSE_SLIDES_LOCAL_API void RenewMergeInternal(bool mergeText);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<Cell> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDefinedFormatDataFrom(System::SharedPtr<ITextFrameFormat> source);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Cell> UnmergeByColSpanInternal(int32_t newColSpan);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Cell> UnmergeByRowSpanInternal(int32_t newRowSpan);
    ASPOSE_SLIDES_LOCAL_API void RequestOfSizeValidation();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Cell();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<Row> m_parentRow;
    System::WeakPtr<Column> m_parentColumn;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::CellPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<Aspose::Slides::TextFrame> m_textFrame;
    System::SharedPtr<Aspose::Slides::CellFormat> m_cellFormat;
    Drawing::Margin64d m_margin;
    Aspose::Slides::TextVerticalType m_textVert;
    Aspose::Slides::TextAnchorType m_textAnchor;
    bool m_anchorCenter;
    bool m_needToUpdateSize;
    
    ASPOSE_SLIDES_LOCAL_API void MergeToThis(System::SharedPtr<Cell> mergedCell, bool mergeText);
    ASPOSE_SLIDES_LOCAL_API void OnTextFrameChanged();
    
};

} // namespace Slides
} // namespace Aspose


