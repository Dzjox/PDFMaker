#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathMatrix.h>
#include <cstdint>

#include "DOM/MathText/MathElementBase.h"
#include "DOM/MathText/IHasControlCharacterProperties.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace DOM
{
namespace Serialization
{
namespace PptxSerialization
{
namespace PartParsers
{
namespace DOMObjectsSerialization
{
namespace Omml
{
class MatrixPPTXSerialization;
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace MathText
{
class IMathElement;
enum class MathHorizontalAlignment;
enum class MathSpacingRules;
enum class MathVerticalAlignment;
class MathVisitor;
} // namespace MathText
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class OmmlControlCharacterPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
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

namespace MathText {

/// <summary>
/// Specifies the Matrix object, consisting of child elements laid out in one or more rows and columns. 
/// It is important to note that matrices do not have built in delimiters. 
/// To place the matrix in the brackets you should use the delimiter object (IMathDelimiter).
/// Null arguments can be used to create gaps in matrices.
/// </summary>
/// <example>Example:
/// <code>
/// System::SharedPtr<IMathMatrix> matrix = System::MakeObject<MathMatrix>(2, 3);
/// matrix->idx_set(0, 0, System::MakeObject<MathematicalText>(u"item.1.1"));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathMatrix final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathMatrix, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathMatrix ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathMatrix BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::MatrixPPTXSerialization;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API int32_t get_RowCount() override;
    /// <summary>
    /// Number of columns in the matrix
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// int32_t columnCount = matrix->get_ColumnCount();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t get_ColumnCount() override;
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
    ASPOSE_SLIDES_SHARED_API bool get_HidePlaceholders() override;
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
    ASPOSE_SLIDES_SHARED_API void set_HidePlaceholders(bool value) override;
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
    ASPOSE_SLIDES_SHARED_API MathVerticalAlignment get_BaseJustification() override;
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
    ASPOSE_SLIDES_SHARED_API void set_BaseJustification(MathVerticalAlignment value) override;
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
    ASPOSE_SLIDES_SHARED_API uint32_t get_MinColumnWidth() override;
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
    ASPOSE_SLIDES_SHARED_API void set_MinColumnWidth(uint32_t value) override;
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
    ASPOSE_SLIDES_SHARED_API MathSpacingRules get_ColumnGapRule() override;
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
    ASPOSE_SLIDES_SHARED_API void set_ColumnGapRule(MathSpacingRules value) override;
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
    ASPOSE_SLIDES_SHARED_API uint32_t get_ColumnGap() override;
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
    ASPOSE_SLIDES_SHARED_API void set_ColumnGap(uint32_t value) override;
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
    ASPOSE_SLIDES_SHARED_API MathSpacingRules get_RowGapRule() override;
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
    ASPOSE_SLIDES_SHARED_API void set_RowGapRule(MathSpacingRules value) override;
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
    ASPOSE_SLIDES_SHARED_API uint32_t get_RowGap() override;
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
    ASPOSE_SLIDES_SHARED_API void set_RowGap(uint32_t value) override;
    
    /// <summary>
    /// Element of matrix
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> idx_get(int32_t row, int32_t column) override;
    /// <summary>
    /// Element of matrix
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
    ASPOSE_SLIDES_SHARED_API void idx_set(int32_t row, int32_t column, System::SharedPtr<IMathElement> value) override;
    
    /// <summary>
    /// Initializes a new instance of the MathMatrix class.
    /// </summary>
    /// <param name="rowCount">row count</param>
    /// <param name="columnCount">column count</param>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathMatrix(int32_t rowCount, int32_t columnCount);
    
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
    ASPOSE_SLIDES_SHARED_API MathHorizontalAlignment GetColumnAlignment(int32_t columnIndex) override;
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
    ASPOSE_SLIDES_SHARED_API void SetColumnAlignment(int32_t columnIndex, MathHorizontalAlignment val) override;
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
    ASPOSE_SLIDES_SHARED_API void SetColumnsAlignment(int32_t columnIndex, uint32_t columnsCount, MathHorizontalAlignment val) override;
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
    ASPOSE_SLIDES_SHARED_API void InsertRowBefore(int32_t rowIndex) override;
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
    ASPOSE_SLIDES_SHARED_API void InsertRowAfter(int32_t rowIndex) override;
    /// <summary>
    /// Deletes the specified row
    /// </summary>
    /// <param name="rowIndex">The zero-based index of the row to delete.</param>
    /// <exception cref="System::InvalidOperationException">When you try to delete the last single row in the matrix</exception>
    /// <exception cref="System::ArgumentOutOfRangeException">If rowIndex less than zero or greater or equal to the RowCount</exception>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->DeleteRow(0);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void DeleteRow(int32_t rowIndex) override;
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
    ASPOSE_SLIDES_SHARED_API void InsertColumnBefore(int32_t columnIndex) override;
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
    ASPOSE_SLIDES_SHARED_API void InsertColumnAfter(int32_t columnIndex) override;
    /// <summary>
    /// Deletes the specified column
    /// </summary>
    /// <param name="columnIndex">The zero-based index of the column to delete.</param>
    /// <exception cref="System::InvalidOperationException">When you try to delete the last single column in the matrix</exception>
    /// <exception cref="System::ArgumentOutOfRangeException">If columnIndex less than zero or greater or equal to the ColumnCount</exception>
    /// <example>Example:
    /// <code>
    /// auto matrix = System::MakeObject<MathMatrix>(2, 3);
    /// matrix->DeleteColumn(0);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void DeleteColumn(int32_t columnIndex) override;
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    static const ASPOSE_SLIDES_LOCAL_API MathHorizontalAlignment c_defaultHorizontalAlignment;
    static const ASPOSE_SLIDES_LOCAL_API MathVerticalAlignment c_defaultVerticalAlignment;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathMatrix();
    
private:

    bool pr_HidePlaceholders;
    MathVerticalAlignment pr_BaseJustification;
    uint32_t pr_MinColumnWidth;
    MathSpacingRules pr_ColumnGapRule;
    uint32_t pr_ColumnGap;
    MathSpacingRules pr_RowGapRule;
    uint32_t pr_RowGap;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IMathElement>>>>> m_items;
    System::ArrayPtr<MathHorizontalAlignment> m_columnAlignments;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IMathElement>>> CreateNullItemsRow(int32_t columnCount);
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


