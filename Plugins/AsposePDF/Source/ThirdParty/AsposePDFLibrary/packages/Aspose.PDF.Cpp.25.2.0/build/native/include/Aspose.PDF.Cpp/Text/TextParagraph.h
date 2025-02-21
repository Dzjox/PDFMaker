#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
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
} // namespace Engine
namespace Facades
{
class PdfFileMend;
} // namespace Facades
class Heading;
enum class HorizontalAlignment;
class MarginInfo;
class Matrix;
class PageGenerator;
class Rectangle;
namespace Tests
{
class RegressionTests_v9_9;
namespace Text
{
class TextBuilderTests;
class TextParagraphAbsorberTests;
} // namespace Text
} // namespace Tests
namespace Text
{
class Position;
class TextBuilder;
class TextEditOptions;
class TextFormattingOptions;
class TextFragment;
class TextFragmentCollection;
class TextSegment;
class TextSegmentCollection;
class TextState;
} // namespace Text
enum class VerticalAlignment;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents text paragraphs as multiline text object.
/// </summary> 
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS TextParagraph final : public System::Object
{
    typedef TextParagraph ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    
protected:

    /// <summary>
    /// Background mode for TextParagraph
    /// </summary>
    enum class TextBackgroundMode
    {
        /// <summary>
        /// Background is set for the whole paragraph as single solid rectangle.
        /// </summary>
        WholeParagraph,
        /// <summary>
        /// Each line will have it's own rectangle.
        /// </summary>
        LogicalLine
    };
    
    
private:

    class IJustificationElement : public System::Object
    {
        typedef IJustificationElement ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    };
    
    class JustificationWord : public Aspose::Pdf::Text::TextParagraph::IJustificationElement
    {
        typedef JustificationWord ThisType;
        typedef Aspose::Pdf::Text::TextParagraph::IJustificationElement BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Word() const;
        void set_Word(System::String value);
        int32_t get_StartPos() const;
        void set_StartPos(int32_t value);
        int32_t get_EndPos() const;
        void set_EndPos(int32_t value);
        const System::SharedPtr<TextSegment>& get_InitialSegment() const;
        void set_InitialSegment(System::SharedPtr<TextSegment> value);
        double get_Width() const;
        void set_Width(double value);
        double get_SpaceWidth() const;
        void set_SpaceWidth(double value);
        
        JustificationWord();
        
    private:
    
        System::String pr_Word;
        int32_t pr_StartPos;
        int32_t pr_EndPos;
        System::SharedPtr<TextSegment> pr_InitialSegment;
        double pr_Width;
        double pr_SpaceWidth;
        
    };
    
    class JustificationSpace : public Aspose::Pdf::Text::TextParagraph::IJustificationElement
    {
        typedef JustificationSpace ThisType;
        typedef Aspose::Pdf::Text::TextParagraph::IJustificationElement BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        const System::SharedPtr<TextSegment>& get_InitialSegment() const;
        void set_InitialSegment(System::SharedPtr<TextSegment> value);
        double get_SpaceWidth() const;
        void set_SpaceWidth(double value);
        
        JustificationSpace();
        
    private:
    
        System::SharedPtr<TextSegment> pr_InitialSegment;
        double pr_SpaceWidth;
        
    };
    
    
public:

    /// <summary>
    /// Gets vertical alignment for the text inside paragrph's <see cref="Rectangle"></see>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// </remarks>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment() const;
    /// <summary>
    /// Sets vertical alignment for the text inside paragrph's <see cref="Rectangle"></see>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets subsequent lines indent value.
    /// If set to a non-zero value, it has an advantage over the FormattingOptions.SubsequentLinesIndent value.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_SubsequentLinesIndent() const;
    /// <summary>
    /// Sets subsequent lines indent value.
    /// If set to a non-zero value, it has an advantage over the FormattingOptions.SubsequentLinesIndent value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SubsequentLinesIndent(float value);
    /// <summary>
    /// Gets subsequent lines indent value.
    /// If set to a non-zero value, it has an advantage over the FormattingOptions.SubsequentLinesIndent value.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_FirstLineIndent() const;
    /// <summary>
    /// Sets subsequent lines indent value.
    /// If set to a non-zero value, it has an advantage over the FormattingOptions.SubsequentLinesIndent value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FirstLineIndent(float value);
    /// <summary>
    /// Gets value whether text is justified.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Justify();
    /// <summary>
    /// Sets value whether text is justified.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Justify(bool value);
    /// <summary>
    /// Gets horizontal alignment for the text inside paragrph's <see cref="Rectangle"></see>. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// </remarks>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment() const;
    /// <summary>
    /// Sets horizontal alignment for the text inside paragrph's <see cref="Rectangle"></see>. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets formatting options.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextFormattingOptions> get_FormattingOptions() const;
    /// <summary>
    /// Sets formatting options.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FormattingOptions(System::SharedPtr<TextFormattingOptions> value);
    /// <summary>
    /// Gets position of the paragraph.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Position> get_Position() const;
    /// <summary>
    /// Sets position of the paragraph.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Position(System::SharedPtr<Aspose::Pdf::Text::Position> value);
    /// <summary>
    /// Gets rectangle of the text placed to the paragraph.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_TextRectangle();
    /// <summary>
    /// Gets rectangle of the paragraph.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() const;
    /// <summary>
    /// Sets rectangle of the paragraph.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rectangle(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets the padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_Margin() const;
    /// <summary>
    /// Sets the padding.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets rotation angle in degrees.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Rotation() const;
    /// <summary>
    /// Sets rotation angle in degrees.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotation(double value);
    
    /// <summary>
    /// Creates <see cref="TextParagraph"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextParagraph();
    
    /// <summary>
    /// Begins the editing of the TextParagraph. 
    /// </summary>
    /// <remarks>
    /// Improves performance of TextParagraph population.
    /// Any layout calculation is suspended until EndEdit method is invoked.
    /// 
    /// Note that method invoke can't be nested.
    /// </remarks> 
    ASPOSE_PDF_SHARED_API void BeginEdit();
    /// <summary>
    /// Ends the editing of the TextParagraph.
    /// </summary>
    /// <remarks>
    /// Improves performance of TextParagraph population.
    /// Any layout calculation is suspended until EndEdit method is invoked.
    /// 
    /// Note that method invoke can't be nested.
    /// </remarks> 
    ASPOSE_PDF_SHARED_API void EndEdit();
    /// <summary>
    /// Appends text line
    /// </summary>
    /// <param name="line">The new line's text.</param>
    ASPOSE_PDF_SHARED_API void AppendLine(System::String line);
    /// <summary>
    /// Appends text line.
    /// </summary>
    /// <param name="line">The new line's text.</param>
    /// <param name="lineSpacing">Additional spacing (0.0 is default and corresponds to default text line height).
    /// The spacing value is added to default line spacing for the particular line, so you may specify 12.0 to get empty row AFTER a text line drawn with 12pt font.</param>
    ASPOSE_PDF_SHARED_API void AppendLine(System::String line, float lineSpacing);
    /// <summary>
    /// Appends text line with text state parameters.
    /// </summary>
    /// <param name="line">The new line's text.</param>
    /// <param name="textState">Text state of the new line.</param>
    ASPOSE_PDF_SHARED_API void AppendLine(System::String line, System::SharedPtr<TextState> textState);
    /// <summary>
    /// Appends text line with text state parameters
    /// </summary>
    /// <param name="line">The new line's text.</param>
    /// <param name="textState">Text state of the new line.</param>
    /// <param name="lineSpacing">Additional spacing (0.0 is default and corresponds to default text line height).
    /// The spacing value is added to default line spacing for the particular line, so you may specify 12.0 to get empty row AFTER a text line drawn with 12pt font.</param>
    ASPOSE_PDF_SHARED_API void AppendLine(System::String line, System::SharedPtr<TextState> textState, float lineSpacing);
    /// <summary>
    /// Appends text line with text state parameters.
    /// </summary>
    /// <param name="line">The new line's text.</param>
    ASPOSE_PDF_SHARED_API void AppendLine(System::SharedPtr<TextFragment> line);
    /// <summary>
    /// Appends text line with text state parameters.
    /// </summary>
    /// <param name="line">The new line's text.</param>
    /// <param name="textState">Text state of the new line.</param>
    ASPOSE_PDF_SHARED_API void AppendLine(System::SharedPtr<TextFragment> line, System::SharedPtr<TextState> textState);
    /// <summary>
    /// Appends text line with text state parameters
    /// </summary>
    /// <param name="line">The new line's text.</param>
    /// <param name="textState">Text state of the new line.</param>
    /// <param name="lineSpacing">Additional spacing (0.0 is default and corresponds to default text line height).
    /// The spacing value is added to default line spacing for the particular line, so you may specify 12.0 to get empty row AFTER a text line drawn with 12pt font.</param>
    ASPOSE_PDF_SHARED_API void AppendLine(System::SharedPtr<TextFragment> line, System::SharedPtr<TextState> textState, float lineSpacing);
    
protected:

    const System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, float>>& get_LineSpacings() const;
    System::String get_McName() const;
    int32_t get_McId() const;
    /// <summary>
    /// Gets background color for the text paragraph.
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor() const;
    /// <summary>
    /// Sets background color for the text paragraph.
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets value whether text is placed behind the bounds (false), or not placed and collection RemainingLines is populated.
    /// </summary>
    bool get_LimitWithBounds() const;
    /// <summary>
    /// Sets value whether text is placed behind the bounds (false), or not placed and collection RemainingLines is populated.
    /// </summary>
    void set_LimitWithBounds(bool value);
    /// <summary>
    /// Preserves original line spacing in Lines bloak when reformatting the paragraph.
    /// Actual in Search paragraph scenarios where line spacing is unique.
    /// </summary>
    bool get_PreserveOriginalLinespacing() const;
    /// <summary>
    /// Preserves original line spacing in Lines bloak when reformatting the paragraph.
    /// Actual in Search paragraph scenarios where line spacing is unique.
    /// </summary>
    void set_PreserveOriginalLinespacing(bool value);
    /// <summary>
    /// Gets hyphen symbol that is used in hyphenation process. 
    /// </summary>
    /// <remarks>
    /// The hyphenation symbol is "-" by default.
    /// To eliminate hyphen drawing (with wrapping procedure still in place) please set empty string string.Empty for HyphenSymbol.
    /// </remarks>
    System::String get_HyphenSymbol() const;
    /// <summary>
    /// Sets hyphen symbol that is used in hyphenation process. 
    /// </summary>
    /// <remarks>
    /// The hyphenation symbol is "-" by default.
    /// To eliminate hyphen drawing (with wrapping procedure still in place) please set empty string string.Empty for HyphenSymbol.
    /// </remarks>
    void set_HyphenSymbol(System::String value);
    /// <summary>
    /// Gets lines.
    /// </summary>
    System::SharedPtr<TextFragmentCollection> get_Lines();
    /// <summary>
    /// Gets remaining lines.
    /// </summary>
    System::SharedPtr<TextFragmentCollection> get_RemainingLines();
    /// <summary>
    /// Gets rectangle of the text with margins.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_TextBox();
    System::SharedPtr<TextSegment> get_LastSegment();
    double get_LastFragmentHeight();
    /// <summary>
    /// Gets Rotation of the paragraph.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix() const;
    /// <summary>
    /// Sets Rotation of the paragraph.
    /// </summary>
    void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    bool get_OldCodeCompatibilityMode() const;
    void set_OldCodeCompatibilityMode(bool value);
    /// <summary>
    /// background mode for the text paragraph
    /// </summary>
    TextParagraph::TextBackgroundMode get_BackgroundMode() const;
    /// <summary>
    /// background mode for the text paragraph
    /// </summary>
    void set_BackgroundMode(TextParagraph::TextBackgroundMode value);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> get_GroupState() const;
    void set_GroupState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState>>> get_LineGroupStates() const;
    void set_LineGroupStates(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState>>> value);
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::String>> get_LineEndReasons() const;
    
    /// <summary>
    /// Attaches the TextParagraph to the segmenter.
    /// </summary>
    /// <param name="segmenter"></param>
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter);
    /// <summary>
    /// Removes previously appended text line by index in collection.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    void RemoveLineByIndex(int32_t index);
    /// <summary>
    /// Inserts the TextSegment at the beginnining of line
    /// </summary>
    /// <note>
    /// This is for low level paragraph post-processing. When in doubt, use a public function instead of this one.
    /// </note>
    /// <param name="line">TextFragment representing line</param>
    /// <param name="segmentInserted">TextSegment to insert</param>
    void InsertAtBeginning(System::SharedPtr<TextFragment> line, System::SharedPtr<TextSegment> segmentInserted);
    /// <summary>
    /// Adds the TextSegment to the end of line
    /// </summary>
    /// <note>
    /// This is for low level paragraph post-processing. When in doubt, use a public function instead of this one.
    /// </note>
    /// <param name="line">TextFragment representing line</param>
    /// <param name="segmentAdded">TextSegment to add</param>
    void AddToEnd(System::SharedPtr<TextFragment> line, System::SharedPtr<TextSegment> segmentAdded);
    
