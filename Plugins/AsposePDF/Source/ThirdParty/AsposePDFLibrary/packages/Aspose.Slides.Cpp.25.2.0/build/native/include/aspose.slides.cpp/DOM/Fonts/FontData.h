#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
#include <DOM/IFontData.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
template <typename, typename> class BasePortionFormatEffectiveData;
class BulletFormatEffectiveData;
namespace Charts
{
class Chart;
} // namespace Charts
class EmbeddedFont;
class EmbeddedFontsStorage;
class FontsList;
class FontsManager;
namespace HtmlIO
{
class HtmlToPptxTextConverter;
} // namespace HtmlIO
class MasterSlideTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class BulletFormatOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptBinaryFile
{
namespace MsPpt
{
class FontEntityAtom;
} // namespace MsPpt
} // namespace PptBinaryFile
namespace PptSerialization
{
class CheckSumProcessor;
class GroupShapeMetroBlobSerialization;
class PptDeserializator;
class PptSerializationContext;
class PptSerializator;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class FontDataPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class TextLayout;
class TextParamCreator;
namespace Theme
{
class IThemeEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
enum class FontStyle;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a font definition. Immutable.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FontData final : public Aspose::Slides::IFontData
{
    typedef FontData ThisType;
    typedef Aspose::Slides::IFontData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::TextParamCreator;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::EmbeddedFont;
    friend class Aspose::Slides::FontsList;
    friend class Aspose::Slides::FontsManager;
    friend class Aspose::Slides::EmbeddedFontsStorage;
    friend class Aspose::Slides::PptSerialization::CheckSumProcessor;
    friend class Aspose::Slides::OdpSerialization::PartParser::BulletFormatOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::PptSerialization::PptSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::FontDataPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::MasterSlideTemplate;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the font name.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_FontName() override;
    
    /// <summary>
    /// Creates a new FontData object with the specified font name.
    /// </summary>
    /// <param name="fontName">Font name.</param>
    ASPOSE_SLIDES_SHARED_API FontData(System::String fontName);
    
    /// <summary>
    /// Returns the font name, replacing theme referrence with an actual font used.
    /// </summary>
    /// <param name="theme">Theme from which themed font name should be taken. Its up to caller to provide a correct value. See <see cref="Aspose::Slides::Theme::IThemeable::CreateThemeEffective">IThemeable::CreateThemeEffective()</see></param>
    /// <returns>Font name.</returns>
    ASPOSE_SLIDES_SHARED_API System::String GetFontName(System::SharedPtr<Theme::IThemeEffectiveData> theme) override;
    /// <summary>
    /// Determines whether two FontData instances are equal.
    /// </summary>
    /// <param name="obj">The FontData to compare with the current FontData.</param>
    /// <returns><b>true</b> if the specified FontData is equal to the current FontData; otherwise, <b>false</b>.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type, suitable for use
    /// in hashing algorithms and data structures like a hash table.
    /// </summary>
    /// <returns>Hash code of the FontData.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Returns string representation.
    /// </summary>
    /// <returns>String representatoin.</returns>
    ASPOSE_SLIDES_SHARED_API System::String ToString() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint8_t get_CharSet();
    ASPOSE_SLIDES_LOCAL_API uint8_t get_PitchFamily();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> get_Panose();
    ASPOSE_SLIDES_LOCAL_API System::Drawing::FontStyle get_FontStyle();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FontData> get_DefaultFont();
    
    ASPOSE_SLIDES_LOCAL_API FontData(System::String fontName, uint8_t charSet);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::String fontName, uint8_t charSet));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontData(System::String fontName, uint8_t charSet, uint8_t pitchFamily);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::String fontName, uint8_t charSet, uint8_t pitchFamily));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontData(System::String fontName, uint8_t charSet, uint8_t pitchFamily, System::Drawing::FontStyle fontStyle, System::ArrayPtr<uint8_t> panose);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::String fontName, uint8_t charSet, uint8_t pitchFamily, System::Drawing::FontStyle fontStyle, System::ArrayPtr<uint8_t> panose));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontData(System::SharedPtr<FontData> fontData);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::SharedPtr<FontData> fontData));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontData(System::SharedPtr<FontData> fontData, System::String fontName);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::SharedPtr<FontData> fontData, System::String fontName));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontData(System::SharedPtr<FontData> fontData, System::String fontName, uint8_t charSet);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::SharedPtr<FontData> fontData, System::String fontName, uint8_t charSet));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontData(System::SharedPtr<FontData> fontData, System::Drawing::FontStyle fontStyle);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::SharedPtr<FontData> fontData, System::Drawing::FontStyle fontStyle));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontData(System::SharedPtr<FontData> fontData, System::String fontName, uint8_t charSet, uint8_t pitchFamily);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::SharedPtr<FontData> fontData, System::String fontName, uint8_t charSet, uint8_t pitchFamily));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontData(System::String fontName, System::SharedPtr<PptBinaryFile::MsPpt::FontEntityAtom> fatom);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontData, CODEPORTING_ARGS(System::String fontName, System::SharedPtr<PptBinaryFile::MsPpt::FontEntityAtom> fatom));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FontData> GetFontData(System::SharedPtr<Theme::IThemeEffectiveData> theme);
    static ASPOSE_SLIDES_LOCAL_API bool IsFontSchemeLatin(System::String typeface);
    static ASPOSE_SLIDES_LOCAL_API bool IsFontSchemeEastAsian(System::String typeface);
    static ASPOSE_SLIDES_LOCAL_API bool IsFontSchemeComplexScript(System::String typeface);
    ASPOSE_SLIDES_LOCAL_API bool EqualsTo(System::SharedPtr<FontData> obj, bool comparePitchFamilyCharset);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~FontData();
    
private:

    System::String m_typeface;
    uint8_t m_pitchFamily;
    System::Drawing::FontStyle m_fontStyle;
    uint8_t m_charset;
    System::ArrayPtr<uint8_t> m_panose;
    
    System::String ToString_NonConst();
    
};

} // namespace Slides
} // namespace Aspose


