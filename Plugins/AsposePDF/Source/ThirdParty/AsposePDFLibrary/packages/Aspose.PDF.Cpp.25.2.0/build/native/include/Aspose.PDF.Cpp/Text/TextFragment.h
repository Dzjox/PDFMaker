#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/eventhandler.h>
#include <system/array.h>

#include "Aspose.PDF.Cpp/Text/TextState.h"
#include "Aspose.PDF.Cpp/Text/TextSegmentCollection.h"
#include "Aspose.PDF.Cpp/Generator/BaseParagraph.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class TextMarkupAnnotation;
} // namespace Annotations
class ApsToPdfConverter;
class Cell;
class Cells;
namespace Comparison
{
namespace SideBySideComparison
{
class ExtractedFragmentsProcessorBase;
class Fragment;
class FragmentWithSpaces;
class IgnoreSpacesFragmentsProcessor;
class ParseSpacesFragmentsProcessor;
} // namespace SideBySideComparison
} // namespace Comparison
namespace Drawing
{
class Graph;
class Line;
} // namespace Drawing
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class PhysicalTextSegment;
class SegmentsGroupState;
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
class PdfContentEditor;
} // namespace Facades
class FlowToTableAbsorber;
class Heading;
enum class HorizontalAlignment;
class Hyperlink;
class Image;
class Note;
class Page;
class PageGenerator;
namespace PdfToMarkdown
{
class ContentModelTools;
class HeuristicHeaderDetector;
class OutlinesHeaderDetector;
class PageContentModel;
class PageLayoutViewer;
class TableContentModel;
} // namespace PdfToMarkdown
class Rectangle;
class Table;
namespace Tests
{
namespace PDFUA
{
class PDFUA_CreatingTests;
} // namespace PDFUA
class RegressionTests_v19_1;
class RegressionTests_v24_03;
} // namespace Tests
namespace Text
{
namespace Adjustment
{
class VirtualPhysicalTextSegment;
} // namespace Adjustment
class Font;
class MarkupParagraph;
class MarkupSection;
class PageMarkup;
class Position;
class TableAbsorber;
class TabStop;
class TabStops;
class TextBuilder;
class TextEditOptions;
class TextFragmentAbsorber;
class TextFragmentCollection;
class TextFragmentState;
class TextParagraph;
class TextPostReplaceFixer;
class TextReplaceOptions;
class TextSegment;
} // namespace Text
class TextStamp;
enum class VerticalAlignment;
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
class EventArgs;
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents fragment of Pdf text.
/// </summary>
/// <remarks>
/// In a few words, <see cref="TextFragment"></see> object contains list of <see cref="TextSegment"></see> objects.
/// 
/// In details:
/// Text of pdf document in <see cref="Aspose::Pdf"></see> is represented by two basic objects: <see cref="TextFragment"></see> and <see cref="TextSegment"></see>
/// 
/// The differences between them is mostly context-dependent.
/// 
/// Let's consider following scenario. User searches text "hello world" to operate with it, change it's properties, look etc.
/// <code lang="C#">
/// Document doc = new Document(docFile);
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// doc.Pages[1].Accept(absorber);
/// </code>
/// Phisycally pdf text's representation is very complex.
/// The text "hello world" may consist of several phisycally independent text segments.
/// 
/// The Aspose.Pdf text model basically establishes that <see cref="TextFragment"></see> object
/// provides single logic operation set over physical <see cref="TextSegment"></see> objects set that represent user's query.
/// 
/// In text search scenario, <see cref="TextFragment"></see> is logical "hello world" text representation,
/// and <see cref="TextSegment"></see> object collection represents all physical segments that construct "hello world" text object.
/// 
/// So, <see cref="TextFragment"></see> is close to logical text representation.
/// And <see cref="TextSegment"></see> is close to physical text representation.
/// 
/// Obviously each <see cref="TextSegment"></see> object may have it's own font, coloring, positioning properties.
/// 
/// <see cref="TextFragment"></see> provides simple way to change text with it's properties: set font, set font size, set font color etc.
/// Meanwhile <see cref="TextSegment"></see> objects are accessible and users are able to operate with <see cref="TextSegment"></see> objects independently.
/// 
/// Note that changing TextFragment properties may change inner <see cref="Segments"></see> collection because TextFragment is an aggregate object 
/// and it may rearrange internal segments or merge them into single segment.
/// If your requirement is to leave the <see cref="Segments"></see> collection unchanged, please change inner segments individually.
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS TextFragment : public Aspose::Pdf::BaseParagraph
{
    typedef TextFragment ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Drawing::Line;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Text::MarkupParagraph;
    friend class Aspose::Pdf::Text::MarkupSection;
    friend class Aspose::Pdf::Text::PageMarkup;
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Image;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Cells;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::PdfToMarkdown::HeuristicHeaderDetector;
    friend class Aspose::Pdf::PdfToMarkdown::OutlinesHeaderDetector;
    friend class Aspose::Pdf::PdfToMarkdown::PageContentModel;
    friend class Aspose::Pdf::PdfToMarkdown::PageLayoutViewer;
    friend class Aspose::Pdf::PdfToMarkdown::TableContentModel;
    friend class Aspose::Pdf::PdfToMarkdown::ContentModelTools;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::Fragment;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::IgnoreSpacesFragmentsProcessor;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::ExtractedFragmentsProcessorBase;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::ParseSpacesFragmentsProcessor;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::FragmentWithSpaces;
    friend class Aspose::Pdf::Text::Adjustment::VirtualPhysicalTextSegment;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    friend class Aspose::Pdf::Tests::PDFUA::PDFUA_CreatingTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_03;
    
protected:

    /// <summary>
    /// The method to use to adjust the position of a trailing physical segment (created when isolating
    /// a text fragment into a single text segment) after setting new text in the text fragment.
    /// </summary>
    enum class SegmentAdjustmentMethod
    {
        /// <summary>
        /// Don't change the automatically calculated physical segment position.
        /// </summary>
        NoAdjustment,
        /// <summary>
        /// Keep the physical segment at the position it was before setting new text.
        /// </summary>
        KeepOriginalPosition,
        /// <summary>
        /// Place the physical segment after the new text fragment rectangle.
        /// </summary>
        AdjustOnTextFragmentPosition
    };
    
    
public:

    /// <summary>
    /// Gets text replace options. The options define behavior when fragment text is replaced to more short/long.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<TextReplaceOptions>& get_ReplaceOptions() const;
    /// <summary>
    /// Gets <see cref="System::String"></see> text object that the <see cref="TextFragment"></see> object represents.
    /// </summary>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API System::String get_Text();
    /// <summary>
    /// Sets <see cref="System::String"></see> text object that the <see cref="TextFragment"></see> object represents.
    /// </summary>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API void set_Text(System::String value);
    /// <summary>
    /// Gets a vertical alignment of text fragment. 
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment() override;
    /// <summary>
    /// Sets a vertical alignment of text fragment. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value) override;
    /// <summary>
    /// Gets a horizontal alignment of text fragment. 
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment() override;
    /// <summary>
    /// Sets a horizontal alignment of text fragment. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value) override;
    /// <summary>
    /// Sets the fragment hyperlink
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value) override;
    /// <summary>
    /// Gets text state for the text that <see cref="TextFragment"></see> object represents.
    /// </summary>
    /// <remarks>
    /// Provides a way to change following properties of the text:
    ///    Font
    ///    FontSize
    ///    FontStyle
    ///    ForegroundColor
    ///    BackgroundColor
    /// </remarks>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextFragmentState> get_TextState();
    /// <summary>
    /// Gets text segments for current <see cref="TextFragment"></see>.
    /// </summary>
    /// <remarks>
    /// In a few words, <see cref="TextSegment"></see> objects are children of <see cref="TextFragment"></see> object.
    /// Advanced users may access segments directly to perform more complex text edit scenarios.
    /// For details, please look at <see cref="TextFragment"></see> object description.
    /// </remarks>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    /// <seealso cref="TextSegment"></seealso> 
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextSegmentCollection> get_Segments() const;
    /// <summary>
    /// Gets text segments for current <see cref="TextFragment"></see>.
    /// </summary>
    /// <remarks>
    /// In a few words, <see cref="TextSegment"></see> objects are children of <see cref="TextFragment"></see> object.
    /// Advanced users may access segments directly to perform more complex text edit scenarios.
    /// For details, please look at <see cref="TextFragment"></see> object description.
    /// </remarks>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    /// <seealso cref="TextSegment"></seealso> 
    ASPOSE_PDF_SHARED_API void set_Segments(System::SharedPtr<TextSegmentCollection> value);
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextFragment"></see> object.
    /// </summary>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    /// <seealso cref="TextSegment"></seealso> 
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    /// <summary>
    /// Sets text position for text, represented with <see cref="TextFragment"></see> object.
    /// </summary>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    /// <seealso cref="TextSegment"></seealso> 
    ASPOSE_PDF_SHARED_API void set_Position(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextFragment"></see> object.
    /// The YIndent of the Position structure represents baseline coordinate of the text fragment.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Position> get_BaselinePosition();
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextFragment"></see> object.
    /// The YIndent of the Position structure represents baseline coordinate of the text fragment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BaselinePosition(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets rectangle of the TextFragment
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets page that contains the TextFragment
    /// </summary>
    /// <remarks>
    /// The value can be null in case the TextFragment object doesn't belong to any page.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Page> get_Page() const;
    /// <summary>
    /// Gets form object that contains the TextFragment
    /// </summary>
    /// <remarks>
    /// The value can be null in case the TextFragment object doesn't belong to a form.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> get_Form() const;
    /// <summary>
    /// Gets wrap lines count for this paragraph(for pdf generation only)
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_WrapLinesCount() const;
    /// <summary>
    /// Sets wrap lines count for this paragraph(for pdf generation only)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WrapLinesCount(int32_t value);
    /// <summary>
    /// Gets the paragraph end note.(for pdf generation only)
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Note> get_EndNote() const;
    /// <summary>
    /// Sets the paragraph end note.(for pdf generation only)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndNote(System::SharedPtr<Note> value);
    /// <summary>
    /// Gets the paragraph foot note.(for pdf generation only)
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Note> get_FootNote() const;
    /// <summary>
    /// Sets the paragraph foot note.(for pdf generation only)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FootNote(System::SharedPtr<Note> value);
    /// <summary>
    /// Gets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> get_TextEditOptions() const;
    /// <summary>
    /// Sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextFragment();
    /// <summary>
    /// Initializes new instance of the <see cref="TextFragment"></see> object with predefined <see cref="TabStops"></see> positions.
    /// </summary>
    /// <param name="tabStops">Tabulation positions</param>
    ASPOSE_PDF_SHARED_API TextFragment(System::SharedPtr<TabStops> tabStops);
    /// <summary>
    /// Creates <see cref="TextFragment"></see> object with single <see cref="TextSegment"></see> object inside. 
    /// Specifies text string inside the segment.
    /// </summary>
    /// <param name="text">Text fragment's text.</param>
    ASPOSE_PDF_SHARED_API TextFragment(System::String text);
    /// <summary>
    /// Creates <see cref="TextFragment"></see> object with single <see cref="TextSegment"></see> object inside and predefined <see cref="TabStops"></see> positions.
    /// </summary>
    /// <param name="text">Text fragment's text.</param>
    /// <param name="tabStops">Tabulation positions</param>
    ASPOSE_PDF_SHARED_API TextFragment(System::String text, System::SharedPtr<TabStops> tabStops);
    
    /// <summary>
    /// Gets <see cref="TextSegment"></see>(s) representing specified part of the <see cref="TextFragment"></see> text.
    /// </summary>
    /// <param name="startIndex">Position in text from which new <see cref="TextSegment"></see>(s) will start.</param>
    /// <param name="length">Length of the text that will isolated into <see cref="TextSegment"></see>(s).</param>
    /// <returns><see cref="TextSegmentCollection"></see> containing text segments represeting text substring starting at a specifing position and having a specified length.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextSegmentCollection> IsolateTextSegments(int32_t startIndex, int32_t length);
    /// <summary>
    /// Clone the fragment.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    /// <summary>
    /// Clone the fragment with all segments.
    /// </summary>
    /// <returns>The cloned object</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> CloneWithSegments();
    
protected:

    Aspose::Pdf::Text::TextState::AttachState get_AttachedState() const;
    void set_AttachedState(Aspose::Pdf::Text::TextState::AttachState value);
    /// <summary>
    /// Gets text replace options. The options define behavior when fragment text is replaced to more short/long.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReplaceOptions(System::SharedPtr<TextReplaceOptions> value);
    System::String get_McName() const;
    int32_t get_McId() const;
    
    System::EventHandler<> OnRectChanged;
    
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> get_SegmentsGroupState() const;
    void set_SegmentsGroupState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> value);
    /// <summary>
    /// Sets text state for the text that <see cref="TextFragment"></see> object represents.
    /// </summary>
    /// <remarks>
    /// Provides a way to change following properties of the text:
    ///    Font
    ///    FontSize
    ///    FontStyle
    ///    ForegroundColor
    ///    BackgroundColor
    /// </remarks>
    /// <example>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"></seealso>
    /// <seealso cref="Document"></seealso>
    ASPOSE_PDF_SHARED_API void set_TextState(System::SharedPtr<TextFragmentState> value);
    /// <summary>
    /// Gets collection that contains current fragment
    /// </summary>
    System::SharedPtr<TextFragmentCollection> get_Fragments() const;
    /// <summary>
    /// Sets collection that contains current fragment
    /// </summary>
    void set_Fragments(System::SharedPtr<TextFragmentCollection> value);
    /// <summary>
    /// Gets rectangle of the TextFragment
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rectangle(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets page that contains the TextFragment
    /// </summary>
    /// <remarks>
    /// The value can be null in case the TextFragment object doesn't belong to any page.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_Page(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets TextSegmenter that was used for creation segments of this fragment.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> get_Segmenter() const;
    /// <summary>
    /// Indicates whether position of the fragment is changed or default
    /// </summary>
    bool get_IsPositionChanged() const;
    
    /// <summary>
    /// Sets font and indices inside the font
    /// </summary>
    /// <param name="font">Font of the fragment.</param>
    /// <param name="text">Text value.</param>
    /// <param name="indices">Glyph indices inside the font.</param>
    void SetEncodedTextProperties(System::SharedPtr<Font> font, System::String text, System::ArrayPtr<uint32_t> indices);
    /// <summary>
    /// Attaches to the segmenter
    /// </summary>
    /// <param name="segmenter"></param>
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter);
    /// <summary>
    /// Isolates segments to single segment for simpler editing.
    /// </summary>
    void IsolateToSingleSegment();
    /// <summary>
    /// Isolates segments to segment that represent the text only.
    /// i.e. we Trim from beginning and end
    /// </summary>
    void IsolateToText();
    static System::SharedPtr<Aspose::Pdf::Rectangle> GetGroupRectangle(System::SharedPtr<TextSegmentCollection> segments, int32_t firstSegmentBeginIndex, int32_t lastSegmentEndIndex, bool measureLastTechnicalSpacings);
    System::SharedPtr<Aspose::Pdf::Rectangle> ComputeUnderlineRectangle();
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>> GetAttachedPhysicalSegmentsArray(int32_t& firstSegmentIndex, int32_t& lastSegmentIndex);
    void ResetTabstops();
    /// <summary>
    /// Indicates whether the fragment contains segments on different "text lines"
    /// </summary>
    /// <remark>
    /// Multiline text fragments may appeared for example as a result of hyphenation during text replacement or as a result of user manipulations.
    /// This implementation ignores the sub/superscript.
    /// </remark>
    /// <returns>True - if segments placed in a few lines; otherwise, false.</returns>
    bool IsMultiline();
    /// <summary>
    /// Indicates whether the fragment contains segments on different "text lines"
    /// </summary>
    /// <remark>
    /// Multiline text fragments may appeared for example as a result of hyphenation during text replacement or as a result of user manipulations.
    /// This implementation interprets the sub/superscript segment as another line.
    /// </remark>
    /// <returns>True - if segments placed in a few lines; otherwise, false.</returns>
    bool IsMultilineOrSubscript();
    
    TextFragment(System::String text, System::SharedPtr<TextSegmentCollection> segments);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextFragment, CODEPORTING_ARGS(System::String text, System::SharedPtr<TextSegmentCollection> segments));
    
    /// <summary>
    /// Creates <see cref="TextFragment"></see> object with single <see cref="TextSegment"></see> object inside. 
    /// Specifies text string inside the segment, and array of glyph indices that represent the text.
    /// </summary>
    /// <param name="text">Text fragment's text.</param>
    /// <param name="glyphIndices">Glyph indices inside the font.</param>
    TextFragment(System::String text, System::ArrayPtr<uint32_t> glyphIndices);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextFragment, CODEPORTING_ARGS(System::String text, System::ArrayPtr<uint32_t> glyphIndices));
    
    TextFragment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::String text, System::SharedPtr<TextSegmentCollection> segments);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextFragment, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter, System::String text, System::SharedPtr<TextSegmentCollection> segments));
    void SyncVerticalAlignment(Aspose::Pdf::VerticalAlignment verticalAlignment);
    void SyncHorizontalAlignment(Aspose::Pdf::HorizontalAlignment horizontalAlignment1);
    /// <summary>
    /// Set text internally without paragraph recalculation.
    /// </summary>
    /// <remarks>
    /// It is useful for cases of small changes like changing font size.
    /// </remarks>
    /// <param name="inText">String representing new text value.</param>
    /// <param name="adjustmentMethod">
    /// Method for adjusting position of the text segment directly after current fragment.
    /// <list type="bullet">
    ///     <item>
    ///         <term><see cref="SegmentAdjustmentMethod::NoAdjustment"></see></term>
    ///         <description>
    ///         Don't change the automatically calculated position of the text segment. The segment may appear
    ///         shifted in the resulting document.
    ///         </description>
    ///     </item>
    ///     <item>
    ///         <term><see cref="SegmentAdjustmentMethod::KeepOriginalPosition"></see></term>
    ///         <description>
    ///         Keep the original position of the text segment (before setting the <paramref name="inText"></paramref>) intact.
    ///         </description>
    ///     </item>
    ///     <item>
    ///         <term><see cref="SegmentAdjustmentMethod::AdjustOnTextFragmentPosition"></see></term>
    ///         <description>
    ///         Reposition the text segment immediately after the new <see cref="Rectangle"></see> of the current fragment
    ///         as it is after setting the <paramref name="inText"></paramref>.
    ///         </description>
    ///     </item>
    /// </list>
    /// </param>
    void LightWeightTextSetter(System::String inText, TextFragment::SegmentAdjustmentMethod adjustmentMethod = Aspose::Pdf::Text::TextFragment::SegmentAdjustmentMethod::NoAdjustment);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>>> GetLineSegments(double x_indent, double y_indent, double angle);
    void SetMarkedContentProperties(System::String name, int32_t id);
    void Assign(System::SharedPtr<TextFragment> fragment);
    void AssignWithSegments(System::SharedPtr<TextFragment> fragment);
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    virtual ASPOSE_PDF_SHARED_API ~TextFragment();
    
