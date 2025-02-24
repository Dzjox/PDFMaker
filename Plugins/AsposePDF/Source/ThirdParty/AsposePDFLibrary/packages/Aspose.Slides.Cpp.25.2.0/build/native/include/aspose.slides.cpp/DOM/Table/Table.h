#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/guid.h>
#include <system/array.h>
#include <DOM/Table/ITable.h>
#include <cstdint>

#include "DOM/GraphicalObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Cell;
class CellFormat;
class CellFormatImpl;
class Column;
class ColumnCollection;
class ColumnFormat;
class ColumnFormatEffectiveData;
namespace Drawing
{
class FlipRotation;
class Vector2d64d;
} // namespace Drawing
class FillFormatEffectiveData;
class HyperlinkQueries;
class ICell;
class IColumn;
class IColumnCollection;
class IDOMObject;
class IFillFormat;
class IFillFormatEffectiveData;
class ILineFormat;
class IParagraphFormat;
class IPortionFormat;
class IRow;
class IRowCollection;
class ITableFormat;
class ITextFrameFormat;
namespace Layout
{
class TableLayout;
} // namespace Layout
namespace OdpSerialization
{
namespace PartParser
{
class TableOdpDeserialization;
class TableOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class ParagraphFormat;
class ParagraphFormatImpl;
namespace PptSerialization
{
class TablePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class TablePPTXSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class Row;
class RowCollection;
class RowFormat;
class RowFormatEffectiveData;
class ShapeCollection;
class TableFormat;
class TableFormatEffectiveData;
class TableStyle;
enum class TableStylePreset;
class ThemeableTableFormat;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class TablePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a table on a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Table final : public Aspose::Slides::GraphicalObject, public Aspose::Slides::ITable
{
    typedef Table ThisType;
    typedef Aspose::Slides::GraphicalObject BaseType;
    typedef Aspose::Slides::ITable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::ColumnFormat;
    friend class Aspose::Slides::RowFormat;
    friend class Aspose::Slides::ColumnFormatEffectiveData;
    friend class Aspose::Slides::RowFormatEffectiveData;
    friend class Aspose::Slides::TableFormatEffectiveData;
    friend class Aspose::Slides::TableFormat;
    friend class Aspose::Slides::ParagraphFormatImpl;
    friend class Aspose::Slides::CellFormatImpl;
    friend class Aspose::Slides::CellFormat;
    friend class Aspose::Slides::ThemeableTableFormat;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::Column;
    friend class Aspose::Slides::Row;
    friend class Aspose::Slides::HyperlinkQueries;
    friend class Aspose::Slides::OdpSerialization::PartParser::TableOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TableOdpSerialization;
    friend class Aspose::Slides::ParagraphFormat;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::TablePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    /// @endcond
    
protected:

    /// @cond
    enum class BorderRoleEx
    {
        Left,
        Top,
        Right,
        Bottom,
        TopLeftToBottomRight,
        TopRightToBottomLeft,
        End
    };
    
    /// @endcond
    
public:

    /// <summary>
    /// Returns the collectoin of rows.
    /// Read-only <see cref="Aspose::Slides::IRowCollection">IRowCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IRowCollection> get_Rows() override;
    /// <summary>
    /// Returns the collectoin of columns.
    /// Read-only <see cref="Aspose::Slides::IColumnCollection">IColumnCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColumnCollection> get_Columns() override;
    /// <summary>
    /// Returns the TableFormat object that contains formatting properties for this table.
    /// Read-only <see cref="Aspose::Slides::ITableFormat">ITableFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITableFormat> get_TableFormat() override;
    /// <summary>
    /// Gets builtin table style.
    /// Read <see cref="TableStylePreset"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TableStylePreset get_StylePreset() override;
    /// <summary>
    /// Sets builtin table style.
    /// Write <see cref="TableStylePreset"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StylePreset(TableStylePreset value) override;
    /// <summary>
    /// Determines whether the table has right to left reading order.
    /// Reads <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_RightToLeft() override;
    /// <summary>
    /// Determines whether the table has right to left reading order.
    /// Writes <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RightToLeft(bool value) override;
    /// <summary>
    /// Determines whether the first row of a table has to be drawn with a special formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_FirstRow() override;
    /// <summary>
    /// Determines whether the first row of a table has to be drawn with a special formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FirstRow(bool value) override;
    /// <summary>
    /// Determines whether the first column of a table has to be drawn with a special formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_FirstCol() override;
    /// <summary>
    /// Determines whether the first column of a table has to be drawn with a special formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FirstCol(bool value) override;
    /// <summary>
    /// Determines whether the last row of a table has to be drawn with a special formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_LastRow() override;
    /// <summary>
    /// Determines whether the last row of a table has to be drawn with a special formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LastRow(bool value) override;
    /// <summary>
    /// Determines whether the last column of a table has to be drawn with a special formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_LastCol() override;
    /// <summary>
    /// Determines whether the last column of a table has to be drawn with a special formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LastCol(bool value) override;
    /// <summary>
    /// Determines whether the even rows has to be drawn with a different formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HorizontalBanding() override;
    /// <summary>
    /// Determines whether the even rows has to be drawn with a different formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HorizontalBanding(bool value) override;
    /// <summary>
    /// Determines whether the even columns has to be drawn with a different formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_VerticalBanding() override;
    /// <summary>
    /// Determines whether the even columns has to be drawn with a different formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_VerticalBanding(bool value) override;
    /// <summary>
    /// Returns a TableFormat::get_FillFormat object containing the fill formatting for the Table.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_FillFormat() override;
    
