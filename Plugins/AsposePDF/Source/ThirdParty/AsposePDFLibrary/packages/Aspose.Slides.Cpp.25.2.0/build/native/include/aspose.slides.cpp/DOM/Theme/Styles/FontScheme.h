#pragma once
// Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/event.h>
#include <DOM/Theme/IFontScheme.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
template <typename, typename> class AccessibleEffectiveData;
class FontData;
class Fonts;
class IFonts;
class IPresentationComponent;
namespace PptSerialization
{
class MasterThemePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class FontSchemePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace Theme
{
class BaseStyles;
class FontSchemeEffectiveData;
class IFontSchemeEffectiveData;
class OverrideTheme;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class FontSchemePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Stores theme-defined fonts.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FontScheme : public Aspose::Slides::Theme::IFontScheme, public Aspose::Slides::IDOMObject
{
    typedef FontScheme ThisType;
    typedef Aspose::Slides::Theme::IFontScheme BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    template<typename FT0, typename FT1> friend class Aspose::Slides::AccessibleEffectiveData;
    friend class Aspose::Slides::Theme::FontSchemeEffectiveData;
    friend class Aspose::Slides::Theme::BaseStyles;
    friend class Aspose::Slides::Theme::OverrideTheme;
    friend class Aspose::Slides::PptxSerialization::PartParser::FontSchemePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::MasterThemePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the fonts collection for a "body" part of the slide.
    /// Read-only <see cref="IFonts"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFonts> get_Minor() override;
    /// <summary>
    /// Returns the fonts collection for a "heading" part of the slide.
    /// Read-only <see cref="IFonts"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFonts> get_Major() override;
    /// <summary>
    /// Returns the font scheme name.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Returns the font scheme name.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::FontSchemePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::Event<void()> FontSchemeChanged;
    
    ASPOSE_SLIDES_LOCAL_API FontScheme(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontScheme, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void LoadDefaults();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<FontScheme> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IFontSchemeEffectiveData> source);
    /// @endcond
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<Fonts> m_major;
    System::SharedPtr<Fonts> m_minor;
    System::String m_name;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::FontSchemePPTXUnsupportedProps> m_pptxUnsupportedProps;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FontData> Arial;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    uint32_t m_version;
    uint32_t m_versionCache;
    
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnFontSchemeChanged();
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


