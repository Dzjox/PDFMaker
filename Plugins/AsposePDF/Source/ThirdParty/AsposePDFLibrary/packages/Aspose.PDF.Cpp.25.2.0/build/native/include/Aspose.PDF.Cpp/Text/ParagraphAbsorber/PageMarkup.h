#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Matrix;
class Page;
namespace PdfToMarkdown
{
namespace Extractors
{
class ParagraphsExtractor;
} // namespace Extractors
} // namespace PdfToMarkdown
class Rectangle;
namespace Text
{
class MarkupParagraph;
class MarkupSection;
class ParagraphAbsorber;
class TextFragment;
class TextReplaceOptions;
} // namespace Text
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Page markup represented by collections of <see cref="MarkupSection"></see> and <see cref="MarkupParagraph"></see>.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageMarkup final : public System::Object
{
    typedef PageMarkup ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::ParagraphAbsorber;
    friend class Aspose::Pdf::PdfToMarkdown::Extractors::ParagraphsExtractor;
    
public:

    /// <summary>
    /// Gets processed page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Number() const;
    /// <summary>
    /// Gets processed page rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() const;
    /// <summary>
    /// Gets collection of <see cref="MarkupSection"></see> that was found on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> get_Sections() const;
    /// <summary>
    /// Gets collection of <see cref="MarkupParagraph"></see> that was found on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> get_Paragraphs() const;
    /// <summary>
    /// Gets collection of <see cref="TextFragment"></see> that was found on the page.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"></see> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> get_TextFragments() const;
    /// <summary>
    /// Gets value that indicates whether starting text lines of a next section may be treated as continuation of the last paragraph of a previous section.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsMulticolumnParagraphsAllowed() const;
    /// <summary>
    /// Sets value that indicates whether starting text lines of a next section may be treated as continuation of the last paragraph of a previous section.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsMulticolumnParagraphsAllowed(bool value);
    
protected:

    /// <summary>
    /// Gets collection of <see cref="MarkupSection"></see> that was found on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Sections(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> value);
    /// <summary>
    /// Gets collection of <see cref="MarkupParagraph"></see> that was found on the page.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> get_StartlessParagraphs() const;
    System::ArrayPtr<std::vector<uint8_t>> get_Grid() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PageMarkup"></see> class with the specified parameters.
    /// </summary>
    /// <param name="textReplaceOptions">The text replace options.</param>
    PageMarkup(System::SharedPtr<TextReplaceOptions> textReplaceOptions);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMarkup, CODEPORTING_ARGS(System::SharedPtr<TextReplaceOptions> textReplaceOptions));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PageMarkup"></see> class with the specified parameters.
    /// </summary>
    /// <param name="searchRectangle">The search rectangle.</param>
    /// <param name="textReplaceOptions">The text replace options.</param>
    PageMarkup(System::SharedPtr<Aspose::Pdf::Rectangle> searchRectangle, System::SharedPtr<TextReplaceOptions> textReplaceOptions);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageMarkup, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Rectangle> searchRectangle, System::SharedPtr<TextReplaceOptions> textReplaceOptions));
    /// <summary>
    /// Initializes this <see cref="PageMarkup"></see> with page object.
    /// </summary>
    /// <param name="page">Page object</param>
    void Attach(System::SharedPtr<Page> page);
    /// <summary>
    /// Distributes page (markup) text fragments for sections.
    /// </summary>
    void DistributeFragmentsForSections();
    /// <summary>
    /// Calculates average fontsize of text on the markup.
    /// </summary>
    /// <returns>Average size of font</returns>
    double GetAverageFontSize();
    /// <summary>
    /// Rebuilds paragraphs using 'cross-section' rule
    /// </summary>
    void ToCrossSectionParagraphs(System::SharedPtr<PageMarkup> previousePageMarkup);
    /// <summary>
    /// Rebuilds paragraphs using 'isolated section' rule
    /// </summary>
    void ToIsolatedSectionParagraphs(System::SharedPtr<PageMarkup> previousePageMarkup);
    
    virtual ASPOSE_PDF_SHARED_API ~PageMarkup();
    
private:

    int32_t _number;
    System::SharedPtr<Aspose::Pdf::Rectangle> _pageRectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> _searchRectangle;
    int32_t _scaleFactor;
    bool _isMulticolumnParagraphs;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> _sections;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> _paragraphs;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> _fragments;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> _junkFragments;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> _startlessParagraphs;
    System::SharedPtr<TextReplaceOptions> _textReplaceOptions;
    System::ArrayPtr<std::vector<uint8_t>> _grid;
    
    void FillGrid(System::SharedPtr<Matrix> reversedMatrix);
    /// <summary>
    /// Gets all paragraphs that is left from the specifified x-coordinate starting from most lower right one
    /// </summary>
    /// <param name="x">X-coordinate of the vertical line left from that search will be performed.</param>
    /// <returns>List of MarkupParagraph objects</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> GetParagraphsLeft(System::SharedPtr<PageMarkup> markup, double x);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


