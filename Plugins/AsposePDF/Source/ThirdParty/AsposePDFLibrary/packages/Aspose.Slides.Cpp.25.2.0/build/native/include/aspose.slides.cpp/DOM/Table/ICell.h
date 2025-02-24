#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICellFormat;
class IColumn;
class IRow;
class ITable;
class ITextFrame;
enum class TextAnchorType : int8_t;
enum class TextVerticalType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a cell in a table.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICell : public Aspose::Slides::ISlideComponent
{
    typedef ICell ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a distance from left side of a table to left side of a cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_OffsetX() = 0;
    /// <summary>
    /// Returns a distance from top side of a table to top side of a cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_OffsetY() = 0;
    /// <summary>
    /// Returns an index of first row, covered by the cell.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_FirstRowIndex() = 0;
    /// <summary>
    /// Returns an index of first column, covered by the cell.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_FirstColumnIndex() = 0;
    /// <summary>
    /// Returns the width of the cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Width() = 0;
    /// <summary>
    /// Returns the height of the cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Height() = 0;
    /// <summary>
    /// Returns the minimum height of a cell.
    /// This is a sum of minimal heights of all rows cowered by the cell.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MinimalHeight() = 0;
    /// <summary>
    /// Returns the left margin in a TextFrame.
    /// Read <see cref="double"></see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginLeft() = 0;
    /// <summary>
    /// Sets the left margin in a TextFrame.
    /// Write <see cref="double"></see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginLeft(double value) = 0;
    /// <summary>
    /// Returns the right margin in a TextFrame.
    /// Read <see cref="double"></see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginRight() = 0;
    /// <summary>
    /// Sets the right margin in a TextFrame.
    /// Write <see cref="double"></see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginRight(double value) = 0;
    /// <summary>
    /// Returns the top margin in a TextFrame.
    /// Read <see cref="double"></see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginTop() = 0;
    /// <summary>
    /// Sets the top margin in a TextFrame.
    /// Write <see cref="double"></see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginTop(double value) = 0;
    /// <summary>
    /// Returns the bottom margin in a TextFrame.
    /// Read <see cref="double"></see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginBottom() = 0;
    /// <summary>
    /// Sets the bottom margin in a TextFrame.
    /// Write <see cref="double"></see>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginBottom(double value) = 0;
    /// <summary>
    /// Returns the type of vertical text.
    /// Read <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TextVerticalType get_TextVerticalType() = 0;
    /// <summary>
    /// Sets the type of vertical text.
    /// Write <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TextVerticalType(Aspose::Slides::TextVerticalType value) = 0;
    /// <summary>
    /// Returns the text anchor type.
    /// Read <see cref="Slides::TextAnchorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TextAnchorType get_TextAnchorType() = 0;
    /// <summary>
    /// Sets the text anchor type.
    /// Write <see cref="Slides::TextAnchorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TextAnchorType(Aspose::Slides::TextAnchorType value) = 0;
    /// <summary>
    /// Determines whether or not text box centered inside a cell.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AnchorCenter() = 0;
    /// <summary>
    /// Determines whether or not text box centered inside a cell.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AnchorCenter(bool value) = 0;
    /// <summary>
    /// Gets first column of cell.
    /// Read-only <see cref="Aspose::Slides::IColumn">IColumn</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColumn> get_FirstColumn() = 0;
    /// <summary>
    /// Gets first row of cell.
    /// Read-only <see cref="Aspose::Slides::IRow">IRow</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IRow> get_FirstRow() = 0;
    /// <summary>
    /// Returns the number of grid columns in the parent table's table grid
    /// which shall be spanned by the current cell. This property allows cells
    /// to have the appearance of being merged, as they span vertical boundaries
    /// of other cells in the table.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_ColSpan() = 0;
    /// <summary>
    /// Returns the number of rows that a merged cell spans. This is used in combination
    /// with the vMerge attribute on other cells in order to specify the beginning cell
    /// of a horizontal merge.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_RowSpan() = 0;
    /// <summary>
    /// Returns the text frame of a cell.
    /// Read-only <see cref="Aspose::Slides::ITextFrame">ITextFrame</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrame> get_TextFrame() = 0;
    /// <summary>
    /// Returns the parent Table object for a cell.
    /// Read-only <see cref="Aspose::Slides::ITable">ITable</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITable> get_Table() = 0;
    /// <summary>
    /// Returns true if the cell is merged with any adjusted cell, false otherwise.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsMergedCell() = 0;
    /// <summary>
    /// Returns the CellFormat object that contains formatting properties for this cell.
    /// Read-only <see cref="Aspose::Slides::ICellFormat">ICellFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICellFormat> get_CellFormat() = 0;
    
    /// <summary>
    /// Splits the cell to two cells by index of column.
    /// </summary>
    /// <param name="index">Index of column.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SplitByColSpan(int32_t index) = 0;
    /// <summary>
    /// Splits the cell to two cells by index of row.
    /// </summary>
    /// <param name="index">Index of row.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SplitByRowSpan(int32_t index) = 0;
    /// <summary>
    /// Splits the cell by height.
    /// </summary>
    /// <param name="height">Height of a row.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SplitByHeight(double height) = 0;
    /// <summary>
    /// Splits the cell by width.
    /// </summary>
    /// <param name="width">Width of a column.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SplitByWidth(double width) = 0;
    
};

} // namespace Slides
} // namespace Aspose


