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
class IMasterThemeManager;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represent master theme manager.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterThemeable : public virtual Aspose::Slides::Theme::IThemeable
{
    typedef IMasterThemeable ThisType;
    typedef Aspose::Slides::Theme::IThemeable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns master theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IMasterThemeManager">IMasterThemeManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterThemeManager> get_ThemeManager() = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


