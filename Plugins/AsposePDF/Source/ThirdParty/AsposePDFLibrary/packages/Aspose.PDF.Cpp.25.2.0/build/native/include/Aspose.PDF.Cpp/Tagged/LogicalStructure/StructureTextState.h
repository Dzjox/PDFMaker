#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/nullable.h>
#include <system/enum_helpers.h>

#include "Aspose.PDF.Cpp/Text/FontStyles.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
namespace LogicalStructure
{
class BLSTextElement;
class ILSTextElement;
class LinkElement;
class TableCellElement;
} // namespace LogicalStructure
class MarginInfo;
namespace Tagged
{
namespace Helpers
{
class StructureTextStateFactory;
} // namespace Helpers
class TaggedContent;
} // namespace Tagged
namespace Text
{
class Font;
class TextState;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents text state settings for Text Structure Elements and TaggedContent (ITextElement, ITaggedContent)
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructureTextState : public System::Object
{
    typedef StructureTextState ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::Helpers::StructureTextStateFactory;
    friend class Aspose::Pdf::LogicalStructure::BLSTextElement;
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    friend class Aspose::Pdf::LogicalStructure::ILSTextElement;
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
public:

    /// <summary>
    ///     Gets the font of text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Font</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Font> get_Font() const;
    /// <summary>
    ///     Sets the font of text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Font</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_Font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    /// <summary>
    ///     Gets font size of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>FontSize</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<float> get_FontSize() const;
    /// <summary>
    ///     Sets font size of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>FontSize</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_FontSize(System::Nullable<float> value);
    /// <summary>
    ///     Gets font style of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>FontStyle</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<Aspose::Pdf::Text::FontStyles> get_FontStyle() const;
    /// <summary>
    ///     Sets font style of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>FontStyle</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_FontStyle(System::Nullable<Aspose::Pdf::Text::FontStyles> value);
    /// <summary>
    ///     Gets foreground color of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>ForegroundColor</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_ForegroundColor() const;
    /// <summary>
    ///     Sets foreground color of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>ForegroundColor</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_ForegroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets background color of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>BackgroundColor</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackgroundColor() const;
    /// <summary>
    ///     Sets background color of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>BackgroundColor</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets underline for the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Underline</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<bool> get_Underline() const;
    /// <summary>
    ///     Sets underline for the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Underline</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_Underline(System::Nullable<bool> value);
    /// <summary>
    ///     Gets strikeout for the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>StrikeOut</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<bool> get_StrikeOut() const;
    /// <summary>
    ///     Sets strikeout for the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>StrikeOut</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_StrikeOut(System::Nullable<bool> value);
    /// <summary>
    ///     Gets superscript of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Superscript</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<bool> get_Superscript() const;
    /// <summary>
    ///     Sets superscript of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Superscript</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_Superscript(System::Nullable<bool> value);
    /// <summary>
    ///     Gets subscript of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Subscript</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<bool> get_Subscript() const;
    /// <summary>
    ///     Sets subscript of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Subscript</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_Subscript(System::Nullable<bool> value);
    /// <summary>
    ///     Gets horizontal scaling of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>HorizontalScaling</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<float> get_HorizontalScaling() const;
    /// <summary>
    ///     Sets horizontal scaling of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>HorizontalScaling</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_HorizontalScaling(System::Nullable<float> value);
    /// <summary>
    ///     Gets line spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>LineSpacing</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<float> get_LineSpacing() const;
    /// <summary>
    ///     Sets line spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>LineSpacing</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_LineSpacing(System::Nullable<float> value);
    /// <summary>
    ///     Gets character spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>CharacterSpacing</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<float> get_CharacterSpacing() const;
    /// <summary>
    ///     Sets character spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>CharacterSpacing</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_CharacterSpacing(System::Nullable<float> value);
    /// <summary>
    ///     Gets word spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>WordSpacing</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::Nullable<float> get_WordSpacing() const;
    /// <summary>
    ///     Sets word spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>WordSpacing</c> property from parent structure element.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_WordSpacing(System::Nullable<float> value);
    /// <summary>
    ///     Gets margin for block structure element.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::MarginInfo> get_MarginInfo() const;
    /// <summary>
    ///     Sets margin for block structure element.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MarginInfo(System::SharedPtr<Aspose::Pdf::MarginInfo> value);
    
protected:

    StructureTextState();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructureTextState, CODEPORTING_ARGS());
    void InitDefault();
    void Update(System::SharedPtr<StructureTextState> structureTextState);
    System::SharedPtr<Aspose::Pdf::Text::TextState> CreateTextState();
    
private:

    System::SharedPtr<Aspose::Pdf::Text::Font> _font;
    System::Nullable<float> _fontSize;
    System::Nullable<Aspose::Pdf::Text::FontStyles> _fontStyle;
    System::SharedPtr<Color> _foregroundColor;
    System::SharedPtr<Color> _backgroundColor;
    System::Nullable<bool> _underline;
    System::Nullable<bool> _strikeOut;
    System::Nullable<bool> _superscript;
    System::Nullable<bool> _subscript;
    System::Nullable<float> _horizontalScaling;
    System::Nullable<float> _lineSpacing;
    System::Nullable<float> _characterSpacing;
    System::Nullable<float> _wordSpacing;
    System::SharedPtr<Aspose::Pdf::MarginInfo> _marginInfo;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


