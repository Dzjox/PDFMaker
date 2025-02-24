#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Theme/IOverrideThemeManager.h>

#include "DOM/Theme/BaseThemeManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDOMObject;
namespace PptSerialization
{
class PptSlideThemeContext;
} // namespace PptSerialization
namespace Theme
{
class ChartThemeManager;
class ColorMapping;
class IExtraColorScheme;
class IOverrideTheme;
class IThemeable;
class IThemeEffectiveData;
class LayoutSlideThemeManager;
class NotesSlideThemeManager;
class OverrideTheme;
class SlideThemeManager;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Base class for classes that provide access to different types of overriden themes.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseOverrideThemeManager : public Aspose::Slides::Theme::BaseThemeManager, public Aspose::Slides::Theme::IOverrideThemeManager
{
    typedef BaseOverrideThemeManager ThisType;
    typedef Aspose::Slides::Theme::BaseThemeManager BaseType;
    typedef Aspose::Slides::Theme::IOverrideThemeManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::PptSerialization::PptSlideThemeContext;
    friend class Aspose::Slides::Theme::OverrideTheme;
    friend class Aspose::Slides::Theme::ChartThemeManager;
    friend class Aspose::Slides::Theme::NotesSlideThemeManager;
    friend class Aspose::Slides::Theme::SlideThemeManager;
    friend class Aspose::Slides::Theme::LayoutSlideThemeManager;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the overriding theme object.
    /// Read <see cref="Aspose::Slides::Theme::IOverrideTheme">IOverrideTheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IOverrideTheme> get_OverrideTheme() override;
    /// <summary>
    /// Returns the overriding theme object.
    /// Write <see cref="Aspose::Slides::Theme::IOverrideTheme">IOverrideTheme</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_OverrideTheme(System::SharedPtr<IOverrideTheme> value) override;
    /// <summary>
    /// Determines whether OverrideTheme overrides inherited effective theme or not.
    /// To enable OverrideTheme for overriding use OverrideTheme.Init*() methods.
    /// To disable OverrideTheme from overriding use OverrideTheme::Clear method.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsOverrideThemeEnabled() override;
    
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
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IThemeable> get_OwnerOfInheritedTheme() = 0;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IThemeable> get_Parent_IThemeable();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> get_ColorMapping() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API BaseOverrideThemeManager(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~BaseOverrideThemeManager();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Theme::ColorMapping> get_ColorMappingInherited();
    
    System::WeakPtr<IThemeable> m_parentIThemeable;
    System::SharedPtr<Aspose::Slides::Theme::OverrideTheme> m_overrideTheme;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


