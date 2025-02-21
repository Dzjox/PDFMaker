#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/icomparable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Text/TableAbsorber/ITableElement.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class FlowToTableAbsorber;
class Rectangle;
namespace Text
{
class AbsorbedCell;
class TableAbsorber;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents row of table that exist on the page
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AbsorbedRow : public Aspose::Pdf::Text::ITableElement, public System::IComparable<System::SharedPtr<Aspose::Pdf::Text::AbsorbedRow>>
{
    typedef AbsorbedRow ThisType;
    typedef Aspose::Pdf::Text::ITableElement BaseType;
    typedef System::IComparable<System::SharedPtr<Aspose::Pdf::Text::AbsorbedRow>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    
public:

    /// <summary>
    /// Gets readonly IList containing cells of the row
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<AbsorbedCell>>> get_CellList();
    /// <summary>
    /// Gets rectangle that describes position of the row on page
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() override;
    
    /// <summary>
    /// Compares the current AbsorbedRow object with another AbsorbedRow object and returns an integer that indicates whether the current object precedes, follows, or occurs in the same position in the sort order as the other object.
    /// </summary>
    /// <param name="other">An AbsorbedRow object to compare with this object.</param>
    /// <returns>
    /// A value that indicates the relative order of the objects being compared. The return value has the following meanings:
    /// -1: This object precedes the other object in the sort order.
    ///  0: This object occurs in the same position in the sort order as the other object.
    ///  1: This object follows the other object in the sort order.
    /// </returns>
    ASPOSE_PDF_SHARED_API int32_t CompareTo(System::SharedPtr<AbsorbedRow> other) override;
    
protected:

    /// <summary>
    ///  Set rectangle that describes position of the Row on page.
    ///  Used for FlowEngine mode as RecomputeRectangle() less accurate for this mode
    /// </summary>
    void SetRectangle(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    
    /// <summary>
    /// Initializes new AbsorbedRow object with list of its cells
    /// </summary>
    /// <param name="cells">List collection of cells of the row</param>
    AbsorbedRow(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> cells);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AbsorbedRow, CODEPORTING_ARGS(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> cells));
    
    /// <summary>
    /// Initializes new AbsorbedRow object with AbsorbedCell object
    /// </summary>
    /// <param name="cell">Object representing first cell of row</param>
    AbsorbedRow(System::SharedPtr<AbsorbedCell> cell);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AbsorbedRow, CODEPORTING_ARGS(System::SharedPtr<AbsorbedCell> cell));
    /// <summary>
    /// Adds AbsorbedCell object to the row
    /// </summary>
    /// <param name="cell">Object representing first cell of table</param>
    void AddCell(System::SharedPtr<AbsorbedCell> cell);
    /// <summary>
    /// Please call this after adding of cells to recompute rectangle of the row
    /// </summary>
    void RecomputeRectangle();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedCell>>> _cells;
    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


