#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/nullable.h>
#include <system/event.h>
#include <system/array.h>
#include <DOM/IFonts.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
class ImageCanvas;
} // namespace Drawing
namespace Effects
{
class Drawing2DHelper;
class EffectUtils;
} // namespace Effects
enum class FontClass;
class Fonts;
class FontsEffectiveData;
class FontsList;
class IFontData;
class IFontsEffectiveData;
class LayoutContext;
class MasterThemeTemplate;
namespace PptSerialization
{
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class FontsPPTXSerialization;
class PresentationPartParser;
} // namespace PartParser
} // namespace PptxSerialization
namespace SmartArt
{
class TextAlgorithm;
} // namespace SmartArt
class TableCellTextStyle;
class TextLayout;
class TextParam;
class TextParamCreator;
namespace Theme
{
class FontScheme;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class FontsPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class IDictionary;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Fonts collection.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Fonts : public Aspose::Slides::IFonts
{
    typedef Fonts ThisType;
    typedef Aspose::Slides::IFonts BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::TextParamCreator;
    friend class Aspose::Slides::Effects::Drawing2DHelper;
    friend class Aspose::Slides::FontsEffectiveData;
    friend class Aspose::Slides::LayoutContext;
    friend class Aspose::Slides::Effects::EffectUtils;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::TableCellTextStyle;
    friend class Aspose::Slides::TextParam;
    friend class Aspose::Slides::Theme::FontScheme;
    friend class Aspose::Slides::Drawing::ImageCanvas;
    friend class Aspose::Slides::SmartArt::TextAlgorithm;
    friend class Aspose::Slides::PptxSerialization::PartParser::FontsPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::MasterThemeTemplate;
    /// @endcond
    
protected:

    /// @cond
    class ASPOSE_SLIDES_LOCAL_API FontSelectionRule : public System::Object
    {
        typedef FontSelectionRule ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String lang, script;
        FontClass fontClass;
        
        FontSelectionRule(System::String lang, System::String script, FontClass fontClass);
        
    };
    
    /// @endcond
    
public:

    /// <summary>
    /// Returns the Latin font.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_LatinFont() override;
    /// <summary>
    /// Sets the Latin font.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LatinFont(System::SharedPtr<IFontData> value) override;
    /// <summary>
    /// Returns the East Asian font.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_EastAsianFont() override;
    /// <summary>
    /// Sets the East Asian font.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EastAsianFont(System::SharedPtr<IFontData> value) override;
    /// <summary>
    /// Returns the complex script font.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_ComplexScriptFont() override;
    /// <summary>
    /// Sets the complex script font.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ComplexScriptFont(System::SharedPtr<IFontData> value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::FontsPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API bool get_IsComplexScriptFontDefault();
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Fonts::FontSelectionRule>>> FontSelectionRules;
    
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::Event<void()> FontsChanged;
    
    ASPOSE_SLIDES_LOCAL_API Fonts(System::SharedPtr<FontsList> fontsList);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Fonts, CODEPORTING_ARGS(System::SharedPtr<FontsList> fontsList));
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API FontClass GetFontClassForLanguage(System::String lang);
    static ASPOSE_SLIDES_LOCAL_API System::String GetFontScriptForLanguage(System::String lang);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<Fonts> fonts);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IFontsEffectiveData> source);
    /// @endcond
    
private:

    System::SharedPtr<FontsList> m_fontsList;
    System::Nullable<uint16_t> m_latinFontIndex, m_eastAsianFontIndex, m_complexScriptFontIndex;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::FontsPPTXUnsupportedProps> m_pptxUnsupportedProps;
    uint32_t m_version;
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Fonts::FontSelectionRule>>> CreateFontSelectionRulesMap(const System::ArrayPtr<System::SharedPtr<Fonts::FontSelectionRule>>& rules);
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnFontsChanged();
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


