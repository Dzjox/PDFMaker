#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/eventhandler.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Text/TextState.h"
#include "Aspose.PDF.Cpp/Text/OnSegmentChangedEventArgs.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Redaction;
class TextMarkupAnnotation;
} // namespace Annotations
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
namespace Settings
{
enum class NoCharacterAction;
} // namespace Settings
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class ITrailerable;
} // namespace Data
} // namespace Engine
class Hyperlink;
namespace LogicalStructure
{
class MCRElement;
} // namespace LogicalStructure
class Page;
class PageGenerator;
namespace PageModel
{
class TextElement;
} // namespace PageModel
class Rectangle;
class Table;
namespace Tests
{
namespace Text
{
class TextBuilderTests;
class TextFragmentAbsorberTests;
class TextParagraphAbsorberTests;
class TextSegmentTests;
} // namespace Text
} // namespace Tests
namespace Text
{
namespace Adjustment
{
class VirtualPhysicalTextSegment;
} // namespace Adjustment
class CharInfo;
class CharInfoCollection;
class Font;
class Position;
class TextBuilder;
class TextEditOptions;
class TextFragment;
class TextFragmentAbsorber;
class TextFragmentCollection;
class TextFragmentState;
class TextParagraph;
class TextPostReplaceFixer;
class TextSegmentCollection;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
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
/// Represents segment of Pdf text.
/// </summary>
/// <remarks>
/// In a few words, <see cref="TextSegment"></see> objects are children of <see cref="TextFragment"></see> object.
/// 
/// In details:
/// 
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
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS TextSegment final : public System::Object
{
    typedef TextSegment ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Text::CharInfoCollection;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentCollection;
    friend class Aspose::Pdf::Text::TextFragmentCollection;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::Text::TextSegmentCollection;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Text::Adjustment::VirtualPhysicalTextSegment;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Text::TextSegmentTests;
    
public:

    /// <summary>
    /// Gets starting character index of current segment in the show text operator (Tj, TJ) segment.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StartCharIndex() const;
    /// <summary>
    /// Gets ending character index of current segment in the show text operator (Tj, TJ) segment.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_EndCharIndex() const;
    /// <summary>
    /// Gets <see cref="System::String"></see> text object that the <see cref="TextSegment"></see> object represents.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() const;
    /// <summary>
    /// Sets <see cref="System::String"></see> text object that the <see cref="TextSegment"></see> object represents.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Text(System::String value);
    /// <summary>
    /// Gets text state for the text that <see cref="TextSegment"></see> object represents.
    /// </summary>
    /// <remarks>
    /// Provides a way to change following properties of the text:
    ///    Font
    ///    FontSize
    ///    FontStyle
    ///    ForegroundColor
    ///    BackgroundColor
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState() const;
    /// <summary>
    /// Sets text state for the text that <see cref="TextSegment"></see> object represents.
    /// </summary>
    /// <remarks>
    /// Provides a way to change following properties of the text:
    ///    Font
    ///    FontSize
    ///    FontStyle
    ///    ForegroundColor
    ///    BackgroundColor
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextSegment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Position> get_Position() const;
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextSegment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Position(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets rectangle of the TextSegment
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextSegment"></see> object.
    /// The YIndent of the Position structure represents baseline coordinate of the text segment.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Position> get_BaselinePosition() const;
    /// <summary>
    /// Gets text position for text, represented with <see cref="TextSegment"></see> object.
    /// The YIndent of the Position structure represents baseline coordinate of the text segment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BaselinePosition(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> get_TextEditOptions() const;
    /// <summary>
    /// Sets text edit options. The options define special behavior when requested symbol cannot be written with font.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> value);
    /// <summary>
    /// Gets collection of CharInfo objects that represent information on characters in the text segment.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CharInfoCollection> get_Characters();
    /// <summary>
    /// Gets the segment hyperlink(for pdf generator).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Hyperlink> get_Hyperlink() const;
    /// <summary>
    /// Sets the segment hyperlink(for pdf generator).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    
    /// <summary>
    /// Creates TextSegment object.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API TextSegment();
    /// <summary>
    /// Creates TextSegment object.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="text">Text segment's text.</param>
    ASPOSE_PDF_SHARED_API TextSegment(System::String text);
    
    /// <summary>
    /// Encodes string as html.
    /// </summary>
    /// <param name="value">String value to encode.</param>
    /// <returns>Html encoded string.</returns>
    static ASPOSE_PDF_SHARED_API System::String MyHtmlEncode(System::String value);
    
protected:

    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    Aspose::Pdf::Text::TextState::AttachState get_AttachedState() const;
    System::String get_McName() const;
    void set_McName(System::String value);
    int32_t get_McId() const;
    void set_McId(int32_t value);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_PhysicalSegment() const;
    /// <summary>
    /// Glyphs indices.
    /// </summary>
    System::ArrayPtr<uint32_t> get_Indices() const;
    /// <summary>
    /// Glyphs indices.
    /// </summary>
    void set_Indices(System::ArrayPtr<uint32_t> value);
    /// <summary>
    /// Gets a segment id.
    /// </summary>
    System::String get_Id() const;
    /// <summary>
    /// Sets a segment id.
    /// </summary>
    void set_Id(System::String value);
    Aspose::Pdf::Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction get_PhysicalNoCharacterAction() const;
    double get_Height();
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> get_Trailerable() const;
    /// <summary>
    /// Gets PhysicalTextSegment object that was created after current segment during isolation. May be null if isolation wasn't performed or created no segment after.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_SegmentAfter() const;
    /// <summary>
    /// Gets PhysicalTextSegment object that was created after current segment during isolation. May be null if isolation wasn't performed or created no segment after.
    /// </summary>
    void set_SegmentAfter(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> value);
    
    System::EventHandler<> OnPositionChanged;
    System::EventHandler<> OnTextChanged;
    System::EventHandler<System::SharedPtr<OnSegmentChangedEventArgs>> SegmentChanged;
    
    /// <summary>
    /// Attached the object to physical segment
    /// </summary>
    /// <param name="physicalSegment"></param>
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment);
    /// <summary>
    /// Detached the object from physical segment
    /// </summary>
    void Detach();
    /// <summary>
    /// In case TextSegment is a part of physical segment, we have to isolate the working part in it's own physical segment to simplify segments operations
    /// </summary>
    void IsolatePhysicalSegment();
    /// <summary>
    /// Splits current <see cref="TextSegment"></see> on two segments by specified position in text.
    /// </summary>
    /// <param name="index">Position in text from which new <see cref="TextSegment"></see> will start.</param>
    /// <returns>New <see cref="TextSegment"></see> containing text of parent segment starting from specified position. Parent segment will be truncated.</returns>
    System::SharedPtr<TextSegment> Split(int32_t index);
    /// <summary>
    /// Deletes physical segment
    /// </summary>
    void DeletePhysicalSegment();
    
    TextSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextSegment, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions));
    /// <summary>
    /// Activates SegmentChanged event
    /// Call it from outside to be sure references to text of initial segment will be updated
    /// after direct call of PhysicalTextSegment.Isolate()
    /// </summary>
    /// <param name="e">event args</param>
    void OnSegmentIsolated(System::SharedPtr<OnSegmentChangedEventArgs> e);
    
    TextSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextSegment, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex));
    /// <summary>
    /// Sets font and indices inside the font
    /// </summary>
    /// <param name="font">Font of the fragment.</param>
    /// <param name="text">Text value.</param>
    /// <param name="indices">Glyph indices inside the font.</param>
    void SetEncodedTextProperties(System::SharedPtr<Font> font, System::String text, System::ArrayPtr<uint32_t> indices);
    /// <summary>
    /// Returns the segment width
    /// </summary>
    /// <returns></returns>
    double MeasureSegment();
    /// <summary>
    /// Returns the character info by character index.
    /// Index is started from 1 and must be a position within the <see cref="Text"></see> string.
    /// </summary>
    System::SharedPtr<CharInfo> GetCharInfo(int32_t charIndex);
    /// <summary>
    /// It makes dirrect setting of text for internal procedures. Don't use it if you aren't sure, use public Text property instead.
    /// </summary>
    /// <param name="value">String to set as the segment text.</param>
    void SetText(System::String value);
    void ProcessHyperlink(System::SharedPtr<Page> page);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
    virtual ASPOSE_PDF_SHARED_API ~TextSegment();
    
