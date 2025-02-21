#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ApsToPdfConverter;
class BaseOperatorCollection;
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
namespace IO
{
namespace ConvertStrategies
{
class SearchablePdfConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class PdfFileMend;
} // namespace Facades
class Page;
class PageGenerator;
namespace Tests
{
namespace Text
{
class TextBuilderTests;
class TextParagraphAbsorberTests;
} // namespace Text
} // namespace Tests
namespace Text
{
class TextFragment;
class TextParagraph;
} // namespace Text
class TextStamp;
class XfaToPdfConverter;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Appends text object to Pdf page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextBuilder final : public System::Object
{
    typedef TextBuilder ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::XfaToPdfConverter;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    
public:

    /// <summary>
    /// Initializes a new instance of <see cref="TextBuilder"></see> class for the Pdf page.
    /// </summary>
    /// <remarks>
    /// The TextBuilder allows to append text objects to Pdf pages.
    /// </remarks>
    /// <param name="page">Page object.</param>
    ASPOSE_PDF_SHARED_API TextBuilder(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Initializes a new instance of <see cref="TextBuilder"></see> class for the Pdf page.
    /// </summary>
    /// <remarks>
    /// The TextBuilder allows to append text objects to Pdf pages.
    /// </remarks>
    /// <param name="page">Page object.</param>
    /// <param name="operatorCollection">Operator collection.</param>
    ASPOSE_PDF_SHARED_API TextBuilder(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<BaseOperatorCollection> operatorCollection);
    
    /// <summary>
    /// Appends text paragraph to Pdf page.
    /// </summary> 
    /// <example>
    /// </example>
    /// <param name="textParagraph">Text paragraph object.</param>
    ASPOSE_PDF_SHARED_API void AppendParagraph(System::SharedPtr<TextParagraph> textParagraph);
    /// <summary>
    /// Appends text fragment to Pdf page
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="textFragment">Text fragment object.</param>
    ASPOSE_PDF_SHARED_API void AppendText(System::SharedPtr<TextFragment> textFragment);
    /// /// <summary>
    /// Appends list of text fragments to Pdf page.
    /// </summary>
    /// <param name="textFragments">Collection of text fragments</param>
    ASPOSE_PDF_SHARED_API void AppendText(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> textFragments);
    
protected:

    System::SharedPtr<Document> _document;
    
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> get_Segmenter() const;
    System::SharedPtr<Aspose::Pdf::Page> get_Page() const;
    const System::SharedPtr<BaseOperatorCollection>& get_Operators() const;
    
    TextBuilder(System::SharedPtr<XForm> xForm);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextBuilder, CODEPORTING_ARGS(System::SharedPtr<XForm> xForm));
    void AppendText(System::SharedPtr<TextFragment> textFragment, bool savePreviousState);
    /// <summary>
    /// Appends text with rotation
    /// </summary>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void AppendText(System::SharedPtr<TextFragment> textFragment, int32_t rotation, bool savePreviousState);
    /// <summary>
    /// Appends paragraph with rotation
    /// </summary>
    /// <param name="textParagraph"></param>
    /// <param name="rotation"></param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void AppendParagraph(System::SharedPtr<TextParagraph> textParagraph, int32_t rotation);
    
private:

    System::SharedPtr<Aspose::Pdf::Page> page;
    System::SharedPtr<XForm> xForm;
    int32_t itemsAdded;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter;
    System::SharedPtr<BaseOperatorCollection> pr_Operators;
    
    void ProcessFragmentForSpecialCharacterPosition(System::SharedPtr<TextFragment> fragment);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


