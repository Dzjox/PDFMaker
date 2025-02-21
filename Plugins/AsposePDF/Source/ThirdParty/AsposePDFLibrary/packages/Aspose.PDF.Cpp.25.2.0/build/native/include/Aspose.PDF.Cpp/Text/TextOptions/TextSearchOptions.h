#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Text/TextOptions/TextOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
namespace SideBySideComparison
{
class IgnoreSpacesFragmentsProcessor;
class NormalFragmentProcessor;
} // namespace SideBySideComparison
} // namespace Comparison
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class TextSegmenter;
class TextSegmentSettings;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
} // namespace Engine
class Rectangle;
namespace Tests
{
class RegressionTests_v24_06;
} // namespace Tests
namespace Text
{
class TextAbsorber;
class TextFragmentAbsorber;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents text search options
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextSearchOptions final : public Aspose::Pdf::Text::TextOptions
{
    typedef TextSearchOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentSettings;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::IgnoreSpacesFragmentsProcessor;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::NormalFragmentProcessor;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_06;
    
public:

    /// <summary>
    /// Gets indication that regular expression is used.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsRegularExpressionUsed() const;
    /// <summary>
    /// Sets indication that regular expression is used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsRegularExpressionUsed(bool value);
    /// <summary>
    /// Gets indication that text is searched within the page bounds.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_LimitToPageBounds() const;
    /// <summary>
    /// Sets indication that text is searched within the page bounds.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LimitToPageBounds(bool value);
    /// <summary>
    /// Gets rectangle that bounds the searched text.
    /// </summary>
    /// <remarks>
    /// The property may be used in case it is required to delimit text extraction or text replace region.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() const;
    /// <summary>
    /// Sets rectangle that bounds the searched text.
    /// </summary>
    /// <remarks>
    /// The property may be used in case it is required to delimit text extraction or text replace region.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_Rectangle(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets indication that text will be searched using font engine encoding.
    /// true - means that font engine encoding will be used (try this if text search fails because of imperfect encoding in the document)
    /// false - means that document font encoding will be used (default value)
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseFontEngineEncoding() const;
    /// <summary>
    /// Sets indication that text will be searched using font engine encoding.
    /// true - means that font engine encoding will be used (try this if text search fails because of imperfect encoding in the document)
    /// false - means that document font encoding will be used (default value)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseFontEngineEncoding(bool value);
    /// <summary>
    /// Gets indication that text fragments representing shadow of normal text will be ignored during search.
    /// true - means that shadow text will not be found (try this if text search returns duplicated fragments on the close positions)
    /// false - means that shadow text will be found as well as normal text (default value)
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IgnoreShadowText() const;
    /// <summary>
    /// Sets indication that text fragments representing shadow of normal text will be ignored during search.
    /// true - means that shadow text will not be found (try this if text search returns duplicated fragments on the close positions)
    /// false - means that shadow text will be found as well as normal text (default value)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IgnoreShadowText(bool value);
    /// <summary>
    /// Gets indication that text extraction (decoding) errors will be logged in the text (fragment) absorber.
    /// true - means that text extraction (decoding) errors will be loged. It may decrease performance.
    /// false (default) - no error loging.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_LogTextExtractionErrors() const;
    /// <summary>
    /// Sets indication that text extraction (decoding) errors will be logged in the text (fragment) absorber.
    /// true - means that text extraction (decoding) errors will be loged. It may decrease performance.
    /// false (default) - no error loging.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LogTextExtractionErrors(bool value);
    /// <summary>
    /// Gets indication that errors related to absence of font will be ignored by text (fragment) absorber.
    /// true - means that errors of absence of font will be ignored. Text segments that refer to incorrect resources will be skipped during processing.
    /// false (default) - absence of font error will terminate processing by throwing exception.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IgnoreResourceFontErrors() const;
    /// <summary>
    /// Sets indication that errors related to absence of font will be ignored by text (fragment) absorber.
    /// true - means that errors of absence of font will be ignored. Text segments that refer to incorrect resources will be skipped during processing.
    /// false (default) - absence of font error will terminate processing by throwing exception.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IgnoreResourceFontErrors(bool value);
    /// <summary>
    /// Gets value that permits searching for text related graphics (underlining, background etc.) during text search.
    /// true - searching for text related graphics will be performed (default value).
    /// false - graphic elements that may present in source document will be ignored. Set this in case of performance issues or no need to handle underlining, background, or clipping.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SearchForTextRelatedGraphics() const;
    /// <summary>
    /// Sets value that permits searching for text related graphics (underlining, background etc.) during text search.
    /// true - searching for text related graphics will be performed (default value).
    /// false - graphic elements that may present in source document will be ignored. Set this in case of performance issues or no need to handle underlining, background, or clipping.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SearchForTextRelatedGraphics(bool value);
    /// <summary>
    /// Gets value that limits searching for text related graphics (underlining, background etc.) on a page for the speciefied number of elements.
    /// The default is 250. Set lesser value in the case of performance problems, try larger value in the case some graphic elements wasn't found.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StoredGraphicElementsMaxCount() const;
    /// <summary>
    /// Sets value that limits searching for text related graphics (underlining, background etc.) on a page for the speciefied number of elements.
    /// The default is 250. Set lesser value in the case of performance problems, try larger value in the case some graphic elements wasn't found.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StoredGraphicElementsMaxCount(int32_t value);
    /// <summary>
    /// Gets value that permits searching for text in Annotations.
    /// true - text will be searched in Annotations.
    /// false - text in Annotations won't be parsed by TextFragmentAbsorber. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SearchInAnnotations() const;
    /// <summary>
    /// Sets value that permits searching for text in Annotations.
    /// true - text will be searched in Annotations.
    /// false - text in Annotations won't be parsed by TextFragmentAbsorber. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SearchInAnnotations(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextSearchOptions"></see> object.
    /// Specifies regular expression usage mode.
    /// </summary>
    /// <param name="isRegularExpressionUsed">Value that indicates that regularexpression is used.</param>
    ASPOSE_PDF_SHARED_API TextSearchOptions(bool isRegularExpressionUsed);
    /// <summary>
    /// Initializes new instance of the <see cref="TextSearchOptions"></see> object.
    /// Specifies rectangle that delimits the searched text.
    /// </summary>
    /// <param name="rectangle">Rectangle that includes the extracted text.</param>
    ASPOSE_PDF_SHARED_API TextSearchOptions(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    /// <summary>
    /// Initializes new instance of the <see cref="TextSearchOptions"></see> object.
    /// Specifies rectangle that delimits the searched text and regular expression usage mode.
    /// </summary>
    /// <param name="rectangle">Rectangle that includes the extracted text.</param>
    /// <param name="isRegularExpressionUsed">Value that indicates that regularexpression is used.</param>
    ASPOSE_PDF_SHARED_API TextSearchOptions(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, bool isRegularExpressionUsed);
    
protected:

    static const int32_t StoredGraphicElementsDefault;
    
    /// <summary>
    /// Gets rectangles whose borders exclude text from the search.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Rectangle>> get_ExcludeRectangles() const;
    /// <summary>
    /// Sets rectangles whose borders exclude text from the search.
    /// </summary>
    void set_ExcludeRectangles(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Rectangle>> value);
    /// <summary>
    /// Gets value that permits searching for text related clipping paths (invisible text boxes) during text search.
    /// false - text clipping path elements will be kept intact (default value).
    /// true - searching for text clipping path will be performed. It may decrease performance of text search and edit. It also may change graphical elements that look like text related.
    /// </summary>
    bool get_SearchForClippingPaths() const;
    /// <summary>
    /// Sets value that permits searching for text related clipping paths (invisible text boxes) during text search.
    /// false - text clipping path elements will be kept intact (default value).
    /// true - searching for text clipping path will be performed. It may decrease performance of text search and edit. It also may change graphical elements that look like text related.
    /// </summary>
    void set_SearchForClippingPaths(bool value);
    int32_t get_ClippingPathsProcessing() const;
    void set_ClippingPathsProcessing(int32_t value);
    /// <summary>
    /// Gets indication that fast mode will be used during search.
    /// </summary>
    bool get_IsPerformance() const;
    /// <summary>
    /// Sets indication that fast mode will be used during search.
    /// </summary>
    void set_IsPerformance(bool value);
    
private:

    bool isRegularExpressionUsed;
    bool limitToPageBounds;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Rectangle>> excludeRectangles;
    bool useFontEngineEncoding;
    bool ignoreShadowText;
    bool isPerformance;
    bool logTextExtractionErrors;
    bool ignoreResourceFontErrors;
    bool searchForGraphics;
    bool searchForClippingPaths;
    bool searchInAnnotations;
    int32_t pr_StoredGraphicElementsMaxCount;
    int32_t pr_ClippingPathsProcessing;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


