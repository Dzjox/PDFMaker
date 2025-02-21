#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Text/TextState.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ApsToPdfConverter;
class Color;
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
class Heading;
enum class HorizontalAlignment;
class Matrix;
class PageGenerator;
class Rectangle;
namespace Tests
{
class RegressionTests_v17_12;
namespace Text
{
class TextParagraphAbsorberTests;
} // namespace Text
} // namespace Tests
namespace Text
{
enum class CoordinateOrigin;
class Font;
enum class FontStyles;
class TabStops;
class TextFormattingOptions;
class TextFragment;
class TextParagraph;
enum class TextRenderingMode;
} // namespace Text
class TextStamp;
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
} // namespace Generic
} // namespace Collections
class EventArgs;
class String;
template <typename> class WeakPtr;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text state of a text fragment.
/// </summary>
/// <remarks>
/// Provides a way to change following properties of the text:
///    font (<see cref="TextFragmentState::Font"></see> property)
///    font size (<see cref="TextFragmentState::FontSize"></see> property)
///    font style (<see cref="TextFragmentState::FontStyle"></see> property)
///    foreground color (<see cref="TextFragmentState::ForegroundColor"></see> property)
///    background color (<see cref="TextFragmentState::BackgroundColor"></see> property)
/// 
/// Note that changing <see cref="TextFragmentState"></see> properties may change inner <see cref="TextFragment::Segments"></see> collection because TextFragment is an aggregate object 
/// and it may rearrange internal segments or merge them into single segment.
/// If your requirement is to leave the <see cref="TextFragment::Segments"></see> collection unchanged, please change inner segments individually.
/// </remarks>
/// <example>
/// </example>
/// <seealso cref="TextFragmentAbsorber"></seealso>
/// <seealso cref="Document"></seealso>
class ASPOSE_PDF_SHARED_CLASS TextFragmentState final : public Aspose::Pdf::Text::TextState
{
    typedef TextFragmentState ThisType;
    typedef Aspose::Pdf::Text::TextState BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    
public:

