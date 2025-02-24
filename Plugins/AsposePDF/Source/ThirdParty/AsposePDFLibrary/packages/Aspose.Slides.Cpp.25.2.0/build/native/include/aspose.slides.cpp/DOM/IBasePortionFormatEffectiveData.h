#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IEffectFormatEffectiveData;
class IFillFormatEffectiveData;
class IFontData;
class ILineFormatEffectiveData;
enum class TextCapType : int8_t;
enum class TextStrikethroughType : int8_t;
enum class TextUnderlineType : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Base interface for immutable objects which contain effective text portion formatting properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBasePortionFormatEffectiveData : public virtual System::Object
{
    typedef IBasePortionFormatEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the LineFormat properties for text outlining.
    /// Read-only <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> get_LineFormat() = 0;
    /// <summary>
    /// Returns the text FillFormat properties.
    /// Read-only <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatEffectiveData> get_FillFormat() = 0;
    /// <summary>
    /// Returns the text EffectFormat properties.
    /// Read-only <see cref="Aspose::Slides::IEffectFormatEffectiveData">IEffectFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormatEffectiveData> get_EffectFormat() = 0;
    /// <summary>
    /// Returns the color used to highlight a text.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_HighlightColor() = 0;
    /// <summary>
    /// Returns the LineFormat properties used to outline underline line.
    /// Read-only <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> get_UnderlineLineFormat() = 0;
    /// <summary>
    /// Returns the underline line FillFormat properties.
    /// Read-only <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatEffectiveData> get_UnderlineFillFormat() = 0;
    /// <summary>
    /// Determines whether the font is bold.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_FontBold() = 0;
    /// <summary>
    /// Determines whether the font is itallic.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_FontItalic() = 0;
    /// <summary>
    /// Determines whether the numbers should ignore text eastern language-specific vertical text layout.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Kumimoji() = 0;
    /// <summary>
    /// Determines whether the height of a text should be normalized.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_NormaliseHeight() = 0;
    /// <summary>
    /// Determines whether the text shouldn't be proofed.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ProofDisabled() = 0;
    /// <summary>
    /// Returns the text underline type.
    /// Read-only <see cref="TextUnderlineType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextUnderlineType get_FontUnderline() = 0;
    /// <summary>
    /// Returns the type of text capitalization.
    /// Read-only <see cref="Slides::TextCapType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TextCapType get_TextCapType() = 0;
    /// <summary>
    /// Returns the strikethrough type of a text.
    /// Read-only <see cref="TextStrikethroughType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextStrikethroughType get_StrikethroughType() = 0;
    /// <summary>
    /// Determines whether the smart tag should be cleaned.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SmartTagClean() = 0;
    /// <summary>
    /// Determines whether the underline style has own LineFormat properties or inherits it
    /// from the LineFormat properties of the text.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsHardUnderlineLine() = 0;
    /// <summary>
    /// Determines whether the underline style has own FillFormat properties or inherits it
    /// from the FillFormat properties of the text.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsHardUnderlineFill() = 0;
    /// <summary>
    /// Returns the font height of a portion.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FontHeight() = 0;
    /// <summary>
    /// Returns the Latin font info.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_LatinFont() = 0;
    /// <summary>
    /// Returns the East Asian font info.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_EastAsianFont() = 0;
    /// <summary>
    /// Returns the complex script font info.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_ComplexScriptFont() = 0;
    /// <summary>
    /// Returns the symbolic font info.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_SymbolFont() = 0;
    /// <summary>
    /// Returns the superscript or subscript text.
    /// Value from -100% (subscript) to 100% (superscript).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Escapement() = 0;
    /// <summary>
    /// Returns the minimal font size, for which kerning should be switched on.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_KerningMinimalSize() = 0;
    /// <summary>
    /// Returns the Id of a language.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LanguageId() = 0;
    /// <summary>
    /// Returns the Id of an alternative language.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_AlternativeLanguageId() = 0;
    /// <summary>
    /// Returns the intercharacter spacing increment.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Spacing() = 0;
    
};

} // namespace Slides
} // namespace Aspose