    /// <summary>
    /// Returns the cell at the specified column and row indexes.
    /// Read-only <see cref="Aspose::Slides::Cell">Cell</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICell> idx_get(int32_t columnIndex, int32_t rowIndex) override;
    
    /// <summary>
    /// Merges neighbour cells.
    /// </summary>
    /// <param name="cell1">Cell to merge.</param>
    /// <param name="cell2">Cell to merge.</param>
    /// <param name="allowSplitting">True to allow cells splitting.</param>
    /// <returns>Merged cell.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICell> MergeCells(System::SharedPtr<ICell> cell1, System::SharedPtr<ICell> cell2, bool allowSplitting) override;
    /// <summary>
    /// Sets defined portion format properties to all table cells' portions.
    /// </summary>
    /// <param name="source">IPortionFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<IPortionFormat> source) override;
    /// <summary>
    /// Sets defined paragraph format properties to all table cells' paragraphs.
    /// </summary>
    /// <param name="source">IParagraphFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<IParagraphFormat> source) override;
    /// <summary>
    /// Sets defined text frame format properties to all table cells' text frames.
    /// </summary>
    /// <param name="source">ITextFrameFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<ITextFrameFormat> source) override;
    /// <summary>
    /// Returns a row at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IRow> get_Row(int32_t index) override;
    /// <summary>
    /// Returns a column at the specified index.
    /// Read-only <see cref="Aspose::Slides::IColumn"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColumn> get_Column(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Layout::TableLayout> get_TableLayout();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::TablePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::TableStyle> get_TableStyle();
    ASPOSE_SLIDES_LOCAL_API void set_TableStyle(System::SharedPtr<Aspose::Slides::TableStyle> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::ThemeableTableFormat> get_ThemeableTableFormat();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::TableFormat> get_TableFormatInternal();
    
    System::SharedPtr<RowCollection> m_tableRows;
    System::SharedPtr<ColumnCollection> m_tableColumns;
    System::Guid m_tableStyleGuid;
    
    ASPOSE_SLIDES_LOCAL_API Table(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Table, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ILineFormat> GetLineFormatFromCells(System::SharedPtr<Cell> firstCell, System::SharedPtr<Cell> secondCell, bool vertical);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ILineFormat> GetLineFormatFromCellsForDrawing(System::SharedPtr<Cell> firstCell, System::SharedPtr<Cell> secondCell, bool vertical);
    ASPOSE_SLIDES_LOCAL_API void Clear();
    ASPOSE_SLIDES_LOCAL_API void SetTableGrid(System::ArrayPtr<double> colWidths, System::ArrayPtr<double> rowHeights);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Cell> GetCell(int32_t columnIndex, int32_t rowIndex);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void SetRawFrameImpl(Drawing::Vector2d64d pos, Drawing::Vector2d64d size, Drawing::FlipRotation flipRotation) override;
    /// <summary>
    /// Sets all formats to NotDefined state. For shapes with placeholders this will cause default state.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Reset() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void ContentChanged();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void ConfirmTextFrameIsFittedToShape() override;
    ASPOSE_SLIDES_SHARED_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormatEffectiveData> CreateFillFormatEffectiveImpl() override;
    ASPOSE_SLIDES_SHARED_API void OnHeightChanged(float newHeight) override;
    ASPOSE_SLIDES_SHARED_API void OnWidthChanged(float newWidth) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~Table();
    
private:

    System::SharedPtr<Aspose::Slides::ThemeableTableFormat> m_themeableTableFormat;
    System::SharedPtr<Aspose::Slides::TableFormat> m_tableFormat;
    uint8_t m_flags;
    
    ASPOSE_SLIDES_LOCAL_API void ValidateSizeValue(float value);
    
};

} // namespace Slides
} // namespace Aspose


