#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Text/TextOptions/TextExtractionOptions.h"
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
class TextSegmenter;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
} // namespace Engine
namespace GroupProcessor
{
class TextExtractor;
} // namespace GroupProcessor
class Page;
namespace Text
{
class TextExtractionError;
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
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
namespace Text
{
class StringBuilder;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of a text.
/// Performs text extraction and provides access to the result via <see cref="TextAbsorber::Text"></see> object.
/// </summary>
/// <remarks>
/// The <see cref="TextAbsorber"></see> object is used to extract text from a Pdf document or the document's page. 
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS TextAbsorber : public System::Object
{
    typedef TextAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::GroupProcessor::TextExtractor;
    
public:

    /// <summary>
    /// Gets extracted text that the <see cref="TextAbsorber"></see> extracts on the PDF document or page.
    /// </summary>
    /// <example>
    /// </example>
    virtual ASPOSE_PDF_SHARED_API System::String get_Text();
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
    /// Gets text extraction options.
    /// </summary>
    /// <remarks>
    /// Allows to define text formatting mode <see cref="TextExtractionOptions"></see> during extraction.
    /// The default mode is <see cref="TextExtractionOptions::TextFormattingMode::Pure"></see>
    /// </remarks>
    /// <example>
    /// </example>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<TextExtractionOptions> get_ExtractionOptions();
    /// <summary>
    /// Sets text extraction options.
    /// </summary>
    /// <remarks>
    /// Allows to define text formatting mode <see cref="TextExtractionOptions"></see> during extraction.
    /// The default mode is <see cref="TextExtractionOptions::TextFormattingMode::Pure"></see>
    /// </remarks>
    /// <example>
    /// </example>
    virtual ASPOSE_PDF_SHARED_API void set_ExtractionOptions(System::SharedPtr<TextExtractionOptions> value);
    /// <summary>
    /// Gets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define rectangle which delimits the extracted text.
    /// By default the rectangle is empty. That means page boundaries only defines the text extraction region.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Sets text search options.
    /// </summary>
    /// <remarks>
    /// Allows to define rectangle which delimits the extracted text.
    /// By default the rectangle is empty. That means page boundaries only defines the text extraction region.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    
    /// <summary>
    /// Extracts text on the specified page
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="page">Pdf pocument page object.</param>
    virtual ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Page> page);
    /// <summary>
    /// Extracts text on the specified XForm.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="form">Pdf form object.</param>
    virtual ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<XForm> form);
    /// <summary>
    /// Extracts text on the specified document
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="pdf">Pdf pocument object.</param>
    virtual ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Document> pdf);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"></see>.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber::Text"></see> object.
    /// </remarks>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API TextAbsorber();
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"></see> with extraction options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber::Text"></see> object.
    /// </remarks>
    /// <example>
    /// </example>
    /// <param name="extractionOptions">Text extraction options</param>
    ASPOSE_PDF_SHARED_API TextAbsorber(System::SharedPtr<TextExtractionOptions> extractionOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"></see> with extraction and text search options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber::Text"></see> object.
    /// </remarks>
    /// <param name="extractionOptions">Text extraction options</param>
    /// <param name="textSearchOptions">Text search options</param>
    ASPOSE_PDF_SHARED_API TextAbsorber(System::SharedPtr<TextExtractionOptions> extractionOptions, System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextAbsorber"></see> with text search options.
    /// </summary>
    /// <remarks>
    /// Performs text extraction and provides access to the extracted text via <see cref="TextAbsorber::Text"></see> object.
    /// </remarks>
    /// <param name="textSearchOptions">Text search options</param>
    ASPOSE_PDF_SHARED_API TextAbsorber(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions);
    
protected:

    System::SharedPtr<System::Text::StringBuilder> extractedText;
    
    System::SharedPtr<System::Collections::Generic::List<int32_t>> get_PageTextLengthes() const;
    
    System::String GetTotalText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, TextExtractionOptions::TextFormattingMode mode);
    
private:

    System::SharedPtr<TextExtractionOptions> extractionOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> textSearchOptions;
    bool _hasErrors;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextExtractionError>>> _errors;
    System::SharedPtr<System::Collections::Generic::List<int32_t>> pageTextLengthes;
    
    void Init();
    System::String GetExtractedText(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, TextExtractionOptions::TextFormattingMode mode);
    System::String Deligaturize(System::String phrase);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


