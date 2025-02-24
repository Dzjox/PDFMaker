#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
enum class MathHorizontalAlignment;
enum class MathSpacingRules;
enum class MathVerticalAlignment;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the Matrix object, consisting of child elements laid out in one or more rows and columns. 
/// It is important to note that matrices do not have built in delimiters. 
/// To place the matrix in the brackets you should use the delimiter object (IMathDelimiter).
/// Null arguments can be used to create gaps in matrices.
/// </summary>
/// <example>Example:
/// <code>
/// auto matrix = System::MakeObject<MathMatrix>(2, 3);
/// matrix->idx_set(0, 0, System::MakeObject<MathematicalText>(u"item.1.1"));
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathMatrix : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathMatrix ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Number of rows in the matrix
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// int32_t rowCount = matrix->get_RowCount();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_RowCount() = 0;
    /// <summary>
    /// Number of columns in the matrix
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// int32_t columnCount = matrix->get_ColumnCount();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_ColumnCount() = 0;
    /// <summary>
    /// Hide the placeholders for empty matrix elements
    /// Default: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_HidePlaceholders(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HidePlaceholders() = 0;
    /// <summary>
    /// Hide the placeholders for empty matrix elements
    /// Default: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_HidePlaceholders(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HidePlaceholders(bool value) = 0;
    /// <summary>
    /// Specifies the vertical justification respect to surrounding text. 
    /// Possible values are top, bottom, and center.
    /// Default: Center
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_BaseJustification(MathVerticalAlignment::Center);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathVerticalAlignment get_BaseJustification() = 0;
    /// <summary>
    /// Specifies the vertical justification respect to surrounding text. 
    /// Possible values are top, bottom, and center.
    /// Default: Center
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_BaseJustification(MathVerticalAlignment::Center);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BaseJustification(MathVerticalAlignment value) = 0;
    /// <summary>
    /// Minimum column width in twips (1/20th of a point)
    /// The gap spacing (also referred to as “Column Gap” or “Gap Width”) is added to 
    /// the MinColumnWidth to determine the total Matrix Column Spacing
    /// (distance between the same edges of different columns).
    /// Default: 0.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_MinColumnWidth(20);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_MinColumnWidth() = 0;
    /// <summary>
    /// Minimum column width in twips (1/20th of a point)
    /// The gap spacing (also referred to as “Column Gap” or “Gap Width”) is added to 
    /// the MinColumnWidth to determine the total Matrix Column Spacing
    /// (distance between the same edges of different columns).
    /// Default: 0.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_MinColumnWidth(20);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MinColumnWidth(uint32_t value) = 0;
    /// <summary>
    /// The type of horizontal spacing between columns of a matrix; 
    /// Horizontal spacing units can be ems or points (stored as twips).
    /// Default: SingleSpacingGap (0)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_ColumnGapRule(MathSpacingRules::OneAndHalfSpacingGap);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathSpacingRules get_ColumnGapRule() = 0;
    /// <summary>
    /// The type of horizontal spacing between columns of a matrix; 
    /// Horizontal spacing units can be ems or points (stored as twips).
    /// Default: SingleSpacingGap (0)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_ColumnGapRule(MathSpacingRules::OneAndHalfSpacingGap);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColumnGapRule(MathSpacingRules value) = 0;
    /// <summary>
    /// The value of horizontal spacing between columns of a matrix;
    /// If the ColumnGapRule is set to 3 ("Exactly"), then the unit is interpreted as twips (1/20th of a point)
    /// If the ColumnGapRule is set to 4 ("Multiple"), then the unit is interpreted as number of 0.5 em increments.
    /// In other cases ignored.
    /// Default: 0
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_ColumnGapRule(MathSpacingRules::Exactly);
    /// matrix->set_ColumnGap(20);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_ColumnGap() = 0;
    /// <summary>
    /// The value of horizontal spacing between columns of a matrix;
    /// If the ColumnGapRule is set to 3 ("Exactly"), then the unit is interpreted as twips (1/20th of a point)
    /// If the ColumnGapRule is set to 4 ("Multiple"), then the unit is interpreted as number of 0.5 em increments.
    /// In other cases ignored.
    /// Default: 0
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_ColumnGapRule(MathSpacingRules::Exactly);
    /// matrix->set_ColumnGap(20);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColumnGap(uint32_t value) = 0;
    /// <summary>
    /// The type of vertical spacing between rows of a matrix; 
    /// Vertical spacing units can be lines or points (stored as twips).
    /// Default: SingleSpacingGap (0)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_RowGapRule(MathSpacingRules::OneAndHalfSpacingGap);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathSpacingRules get_RowGapRule() = 0;
    /// <summary>
    /// The type of vertical spacing between rows of a matrix; 
    /// Vertical spacing units can be lines or points (stored as twips).
    /// Default: SingleSpacingGap (0)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_RowGapRule(MathSpacingRules::OneAndHalfSpacingGap);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RowGapRule(MathSpacingRules value) = 0;
    /// <summary>
    /// The value of vertical spacing between rows of a matrix;
    /// If the RowGapRule is set to 3 ("Exactly"), then the unit is interpreted as twips (1/20th of a point)
    /// If the RowGapRule is set to 4 ("Multiple"), then the unit is interpreted as half-lines.
    /// Default: 0
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_RowGapRule(MathSpacingRules::Exactly);
    /// matrix->set_RowGap(20);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_RowGap() = 0;
    /// <summary>
    /// The value of vertical spacing between rows of a matrix;
    /// If the RowGapRule is set to 3 ("Exactly"), then the unit is interpreted as twips (1/20th of a point)
    /// If the RowGapRule is set to 4 ("Multiple"), then the unit is interpreted as half-lines.
    /// Default: 0
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->set_RowGapRule(MathSpacingRules::Exactly);
    /// matrix->set_RowGap(20);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RowGap(uint32_t value) = 0;
    
    /// <summary>
    /// Elements of matrix
    /// </summary>
    /// <param name="row">The zero-based index of the row to get item</param>
    /// <param name="column">The zero-based index of the column to get item</param>
    /// <returns></returns>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->idx_set(0, 0, System::MakeObject<MathematicalText>(u"item.1.1"));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> idx_get(int32_t row, int32_t column) = 0;
    /// <summary>
    /// Elements of matrix
    /// </summary>
    /// <param name="row">The zero-based index of the row to get item</param>
    /// <param name="column">The zero-based index of the column to get item</param>
    /// <param name="value"></param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->idx_set(0, 0, System::MakeObject<MathematicalText>(u"item.1.1"));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void idx_set(int32_t row, int32_t column, System::SharedPtr<IMathElement> value) = 0;
    
    /// <summary>
    /// Get the horizontal alignment of the specified column
    /// </summary>
    /// <param name="columnIndex">Zero-based column index</param>
    /// <returns>Horizontal Alignment of specified column</returns>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// auto alignment = matrix->GetColumnAlignment(0);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathHorizontalAlignment GetColumnAlignment(int32_t columnIndex) = 0;
    /// <summary>
    /// Set the horizontal alignment of the specified column
    /// </summary>
    /// <param name="columnIndex">Zero-based column index</param>
    /// <param name="val">New value of horizontal alignment of specified column</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->SetColumnAlignment(0, MathHorizontalAlignment::Left);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetColumnAlignment(int32_t columnIndex, MathHorizontalAlignment val) = 0;
    /// <summary>
    /// Set the horizontal alignment of the specified columns
    /// </summary>
    /// <param name="columnIndex">Zero-based index of the first column to set alignment</param>
    /// <param name="columnsCount">The number of columns to specify the alignment</param>
    /// <param name="val">New value of horizontal alignment of specified column</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->SetColumnsAlignment(0, 3, MathHorizontalAlignment::Left);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetColumnsAlignment(int32_t columnIndex, uint32_t columnsCount, MathHorizontalAlignment val) = 0;
    /// <summary>
    /// Insert a new row before the specified one
    /// Initially all elements in the new row are null.
    /// </summary>
    /// <param name="rowIndex">Index of the row before which to insert a new one</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->InsertRowBefore(1);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InsertRowBefore(int32_t rowIndex) = 0;
    /// <summary>
    /// Insert a new row after the specified one
    /// Initially all elements in the new row are null.
    /// </summary>
    /// <param name="rowIndex">Index of the row after which to insert a new one</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->InsertRowAfter(1);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InsertRowAfter(int32_t rowIndex) = 0;
    /// <summary>
    /// Deletes the specified row
    /// </summary>
    /// <param name="rowIndex">The zero-based index of the row to delete.</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->DeleteRow(0);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DeleteRow(int32_t rowIndex) = 0;
    /// <summary>
    /// Insert a new column before the specified one
    /// Initially all elements in the new column are null.
    /// </summary>
    /// <param name="columnIndex">Index of the column before which to insert a new one</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->InsertColumnBefore(0);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InsertColumnBefore(int32_t columnIndex) = 0;
    /// <summary>
    /// Insert a new column after the specified one
    /// Initially all elements in the new column are null.
    /// </summary>
    /// <param name="columnIndex">Index of the column after which to insert a new one</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->InsertColumnAfter(0);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void InsertColumnAfter(int32_t columnIndex) = 0;
    /// <summary>
    /// Deletes the specified column
    /// </summary>
    /// <param name="columnIndex">The zero-based index of the column to delete.</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->DeleteColumn(0);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void DeleteColumn(int32_t columnIndex) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


