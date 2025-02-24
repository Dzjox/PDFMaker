#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Theme/IMasterThemeManager.h>

#include "DOM/Theme/BaseThemeManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
class MasterHandoutSlide;
class MasterNotesSlide;
class MasterSlide;
namespace OdpSerialization
{
namespace PartParser
{
class SlideOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class MasterSlideRoundTripSerialization;
class MasterThemePPTSerialization;
class PptSlideThemeContext;
} // namespace PptSerialization
namespace PptxSerialization
{
class PptxSerializator;
} // namespace PptxSerialization
namespace Theme
{
class ColorMapping;
class IExtraColorScheme;
class IMasterTheme;
class IThemeEffectiveData;
class MasterTheme;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Provides access to presentation master theme.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MasterThemeManager : public Aspose::Slides::Theme::BaseThemeManager, public Aspose::Slides::Theme::IMasterThemeManager
{
    typedef MasterThemeManager ThisType;
    typedef Aspose::Slides::Theme::BaseThemeManager BaseType;
    typedef Aspose::Slides::Theme::IMasterThemeManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptSerialization::PptSlideThemeContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::MasterSlideRoundTripSerialization;
    friend class Aspose::Slides::MasterHandoutSlide;
    friend class Aspose::Slides::MasterNotesSlide;
    friend class Aspose::Slides::MasterSlide;
    friend class Aspose::Slides::PptxSerialization::PptxSerializator;
    friend class Aspose::Slides::PptSerialization::MasterThemePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the overriding theme object.
    /// Read <see cref="Aspose::Slides::Theme::IMasterTheme">IMasterTheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMasterTheme> get_OverrideTheme() override;
    /// <summary>
    /// Returns the overriding theme object.
    /// Write <see cref="Aspose::Slides::Theme::IMasterTheme">IMasterTheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_OverrideTheme(System::SharedPtr<IMasterTheme> value) override;
    /// <summary>
    /// Determines whether OverrideTheme overrides inherited effective theme (Presentation::get_MasterTheme) or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsOverrideThemeEnabled() override;
    /// <summary>
    /// Determines whether OverrideTheme overrides inherited effective theme (Presentation::get_MasterTheme) or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsOverrideThemeEnabled(bool value) override;
    
    /// <summary>
    /// Returns the theme object.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThemeEffectiveData> CreateThemeEffective() override;
    /// <summary>
    /// Applies extra color scheme to a slide.
    /// </summary>
    /// <param name="scheme"></param>
    ASPOSE_SLIDES_SHARED_API void ApplyColorScheme(System::SharedPtr<IExtraColorScheme> scheme) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IMasterTheme> get_MasterThemeEffective();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> get_ColorMapping() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BaseSlide> get_Slide();
    
    ASPOSE_SLIDES_LOCAL_API MasterThemeManager(System::SharedPtr<BaseSlide> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MasterThemeManager, CODEPORTING_ARGS(System::SharedPtr<BaseSlide> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~MasterThemeManager();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IMasterTheme> get_InheritedTheme();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> get_ColorMappingInherited();
    
    System::SharedPtr<MasterTheme> m_overrideTheme;
    bool m_isOverrideThemeEnabled;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