    /// <summary>
    /// Gets character spacing of the text, represented by the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_CharacterSpacing() override;
    /// <summary>
    /// Sets character spacing of the text, represented by the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CharacterSpacing(float value) override;
    /// <summary>
    /// Gets horizontal scaling of the text, represented by the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_HorizontalScaling() override;
    /// <summary>
    /// Sets horizontal scaling of the text, represented by the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HorizontalScaling(float value) override;
    /// <summary>
    /// Gets word spacing of the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_WordSpacing() override;
    /// <summary>
    /// Sets word spacing of the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WordSpacing(float value) override;
    /// <summary>
    /// Gets invisibility of the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Invisible() override;
    /// <summary>
    /// Sets invisibility of the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Invisible(bool value) override;
    /// <summary>
    /// Gets rendering mode of the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextRenderingMode get_RenderingMode() override;
    /// <summary>
    /// Sets rendering mode of the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RenderingMode(TextRenderingMode value) override;
    /// <summary>
    /// Gets subscript of the text, represented by the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Subscript() override;
    /// <summary>
    /// Sets subscript of the text, represented by the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Subscript(bool value) override;
    /// <summary>
    /// Gets superscript of the text, represented by the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Superscript() override;
    /// <summary>
    /// Sets superscript of the text, represented by the <see cref="TextFragment"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Superscript(bool value) override;
    /// <summary>
    /// Gets tabstops for the text. 
    /// </summary>
    /// <remarks>
    /// Note that Tabstops property works in new document generation scenarios only.
    /// Tabstops may be added during <see cref="TextFragment"></see> initialization. Tabstops must be constructed before the text.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TabStops> get_TabStops() const;
    /// <summary>
    /// Gets line spacing of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The LineSpacing property getter works for an object in case it was explicitly set previously with LineSpacing setter for those object.
    /// 
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    ASPOSE_PDF_SHARED_API float get_LineSpacing() override;
    /// <summary>
    /// Sets line spacing of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The LineSpacing property getter works for an object in case it was explicitly set previously with LineSpacing setter for those object.
    /// 
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_LineSpacing(float value) override;
    /// <summary>
    /// Gets foreground color of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_ForegroundColor() override;
    /// <summary>
    /// Sets foreground color of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ForegroundColor(System::SharedPtr<Color> value) override;
    /// <summary>
    /// Gets color stroking operations of <see cref="TextFragment"></see> rendering (stroke text, rectangle border)
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_StrokingColor() override;
    /// <summary>
    /// Sets color stroking operations of <see cref="TextFragment"></see> rendering (stroke text, rectangle border)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StrokingColor(System::SharedPtr<Color> value) override;
    /// <summary>
    /// Sets background color of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackgroundColor() override;
    /// <summary>
    /// Sets background color of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value) override;
    /// <summary>
    /// Gets underline for the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Underline() override;
    /// <summary>
    /// Sets underline for the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Underline(bool value) override;
    /// <summary>
    /// Gets strikeout for the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_StrikeOut() override;
    /// <summary>
    /// Sets strikeout for the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StrikeOut(bool value) override;
    /// <summary>
    /// Sets font style of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API FontStyles get_FontStyle() override;
    /// <summary>
    /// Sets font style of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontStyle(FontStyles value) override;
    /// <summary>
    /// Gets font of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Font> get_Font() override;
    /// <summary>
    /// Sets font of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Font(System::SharedPtr<Aspose::Pdf::Text::Font> value) override;
    /// <summary>
    /// Gets font size of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_FontSize() override;
    /// <summary>
    /// Sets font size of the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontSize(float value) override;
    /// <summary>
    /// Gets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// 
    /// Note that TextFragmentState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment() override;
    /// <summary>
    /// Sets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// 
    /// Note that TextFragmentState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value) override;
    /// <summary>
    /// Gets formatting options.
    /// Setting of the options will be effective in generator scenarios only.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextFormattingOptions> get_FormattingOptions() const;
    /// <summary>
    /// Sets formatting options.
    /// Setting of the options will be effective in generator scenarios only.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FormattingOptions(System::SharedPtr<TextFormattingOptions> value);
    /// <summary>
    /// Gets text CoordinateOrigin.
    /// If CoordinateOrigin is Descender, the text Y coordinate corresponds to the font's lowest point.
    /// If CoordinateOrigin is BaseLine, the text Y coordinate corresponds to the font's baseline.
    /// The default value is Descender.
    /// If the font's Descent value is too big, text can be rendered higher than other fonts.
    /// In this case, CoordinateOrigin BaseLine can be selected for better text rendering.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Text::CoordinateOrigin get_CoordinateOrigin() override;
    /// <summary>
    /// Sets text CoordinateOrigin.
    /// If CoordinateOrigin is Descender, the text Y coordinate corresponds to the font's lowest point.
    /// If CoordinateOrigin is BaseLine, the text Y coordinate corresponds to the font's baseline.
    /// The default value is Descender.
    /// If the font's Descent value is too big, text can be rendered higher than other fonts.
    /// In this case, CoordinateOrigin BaseLine can be selected for better text rendering.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CoordinateOrigin(Aspose::Pdf::Text::CoordinateOrigin value) override;
    /// <summary>
    /// Gets rotation angle in degrees.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Rotation();
    /// <summary>
    /// Sets rotation angle in degrees.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotation(double value);
    /// <summary>
    /// Gets if text rectangle border drawn flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_DrawTextRectangleBorder() const;
    /// <summary>
    /// Sets if text rectangle border drawn flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DrawTextRectangleBorder(bool value);
    
    /// <summary>
    /// Measures the string.
    /// </summary>
    /// <param name="str">The string.</param>
    /// <returns>Width of the string.</returns>
    ASPOSE_PDF_SHARED_API double MeasureString(System::String str) override;
    /// <summary>
    /// Measures character height.
    /// </summary>
    /// <param name="character">Character to measure.</param>
    /// <returns>Height of the character if we could get it from font; otherwise 0.</returns>
    ASPOSE_PDF_SHARED_API double MeasureHeight(char16_t character);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextFragmentState"></see> object with specified <see cref="TextFragment"></see> object.
    /// This <see cref="TextFragmentState"></see> initialization is not supported.
    /// TextFragmentState is only available with <see cref="TextFragment::TextState"></see> property.
    /// </summary>
    /// <param name="fragment">Text fragment object.</param>
    ASPOSE_PDF_SHARED_API TextFragmentState(System::SharedPtr<TextFragment> fragment);
    
    /// <summary>
    /// Applies settings from another textState. 
    /// </summary>
    /// <remarks>
    /// Only those properties will be copied that were changed explicitly.
    /// </remarks>
    /// <param name="textState">Text state object.</param>
    ASPOSE_PDF_SHARED_API void ApplyChangesFrom(System::SharedPtr<TextState> textState) override;
    /// <summary>
    /// Checks if input string could be placed inside defined rectangle.
    /// </summary>
    /// <param name="str">String to check.</param>
    /// <param name="rect">Rectangle to check.</param>
    /// <returns>True if string fit rectangle; otherwise false.</returns>
    ASPOSE_PDF_SHARED_API bool IsFitRectangle(System::String str, System::SharedPtr<Rectangle> rect);
    
protected:

