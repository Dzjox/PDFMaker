#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/icloneable.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class BorderCornerType;
class BorderInfo;
class Color;
enum class HorizontalAlignment;
class Image;
class MarginInfo;
class Operator;
class Page;
class Paragraphs;
class Rectangle;
class Row;
class Table;
namespace Tests
{
class RegressionTests_v21_11;
} // namespace Tests
namespace Text
{
class TextState;
} // namespace Text
enum class VerticalAlignment;
} // namespace Pdf
namespace Pub
{
class PdfConverter;
} // namespace Pub
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
/// Represents a cell of the table's row.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Cell final : public System::ICloneable
{
    typedef Cell ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_11;
    friend class Aspose::Pub::PdfConverter;
    
public:

    /// <summary>
    /// Gets the cell have border.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsNoBorder() const;
    /// <summary>
    /// Sets the cell have border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsNoBorder(bool value);
    /// <summary>
    /// Gets the padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<MarginInfo>& get_Margin() const;
    /// <summary>
    /// Sets the padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<BorderInfo>& get_Border() const;
    /// <summary>
    /// Sets the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets the background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Color>& get_BackgroundColor() const;
    /// <summary>
    /// Sets the background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// @deprecated Property was expanded please use BackgroundImage
    /// <summary>
    /// Gets the background image file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_BackgroundImageFile() const;
    /// @deprecated Property was expanded please use BackgroundImage
    /// <summary>
    /// Sets the background image file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundImageFile(System::String value);
    /// <summary>
    /// Gets the background image
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Image>& get_BackgroundImage() const;
    /// <summary>
    /// Sets the background image
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundImage(System::SharedPtr<Image> value);
    /// <summary>
    /// Gets the alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API HorizontalAlignment get_Alignment() const;
    /// <summary>
    /// Sets the alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Alignment(HorizontalAlignment value);
    /// <summary>
    /// Gets the default cell text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Text::TextState> get_DefaultCellTextState();
    /// <summary>
    /// Sets the default cell text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultCellTextState(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Sets the cell's TextState property is overriden by TextFragment TextState property.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsOverrideByFragment() const;
    /// <summary>
    /// Sets the cell's TextState property is overriden by TextFragment TextState property.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsOverrideByFragment(bool value);
    /// <summary>
    /// Gets the cell's formatted text.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Paragraphs>& get_Paragraphs() const;
    /// <summary>
    /// Sets the cell's formatted text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets the cell's text word wrapped.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsWordWrapped() const;
    /// <summary>
    /// Sets the cell's text word wrapped.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsWordWrapped(bool value);
    /// <summary>
    /// Gets the vertical alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment() const;
    /// <summary>
    /// Sets the vertical alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets the column span.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ColSpan() const;
    /// <summary>
    /// Sets the column span.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColSpan(int32_t value);
    /// <summary>
    /// Gets the row span.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_RowSpan() const;
    /// <summary>
    /// Sets the row span.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RowSpan(int32_t value);
    /// <summary>
    /// Gets the column width.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() const;
    
    /// <summary>
    /// Initializes a new instance of the Cell class.
    /// </summary>
    /// <param name="rect">The rectangle of the cell in page's coordinates.</param>
    ASPOSE_PDF_SHARED_API Cell(System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes a new instance of the Cell class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Cell();
    
    /// <summary>
    /// Clone the cell.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    /// <summary>
    /// Gets is horizontal aligmnent set.
    /// </summary>
    bool get_IsHorizontalAlignmentSet() const;
    /// <summary>
    /// Sets is horizontal aligmnent set.
    /// </summary>
    void set_IsHorizontalAlignmentSet(bool value);
    /// <summary>
    /// Gets processed paragraphs for (row.IsRowBroken property).
    /// </summary>
    int32_t get_ProcessedParagraphsCount() const;
    /// <summary>
    /// Gets is nothing write for this property.
    /// </summary>
    bool get_IsNothingWrited() const;
    /// <summary>
    /// Sets is nothing write for this property.
    /// </summary>
    void set_IsNothingWrited(bool value);
    /// <summary>
    /// Gets cell rect.
    /// </summary>
    const System::SharedPtr<Rectangle>& get_Rect() const;
    /// <summary>
    /// Gets cell rect.
    /// </summary>
    void set_Rect(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Sets the column width.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value);
    /// <summary>
    /// Gets the column height(processed internally).
    /// </summary>
    double get_Height() const;
    /// <summary>
    /// Sets the column height(processed internally).
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets the is height exceed size(processed internally).
    /// </summary>
    bool get_IsHeightExceedSize() const;
    /// <summary>
    /// Sets the is height exceed size(processed internally).
    /// </summary>
    void set_IsHeightExceedSize(bool value);
    /// <summary>
    /// Gets the row span additional cell(processed internally).
    /// </summary>
    bool get_IsSpanAdditionalCell() const;
    /// <summary>
    /// Sets the row span additional cell(processed internally).
    /// </summary>
    void set_IsSpanAdditionalCell(bool value);
    /// <summary>
    /// Gets cell is left border opened(processed internally).
    /// </summary>
    bool get_IsLeftBorderOpened() const;
    /// <summary>
    /// Sets cell is left border opened(processed internally).
    /// </summary>
    void set_IsLeftBorderOpened(bool value);
    /// <summary>
    /// Gets cell is right border opened(processed internally).
    /// </summary>
    bool get_IsRightBorderOpened() const;
    /// <summary>
    /// Sets cell is right border opened(processed internally).
    /// </summary>
    void set_IsRightBorderOpened(bool value);
    /// <summary>
    /// Gets the cell inserted internally(processed internally).
    /// </summary>
    bool get_IsInsertedInternally() const;
    /// <summary>
    /// Sets the cell inserted internally(processed internally).
    /// </summary>
    void set_IsInsertedInternally(bool value);
    
    /// <summary>
    /// Gets cell height.
    /// </summary>
    bool CalculateHeight(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double bottomY, double curY, bool isScaleParagraphs);
    /// <summary>
    /// Apply cell text paragraphs
    /// </summary>
    /// <param name="textState">The text state.</param>
    void ApplyCellTextParagraphs(System::SharedPtr<Text::TextState> textState);
    void DrawBackGround(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> list, double roundedBorderRadius);
    /// <summary>
    /// Adds graphic element into the page's content.
    /// </summary>
    /// <param name="table">The table</param>
    /// <param name="page">The page</param>
    /// <param name="pureHeight">The pure cell height without borders</param>
    /// <param name="isCellBroken">Is cell is child of broken row</param>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double pureHeight, bool isCellBroken);
    /// <summary>
    /// Get table from paragraphs.
    /// </summary>
    System::SharedPtr<Table> GetTableFromParagraphs();
    void CalculateRoundedBorders(int32_t rowIndex, int32_t rowCount, int32_t cellIndex, int32_t cellCount);
    void CalculateRect(double curX, double curY, System::SharedPtr<Row> row, System::SharedPtr<Table> table, int32_t i, double pureHeight);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    HorizontalAlignment alignment;
    System::SharedPtr<Text::TextState> defaultCellTextState;
    bool isPrevHeightExceedSize;
    BorderCornerType cornerType;
    bool pr_IsHorizontalAlignmentSet;
    bool pr_IsNoBorder;
    System::SharedPtr<MarginInfo> pr_Margin;
    System::SharedPtr<BorderInfo> pr_Border;
    System::SharedPtr<Color> pr_BackgroundColor;
    System::String pr_BackgroundImageFile;
    System::SharedPtr<Image> pr_BackgroundImage;
    bool pr_IsOverrideByFragment;
    System::SharedPtr<Aspose::Pdf::Paragraphs> pr_Paragraphs;
    int32_t pr_ProcessedParagraphsCount;
    
    /// <summary>
    /// Gets processed paragraphs for (row.IsRowBroken property).
    /// </summary>
    void set_ProcessedParagraphsCount(int32_t value);
    
    bool pr_IsNothingWrited;
    bool pr_IsWordWrapped;
    System::SharedPtr<Rectangle> pr_Rect;
    Aspose::Pdf::VerticalAlignment pr_VerticalAlignment;
    int32_t pr_ColSpan;
    int32_t pr_RowSpan;
    double pr_Width;
    double pr_Height;
    bool pr_IsHeightExceedSize;
    bool pr_IsSpanAdditionalCell;
    bool pr_IsLeftBorderOpened;
    bool pr_IsRightBorderOpened;
    bool pr_IsInsertedInternally;
    
    void ProcessBorder(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> list, System::SharedPtr<Table> table);
    
};

} // namespace Pdf
} // namespace Aspose


