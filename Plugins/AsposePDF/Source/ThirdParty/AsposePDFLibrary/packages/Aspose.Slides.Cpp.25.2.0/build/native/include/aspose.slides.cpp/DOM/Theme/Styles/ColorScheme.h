#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/array.h>
#include <DOM/Theme/IColorScheme.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ColorFormat;
enum class ColorSchemeIndex : uint8_t;
class IBaseSlide;
class IColorFormat;
class IPresentation;
class IPresentationComponent;
class MasterThemeTemplate;
namespace PptSerialization
{
class MasterSlideRoundTripSerialization;
class MasterThemePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ColorSchemePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace Theme
{
class BaseOverrideThemeManager;
class BaseStyles;
class ColorSchemeEffectiveData;
class ExtraColorScheme;
class IColorSchemeEffectiveData;
class MasterThemeManager;
class OverrideTheme;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class ColorSchemePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Stores theme-defined colors.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ColorScheme : public Aspose::Slides::Theme::IColorScheme, public Aspose::Slides::IDOMObject
{
    typedef ColorScheme ThisType;
    typedef Aspose::Slides::Theme::IColorScheme BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Theme::ColorSchemeEffectiveData;
    friend class Aspose::Slides::Theme::BaseStyles;
    friend class Aspose::Slides::Theme::ExtraColorScheme;
    friend class Aspose::Slides::PptSerialization::MasterSlideRoundTripSerialization;
    friend class Aspose::Slides::Theme::OverrideTheme;
    friend class Aspose::Slides::PptxSerialization::PartParser::ColorSchemePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::MasterThemePPTSerialization;
    friend class Aspose::Slides::MasterThemeTemplate;
    friend class Aspose::Slides::Theme::BaseOverrideThemeManager;
    friend class Aspose::Slides::Theme::MasterThemeManager;
    /// @endcond
    
public:

    /// <summary>
    /// First dark color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Dark1() override;
    /// <summary>
    /// First light color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Light1() override;
    /// <summary>
    /// Second dark color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Dark2() override;
    /// <summary>
    /// Second light color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Light2() override;
    /// <summary>
    /// First accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Accent1() override;
    /// <summary>
    /// Second accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Accent2() override;
    /// <summary>
    /// Third accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Accent3() override;
    /// <summary>
    /// Fourth accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Accent4() override;
    /// <summary>
    /// Fifth accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Accent5() override;
    /// <summary>
    /// Sixth accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Accent6() override;
    /// <summary>
    /// Color for the hyperlinks.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Hyperlink() override;
    /// <summary>
    /// Color for the visited hyperlinks.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_FollowedHyperlink() override;
    /// <summary>
    /// Returns the parent slide.
    /// Read-only <see cref="IBaseSlide"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> idx_get(ColorSchemeIndex index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::String get_Name();
    ASPOSE_SLIDES_LOCAL_API void set_Name(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::ColorSchemePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::ArrayPtr<System::SharedPtr<ColorFormat>> m_scheme;
    
    System::Event<void()> ColorSchemeChanged;
    
    ASPOSE_SLIDES_LOCAL_API ColorScheme(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorScheme, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ColorScheme> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IColorSchemeEffectiveData> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ColorScheme();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    uint32_t m_version;
    uint32_t m_versionCache;
    System::String m_name;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::ColorSchemePPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnColorSchemeChanged();
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


