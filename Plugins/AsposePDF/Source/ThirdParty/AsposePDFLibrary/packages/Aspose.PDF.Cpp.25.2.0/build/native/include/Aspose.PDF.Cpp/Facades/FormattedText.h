﻿#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/color.h>
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
namespace Facades
{
enum class EncodingType;
class FontColor;
enum class FontStyle;
class PdfFileMend;
class Stamp;
} // namespace Facades
class PageNumberStamp;
namespace Tests
{
namespace Facades
{
class FormattedTextTests;
} // namespace Facades
class RegressionTests_v22_11;
class RegressionTests_v6_2;
} // namespace Tests
namespace Text
{
class Font;
} // namespace Text
class TextStamp;
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

namespace Facades {

/// <summary>
/// Class which represents formatted text. Contains information about text and its color, size, style.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FormattedText final : public System::Object
{
    typedef FormattedText ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Facades::Stamp;
    friend class Aspose::Pdf::PageNumberStamp;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_2;
    friend class Aspose::Pdf::Tests::Facades::FormattedTextTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_11;
    
public:

    /// <summary>
    /// Gets height of text.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_TextHeight() const;
    /// <summary>
    /// Gets width of text.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_TextWidth();
    
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    ASPOSE_PDF_SHARED_API FormattedText();
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text which contained in FormattedText.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text content of the string.</param>
    /// <param name="fontColor">Color of the text.</param>
    /// <param name="fontStyle">Style of the text.</param>
    /// <param name="encodingType">Encoding type (value of EncodingType enumeration). </param>
    /// <param name="embedded">True if the font will be embedded.</param>
    /// <param name="textSize">Size of the text.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::SharedPtr<FontColor> fontColor, FontStyle fontStyle, EncodingType encodingType, bool embedded, float textSize);
    /// <summary>
    /// Initialize FormattedText.
    /// </summary>
    /// <param name="text">Text content of the string.</param>
    /// <param name="fontColor">Color of the text.</param>
    /// <param name="textFont">Font of the text.</param>
    /// <param name="textEncoding">Encoding of the text.</param>
    /// <param name="embedded">True if text will be embedded.</param>
    /// <param name="textSize">Size of the text.</param>
    /// <param name="lineSpacing">Additional spacing.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::SharedPtr<FontColor> fontColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize, float lineSpacing);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text content of the string.</param>
    /// <param name="color">Color of the text.</param>
    /// <param name="textFont">Font of the text.</param>
    /// <param name="textEncoding">Encoding of the text.</param>
    /// <param name="embedded">True if text will be embedded.</param>
    /// <param name="textSize">Size of the text.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::Drawing::Color color, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text contents of the string.</param>
    /// <param name="textColor">Color of the text.</param>
    /// <param name="textFont">Font of the text.</param>
    /// <param name="textEncoding">Encoding of the text.</param>
    /// <param name="embedded">If true font will be embedded.</param>
    /// <param name="textSize">Size of the text.</param>
    /// <param name="lineSpacing">Additional spacing.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::Drawing::Color textColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize, float lineSpacing);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text content of the string.</param>
    /// <param name="textColor">Color of the text.</param>
    /// <param name="backColor">Color of background.</param>
    /// <param name="textFont">Font of the text.</param>
    /// <param name="textEncoding">Encoding of the text.</param>
    /// <param name="embedded">If true font will be embedded.</param>
    /// <param name="textSize">Size of the text.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::SharedPtr<FontColor> textColor, System::SharedPtr<FontColor> backColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text content.</param>
    /// <param name="textColor">Color of the text.</param>
    /// <param name="backColor">Color of background.</param>
    /// <param name="textFont">Font of the text.</param>
    /// <param name="textEncoding">Encoding of the text.</param>
    /// <param name="embedded">If true font will be embedded.</param>
    /// <param name="textSize">Size of the text.</param>
    /// <param name="lineSpacing">Additional spacing.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::SharedPtr<FontColor> textColor, System::SharedPtr<FontColor> backColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize, float lineSpacing);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text content of the string.</param>
    /// <param name="textColor">Color of the text.</param>
    /// <param name="backColor">Color of background.</param>
    /// <param name="textFont">Font of the text.</param>
    /// <param name="encoding">Encoding of the text.</param>
    /// <param name="embedded">True if font will be embedded.</param>
    /// <param name="textSize">Size of the text.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::Drawing::Color textColor, System::Drawing::Color backColor, FontStyle textFont, EncodingType encoding, bool embedded, float textSize);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text contents of the string.</param>
    /// <param name="textColor">Color of the text.</param>
    /// <param name="backColor">Color of the background.</param>
    /// <param name="textFont">Font of the text.</param>
    /// <param name="textEncoding">Encoding of the text.</param>
    /// <param name="embedded">If true font is embedded.</param>
    /// <param name="textSize">Size of the text.</param>
    /// <param name="lineSpacing">Additional spacing.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::Drawing::Color textColor, System::Drawing::Color backColor, FontStyle textFont, EncodingType textEncoding, bool embedded, float textSize, float lineSpacing);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text content.</param>
    /// <param name="textColor">Color of the text.</param>
    /// <param name="backColor">Color of background.</param>
    /// <param name="fontName">Font of the text.</param>
    /// <param name="textEncoding">Encoding of the text.</param>
    /// <param name="embedded">If true font will be embedded.</param>
    /// <param name="fontSize">Size of the text.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::Drawing::Color textColor, System::Drawing::Color backColor, System::String fontName, EncodingType textEncoding, bool embedded, float fontSize);
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text content.</param>
    /// <param name="textColor">Color of the text.</param>
    /// <param name="backColor">Color of background.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::Drawing::Color textColor, System::Drawing::Color backColor);
    
    /// <summary>
    /// Adds a new line to the FormattedText object and sets the newLineText to the next line's text.
    /// </summary>
    /// <param name="newLineText">Text of new added line.</param>
    ASPOSE_PDF_SHARED_API void AddNewLineText(System::String newLineText);
    /// <summary>
    /// Adds a new line to the FormattedText object and sets the newLineText to the next line's text.
    /// </summary>
    /// <param name="newLineText">Text of new added line.</param>
    /// <param name="lineSpacing">Spacing of the line.</param>
    ASPOSE_PDF_SHARED_API void AddNewLineText(System::String newLineText, float lineSpacing);
    
    /// <summary>
    /// Initializes FormattedText.
    /// </summary>
    /// <param name="text">Text content.</param>
    /// <param name="textColor">Color of the text.</param>
    /// <param name="fontName">Font of the text.</param>
    /// <param name="textEncoding">Encoding of the text.</param>
    /// <param name="embedded">If true font will be embedded.</param>
    /// <param name="fontSize">Size of the text.</param>
    ASPOSE_PDF_SHARED_API FormattedText(System::String text, System::Drawing::Color textColor, System::String fontName, EncodingType textEncoding, bool embedded, float fontSize);
    
    /// <summary>
    /// Checks if text is CJK (Chinese, Japanese, or Korean).
    /// </summary>
    /// <returns>True if text is CJK. Otherwise false.</returns>
    ASPOSE_PDF_SHARED_API bool IsCjk();
    /// <summary>
    /// Changes FormattedText font style for CJK (Chinese, Japanese, or Korean) font.
    /// </summary>
    ASPOSE_PDF_SHARED_API void SetCjkFontStyle();
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::String>> text;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, float>> mpCustomLineSpacing;
    
    /// <summary>
    /// Returns line height for the specific line of the multi-line text
    /// </summary>
    /// <param name="idx"></param>
    /// <returns></returns>
    float LineSpacing(int32_t idx);
    /// <summary>
    /// Gets first line
    /// </summary>
    /// <returns></returns>
    System::String getFirstLine();
    /// <summary>
    /// Gets text color
    /// </summary>
    /// <returns></returns>
    System::Drawing::Color getTextColor();
    /// <summary>
    /// Gets back color
    /// </summary>
    /// <returns></returns>
    System::Drawing::Color getBackColor();
    /// <summary>
    /// Gets font
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Text::Font> getFont();
    /// <summary>
    /// Gets font size
    /// </summary>
    /// <returns></returns>
    float getFontSize();
    
private:

    System::SharedPtr<System::Object> sync;
    System::Drawing::Color textColor;
    System::Drawing::Color backColor;
    System::SharedPtr<Aspose::Pdf::Text::Font> font;
    float fontSize;
    FontStyle fontStyle;
    static const float DEFAULT_SPACING;
    
    /// <summary>
    /// Initializes properties with default values
    /// </summary>
    void SetDefaultValues();
    /// <summary>
    /// Sets the font based on FontStyle
    /// </summary>
    /// <param name="fontStyle"></param>
    /// <param name="embedded"></param>
    void initFont(FontStyle fontStyle, bool embedded);
    /// <summary>
    /// Sets encoding
    /// </summary>
    /// <param name="textEncoding"></param>
    void initEncoding(EncodingType textEncoding);
    /// <summary>
    /// Sets line spacing
    /// </summary>
    /// <param name="lineIndex"></param>
    /// <param name="lineSpacing"></param>
    void initLineSpacing(int32_t lineIndex, float lineSpacing);
    System::String GetTotalText();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