private:

    System::String text;
    System::ArrayPtr<uint32_t> indices;
    System::SharedPtr<TextFragmentState> textState;
    System::SharedPtr<TextSegmentCollection> segments;
    System::WeakPtr<TextFragmentCollection> fragments;
    Aspose::Pdf::Text::TextState::AttachState pr_AttachedState;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> underlineRectangle;
    System::WeakPtr<Aspose::Pdf::Page> page;
    System::SharedPtr<XForm> form;
    System::SharedPtr<Note> endNote;
    System::SharedPtr<Note> footNote;
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions;
    bool isTextChanged;
    bool isPositionChanged;
    int32_t wrapLinesCount;
    System::SharedPtr<TextReplaceOptions> pr_ReplaceOptions;
    System::String pr_McName;
    
    void set_McName(System::String value);
    
    int32_t mcId;
    
    void set_McId(int32_t value);
    
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> _segmentsGroupState;
    
    /// <summary>
    /// initializes the object
    /// </summary>
    /// <param name="text"></param>
    /// <param name="glyphIndices">Glyph indices inside the font.</param>
    void InitializeDetachedFragment(System::String text, System::ArrayPtr<uint32_t> glyphIndices = nullptr);
    /// <summary>
    /// initializes the object
    /// </summary>
    /// <param name="text"></param>
    void InitializeDetachedFragment(System::String text, System::SharedPtr<TabStops> tabStops);
    void ApplyTabstops(System::SharedPtr<TextSegment> segment);
    bool CheckTabStops(System::SharedPtr<TextSegment> inSegment, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegment>>>& outSegments);
    System::SharedPtr<TabStop> GetNextTabStop(double currentPosition, double tabDefault);
    /// <summary>
    /// initielizes the object
    /// </summary>
    void InitializeAttachedFragment(System::String text, System::SharedPtr<TextSegmentCollection> segments);
    void OnSegmentAdded(System::SharedPtr<System::Object> sender, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs> args);
    /// <summary>
    /// Registers the text segment within the text fragment
    /// </summary>
    /// <param name="textSegment"></param>
    void RegisterSegment(System::SharedPtr<TextSegment> textSegment);
    void OnSegmentRemoved(System::SharedPtr<System::Object> sender, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs> args);
    void OnSegmentPositionChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> args);
    void OnSegmentTextChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> args);
    void UpdateTextWithSegments();
    void ReComputeRectangle();
    void ComputeRectangle();
    void SetTextMultiline(System::String text);
    double GetTextWidth();
    double GetIsolatedTextWidth(double originalWidth);
    void ApplyPostReplaceAdjustment(double beforeReplacementTextWidth);
    void AdjustNextSegment(double xIndent, double yIndent);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