private:

    System::String id;
    System::SharedPtr<Aspose::Pdf::Text::Position> position;
    System::SharedPtr<Aspose::Pdf::Text::Position> baselinePosition;
    System::ArrayPtr<uint32_t> _indices;
    System::String text;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    int32_t startCharIndex;
    int32_t endCharIndex;
    int32_t adjustmentSpacesBeforeStart;
    int32_t adjustmentSpacesBeforeEnd;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment;
    System::SharedPtr<Aspose::Pdf::Hyperlink> hyperlink;
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable;
    Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction _physicalNoCharacterAction;
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions;
    bool _isolated;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> isolationSegmentAfter;
    System::SharedPtr<System::Object> sync1;
    System::SharedPtr<CharInfoCollection> charInfoCollection;
    Aspose::Pdf::Text::TextState::AttachState pr_AttachedState;
    
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    void set_AttachedState(Aspose::Pdf::Text::TextState::AttachState value);
    
    int32_t mcId;
    System::String pr_McName;
    
    void set_PhysicalNoCharacterAction(Aspose::Pdf::Engine::CommonData::Text::Segmenting::Settings::NoCharacterAction value);
    
    /// <summary>
    /// initializes detached segment
    /// </summary>
    /// <param name="text"></param>
    void InitializeDetachedSegment(System::String text);
    /// <summary>
    /// initializes attached segment
    /// </summary>
    /// <param name="physicalSegment"></param>
    /// <param name="startCharIndex"></param>
    /// <param name="endCharIndex"></param>
    /// <param name="textEditOptions"></param>
    void InitializeAttachedSegment(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment, int32_t startCharIndex, int32_t endCharIndex, System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> textEditOptions);
    void TextStateOnOnFontSizeChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void TextStateOnOnFontChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void CountAndjustmentSpaces();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


