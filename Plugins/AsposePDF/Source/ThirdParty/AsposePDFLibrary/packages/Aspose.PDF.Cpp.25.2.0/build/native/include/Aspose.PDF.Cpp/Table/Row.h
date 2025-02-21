#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/icloneable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BorderInfo;
class Cell;
class Cells;
class Color;
class MarginInfo;
class Operator;
class Page;
class Rows;
class Table;
namespace Text
{
class TextState;
} // namespace Text
enum class VerticalAlignment;
} // namespace Pdf
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
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a row of the table.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Row final : public System::ICloneable
{
    typedef Row ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Rows;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets the background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Color>& get_BackgroundColor() const;
    /// <summary>
    /// Sets the background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<BorderInfo>& get_Border() const;
    /// <summary>
    /// Sets the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets the cells of the row.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Cells>& get_Cells() const;
    /// <summary>
    /// Gets the cells of the row.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Cells(System::SharedPtr<Aspose::Pdf::Cells> value);
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<BorderInfo>& get_DefaultCellBorder() const;
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets height for row;
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_MinRowHeight() const;
    /// <summary>
    /// Gets height for row;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MinRowHeight(double value);
    /// <summary>
    /// Gets fixed row height - row may have fixed height;
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_FixedRowHeight() const;
    /// <summary>
    /// Gets fixed row height - row may have fixed height;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FixedRowHeight(double value);
    /// <summary>
    /// Gets fixed row is in new page - page with this property should be printed to next page Default false;
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsInNewPage() const;
    /// <summary>
    /// Gets fixed row is in new page - page with this property should be printed to next page Default false;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsInNewPage(bool value);
    /// <summary>
    /// Gets is row can be broken between two pages
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsRowBroken() const;
    /// <summary>
    /// Gets is row can be broken between two pages
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsRowBroken(bool value);
    /// <summary>
    /// Gets default text state for row cells
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Text::TextState> get_DefaultCellTextState();
    /// <summary>
    /// Sets default text state for row cells
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellTextState(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Gets default margin for row cells
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<MarginInfo>& get_DefaultCellPadding() const;
    /// <summary>
    /// Sets default margin for row cells
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets the vertical alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment() const;
    /// <summary>
    /// Sets the vertical alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    
    /// <summary>
    /// Initializes a new instance of the Row class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Row();
    
    /// <summary>
    /// Clone the row.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    /// <summary>
    /// Gets cell count for current page(for internal use)
    /// </summary>
    int32_t get_CellCount() const;
    /// <summary>
    /// Sets cell count for current page(for internal use)
    /// </summary>
    void set_CellCount(int32_t value);
    /// <summary>
    /// Gets row height(for internal use)
    /// </summary>
    double get_Height() const;
    /// <summary>
    /// Sets row height(for internal use)
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets is row exceed page
    /// </summary>
    bool get_IsRowExceedPage() const;
    /// <summary>
    /// Gets row width(for internal use)
    /// </summary>
    double get_Width() const;
    /// <summary>
    /// Sets row width(for internal use)
    /// </summary>
    void set_Width(double value);
    const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>>& get_Operators() const;
    
    /// <summary>
    /// Apply defaults
    /// </summary>
    /// <param name="table">The table.</param>
    void ApplyDefaults(System::SharedPtr<Table> table);
    /// <summary>
    /// Process row.
    /// </summary>
    /// <param name="table">The table.</param>
    /// <param name="curY">The current Y coordinate.</param>
    /// <param name="curX">The current X coordinate.</param>
    /// <param name="isCalculatedMode">The calculation mode for nested tables.</param>
    /// <param name="realPageWidth">The page width without margins.</param>
    /// <param name="bottomY">The min bottom Y.</param>
    /// <param name="page">The page bottom margin.</param>
    /// <param name="rowNumber">The row number.</param>
    bool Process(System::SharedPtr<Table> table, double& curY, double& curX, bool isCalculatedMode, double realPageWidth, double bottomY, System::SharedPtr<Page> page, int32_t& rowNumber);
    double GetHeight(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double curY, double bottomY);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
    virtual ASPOSE_PDF_SHARED_API ~Row();
    
private:

    System::SharedPtr<Text::TextState> defaultCellTextState;
    double pureHeight;
    System::SharedPtr<Color> pr_BackgroundColor;
    System::SharedPtr<BorderInfo> pr_Border;
    int32_t pr_CellCount;
    System::SharedPtr<Aspose::Pdf::Cells> pr_Cells;
    System::SharedPtr<BorderInfo> pr_DefaultCellBorder;
    double pr_MinRowHeight;
    double pr_FixedRowHeight;
    double pr_Height;
    bool pr_IsInNewPage;
    bool pr_IsRowBroken;
    bool pr_IsRowExceedPage;
    
    /// <summary>
    /// Gets is row exceed page
    /// </summary>
    void set_IsRowExceedPage(bool value);
    
    double pr_Width;
    System::SharedPtr<MarginInfo> pr_DefaultCellPadding;
    Aspose::Pdf::VerticalAlignment pr_VerticalAlignment;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pr_Operators;
    
    void set_Operators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> value);
    
    System::SharedPtr<Cell> GetLastCell(int32_t i);
    void ProcessBorders(int32_t i);
    void ProcessVerticalBroken(System::SharedPtr<Table> table, double realPageWidth);
    bool IsNothingWrited();
    void ResetHtmlFragments(System::SharedPtr<Cell> cell);
    void RecalculateNestedTable(System::SharedPtr<Cell> cell);
    /// <summary>
    /// Gets row height.
    /// <param name="table">The table</param>
    /// <param name="page">The page</param>
    /// </summary>
    bool IsRowExceedSize(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double curY, double bottomY, int32_t rowIndex);
    
};

} // namespace Pdf
} // namespace Aspose


