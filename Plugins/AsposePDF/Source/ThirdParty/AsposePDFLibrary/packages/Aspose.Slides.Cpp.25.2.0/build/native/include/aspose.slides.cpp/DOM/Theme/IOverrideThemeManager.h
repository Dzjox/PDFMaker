#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Theme/IThemeManager.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IOverrideTheme;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Provides access to different types of overriden themes.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOverrideThemeManager : public Aspose::Slides::Theme::IThemeManager
{
    typedef IOverrideThemeManager ThisType;
    typedef Aspose::Slides::Theme::IThemeManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether OverrideTheme overrides inherited effective theme or not.
    /// To enable OverrideTheme for overriding use OverrideTheme.Init*() methods.
    /// To disable OverrideTheme from overriding use get_OverrideTheme()->Clear() method.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsOverrideThemeEnabled() = 0;
    /// <summary>
    /// Returns the overriding theme object.
    /// Read <see cref="Aspose::Slides::Theme::IOverrideTheme">IOverrideTheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IOverrideTheme> get_OverrideTheme() = 0;
    /// <summary>
    /// Returns the overriding theme object.
    /// Write <see cref="Aspose::Slides::Theme::IOverrideTheme">IOverrideTheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OverrideTheme(System::SharedPtr<IOverrideTheme> value) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


