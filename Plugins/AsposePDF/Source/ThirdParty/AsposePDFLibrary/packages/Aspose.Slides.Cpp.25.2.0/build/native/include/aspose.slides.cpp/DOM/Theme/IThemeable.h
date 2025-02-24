#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IThemeEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents objects that can be themed with <see cref="Aspose::Slides::Theme::ITheme">ITheme</see>.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IThemeable : public virtual Aspose::Slides::ISlideComponent
{
    typedef IThemeable ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns an effective theme for this themeable object.
    /// </summary>
    /// <returns>Effective theme <see cref="Aspose::Slides::Theme::IThemeEffectiveData">IThemeEffectiveData</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IThemeEffectiveData> CreateThemeEffective() = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


