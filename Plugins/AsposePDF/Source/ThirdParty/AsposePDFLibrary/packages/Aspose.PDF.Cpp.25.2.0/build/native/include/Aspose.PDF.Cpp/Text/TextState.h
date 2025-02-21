#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Dynamic;

#include <system/eventhandler.h>
#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class WatermarkAnnotation;
} // namespace Annotations
class Artifact;
class Cell;
class Color;
namespace Engine
{
namespace CommonData
{
namespace Graphics
{
namespace Colors
{
class CMYKColor;
class GrayColor;
class IColor;
class RGBColor;
} // namespace Colors
} // namespace Graphics
namespace Text
{
namespace Segmenting
{
class PhysicalTextSegment;
class PhysicalTextSegmentStateData;
class PhysicalTextState;
class TextSegmentBuilder;
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
class FormattedFragment;
class Heading;
enum class HorizontalAlignment;
class HtmlFragment;
class Matrix;
class PageGenerator;
class PageInfo;
namespace PageModel
{
class TextElement;
} // namespace PageModel
namespace PdfToMarkdown
{
class OutlinesHeaderDetector;
} // namespace PdfToMarkdown
class Rectangle;
class Row;
class Table;
namespace Tests
{
namespace Facades
{
class FormattedTextTests;
} // namespace Facades
namespace Text
{
class TextBuilderTests;
class TextStateFlowTests;
} // namespace Text
} // namespace Tests
namespace Text
{
enum class CoordinateOrigin;
class Font;
enum class FontStyles;
enum class TabLeaderType;
class TextBuilder;
class TextFragment;
class TextFragmentState;
class TextParagraph;
enum class TextRenderingMode;
class TextSegment;
} // namespace Text
class TextStamp;
enum class VerticalAlignment;
class WatermarkArtifact;
class XfaToPdfConverter;
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
namespace Drawing
{
class Color;
} // namespace Drawing
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
/// Represents a text state of a text
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextState : public System::Object
{
    typedef TextState ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::FormattedFragment;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::HtmlFragment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::PageInfo;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Text::TextSegment;
    friend class Aspose::Pdf::XfaToPdfConverter;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::WatermarkArtifact;
    friend class Aspose::Pdf::PdfToMarkdown::OutlinesHeaderDetector;
    friend class Aspose::Pdf::Tests::Text::TextStateFlowTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Facades::FormattedTextTests;
    
protected:

    /// <summary>
    /// Enum for attached state of the objects
    /// </summary>
    enum class AttachState
    {
        Detached,
        Attached,
        Attaching
    };
    
    
private:

    enum class SetFlagsEnum
    {
        isBackgroundColorSet = 0x01,
        isUnderlineSet = 0x02,
        isCharacterSpacingSet = 0x04,
        isLineSpacingSet = 0x08,
        isFontSet = 0x10,
        isForegroundColorSet = 0x20,
        isHorizontalScalingSet = 0x40,
        isTextMatrixSet = 0x80,
        isWordSpacingSet = 0x100,
        isFontStyleSet = 0x200,
        isFontSizeSet = 0x400,
        isHorizontalAlignmentSet = 0x800,
        isVerticalAlignmentSet = 0x1000,
        isStrikeoutSet = 0x2000,
        isSubSuperscriptSet = 0x4000,
        isStrokingColorSet = 0x8000,
        isRenderingModeSet = 0x10000
    };
    DECLARE_FRIEND_ENUM_OPERATORS(Aspose::Pdf::Text::TextState::SetFlagsEnum);
    
    
    
public:

    /// <summary>
    /// You can place this tag in text to declare tabulation.
    /// </summary>
    /// <remarks>
    /// It has effect only in couple with <see cref="TabStops"></see>.
    /// </remarks>
    System::String TabTag;
    /// <summary>
    /// Default value of tabulation in widths of space character of default font.
    /// </summary>
    float TabstopDefaultValue;
    
    /// <summary>
    /// Gets character spacing of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API float get_CharacterSpacing();
    /// <summary>
    /// Sets character spacing of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_CharacterSpacing(float value);
    /// <summary>
    /// Gets line spacing of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The LineSpacing property getter works for an object in case it was explicitly set previously with LineSpacing setter for those object.
    /// 
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API float get_LineSpacing();
    /// <summary>
    /// Sets line spacing of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The LineSpacing property getter works for an object in case it was explicitly set previously with LineSpacing setter for those object.
    /// 
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API void set_LineSpacing(float value);
    /// <summary>
    /// Gets horizontal scaling of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API float get_HorizontalScaling();
    /// <summary>
    /// Sets horizontal scaling of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_HorizontalScaling(float value);
    /// <summary>
    /// Gets subscript of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API bool get_Subscript();
    /// <summary>
    /// Sets subscript of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Subscript(bool value);
    /// <summary>
    /// Gets superscript of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API bool get_Superscript();
    /// <summary>
    /// Sets superscript of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Superscript(bool value);
    /// <summary>
    /// Gets word spacing of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API float get_WordSpacing();
    /// <summary>
    /// Sets word spacing of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_WordSpacing(float value);
    /// <summary>
    /// Gets the invisibility of text. This basically reflects the <see cref="RenderingMode"></see> state, except for some special cases (like clipping).
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API bool get_Invisible();
    /// <summary>
    /// Sets the invisibility of text. This basically reflects the <see cref="RenderingMode"></see> state, except for some special cases (like clipping).
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Invisible(bool value);
    /// <summary>
    /// Gets rendering mode of text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API TextRenderingMode get_RenderingMode();
    /// <summary>
    /// Sets rendering mode of text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_RenderingMode(TextRenderingMode value);
    /// <summary>
    /// Gets font size of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API float get_FontSize();
    /// <summary>
    /// Sets font size of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_FontSize(float value);
    /// <summary>
    /// Gets font of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Font> get_Font();
    /// <summary>
    /// Sets font of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    /// <summary>
    /// Gets foreground color of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_ForegroundColor();
    /// <summary>
    /// Sets foreground color of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_ForegroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets foreground color of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_StrokingColor();
    /// <summary>
    /// Sets foreground color of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_StrokingColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets underline for the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API bool get_Underline();
    /// <summary>
    /// Sets underline for the text, represented by the <see cref="TextFragment"></see> object
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Underline(bool value);
    /// <summary>
    /// Gets strikeout for the text, represented by the <see cref="TextSegment"></see> object
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API bool get_StrikeOut();
    /// <summary>
    /// Sets strikeout for the text, represented by the <see cref="TextSegment"></see> object
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_StrikeOut(bool value);
    /// <summary>
    /// Sets background color of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The BackgroundColor property getter works for an object in case it was explicitly set previously with BackgroundColor setter for those object.
    /// 
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Sets background color of the text.
    /// </summary>
    /// <remarks>
    /// Note that the value is not preserved as a text characteristic within the document.
    /// The BackgroundColor property getter works for an object in case it was explicitly set previously with BackgroundColor setter for those object.
    /// 
    /// The property is used by runtime in context of current generation/modification process.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Sets font style of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API FontStyles get_FontStyle();
    /// <summary>
    /// Sets font style of the text.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_FontStyle(FontStyles value);
    /// <summary>
    /// Gets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// 
    /// Note that TextState.HorizontalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Sets horizontal alignment for the text. 
    /// </summary>
    /// <remarks>
    /// HorizontalAlignment.None is equal to HorizontalAlignment.Left.
    /// 
    /// Note that TextState.HorizontalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets text CoordinateOrigin.
    /// If CoordinateOrigin is Descender, the text Y coordinate corresponds to the font's lowest point.
    /// If CoordinateOrigin is BaseLine, the text Y coordinate corresponds to the font's baseline.
    /// The default value is Descender.
    /// If the font's Descent value is too big, text can be rendered higher than other fonts.
    /// In this case, CoordinateOrigin BaseLine can be selected for better text rendering.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API Aspose::Pdf::Text::CoordinateOrigin get_CoordinateOrigin();
    /// <summary>
    /// Sets text CoordinateOrigin.
    /// If CoordinateOrigin is Descender, the text Y coordinate corresponds to the font's lowest point.
    /// If CoordinateOrigin is BaseLine, the text Y coordinate corresponds to the font's baseline.
    /// The default value is Descender.
    /// If the font's Descent value is too big, text can be rendered higher than other fonts.
    /// In this case, CoordinateOrigin BaseLine can be selected for better text rendering.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_CoordinateOrigin(Aspose::Pdf::Text::CoordinateOrigin value);
    
    /// <summary>
    /// Applies settings from another textState. 
    /// </summary>
    /// <remarks>
    /// Only those properties will be copied that were changed explicitly.
    /// </remarks>
    /// <param name="textState">Text state object.</param>
    virtual ASPOSE_PDF_SHARED_API void ApplyChangesFrom(System::SharedPtr<TextState> textState);
    
    /// <summary>
    /// Creates text state object.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextState();
    
    /// <summary>
    /// Measures the string.
    /// </summary>
    /// <param name="str">The string.</param>
    /// <returns>Width of the string represented with this text state.</returns>
    virtual ASPOSE_PDF_SHARED_API double MeasureString(System::String str);
    /// <summary>
    /// Measures character height.
    /// </summary>
    /// <param name="character">Character to measure.</param>
    /// <returns>Height of the character if we could get it from font; otherwise 0.</returns>
    ASPOSE_PDF_SHARED_API double MeasureHeight(char16_t character);
    
    /// <summary>
    /// Creates text state object with font size specification.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    ASPOSE_PDF_SHARED_API TextState(double fontSize);
    /// <summary>
    /// Creates text state object with foreground color specification.
    /// </summary>
    /// <param name="foregroundColor">Foreground color.</param>
    ASPOSE_PDF_SHARED_API TextState(System::Drawing::Color foregroundColor);
    /// <summary>
    /// Creates text state object with foreground color and font size specification.
    /// </summary>
    /// <param name="foregroundColor">Foreground color.</param>
    /// <param name="fontSize">Font size.</param>
    ASPOSE_PDF_SHARED_API TextState(System::Drawing::Color foregroundColor, double fontSize);
    /// <summary>
    /// Creates text state object with font family specification.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    ASPOSE_PDF_SHARED_API TextState(System::String fontFamily);
    /// <summary>
    /// Creates text state object with font family and font style specification.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="bold">Bold font style.</param>
    /// <param name="italic">Italic font style.</param>
    ASPOSE_PDF_SHARED_API TextState(System::String fontFamily, bool bold, bool italic);
    /// <summary>
    /// Creates text state object with font family and font size specification.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontSize">Font size.</param>
    ASPOSE_PDF_SHARED_API TextState(System::String fontFamily, double fontSize);
    
protected:

    /// <summary>
    /// underline
    /// </summary>
    bool get_underline() const;
    /// <summary>
    /// underline
    /// </summary>
    void set_underline(bool value);
    /// <summary>
    /// strikeout
    /// </summary>
    bool get_strikeout() const;
    /// <summary>
    /// strikeout
    /// </summary>
    void set_strikeout(bool value);
    /// <summary>
    /// superscript
    /// </summary>
    bool get_superscript() const;
    /// <summary>
    /// superscript
    /// </summary>
    void set_superscript(bool value);
    /// <summary>
    /// subscript
    /// </summary>
    bool get_subscript() const;
    /// <summary>
    /// subscript
    /// </summary>
    void set_subscript(bool value);
    /// <summary>
    /// background color
    /// </summary>
    const System::SharedPtr<Color>& get_backgroundColor() const;
    /// <summary>
    /// background color
    /// </summary>
    void set_backgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// character spacing
    /// </summary>
    float get_characterSpacing() const;
    /// <summary>
    /// character spacing
    /// </summary>
    void set_characterSpacing(float value);
    /// <summary>
    /// character spacing
    /// </summary>
    float get_lineSpacing() const;
    /// <summary>
    /// character spacing
    /// </summary>
    void set_lineSpacing(float value);
    /// <summary>
    /// font
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::Font> get_font();
    /// <summary>
    /// font
    /// </summary>
    void set_font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    /// <summary>
    /// text matrix
    /// </summary>
    const System::SharedPtr<Matrix>& get_textMatrix() const;
    /// <summary>
    /// text matrix
    /// </summary>
    void set_textMatrix(System::SharedPtr<Matrix> value);
    /// <summary>
    /// word spacing
    /// </summary>
    float get_wordSpacing() const;
    /// <summary>
    /// word spacing
    /// </summary>
    void set_wordSpacing(float value);
    /// <summary>
    /// text invisibility
    /// </summary>
    bool get_invisible() const;
    /// <summary>
    /// text invisibility
    /// </summary>
    void set_invisible(bool value);
    /// <summary>
    /// text rendering mode
    /// </summary>
    TextRenderingMode get_renderingMode() const;
    /// <summary>
    /// text rendering mode
    /// </summary>
    void set_renderingMode(TextRenderingMode value);
    /// <summary>
    /// font style
    /// </summary>
    FontStyles get_fontStyle() const;
    /// <summary>
    /// font style
    /// </summary>
    void set_fontStyle(FontStyles value);
    /// <summary>
    /// font size
    /// </summary>
    float get_fontSize() const;
    /// <summary>
    /// font size
    /// </summary>
    void set_fontSize(float value);
    /// <summary>
    /// please don't set this, use IsTextWithPositions
    /// </summary>
    bool get_isTextWithPositions() const;
    /// <summary>
    /// please don't set this, use IsTextWithPositions
    /// </summary>
    void set_isTextWithPositions(bool value);
    /// <summary>
    /// please don't set this, use Adjustments
    /// </summary>
    const System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>>& get_adjustments() const;
    /// <summary>
    /// please don't set this, use Adjustments
    /// </summary>
    void set_adjustments(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> value);
    bool get_IsBackgroundColorSet();
    void set_IsBackgroundColorSet(bool value);
    bool get_IsUnderlineSet();
    void set_IsUnderlineSet(bool value);
    bool get_IsStrikeOutSet();
    void set_IsStrikeOutSet(bool value);
    bool get_IsCharacterSpacingSet();
    void set_IsCharacterSpacingSet(bool value);
    bool get_IsLineSpacingSet();
    void set_IsLineSpacingSet(bool value);
    bool get_IsFontSet();
    void set_IsFontSet(bool value);
    bool get_IsForegroundColorSet();
    void set_IsForegroundColorSet(bool value);
    bool get_IsStrokingColorSet();
    void set_IsStrokingColorSet(bool value);
    bool get_IsHorizontalScalingSet();
    void set_IsHorizontalScalingSet(bool value);
    bool get_IsTextMatrixSet();
    void set_IsTextMatrixSet(bool value);
    bool get_IsWordSpacingSet();
    void set_IsWordSpacingSet(bool value);
    bool get_IsFontStyleSet();
    void set_IsFontStyleSet(bool value);
    bool get_IsFontSizeSet();
    void set_IsFontSizeSet(bool value);
    bool get_IsHorizontalAlignmentSet();
    void set_IsHorizontalAlignmentSet(bool value);
    bool get_IsVerticalAlignmentSet();
    void set_IsVerticalAlignmentSet(bool value);
    bool get_IsSubSuperscriptSet();
    void set_IsSubSuperscriptSet(bool value);
    bool get_IsRenderingModeSet();
    void set_IsRenderingModeSet(bool value);
    bool get_IsInvisibilitySet() const;
    void set_IsInvisibilitySet(bool value);
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    TextState::AttachState get_AttachedState() const;
    /// <summary>
    /// the state is attached to real physical text segment
    /// </summary>
    void set_AttachedState(TextState::AttachState value);
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> get_TextMatrix();
    virtual ASPOSE_PDF_SHARED_API void set_TextMatrix(System::SharedPtr<Matrix> value);
    /// <summary>
    /// indicates whether TextWithPositions (TJ) operator must be used
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API bool get_IsTextWithPositions();
    /// <summary>
    /// indicates whether TextWithPositions (TJ) operator must be used
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_IsTextWithPositions(bool value);
    /// <summary>
    /// contains adjustments for TextWithPositions (TJ) operator
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> get_Adjustments();
    /// <summary>
    /// contains adjustments for TextWithPositions (TJ) operator
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Adjustments(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> value);
    /// <summary>
    /// Gets text height.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API float get_TextHeight();
    /// <summary>
    /// Gets vertical alignment for the text inside paragrph's <see cref="Rectangle"></see>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// 
    /// Note that TextState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Sets vertical alignment for the text inside paragrph's <see cref="Rectangle"></see>. 
    /// </summary>
    /// <remarks>
    /// VerticalAlignment.None is equal to VerticalAlignment.Bottom.
    /// 
    /// Note that TextState.VerticalAlignment property works in new document generation scenarios only.
    /// </remarks>
    virtual ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// foreground color
    /// </summary>
    System::SharedPtr<Color> get_foregroundColor() const;
    /// <summary>
    /// foreground color
    /// </summary>
    void set_foregroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// stroking color
    /// </summary>
    System::SharedPtr<Color> get_strokingColor() const;
    /// <summary>
    /// stroking color
    /// </summary>
    void set_strokingColor(System::SharedPtr<Color> value);
    /// <summary>
    /// horizontal spacing (100 is by default)
    /// </summary>
    float get_horizontalScaling() const;
    /// <summary>
    /// horizontal spacing (100 is by default)
    /// </summary>
    void set_horizontalScaling(float value);
    /// <summary>
    /// Tabstop shift of position of text segment. It is calculated by TextFragment. Shouldn't set it directly if you don't sure.
    /// </summary>
    double get_TabstopShift() const;
    /// <summary>
    /// Tabstop shift of position of text segment. It is calculated by TextFragment. Shouldn't set it directly if you don't sure.
    /// </summary>
    void set_TabstopShift(double value);
    /// <summary>
    /// Length of tab leader before text segment. It is calculated by TextFragment. Shouldn't set it directly if you don't sure.
    /// </summary>
    double get_TabLeaderLength() const;
    /// <summary>
    /// Length of tab leader before text segment. It is calculated by TextFragment. Shouldn't set it directly if you don't sure.
    /// </summary>
    void set_TabLeaderLength(double value);
    /// <summary>
    /// Type of tab leader before text segment. 
    /// </summary>
    Aspose::Pdf::Text::TabLeaderType get_TabLeaderType() const;
    /// <summary>
    /// Type of tab leader before text segment. 
    /// </summary>
    void set_TabLeaderType(Aspose::Pdf::Text::TabLeaderType value);
    int32_t get_SetFlags() const;
    void set_SetFlags(int32_t value);
    bool get_IsDefault();
    
    System::EventHandler<> OnFontChanged;
    System::EventHandler<> OnFontSizeChanged;
    
    void Attach(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment);
    void Detach();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> ToEngineColorWithArea(System::SharedPtr<Color> color, System::SharedPtr<Rectangle> rect);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> ToEngineColorCommon(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> originalColor, System::SharedPtr<Color> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> ToEngineColor(System::SharedPtr<Color> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::RGBColor> ColorToEngineRGB(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> EngineRGBToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::RGBColor> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::GrayColor> ColorToEngineGray(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> GrayToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::GrayColor> color);
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::CMYKColor> ColorToEngineCMYK(System::SharedPtr<Color> color);
    static System::SharedPtr<Color> CMYKToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::CMYKColor> color);
    
    TextState(System::SharedPtr<Color> backgroundColor, System::SharedPtr<Color> foregroundColor, FontStyles fontStyle, System::SharedPtr<Aspose::Pdf::Text::Font> font, float fontSize);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextState, CODEPORTING_ARGS(System::SharedPtr<Color> backgroundColor, System::SharedPtr<Color> foregroundColor, FontStyles fontStyle, System::SharedPtr<Aspose::Pdf::Text::Font> font, float fontSize));
    
    TextState(System::Drawing::Color backgroundColor, System::Drawing::Color foregroundColor, FontStyles fontStyle, System::SharedPtr<Aspose::Pdf::Text::Font> font, float fontSize);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextState, CODEPORTING_ARGS(System::Drawing::Color backgroundColor, System::Drawing::Color foregroundColor, FontStyles fontStyle, System::SharedPtr<Aspose::Pdf::Text::Font> font, float fontSize));
    void SetColorWithArea(System::SharedPtr<Color> color, System::SharedPtr<Rectangle> rect);
    void SetStrokingColorWithArea(System::SharedPtr<Color> color, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Searches for operators that used for orginizing text underline for current text block. If found it will be replaced for operators generated by our code.
    /// </summary>
    bool TryUpdateUnderlineFromSource(bool isUnderline);
    
    TextState(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> physicalState);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextState, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> physicalState));
    /// <summary>
    /// Calculates the font size for the rectangle.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API double CalculateFontSize(System::String str, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Copying constructor
    /// Copies properties from <see cref="PhysicalTextState"></see>
    /// </summary>
    TextState(System::SharedPtr<TextSegment> textSegment);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextState, CODEPORTING_ARGS(System::SharedPtr<TextSegment> textSegment));
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String tagName);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<TextState> CopyPublicProperties();
    
