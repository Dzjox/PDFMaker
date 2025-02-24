#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Theme/IThemeable.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IOverrideThemeManager;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents override theme manager.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOverrideThemeable : public virtual Aspose::Slides::Theme::IThemeable
{
    typedef IOverrideThemeable ThisType;
    typedef Aspose::Slides::Theme::IThemeable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns override theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IOverrideThemeManager">IOverrideThemeManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IOverrideThemeManager> get_ThemeManager() = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


