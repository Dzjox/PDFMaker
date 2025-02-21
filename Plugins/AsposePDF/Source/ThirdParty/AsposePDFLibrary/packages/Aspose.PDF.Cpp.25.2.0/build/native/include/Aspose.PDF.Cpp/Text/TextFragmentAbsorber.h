#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/Text/TextAbsorber.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class PhysicalTextSegment;
class TextSegmenter;
class TextSegmenterSearchResult;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
} // namespace Engine
class Page;
class Rectangle;
namespace Text
{
class Font;
class OnSegmentChangedEventArgs;
class TextEditOptions;
class TextExtractionError;
class TextExtractionOptions;
class TextFragmentCollection;
class TextReplaceOptions;
class TextSearchOptions;
} // namespace Text
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Text
{
namespace RegularExpressions
{
class Regex;
} // namespace RegularExpressions
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of text fragments.
/// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection.
/// </summary>
/// <remarks>
/// The <see cref="TextFragmentAbsorber"></see> object is basically used in text search scenario.
/// When the search is completed the occurrences are represented with <see cref="TextFragment"></see> objects that the <see cref="TextFragmentAbsorber::TextFragments"></see> collection contains.
/// The <see cref="TextFragment"></see> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS TextFragmentAbsorber final : public Aspose::Pdf::Text::TextAbsorber
{
    typedef TextFragmentAbsorber ThisType;
    typedef Aspose::Pdf::Text::TextAbsorber BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="TextFragment"></see> objects.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextFragmentCollection> get_TextFragments();
    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="TextFragment"></see> objects.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_TextFragments(System::SharedPtr<TextFragmentCollection> value);
    /// <summary>
    /// Gets dictionary of search occurrences that are presented with System.Text.RegularExpressions.Regex class as key and <see cref="TextFragment"></see> as value.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<System::Text::RegularExpressions::Regex>, System::SharedPtr<TextFragmentCollection>>> get_RegexResults() const;
    /// <summary>
    /// Gets phrase that the <see cref="TextFragmentAbsorber"></see> searches on the PDF document or page.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String get_Phrase() const;
    /// <summary>
    /// Sets phrase that the <see cref="TextFragmentAbsorber"></see> searches on the PDF document or page.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_Phrase(System::String value);
    /// <summary>
    /// Gets search options. The options enable search using regular expressions.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions() override;
    /// <summary>
    /// Sets search options. The options enable search using regular expressions.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value) override;
    /// <summary>
    /// Gets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> get_TextEditOptions() const;
    /// <summary>
    /// Sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> value);
    /// <summary>
    /// Gets text replace options. The options define behavior when fragment text is replaced to more short/long.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> get_TextReplaceOptions() const;
    /// <summary>
    /// Sets text replace options. The options define behavior when fragment text is replaced to more short/long.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextReplaceOptions(System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> value);
    /// <summary>
    /// Value indicates whether errors were found during text extraction.
    /// Searching for errors will performed only if TextSearchOptions.LogTextExtractionErrors = true; And it may decrease performance.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_HasErrors() const;
    /// <summary>
    /// List of <see cref="TextExtractionError"></see> objects. It contain information about errors were found during text extraction.
    /// Searching for errors will performed only if TextSearchOptions.LogTextExtractionErrors = true; And it may decrease performance.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextExtractionError>>> get_Errors() const;
    /// <summary>
    /// Gets extracted text that the <see cref="TextAbsorber"></see> extracts on the PDF document or page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() override;
    /// <summary>
    /// Gets text extraction options.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextExtractionOptions> get_ExtractionOptions() override;
    /// <summary>
    /// Sets text extraction options.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExtractionOptions(System::SharedPtr<TextExtractionOptions> value) override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> that performs search of all text segments of the document or page.
    /// </summary>
    /// <remarks>
    /// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection. 
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber();
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> with text edit options, that performs search of all text segments of the document or page.  
    /// </summary>
    /// <remarks>
    /// Performs text search and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection. 
    /// </remarks>
    /// 
    /// <example>
    /// </example>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> class for the specified text phrase.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection.
    /// </remarks>
    /// <example>
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"></see> searches</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::String phrase);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> class for the specified System.Text.RegularExpressions.Regex class object.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection.
    /// </remarks>
    /// <example>
    /// </example>
    /// <param name="regex">System.Text.RegularExpressions.Regex class object that the <see cref="TextFragmentAbsorber"></see> searches</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::SharedPtr<System::Text::RegularExpressions::Regex> regex);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> class for the specified text phrase and text search options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection.
    /// </remarks>
    /// <example>
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"></see> searches</param>
    /// <param name="textSearchOptions">Text search options (Allows to turn on some search features. For example, search with regular expression)</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> class for the specified text phrase and text search options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection.
    /// </remarks>
    /// <example>
    /// </example>
    /// <param name="regex">System.Text.RegularExpressions.Regex class object that the <see cref="TextFragmentAbsorber"></see> searches</param>
    /// <param name="textSearchOptions">Text search options (Allows to turn on some search features.)</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> class for the specified text phrase and text search options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified array of phrases and provides access to search results via <see cref="TextFragmentAbsorber::RegexResults"></see> dictionary.
    /// </remarks>
    /// <example>
    /// </example>
    /// <param name="regexes">Array of System.Text.RegularExpressions.Regex class object that the <see cref="TextFragmentAbsorber"></see> searches.</param>
    /// <param name="textSearchOptions">Text search options (Allows to turn on some search features.).</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::ArrayPtr<System::SharedPtr<System::Text::RegularExpressions::Regex>> regexes, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> class for the specified text phrase, text search options and text edit options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection.
    /// </remarks>
    /// <example>
    /// </example>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"></see> searches</param>
    /// <param name="textSearchOptions">Text search options (Allows to turn on some search features. For example, search with regular expression)</param>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> class for the specified text phrase and text edit options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection.
    /// </remarks>
    /// <param name="phrase">Phrase that the <see cref="TextFragmentAbsorber"></see> searches</param>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextFragmentAbsorber"></see> class for the specified text phrase and text edit options.
    /// </summary>
    /// <remarks>
    /// Performs text search of the specified phrase and provides access to search results via <see cref="TextFragmentAbsorber::TextFragments"></see> collection.
    /// </remarks>
    /// <param name="regex">System.Text.RegularExpressions.Regex class object that the <see cref="TextFragmentAbsorber"></see> searches</param>
    /// <param name="textEditOptions">Text edit options (Allows to turn on some edit features).</param>
    ASPOSE_PDF_SHARED_API TextFragmentAbsorber(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    
    /// <summary>
    /// Performs search on the specified page.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="page">PDF document page object.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Page> page) override;
    /// <summary>
    /// Performs search on the specified document.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="pdf">PDF document object.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Document> pdf) override;
    /// <summary>
    /// Applies font for all text fragments that were absorbed. It works faster than looping through the fragments if all fragments on the page(s) were absorbed. Otherwise it works similar with looping.
    /// </summary>
    /// <param name="font"><see cref="Font"></see>of the text.</param>
    ASPOSE_PDF_SHARED_API void ApplyForAllFragments(System::SharedPtr<Font> font);
    /// <summary>
    /// Applies font size for all text fragments that were absorbed. It works faster than looping through the fragments if all fragments on the page(s) were absorbed. Otherwise it works similar with looping.
    /// </summary>
    /// <param name="fontSize">Font size of the text.</param>
    ASPOSE_PDF_SHARED_API void ApplyForAllFragments(float fontSize);
    /// <summary>
    /// Applies font and size for all text fragments that were absorbed. It works faster than looping through the fragments if all fragments on the page(s) were absorbed. Otherwise it works similar with looping.
    /// </summary>
    /// <param name="font"><see cref="Font"></see>of the text.</param>
    /// <param name="fontSize">Font size of the text.</param>
    ASPOSE_PDF_SHARED_API void ApplyForAllFragments(System::SharedPtr<Font> font, float fontSize);
    /// <summary>
    /// Clears TextFragments collection of this <see cref="TextFragmentAbsorber"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Reset();
    /// <summary>
    /// Removes all text from the specified page.
    /// </summary>
    /// <param name="page">PDF document page object.</param>
    ASPOSE_PDF_SHARED_API void RemoveAllText(System::SharedPtr<Page> page);
    /// <summary>
    /// Removes text inside the specified rectangle from the specified page.
    /// </summary>
    /// <param name="page">PDF document page object.</param>
    /// <param name="rect"><see cref="Rectangle"></see> to remove text inside.</param>
    ASPOSE_PDF_SHARED_API void RemoveAllText(System::SharedPtr<Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Removes all text from the document.
    /// </summary>
    /// <param name="document">PDF document object.</param>
    ASPOSE_PDF_SHARED_API void RemoveAllText(System::SharedPtr<Document> document);
    /// <summary>
    /// Performs search on the specified form object.
    /// </summary>
    /// <param name="xForm">Pdf form object.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<XForm> xForm) override;
    
private:

    System::String phrase;
    System::SharedPtr<TextFragmentCollection> selected;
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> textTextReplaceOptions;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<int32_t>>>>>> processedObjects;
    bool _isCollectionChangedFromLastGettingText;
    bool _hasErrors;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextExtractionError>>> _errors;
    System::SharedPtr<System::Text::RegularExpressions::Regex> regex;
    System::ArrayPtr<System::SharedPtr<System::Text::RegularExpressions::Regex>> regexes;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<System::Text::RegularExpressions::Regex>, System::SharedPtr<TextFragmentCollection>>> regexResults;
    
    void Init(System::String phrase, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    void Init(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    void Init(System::ArrayPtr<System::SharedPtr<System::Text::RegularExpressions::Regex>> regexes, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    void AddPhysicalSegmentsAsFragments(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult>> searchResults);
    void AddPhysicalSegments(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult>> searchResults);
    static int32_t GetFirstIndexOfTextInSegment(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segment);
    static void RemoveEndLineMarkers(System::String& inLine);
    void ApplyTextFragments();
    void OnSegmentChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<OnSegmentChangedEventArgs> args);
    /// <summary>
    /// Register event handler for segments those are reference on single physical text segment
    /// </summary>
    void RegisterEventHandlerForSeveralOccurences();
    /// <summary>
    /// Register event handler for segments that contains desired text
    /// </summary>
    void RegisterEventHandlerForAllSegmentsFound();
    /// <summary>
    /// Returns true if SearchResult is originated from XForm and duplicates one of the processed.
    /// The difference from RemoveAlreadyProcessedSegmentsFrom() method is that this one for processing search results containing only several segments.
    /// </summary>
    bool IsAlreadyProcessed(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult> searchResult);
    /// <summary>
    /// Removes from the search result segments that are originated from XForm and duplicates one of the processed.
    /// The difference from IsAlreadyProcessed() method is that this one for processing search results containing multitude of segments.
    /// </summary>
    void RemoveAlreadyProcessedSegmentsFrom(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult> searchResult);
    System::String GetShape(System::String input);
    void FixSegmentsOrderInResults(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult>> searchResults);
    void CheckSegmentsOrderInResult(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenterSearchResult> result);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


