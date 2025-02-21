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
namespace PdfToMarkdown
{
namespace Extractors
{
class TablesExtractor;
} // namespace Extractors
class TableContentModel;
} // namespace PdfToMarkdown
class Rectangle;
namespace Text
{
class AbsorbedRow;
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
/// Represents table that exist on the page
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AbsorbedTable : public Aspose::Pdf::Text::ITableElement, public System::IComparable<System::SharedPtr<Aspose::Pdf::Text::AbsorbedTable>>
{
    typedef AbsorbedTable ThisType;
    typedef Aspose::Pdf::Text::ITableElement BaseType;
    typedef System::IComparable<System::SharedPtr<Aspose::Pdf::Text::AbsorbedTable>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::PdfToMarkdown::Extractors::TablesExtractor;
    friend class Aspose::Pdf::PdfToMarkdown::TableContentModel;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    
public:

    /// <summary>
    /// Gets readonly IList containing rows of the table
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<AbsorbedRow>>> get_RowList();
    /// <summary>
    /// Gets rectangle that describes position of the table on page
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() override;
    /// <summary>
    /// Gets number of the page containing this table
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageNum() const;
    
    /// <summary>
    /// Compares the current AbsorbedTable object with another AbsorbedTable object and returns an integer that indicates whether the current object precedes, follows, or occurs in the same position in the sort order as the other object.
    /// </summary>
    /// <param name="other">An AbsorbedTable object to compare with this object.</param>
    /// <returns>
    /// A value that indicates the relative order of the objects being compared. The return value has the following meanings:
    /// -1: This object precedes the other object in the sort order.
    ///  0: This object occurs in the same position in the sort order as the other object.
    ///  1: This object follows the other object in the sort order.
    /// </returns>
    ASPOSE_PDF_SHARED_API int32_t CompareTo(System::SharedPtr<AbsorbedTable> other) override;
    
protected:

    /// <summary>
    /// Gets number of the page containing this table
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageNum(int32_t value);
    
    /// <summary>
    ///  Set rectangle that describes position of the table on page.
    ///  Used for FlowEngine mode as RecomputeRectangle() less accurate for this mode
    /// </summary>
    void SetRectangle(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    
    /// <summary>
    /// Initializes new AbsorbedTable object with list of its rows
    /// </summary>
    /// <param name="rows">List collection of rows of the table</param>
    AbsorbedTable(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> rows);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AbsorbedTable, CODEPORTING_ARGS(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> rows));
    
    /// <summary>
    /// Initializes new AbsorbedTable object with AbsorbedRow object
    /// </summary>
    /// <param name="row">Object representing first row of table</param>
    AbsorbedTable(System::SharedPtr<AbsorbedRow> row);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AbsorbedTable, CODEPORTING_ARGS(System::SharedPtr<AbsorbedRow> row));
    /// <summary>
    /// Adds AbsorbedRow object to the table
    /// </summary>
    /// <param name="row">Object representing row of table</param>
    void AddRow(System::SharedPtr<AbsorbedRow> row);
    /// <summary>
    /// Please call this after adding of rows to recompute rectangle of the table
    /// </summary>
    void RecomputeRectangle();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<AbsorbedRow>>> _rows;
    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    int32_t _pageNum;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


