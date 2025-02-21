#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/Text/TextOptions/TextFormattingOptions.h"
#include "Aspose.PDF.Cpp/Stamp.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDataStream;
class IPdfObject;
} // namespace Data
} // namespace Engine
namespace Facades
{
class FormattedText;
} // namespace Facades
enum class HorizontalAlignment;
class Page;
class Rectangle;
namespace Tests
{
namespace Facades
{
class FormattedTextTests;
} // namespace Facades
namespace Text
{
class TextBuilderTests;
} // namespace Text
} // namespace Tests
namespace Text
{
class Font;
class TextFragment;
class TextParagraph;
class TextState;
} // namespace Text
class TextStamp;
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

/// <summary>
/// Represents textual stamp.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextStamp : public Aspose::Pdf::Stamp
{
    typedef TextStamp ThisType;
    typedef Aspose::Pdf::Stamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::FormattedText;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Facades::FormattedTextTests;
    
public:

    /// <summary>
    /// Action to perform if font does not contain required character.
    /// </summary>
    enum class NoCharacterAction
    {
        /// <summary>
        /// If the font does not contain all the characters of the string, an exception is thrown.
        /// </summary>
        ThrowException,
        /// <summary>
        /// Repalce font to standard font which contains required character.
        /// </summary>
        UseStandardFont,
        /// <summary>
        /// Replace text anyway without font substitution.
        /// </summary>
        ReplaceAnyway,
        /// <summary>
        /// Repalce font to defined replacement font.
        /// </summary>
        UseCustomReplacementFont
    };
    
    
private:

    class TextLine : public System::Object
    {
        typedef TextLine ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Text() const;
        double get_Spacing() const;
        
        TextLine(System::String text, double spacing);
        TextLine(System::String text);
        
    private:
    
        System::String _text;
        double _spacing;
        
    };
    
    class WordInfo : public System::Object
    {
        typedef WordInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String text;
        System::String space;
        
        System::String get_SpecialFont() const;
        void set_SpecialFont(System::String value);
        
        WordInfo(System::String text);
        WordInfo();
        
    private:
    
        System::String pr_SpecialFont;
        
    };
    
    
public:

    /// <summary>
    /// This property determines how stamp is drawn on page. If Draw = true stamp is drawn as graphic operators and if draw = false then stamp is drawn as text.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Draw() const;
    /// <summary>
    /// This property determines how stamp is drawn on page. If Draw = true stamp is drawn as graphic operators and if draw = false then stamp is drawn as text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Draw(bool value);
    /// <summary>
    /// Defines coordinate origin for placing text.
    /// If TreatYIndentAsBaseLine = true (default when Draw = true) YIndent value will be treated as text base line.
    /// If TreatYIndentAsBaseLine = false (default when Draw = false) YIndent value will be treated as bottom (descent line) of text.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_TreatYIndentAsBaseLine() const;
    /// <summary>
    /// Defines coordinate origin for placing text.
    /// If TreatYIndentAsBaseLine = true (default when Draw = true) YIndent value will be treated as text base line.
    /// If TreatYIndentAsBaseLine = false (default when Draw = false) YIndent value will be treated as bottom (descent line) of text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TreatYIndentAsBaseLine(bool value);
    /// @deprecated Use WordWrapMode instead.
    /// <summary>
    /// Defines word wrap. If this property set to true and Width value specified, text will be broken in the several lines to fit into specified width. Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_WordWrap() const;
    /// @deprecated Use WordWrapMode instead.
    /// <summary>
    /// Defines word wrap. If this property set to true and Width value specified, text will be broken in the several lines to fit into specified width. Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WordWrap(bool value);
    /// <summary>
    /// Gets the word wrap mode for text rendering.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Text::TextFormattingOptions::WordWrapMode get_WordWrapMode() const;
    /// <summary>
    /// Sets the word wrap mode for text rendering.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WordWrapMode(Aspose::Pdf::Text::TextFormattingOptions::WordWrapMode value);
    /// <summary>
    /// Defines text justification. If this property is set to true, both left and right edges of the text are aligned. Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Justify();
    /// <summary>
    /// Defines text justification. If this property is set to true, both left and right edges of the text are aligned. Default value: false.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Justify(bool value);
    /// <summary>
    /// Defines scaling of the text. If this property is set to true and Width value specified, text will be scaled in order to fit to specified width.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Scale() const;
    /// <summary>
    /// Defines scaling of the text. If this property is set to true and Width value specified, text will be scaled in order to fit to specified width.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Scale(bool value);
    /// <summary>
    /// Gets string value which is used as stamp on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Value();
    /// <summary>
    /// Sets string value which is used as stamp on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Value(System::String value);
    /// <summary>
    /// Gets text properties of the stamp. See <see cref="TextState"></see> for details.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState() const;
    /// <summary>
    /// Alignment of the text inside the stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_TextAlignment() const;
    /// <summary>
    /// Alignment of the text inside the stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets font used for replacing if user font does not contain required character.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Text::Font> get_ReplacementFont() const;
    /// <summary>
    /// Sets font used for replacing if user font does not contain required character.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReplacementFont(System::SharedPtr<Text::Font> value);
    /// <summary>
    /// Gets mode that defines behavior in case fonts don't contain requested characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextStamp::NoCharacterAction get_NoCharacterBehavior() const;
    /// <summary>
    /// Sets mode that defines behavior in case fonts don't contain requested characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NoCharacterBehavior(TextStamp::NoCharacterAction value);
    /// <summary>
    /// Actual font size after the stamp has been placed. (May differ from the initial font size provided through the constructor if the 'AutoAdjustFontSizeToFitStampRectangle' option is enabled.)
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_FontSize();
    /// <summary>
    /// Desired width of the stamp on the page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() override;
    /// <summary>
    /// Desired width of the stamp on the page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value) override;
    /// <summary>
    /// Desired height of the stamp on the page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height() override;
    /// <summary>
    /// Desired height of the stamp on the page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(double value) override;
    /// <summary>
    /// Max row height for WordWrap option. 
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_MaxRowWidth() const;
    /// <summary>
    /// Max row height for WordWrap option. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MaxRowWidth(double value);
    /// <summary>
    /// If enabled, the font size will be automatically adjusted to fit the stamp rectangle of size: <see cref="Width"></see> and <see cref="Height"></see>. Default width and height are derived from the page rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AutoAdjustFontSizeToFitStampRectangle() const;
    /// <summary>
    /// If enabled, the font size will be automatically adjusted to fit the stamp rectangle of size: <see cref="Width"></see> and <see cref="Height"></see>. Default width and height are derived from the page rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AutoAdjustFontSizeToFitStampRectangle(bool value);
    /// <summary>
    /// Automatically adjust font size precision. Default value: 0.1; 
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_AutoAdjustFontSizePrecision() const;
    /// <summary>
    /// Automatically adjust font size precision. Default value: 0.1; 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AutoAdjustFontSizePrecision(float value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextStamp"></see> class.
    /// </summary>
    /// <param name="value">
    /// Stamp value.
    /// </param>
    ASPOSE_PDF_SHARED_API TextStamp(System::String value);
    /// <summary>
    /// Initializes a new instance of the <see cref="TextStamp"></see> class.
    /// </summary>
    /// <param name="value">Stamp value.</param>
    /// <param name="textState">Stamp text state.</param>
    ASPOSE_PDF_SHARED_API TextStamp(System::String value, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    
    /// <summary>
    /// Adds textual stamp on the page.
    /// </summary>
    /// <param name="page">
    /// Page for stamping.
    /// </param>
    ASPOSE_PDF_SHARED_API void Put(System::SharedPtr<Page> page) override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TextStamp"></see> class with formattedText object
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains text of the stamp.</param>
    ASPOSE_PDF_SHARED_API TextStamp(System::SharedPtr<Facades::FormattedText> formattedText);
    
protected:

    /// <summary>
    /// Alignment of the text.
    /// </summary>
    Aspose::Pdf::HorizontalAlignment _textAlignemnt;
    
    static System::SharedPtr<Aspose::Pdf::Text::Font> get_DefaultFont();
    
    static float DefaultFontSize;
    
    ASPOSE_PDF_SHARED_API void ClearCache() override;
    /// <summary>
    /// Returns position and size of text stamp.
    /// </summary>
    /// <returns>Rectangle of the stamp.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> getRect() override;
    /// <summary>
    /// Creates XForm which contains operators for text output. 
    /// </summary>
    /// <param name="page">Page where stamp should be placed.</param>
    /// <returns>Created XForm.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> createXForm(System::SharedPtr<Page> page);
    
private:

    static const float AutoAdjustFontSizeStartSearchValue;
    static const float AutoAdjustFontSizeEndSearchValue;
    static const float AutoAdjustFontSizeInitialTryValue;
    float _autoAdjustFontSizePrecision;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextStamp::TextLine>>> _lines;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Text::TextFragment>>> _fragments;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _textState;
    System::SharedPtr<Rectangle> _rect;
    bool _wordwrap;
    bool _scale;
    bool _draw;
    bool _useBaseLineOrigin;
    bool _isOrigingSet;
    double _desiredWidth;
    double _desiredHeight;
    Aspose::Pdf::Text::TextFormattingOptions::WordWrapMode _wordWrapMode;
    TextStamp::NoCharacterAction noCharacterBehavior;
    System::SharedPtr<Text::Font> replacementFont;
    static double VERTICAL_INDENT;
    System::SharedPtr<Engine::Data::IPdfObject> _cache;
    double _maxRowWidth;
    bool pr_AutoAdjustFontSizeToFitStampRectangle;
    
    bool IsBlankSpace(char16_t c);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextStamp::WordInfo>>> SplitIntoWords(System::String text);
    void AddWordInfo(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextStamp::WordInfo>>> wordInfoList, System::String word, System::String space);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextStamp::WordInfo>>> CheckAndSplitWord(System::String word, System::String space);
    int32_t FindSplitIndex(System::String word, int32_t startIndex, double maxWidth);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextStamp::WordInfo>>> SplitForFonts(System::String text, System::SharedPtr<System::Collections::Generic::List<System::String>> specialFonts);
    System::String DrawText(System::SharedPtr<XForm> form, System::SharedPtr<Text::TextFragment> textFragment);
    void UpdateStream(System::SharedPtr<Engine::Data::IPdfDataStream> stream, System::ArrayPtr<uint8_t> data);
    void DrawBackground(System::SharedPtr<XForm> form, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Text::TextFragment>>> fragments);
    void UpdateStampWidth(System::SharedPtr<Page> page);
    System::SharedPtr<System::Collections::Generic::List<System::String>> BreakToLines(System::String text);
    
};

} // namespace Pdf
} // namespace Aspose