    virtual ASPOSE_PDF_SHARED_API ~TextState();
    
private:

    bool pr_underline;
    bool pr_strikeout;
    bool pr_superscript;
    bool pr_subscript;
    System::SharedPtr<Color> pr_backgroundColor;
    float pr_characterSpacing;
    float pr_lineSpacing;
    /// <summary>
    /// foreground color
    /// </summary>
    System::SharedPtr<Color> _foregroundColor;
    /// <summary>
    /// stroking color
    /// </summary>
    System::SharedPtr<Color> _strokingColor;
    /// <summary>
    /// horizontal spacing (100 is by default)
    /// </summary>
    float _horizontalScaling;
    /// <summary>
    /// Subscript
    /// </summary>
    bool _isSubscript;
    /// <summary>
    /// Superscript
    /// </summary>
    bool _isSuperscript;
    /// <summary>
    /// indicates whether font is already changed because of super/subscript was set
    /// </summary>
    bool _isSubSuperscriptFontChanged;
    System::SharedPtr<Matrix> pr_textMatrix;
    float pr_wordSpacing;
    bool pr_invisible;
    TextRenderingMode pr_renderingMode;
    FontStyles pr_fontStyle;
    float pr_fontSize;
    bool pr_isTextWithPositions;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, double>> pr_adjustments;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> _physicalState;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> physicalSegment;
    System::WeakPtr<TextSegment> textSegment;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder> segmentBuilder;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    Aspose::Pdf::HorizontalAlignment horizontalAlignment;
    Aspose::Pdf::Text::CoordinateOrigin origin;
    double _tabstopShift;
    double _tabLeaderLength;
    Aspose::Pdf::Text::TabLeaderType _tabLeaderType;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegmentStateData> stateData;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, double>> measureCache;
    bool pr_IsInvisibilitySet;
    int32_t setFlags;
    System::SharedPtr<Aspose::Pdf::Text::Font> _font;
    bool _initFontOnFirstGet;
    TextState::AttachState pr_AttachedState;
    
