#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Theme/IMasterTheme.h>
#include <cstdint>

#include "DOM/Theme/Theme.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ColorSchemeIndex : uint8_t;
class IColorFormat;
class IDOMObject;
class MasterHandoutSlide;
class MasterNotesSlide;
class MasterNotesSlideManager;
namespace PptSerialization
{
class MasterSlideRoundTripSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class NotesMasterPartParser;
class ThemePartParser;
} // namespace PartParser
} // namespace PptxSerialization
class Presentation;
namespace Theme
{
class BaseStyles;
class ExtraColorSchemeCollection;
class IColorScheme;
class IExtraColorScheme;
class IExtraColorSchemeCollection;
class IFontScheme;
class IFormatScheme;
class MasterThemeManager;
class ThemeEffectiveData;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class MasterThemePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents a master theme.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MasterTheme final : public Aspose::Slides::Theme::Theme, public Aspose::Slides::Theme::IMasterTheme
{
    typedef MasterTheme ThisType;
    typedef Aspose::Slides::Theme::Theme BaseType;
    typedef Aspose::Slides::Theme::IMasterTheme BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Theme::ThemeEffectiveData;
    friend class Aspose::Slides::PptSerialization::MasterSlideRoundTripSerialization;
    friend class Aspose::Slides::MasterHandoutSlide;
    friend class Aspose::Slides::MasterNotesSlide;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptxSerialization::PartParser::NotesMasterPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::ThemePartParser;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::Theme::MasterThemeManager;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the color scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IColorScheme">IColorScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorScheme> get_ColorScheme() override;
    /// <summary>
    /// Returns the font scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFontScheme">IFontScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontScheme> get_FontScheme() override;
    /// <summary>
    /// Returns the shape format scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IFormatScheme">IFormatScheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormatScheme> get_FormatScheme() override;
    /// <summary>
    /// Returns the collection of additional color schemes.
    /// These schemes don't affect presentation's look, they can be selected as main color scheme for a slide.
    /// Read-only <see cref="Aspose::Slides::Theme::IExtraColorSchemeCollection">IExtraColorSchemeCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IExtraColorSchemeCollection> get_ExtraColorSchemes() override;
    /// <summary>
    /// Returns the name of a theme.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Returns the name of a theme.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ColorFormat(ColorSchemeIndex index) override;
    /// <summary>
    /// Returns the additional color scheme at the specified index.
    /// This scheme don't affect presentation's look, it can be selected as main color scheme for a slide.
    /// Read-only <see cref="Aspose::Slides::Theme::IExtraColorScheme"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IExtraColorScheme> get_ExtraColorScheme(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::MasterThemePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API MasterTheme(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MasterTheme, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~MasterTheme();
    
private:

    System::String m_name;
    System::SharedPtr<BaseStyles> m_themeElements;
    System::SharedPtr<ExtraColorSchemeCollection> m_extraClrSchemes;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::MasterThemePPTXUnsupportedProps> m_pptxUnsupportedProps;
    uint32_t m_version;
    uint32_t m_versionCache;
    
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnMasterThemeChanged();
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


