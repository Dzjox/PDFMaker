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
class IMasterTheme;
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
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterThemeManager : public Aspose::Slides::Theme::IThemeManager
{
    typedef IMasterThemeManager ThisType;
    typedef Aspose::Slides::Theme::IThemeManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether OverrideTheme overrides inherited effective theme (Presentation.MasterTheme) or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsOverrideThemeEnabled() = 0;
    /// <summary>
    /// Determines whether OverrideTheme overrides inherited effective theme (Presentation.MasterTheme) or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsOverrideThemeEnabled(bool value) = 0;
    /// <summary>
    /// Returns the overriding theme object.
    /// Read <see cref="Aspose::Slides::Theme::IMasterTheme">IMasterTheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterTheme> get_OverrideTheme() = 0;
    /// <summary>
    /// Returns the overriding theme object.
    /// Write <see cref="Aspose::Slides::Theme::IMasterTheme">IMasterTheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OverrideTheme(System::SharedPtr<IMasterTheme> value) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