    void FlushToPhysicalSegment();
    /// <summary>
    /// Applies settings from another textState
    /// </summary>
    /// <param name="textState"></param>
    void AttachStateProperties(System::SharedPtr<TextState> textState, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextState> physicalState);
    void ApplyChangesFromAttachedState(System::SharedPtr<TextState> textState);
    void RefreshBackgroundColor();
    static System::SharedPtr<Color> EngineColorToColor(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Colors::IColor> engineColor);
    void ClearMeasureCache();
    void FontOnFontPropertiesChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    static void ChangeFontStyle(FontStyles newStyleValue, FontStyles& changedStyle);
    /// <summary>
    /// Measures the string.
    /// </summary>
    /// <remarks>
    /// insideLine indicate that the string is not ending.
    /// 
    /// in case part of the whole string is measured - the insideLine should be true.
    /// in case the whole string is measured the insideLine should be false. 
    /// 
    /// in other words:
    /// in case insideLine = true only character widhts are taken into account. no additional transformations are taken into account
    /// in case insideLine = false end of the string is handled properly - italic transformation is taken into account.
    /// </remarks>
    double MeasureString(System::String str, bool insideLine);
    double MeasureString(System::String text, double fontSize);
    static System::ArrayPtr<uint32_t> ConvertStringToCharCodes(System::String input);
    
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::TextState::SetFlagsEnum);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Text);



