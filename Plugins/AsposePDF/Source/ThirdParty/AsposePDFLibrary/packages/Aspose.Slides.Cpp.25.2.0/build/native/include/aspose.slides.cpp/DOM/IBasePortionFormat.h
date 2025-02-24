#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IColorFormat;
class IEffectFormat;
class IFillFormat;
class IFontData;
class ILineFormat;
enum class NullableBool : int8_t;
enum class TextCapType : int8_t;
enum class TextStrikethroughType : int8_t;
enum class TextUnderlineType : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// This class contains the text portion formatting properties. Unlike <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see>, all properties of this class are writeable.
/// </summary>
/// <remarks><para>This class is used to return and manipulate text portion formatting properties defined for the particular portion. This means that
/// no inheritance is applied when getting values so for the majority of cases you will get values meaning "undefined".</para>
/// <para>In order to get the effective formatting parameter values including inherited you need to use <see cref="IPortionFormat::GetEffective"></see> method 
/// which returns a <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see> instance.</para></remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IBasePortionFormat : public virtual System::Object
{
    typedef IBasePortionFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the LineFormat properties for text outlining. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_LineFormat() = 0;
    /// <summary>
    /// Returns the text FillFormat properties. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_FillFormat() = 0;
    /// <summary>
    /// Returns the text EffectFormat properties. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IEffectFormat">IEffectFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormat> get_EffectFormat() = 0;
    /// <summary>
    /// Returns the color used to highlight a text. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_HighlightColor() = 0;
    /// <summary>
    /// Returns the LineFormat properties used to outline underline line. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_UnderlineLineFormat() = 0;
    /// <summary>
    /// Returns the underline line FillFormat properties. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_UnderlineFillFormat() = 0;
    /// <summary>
    /// Determines whether the font is bold. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_FontBold() = 0;
    /// <summary>
    /// Determines whether the font is bold. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontBold(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the font is itallic. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_FontItalic() = 0;
    /// <summary>
    /// Determines whether the font is itallic. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontItalic(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the numbers should ignore text eastern language-specific vertical text layout. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_Kumimoji() = 0;
    /// <summary>
    /// Determines whether the numbers should ignore text eastern language-specific vertical text layout. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Kumimoji(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the height of a text should be normalized. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_NormaliseHeight() = 0;
    /// <summary>
    /// Determines whether the height of a text should be normalized. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NormaliseHeight(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the text shouldn't be proofed. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_ProofDisabled() = 0;
    /// <summary>
    /// Determines whether the text shouldn't be proofed. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ProofDisabled(NullableBool value) = 0;
    /// <summary>
    /// Returns the text underline type. No inheritance applied.
    /// Read <see cref="TextUnderlineType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextUnderlineType get_FontUnderline() = 0;
    /// <summary>
    /// Sets the text underline type. No inheritance applied.
    /// Write <see cref="TextUnderlineType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontUnderline(TextUnderlineType value) = 0;
    /// <summary>
    /// Returns the type of text capitalization. No inheritance applied.
    /// Read <see cref="Slides::TextCapType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TextCapType get_TextCapType() = 0;
    /// <summary>
    /// Sets the type of text capitalization. No inheritance applied.
    /// Write <see cref="Slides::TextCapType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TextCapType(Aspose::Slides::TextCapType value) = 0;
    /// <summary>
    /// Returns the strikethrough type of a text. No inheritance applied.
    /// Read <see cref="TextStrikethroughType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextStrikethroughType get_StrikethroughType() = 0;
    /// <summary>
    /// Sets the strikethrough type of a text. No inheritance applied.
    /// Write <see cref="TextStrikethroughType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StrikethroughType(TextStrikethroughType value) = 0;
    /// <summary>
    /// Determines whether the underline style has own LineFormat properties or inherits it
    /// from the LineFormat properties of the text.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_IsHardUnderlineLine() = 0;
    /// <summary>
    /// Determines whether the underline style has own LineFormat properties or inherits it
    /// from the LineFormat properties of the text.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsHardUnderlineLine(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the underline style has own FillFormat properties or inherits it
    /// from the FillFormat properties of the text.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_IsHardUnderlineFill() = 0;
    /// <summary>
    /// Determines whether the underline style has own FillFormat properties or inherits it
    /// from the FillFormat properties of the text.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsHardUnderlineFill(NullableBool value) = 0;
    /// <summary>
    /// Returns the font height of a portion.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means height is undefined and should be inherited from the Master.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FontHeight() = 0;
    /// <summary>
    /// Sets the font height of a portion.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means height is undefined and should be inherited from the Master.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontHeight(float value) = 0;
    /// <summary>
    /// Returns the Latin font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_LatinFont() = 0;
    /// <summary>
    /// Sets the Latin font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LatinFont(System::SharedPtr<IFontData> value) = 0;
    /// <summary>
    /// Returns the East Asian font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_EastAsianFont() = 0;
    /// <summary>
    /// Sets the East Asian font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EastAsianFont(System::SharedPtr<IFontData> value) = 0;
    /// <summary>
    /// Returns the complex script font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_ComplexScriptFont() = 0;
    /// <summary>
    /// Sets the complex script font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ComplexScriptFont(System::SharedPtr<IFontData> value) = 0;
    /// <summary>
    /// Returns the symbolic font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_SymbolFont() = 0;
    /// <summary>
    /// Sets the symbolic font info.
    /// Null means font is undefined and should be inherited from the Master.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SymbolFont(System::SharedPtr<IFontData> value) = 0;
    /// <summary>
    /// Returns the superscript or subscript text.
    /// Value from -100% (subscript) to 100% (superscript).
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Escapement() = 0;
    /// <summary>
    /// Sets the superscript or subscript text.
    /// Value from -100% (subscript) to 100% (superscript).
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Escapement(float value) = 0;
    /// <summary>
    /// Returns the minimal font size, for which kerning should be switched on.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_KerningMinimalSize() = 0;
    /// <summary>
    /// Sets the minimal font size, for which kerning should be switched on.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_KerningMinimalSize(float value) = 0;
    /// <summary>
    /// Returns the Id of a proofing language. Used for checking spelling and grammar.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LanguageId() = 0;
    /// <summary>
    /// Sets the Id of a proofing language. Used for checking spelling and grammar.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LanguageId(System::String value) = 0;
    /// <summary>
    /// Returns the Id of an alternative language.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_AlternativeLanguageId() = 0;
    /// <summary>
    /// Sets the Id of an alternative language.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AlternativeLanguageId(System::String value) = 0;
    /// <summary>
    /// Returns the intercharacter spacing increment.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Spacing() = 0;
    /// <summary>
    /// Sets the intercharacter spacing increment.
    /// <b>std::numeric_limits<float>::quiet_NaN()</b> means value is undefined and should be inherited from the Master.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Spacing(float value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


