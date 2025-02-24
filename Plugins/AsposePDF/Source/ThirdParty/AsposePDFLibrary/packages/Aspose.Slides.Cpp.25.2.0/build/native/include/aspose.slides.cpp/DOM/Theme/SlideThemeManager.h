#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Theme/BaseOverrideThemeManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Slide;
namespace Theme
{
class IThemeable;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Provides access to slide theme overriden.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SlideThemeManager : public Aspose::Slides::Theme::BaseOverrideThemeManager
{
    typedef SlideThemeManager ThisType;
    typedef Aspose::Slides::Theme::BaseOverrideThemeManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Slide;
    /// @endcond
    
protected:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThemeable> get_OwnerOfInheritedTheme() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API SlideThemeManager(System::SharedPtr<Slide> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SlideThemeManager, CODEPORTING_ARGS(System::SharedPtr<Slide> parentImmediate));
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


