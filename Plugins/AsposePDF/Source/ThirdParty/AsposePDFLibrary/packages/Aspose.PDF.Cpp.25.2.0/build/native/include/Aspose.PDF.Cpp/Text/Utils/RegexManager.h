#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/regularexpressions/regex.h>
#include <system/enum_helpers.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
namespace JavascriptExtensions
{
class FieldDateTimeFormatter;
} // namespace JavascriptExtensions
class TextStyle;
} // namespace Annotations
class ApsUsingConverter;
namespace Comparison
{
class HtmlDiffOutputGenerator;
class MarkdownDiffOutputGenerator;
namespace SideBySideComparison
{
class IgnoreSpacesFragmentsProcessor;
} // namespace SideBySideComparison
} // namespace Comparison
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
namespace Operators
{
namespace TextShowing
{
class ShowTextBase;
} // namespace TextShowing
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Encoding
{
namespace UnicodeLists
{
class UnicodeListBase;
} // namespace UnicodeLists
} // namespace Encoding
namespace Segmenting
{
class FormattedTextSegmentMapper;
class PlaneTextSegmentMapper;
class RawTextSegmentMapper;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
namespace XMP
{
class XmpProperty;
} // namespace XMP
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfUaConvertStrategy;
class SearchablePdfConvertStrategy;
} // namespace ConvertStrategies
class PdfConsts;
} // namespace IO
namespace Security
{
namespace Impl
{
namespace Handlers
{
class AdobeApsHandler;
} // namespace Handlers
} // namespace Impl
} // namespace Security
} // namespace Engine
namespace Facades
{
class PdfExtractor;
} // namespace Facades
class FileChecker;
namespace Forms
{
class TextModel;
class XFA;
} // namespace Forms
class HtmlConverter;
class LayerProcessor;
class PdfToApsConverter;
namespace PdfToMarkdown
{
namespace Extractors
{
class ParagraphsExtractor;
} // namespace Extractors
class HeaderNumerationChecker;
class ImageManager;
class PageContentModel;
namespace Serialization
{
class MarkdownSerializer;
} // namespace Serialization
} // namespace PdfToMarkdown
namespace Text
{
namespace Adjustment
{
class VirtualPhysicalTextSegment;
} // namespace Adjustment
class MarkupSection;
class TextFragmentAbsorber;
} // namespace Text
class TextStamp;
namespace Utils
{
class IOUtils;
} // namespace Utils
} // namespace Pdf
namespace XfaRenderer
{
namespace Core
{
class XfaRenderer;
} // namespace Core
} // namespace XfaRenderer
} // namespace Aspose
namespace Dynabic
{
namespace Metering
{
namespace Billing
{
namespace Helpers
{
class GuidHelper;
} // namespace Helpers
} // namespace Billing
} // namespace Metering
} // namespace Dynabic
namespace System
{
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
class String;
namespace Text
{
namespace RegularExpressions
{
class Match;
class MatchCollection;
class Regex;
enum class RegexOptions;
} // namespace RegularExpressions
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Provides a wrapper for regular expression operations with configurable timeout settings.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RegexManager
{
    typedef RegexManager ThisType;
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::Engine::Security::Impl::Handlers::AdobeApsHandler;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Encoding::UnicodeLists::UnicodeListBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::FormattedTextSegmentMapper;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::RawTextSegmentMapper;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpProperty;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::PdfConsts;
    friend class Aspose::Pdf::Text::MarkupSection;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::HtmlConverter;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::FileChecker;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Annotations::TextStyle;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::XfaRenderer::Core::XfaRenderer;
    friend class Aspose::XfaRenderer::Core::XfaRenderer;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Annotations::JavascriptExtensions::FieldDateTimeFormatter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PlaneTextSegmentMapper;
    friend class Dynabic::Metering::Billing::Helpers::GuidHelper;
    friend class Aspose::Pdf::PdfToMarkdown::HeaderNumerationChecker;
    friend class Aspose::Pdf::PdfToMarkdown::Extractors::ParagraphsExtractor;
    friend class Aspose::Pdf::PdfToMarkdown::Serialization::MarkdownSerializer;
    friend class Aspose::Pdf::PdfToMarkdown::PageContentModel;
    friend class Aspose::Pdf::PdfToMarkdown::ImageManager;
    friend class Aspose::Pdf::LayerProcessor;
    friend class Aspose::Pdf::Comparison::HtmlDiffOutputGenerator;
    friend class Aspose::Pdf::Comparison::MarkdownDiffOutputGenerator;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::IgnoreSpacesFragmentsProcessor;
    friend class Aspose::Pdf::Utils::IOUtils;
    friend class Aspose::Pdf::Text::Adjustment::VirtualPhysicalTextSegment;
    
protected:

    /// <summary>
    /// Initializes and returns a new instance of the Regex class for the specified regular expression.
    /// </summary>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <returns>A new regular expression instance.</returns>
    static System::SharedPtr<System::Text::RegularExpressions::Regex> NewRegex(System::String pattern);
    /// <summary>
    /// Initializes and returns a new instance of the Regex class for the specified regular expression with the specified options.
    /// </summary>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <param name="options">A bitwise combination of the enumeration values that specify options for matching.</param>
    /// <returns>A new regular expression instance.</returns>
    static System::SharedPtr<System::Text::RegularExpressions::Regex> NewRegex(System::String pattern, System::Text::RegularExpressions::RegexOptions options);
    /// <summary>
    /// Searches the specified input string for the first occurrence of the specified regular expression.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <returns>An object that contains information about the match.</returns>
    static System::SharedPtr<System::Text::RegularExpressions::Match> Match(System::String input, System::String pattern);
    /// <summary>
    /// Searches the specified input string for the first occurrence of the specified regular expression, using the specified matching options.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <param name="options">A bitwise combination of the enumeration values that provide options for matching.</param>
    /// <returns>An object that contains information about the match.</returns>
    static System::SharedPtr<System::Text::RegularExpressions::Match> Match(System::String input, System::String pattern, System::Text::RegularExpressions::RegexOptions options);
    /// <summary>
    /// Searches the specified input string for all occurrences of a regular expression.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <returns>A collection of the successful matches.</returns>
    static System::SharedPtr<System::Text::RegularExpressions::MatchCollection> Matches(System::String input, System::String pattern);
    /// <summary>
    /// Searches the specified input string for all occurrences of a regular expression, using the specified matching options.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <param name="options">A bitwise combination of the enumeration values that provide options for matching.</param>
    /// <returns>A collection of the successful matches.</returns>
    static System::SharedPtr<System::Text::RegularExpressions::MatchCollection> Matches(System::String input, System::String pattern, System::Text::RegularExpressions::RegexOptions options);
    /// <summary>
    /// Indicates whether the regular expression finds a match in the specified input string.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <returns>true if the regular expression finds a match; otherwise, false.</returns>
    static bool IsMatch(System::String input, System::String pattern);
    /// <summary>
    /// Indicates whether the regular expression finds a match in the specified input string, using the specified matching options.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <param name="options">A bitwise combination of the enumeration values that provide options for matching.</param>
    /// <returns>true if the regular expression finds a match; otherwise, false.</returns>
    static bool IsMatch(System::String input, System::String pattern, System::Text::RegularExpressions::RegexOptions options);
    /// <summary>
    /// In a specified input string, replaces strings that match a regular expression pattern with a specified replacement string.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <param name="replacement">The replacement string.</param>
    /// <returns>A new string that is identical to the input string, except that the replacement string takes the place of each matched string.</returns>
    static System::String Replace(System::String input, System::String pattern, System::String replacement);
    /// <summary>
    /// In a specified input string, replaces all strings that match a specified regular expression with a specified replacement string. Specified options modify the matching operation.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <param name="replacement">The replacement string.</param>
    /// <param name="options">A bitwise combination of the enumeration values that provide options for matching.</param>
    /// <returns>A new string that is identical to the input string, except that the replacement string takes the place of each matched string.</returns>
    static System::String Replace(System::String input, System::String pattern, System::String replacement, System::Text::RegularExpressions::RegexOptions options);
    /// <summary>
    /// In a specified input string, replaces all strings that match a specified regular expression with a string returned by a MatchEvaluator delegate. Specified options modify the matching operation.
    /// </summary>
    /// <param name="input">The string to search for a match.</param>
    /// <param name="pattern">The regular expression pattern to match.</param>
    /// <param name="replacement">A custom method that examines each match and returns a replacement string.</param>
    /// <param name="options">A bitwise combination of the enumeration values that provide options for matching.</param>
    /// <returns>A new string that is identical to the input string, except that the replacement string takes the place of each matched string.</returns>
    static System::String Replace(System::String input, System::String pattern, System::Text::RegularExpressions::MatchEvaluator replacement, System::Text::RegularExpressions::RegexOptions options);
    
public:
    RegexManager() = delete;
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


