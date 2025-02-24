#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGraphicalObject.h"
#include "DOM/IBulkTextFormattable.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICell;
class IColumn;
class IColumnCollection;
class IRow;
class IRowCollection;
class ITableFormat;
enum class TableStylePreset;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a table on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITable : public virtual Aspose::Slides::IGraphicalObject, public Aspose::Slides::IBulkTextFormattable
{
    typedef ITable ThisType;
    typedef Aspose::Slides::IGraphicalObject BaseType;
    typedef Aspose::Slides::IBulkTextFormattable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the collectoin of rows.
    /// Read-only <see cref="Aspose::Slides::IRowCollection">IRowCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IRowCollection> get_Rows() = 0;
    /// <summary>
    /// Returns the collectoin of columns.
    /// Read-only <see cref="Aspose::Slides::IColumnCollection">IColumnCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColumnCollection> get_Columns() = 0;
    /// <summary>
    /// Returns the TableFormat object that contains formatting properties for this table.
    /// Read-only <see cref="Aspose::Slides::ITableFormat">ITableFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITableFormat> get_TableFormat() = 0;
    /// <summary>
    /// Get's or sets builtin table style.
    /// Read <see cref="TableStylePreset"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TableStylePreset get_StylePreset() = 0;
    /// <summary>
    /// Get's or sets builtin table style.
    /// Write <see cref="TableStylePreset"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StylePreset(TableStylePreset value) = 0;
    /// <summary>
    /// Determines whether the table has right to left reading order.
    /// Reads <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RightToLeft() = 0;
    /// <summary>
    /// Determines whether the table has right to left reading order.
    /// Writes <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RightToLeft(bool value) = 0;
    /// <summary>
    /// Determines whether the first row of a table has to be drawn with a special formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_FirstRow() = 0;
    /// <summary>
    /// Determines whether the first row of a table has to be drawn with a special formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FirstRow(bool value) = 0;
    /// <summary>
    /// Determines whether the first column of a table has to be drawn with a special formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_FirstCol() = 0;
    /// <summary>
    /// Determines whether the first column of a table has to be drawn with a special formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FirstCol(bool value) = 0;
    /// <summary>
    /// Determines whether the last row of a table has to be drawn with a special formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_LastRow() = 0;
    /// <summary>
    /// Determines whether the last row of a table has to be drawn with a special formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LastRow(bool value) = 0;
    /// <summary>
    /// Determines whether the last column of a table has to be drawn with a special formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_LastCol() = 0;
    /// <summary>
    /// Determines whether the last column of a table has to be drawn with a special formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LastCol(bool value) = 0;
    /// <summary>
    /// Determines whether the even rows has to be drawn with a different formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HorizontalBanding() = 0;
    /// <summary>
    /// Determines whether the even rows has to be drawn with a different formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HorizontalBanding(bool value) = 0;
    /// <summary>
    /// Determines whether the even columns has to be drawn with a different formatting.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_VerticalBanding() = 0;
    /// <summary>
    /// Determines whether the even columns has to be drawn with a different formatting.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_VerticalBanding(bool value) = 0;
    
    /// <summary>
    /// Returns the cell at the specified column and row indexes.
    /// Read-only <see cref="Aspose::Slides::ICell">ICell</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICell> idx_get(int32_t columnIndex, int32_t rowIndex) = 0;
    
    /// <summary>
    /// Merges neighbour cells.
    /// </summary>
    /// <param name="cell1">Cell to merge.</param>
    /// <param name="cell2">Cell to merge.</param>
    /// <param name="allowSplitting">True to allow cells splitting.</param>
    /// <returns>Merged cell.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICell> MergeCells(System::SharedPtr<ICell> cell1, System::SharedPtr<ICell> cell2, bool allowSplitting) = 0;
    /// <summary>
    /// Returns a row at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IRow> get_Row(int32_t index) = 0;
    /// <summary>
    /// Returns a column at the specified index.
    /// Read-only <see cref="Aspose::Slides::IColumn"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColumn> get_Column(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