    const System::SharedPtr<TextFragment>& get_Fragment() const;
    void set_Fragment(System::SharedPtr<TextFragment> value);
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> get_TextMatrix() override;
    ASPOSE_PDF_SHARED_API void set_TextMatrix(System::SharedPtr<Matrix> value) override;
    /// <summary>
    /// indicates whether TextWithPositions (TJ) operator must be used
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsTextWithPositions() override;
    /// <summary>
    /// indicates whether TextWithPositions (TJ) operator must be used
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsTextWithPositions(bool value) override;
    /// <summary>
    /// contains adjustments for TextWithPositions (TJ) operator
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> get_Adjustments() override;
    /// <summary>
    /// contains adjustments for TextWithPositions (TJ) operator
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Adjustments(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> value) override;
    /// <summary>
    /// Gets / sets a value indicates that text bounding box height will be enlarged by PhysicalTextSegment.BBoxFontSizeCoefficient. Default is true.
    /// Please don't change this default. Set value to false to avoide text rectangle intersection with nearest objects in the case of problems.
    /// </summary>
    bool get_IsBBoxFontSizeCoefficientApplied() const;
    /// <summary>
    /// Gets / sets a value indicates that text bounding box height will be enlarged by PhysicalTextSegment.BBoxFontSizeCoefficient. Default is true.
    /// Please don't change this default. Set value to false to avoide text rectangle intersection with nearest objects in the case of problems.
    /// </summary>
    void set_IsBBoxFontSizeCoefficientApplied(bool value);
    /// <summary>
    /// Gets a value that indicates that all child <see cref="TextSegment"></see> objects have the same state (font, font size, foreground color etc.)
    /// Not supported yet.
    /// </summary>
    bool get_IsSingleState() const;
    /// <summary>
    /// Gets tabstops for the text. 
    /// </summary>
    /// <remarks>
    /// Note that Tabstops property works in new document generation scenarios only.
    /// Tabstops may be added during <see cref="TextFragment"></see> initialization. Tabstops must be constructed before the text.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_TabStops(System::SharedPtr<Aspose::Pdf::Text::TabStops> value);
    /// <summary>
    /// Gets vertical alignment for the text inside paragrph's <see cref="Rectangle"></see>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// 
    /// Note that TextFragmentState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment() override;
    /// <summary>
    /// Sets vertical alignment for the text inside paragrph's <see cref="Rectangle"></see>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// 
    /// Note that TextFragmentState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value) override;
    /// <summary>
    /// Gets text height, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_TextHeight() override;
    
    /// <summary>
    /// Applies settings from another textState
    /// </summary>
    /// <param name="textState">Text state object.</param>
    /// <param name="groupChangesOnly">if true inherit group changes only (without isolating the segments into single segment)</param> 
    void ApplyChangesFrom(System::SharedPtr<TextState> textState, bool groupChangesOnly);
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter> segmenter);
    void SyncVerticalAlignment(Aspose::Pdf::VerticalAlignment verticalAlignment);
    void SyncHorizontalAlignment(Aspose::Pdf::HorizontalAlignment horizontalAlignment);
    void Disconnect();
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextState> CopyPublicProperties() override;
    
private:

    System::WeakPtr<TextFragment> pr_Fragment;
    bool groupPreparationMode;
    bool prepareIsolateToSingleSegmentDone;
    bool isBBoxFontSizeCoefficientApplied;
    System::SharedPtr<TextFormattingOptions> formattingOptions;
    /// <summary>
    /// Gets a value that indicates that all child <see cref="TextSegment"></see> objects have the same state (font, font size, foreground color etc.)
    /// Not supported yet.
    /// </summary>
    bool _isSingleState;
    System::SharedPtr<Aspose::Pdf::Text::TabStops> tabStops;
    double rotation;
    
    /// <summary>
    /// Gets a value that indicates that all child <see cref="TextSegment"></see> objects have the same state (font, font size, foreground color etc.)
    /// Not supported yet.
    /// </summary>
    void set_IsSingleState(bool value);
    
    bool pr_DrawTextRectangleBorder;
    
    void OnRectChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    void ResetGroupPreparations();
    void PrepareIsolateToSingleSegment();
    void SetFontAndFontSize(System::SharedPtr<Aspose::Pdf::Text::Font> _font, float _fontSize);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