private:

    System::SharedPtr<TextFragmentCollection> outLines;
    System::SharedPtr<TextFragmentCollection> remainingLines;
    System::SharedPtr<TextFragmentCollection> inLines;
    bool updatingPositioning;
    System::SharedPtr<TextFormattingOptions> formattingOptions;
    System::SharedPtr<Aspose::Pdf::Matrix> matrix;
    System::SharedPtr<Aspose::Pdf::Text::Position> position;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> textRectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> textBox;
    System::SharedPtr<Aspose::Pdf::Rectangle> insideMarginRect;
    System::SharedPtr<Aspose::Pdf::Text::Position> insideMarginPosition;
    System::SharedPtr<Aspose::Pdf::Rectangle> bgRectangle;
    System::SharedPtr<Aspose::Pdf::Rectangle> clipRectangle;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, float>> pr_LineSpacings;
    
    void set_LineSpacings(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, float>> value);
    
    System::SharedPtr<System::Object> sync;
    System::SharedPtr<MarginInfo> marginInfo;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    Aspose::Pdf::HorizontalAlignment horizontalAlignment;
    System::SharedPtr<Color> backgroundColor;
    double rotation;
    bool isAttached;
    int32_t clipsCount;
    System::String hyphenSymbol;
    bool limitWithBounds;
    bool isEditing;
    int32_t suspendedUpdateRequest;
    float subsequentLinesIndent;
    float firstLineIndent;
    bool preserveOriginalLinespacing;
    static const float DefaultSpacing;
    bool _oldCodeCompatibilityMode;
    /// <summary>
    /// background mode for the text paragraph
    /// </summary>
    TextParagraph::TextBackgroundMode _backgroundMode;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::String>> _lineEndReasons;
    static const int32_t MagicDeltaHeight;
    static const int32_t FontLinedeltaHeight;
    static const int32_t DeltaLeft;
    static const int32_t DeltaRight;
    static const int32_t DeltaHeight;
    static const int32_t DeltaUp;
    static const int32_t DeltaBottom;
    static const int32_t EmulatedItalicRightCorrection;
    System::String pr_McName;
    
    void set_McName(System::String value);
    
    int32_t pr_McId;
    
    void set_McId(int32_t value);
    
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState> _groupState;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::SegmentsGroupState>>> _lineGroupStates;
    
    /// <summary>
    /// Gets technical rectangle with margins correction
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_InsideMarginRectangle();
    /// <summary>
    /// Gets position inside margins
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::Position> get_InsideMarginPosition();
    
    /// <summary>
    /// Updates actual text ractangle of the object
    /// </summary>
    void UpdateTextRectangle(double textHeight, double textMaxWidth, double& dx, double& dy);
    /// <summary>
    /// updates coordinates corresponding to matrix
    /// </summary>
    void UpdateMatrixCoordinates();
    /// <summary>
    /// Sometimes it is reguires to calculate current positioning even in editing mode
    /// </summary>
    void UpdatePositioningInEditingMode();
    /// <summary>
    /// Updates lines positioning.
    /// Performs positioning of the text fragments and segments.
    /// </summary>
    void UpdatePositioning();
    /// <summary>
    /// Updates lines positioning.
    /// Performs positioning of the text fragments and segments.
    /// </summary>
    void UpdatePositioning(bool forceUpdate);
    void ShiftSegment(double shiftDx, double shiftDy);
    double DoWrapPositioning();
    double ComputeLength(System::String input, System::SharedPtr<TextState> textState, int32_t key);
    float GetLineIndent(bool isFirstLine);
    void InsertLineWrapLog(int32_t index);
    double DoNoWrapPositioning();
    void AddLineToRemaining(System::SharedPtr<TextFragment> inLine);
    static void SkipSpaces(int32_t& j, int32_t charCount, System::String txt);
    bool FlushPotentialLine(System::SharedPtr<TextFragment> outLine, bool fillRemainingLines, System::SharedPtr<TextSegmentCollection> remainingLine, System::SharedPtr<TextSegmentCollection> potentialLine, double nextLineShift, float indent, bool isLastSubline);
    void PositionSegmentsLeft(System::SharedPtr<TextSegmentCollection> ponentialLine, double nextLineShift, float indent);
    void PositionSegmentsCenter(System::SharedPtr<TextSegmentCollection> ponentialLine, double nextLineShift, float indent);
    void PositionSegmentsRight(System::SharedPtr<TextSegmentCollection> potentialLine, double nextLineShift, float indent);
    void PositionSegmentsJustify(System::SharedPtr<TextSegmentCollection> ponentialLine, double nextLineShift, float indent);
    double ComputeLineShift(int32_t currentLineIndex, System::SharedPtr<TextSegmentCollection> ponentialLine);
    static void AddNewLine(int32_t& lineIndex, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegmentCollection>>> newLines);
    /// <summary>
    /// Gets linespacing for a line
    /// </summary>
    /// <returns></returns>
    float GetLineSpacingBeforeIndex(System::SharedPtr<TextSegmentCollection> line, int32_t i);
    /// <summary>
    /// Creates new segment.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<TextSegment> CreateNewSegment(System::String text, System::SharedPtr<TextState> state, bool allowAttachment);
    /// <summary>
    /// Creates new segment.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<TextSegment> CreateNewSegment(System::String text, System::SharedPtr<TextState> state, bool allowAttachment, System::SharedPtr<TextEditOptions> opts);
    /// <summary>
    /// Clears all physical segments
    /// </summary>
    void ClearPhysicalSegments();
    /// <summary>
    /// Flushes properties to physical segment object. 
    /// </summary>
    void FlushDetachedProperties();
    /// <summary>
    /// Sets background color in attached mode.
    /// </summary>
    void FlushBGColor();
    /// <summary>
    /// Flushes clipbox to pdf document's page.
    /// </summary>
    void FlushClipBox();
    /// <summary>
    /// Computex max text height of the segments collection
    /// </summary>
    double ComputeMaxTextHeight(System::SharedPtr<TextSegmentCollection> segments);
    void CorrectRegardingMatrix(System::SharedPtr<TextFragment> textFragment, System::SharedPtr<Aspose::Pdf::Rectangle> newRect);
    void CorrectRegardingMatrix(System::SharedPtr<TextFragmentCollection> textFragments, System::SharedPtr<Aspose::Pdf::Rectangle>& newRect);
    /// <summary>
    /// Returns physical text segments collection built on the text lines of the paragraph.
    /// </summary>
    /// <returns></returns>
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment>> LinesToSegments();
    void ResetBoxProperties();
    void AppendLineInternal(System::SharedPtr<TextFragment> fragment, System::SharedPtr<TextState> textState, float lineSpacing);
    void SplitAndAddSublines(System::String line, System::SharedPtr<TextState> textState, float lineSpacing);
    void SplitAndAddSublinesFragment(System::SharedPtr<TextFragment> fragment, System::SharedPtr<TextState> textState, float lineSpacing);
    void CheckForSubstitutionAdd(System::SharedPtr<TextFragment> line, System::SharedPtr<TextState> textState, float lineSpacing);
    void SubstituteToChunksAndAddSublines(System::String line, System::SharedPtr<TextState> textState);
    bool IsSeparatorLastIn(System::SharedPtr<TextSegmentCollection> potentialLine);
    static System::String GetTextWrapNotificationMessage(System::SharedPtr<TextFragment> line);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


