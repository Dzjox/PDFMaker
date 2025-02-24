#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IExtraColorScheme;
class IThemeEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represent theme properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IThemeManager : public virtual System::Object
{
    typedef IThemeManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the theme object.
    /// </summary>
    /// <returns>Theme object <see cref="Aspose::Slides::Theme::IThemeEffectiveData">IThemeEffectiveData</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IThemeEffectiveData> CreateThemeEffective() = 0;
    /// <summary>
    /// Applies extra color scheme to a slide.
    /// </summary>
    /// <param name="scheme">Extra color scheme <see cref="Aspose::Slides::Theme::IExtraColorScheme">IExtraColorScheme</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ApplyColorScheme(System::SharedPtr<IExtraColorScheme> scheme) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


