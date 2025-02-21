#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/details/array_view.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class Page;
class Rectangle;
namespace Text
{
class MarkupSection;
class PageMarkup;
class ParagraphAbsorberOptions;
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
/// Represents an absorber object of page structure objects such as sections and paragraphs.
/// Performs search for sections and paragraphs of text and provides access for rectangles and polydons that describes it in text coordinate space. 
/// Also performs text segments search and provides access to search results via <see cref="TextFragments"></see> collections grouped by structure elements.
/// </summary>
/// <remarks>
/// When the search is completed the <see cref="ParagraphAbsorber::PageMarkups"></see> collection will contains <see cref="PageMarkup"></see> objects that represents page structure by collections of <see cref="MarkupSection"></see> and <see cref="MarkupParagraph"></see>.
/// The <see cref="TextFragment"></see> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS ParagraphAbsorber : public System::Object
{
    typedef ParagraphAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::MarkupSection;
    friend class Aspose::Pdf::Text::PageMarkup;
    
public:

    /// <summary>
    /// Gets collection of <see cref="PageMarkup"></see> that were absorbed.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PageMarkup>>> get_PageMarkups() const;
    /// <summary>
    /// Gets value that instructs how many times sequential searches for more fine elements of structure will be performed.
    /// Default search depth is 3.
    /// It means three searches for horizontally divided sections (headers, paragraphs etc) and three searches for vertically divided ones (columns).
    /// </summary>
    /// <remarks>
    /// Increasing of this value may lead to minor decreasing performance with no visible changes in search result.
    /// Decreasing of this value may lead to incorrect determination of paragraphs in sections.
    /// We are not recommend to set value less than default if you aren't desire to get only 'rough' elements of page structure. 
    /// </remarks>
    ASPOSE_PDF_SHARED_API int32_t get_SectionsSearchDepth() const;
    /// <summary>
    /// Sets value that instructs how many times sequential searches for more fine elements of structure will be performed.
    /// Default search depth is 3.
    /// It means three searches for horizontally divided sections (headers, paragraphs etc) and three searches for vertically divided ones (columns).
    /// </summary>
    /// <remarks>
    /// Increasing of this value may lead to minor decreasing performance with no visible changes in search result.
    /// Decreasing of this value may lead to incorrect determination of paragraphs in sections.
    /// We are not recommend to set value less than default if you aren't desire to get only 'rough' elements of page structure. 
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_SectionsSearchDepth(int32_t value);
    /// <summary>
    /// Gets value that indicates whether starting text lines of a next section may be treated as continuation of the last paragraph of a previous section.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsMulticolumnParagraphsAllowed() const;
    /// <summary>
    /// Sets value that indicates whether starting text lines of a next section may be treated as continuation of the last paragraph of a previous section.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsMulticolumnParagraphsAllowed(bool value);
    /// <summary>
    /// Gets the ParagraphAbsorberOptions.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::ParagraphAbsorberOptions> get_ParagraphAbsorberOptions() const;
    /// <summary>
    /// Sets the ParagraphAbsorberOptions.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ParagraphAbsorberOptions(System::SharedPtr<Aspose::Pdf::Text::ParagraphAbsorberOptions> value);
    /// <summary>
    /// Gets the TextReplaceOptions.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> get_TextReplaceOptions() const;
    /// <summary>
    /// Sets the TextReplaceOptions.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextReplaceOptions(System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="ParagraphAbsorber"></see> that performs search for sections/paragraphs of the document or page.
    /// </summary>
    ASPOSE_PDF_SHARED_API ParagraphAbsorber();
    /// <summary>
    /// Initializes a new instance of the <see cref="ParagraphAbsorber"></see> that performs search for sections/paragraphs of the document or page.
    /// </summary>
    /// <remarks>
    /// See <see cref="ParagraphAbsorber::SectionsSearchDepth"></see> property for more hints about the parameter. 
    /// </remarks>
    /// <param name="sectionsSearchDepth">Number of sequential searches for more fine elements of structure that will be performed.</param>
    ASPOSE_PDF_SHARED_API ParagraphAbsorber(int32_t sectionsSearchDepth);
    /// <summary>
    /// Initializes a new instance of the <see cref="ParagraphAbsorber"></see> that performs search for sections/paragraphs of the document or page
    /// with the specified parameters.
    /// </summary>
    /// <param name="paragraphAbsorberOptions">The ParagraphAbsorberOptions.</param>
    ASPOSE_PDF_SHARED_API ParagraphAbsorber(System::SharedPtr<Aspose::Pdf::Text::ParagraphAbsorberOptions> paragraphAbsorberOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="ParagraphAbsorber"></see> that performs search for sections/paragraphs of the document or page
    /// with the specified parameters.
    /// </summary>
    /// <param name="sectionsSearchDepth">Number of sequential searches for more fine elements of structure that will be performed.</param>
    /// <param name="paragraphAbsorberOptions">The ParagraphAbsorberOptions.</param>
    ASPOSE_PDF_SHARED_API ParagraphAbsorber(int32_t sectionsSearchDepth, System::SharedPtr<Aspose::Pdf::Text::ParagraphAbsorberOptions> paragraphAbsorberOptions);
    
    /// <summary>
    /// Performs search for sections and paragraphs on the specified <see cref="Document"></see>.
    /// </summary>
    /// <param name="doc">Pdf document object.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Document> doc);
    /// <summary>
    /// Performs search on the specified <see cref="Page"></see>.
    /// </summary>
    /// <param name="page">Pdf document page object.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Page> page);
    
protected:

    static System::ArrayPtr<int32_t> GetGridIndicesForRect(System::SharedPtr<Rectangle> rect, double scaleFactor);
    static System::SharedPtr<Rectangle> GetRectFromGridByIndices(const System::Details::ArrayView<int32_t>& indices, double scaleFactor);
    static int32_t GetGridIndexForX(double x, double scaleFactor);
    static bool IsCapitalLetter(char16_t c);
    
private:

    int32_t _sectionsSearchDepth;
    double _minBreakingHorizontalFillingLevel;
    double _minBreakingVerticalFillingLevel;
    int32_t _minBreakingHorizontalFillingOnGrid;
    int32_t _minBreakingVerticalFillingOnGrid;
    double _maxUnbreakingVLength;
    double _maxUnbreakingHLength;
    int32_t _maxUnbreakingVLengthOnGrid;
    int32_t _maxUnbreakingHLengthOnGrid;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PageMarkup>>> _markups;
    System::String _errors;
    bool _isMulticolumnParagraphs;
    System::SharedPtr<Aspose::Pdf::Text::ParagraphAbsorberOptions> _paragraphAbsorberOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> _textReplaceOptions;
    
    void ProcessMarkupSections(System::SharedPtr<PageMarkup> markup);
    void Split4Horizontal(System::SharedPtr<MarkupSection> section, System::ArrayPtr<std::vector<uint8_t>> grid, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>>& outSections);
    void Split4Vertical(System::SharedPtr<MarkupSection> section, System::ArrayPtr<std::vector<uint8_t>> grid, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>>& outSections);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> SortSections(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupSection>>> unsortedSections);
    void ToCrossSectionParagraphs();
    void ToIsolatedSectionParagraphs();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


