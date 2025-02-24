#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Theme/BaseOverrideThemeManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
} // namespace Charts
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
/// Provides access to chart theme overriden.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartThemeManager : public Aspose::Slides::Theme::BaseOverrideThemeManager
{
    typedef ChartThemeManager ThisType;
    typedef Aspose::Slides::Theme::BaseOverrideThemeManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Chart;
    /// @endcond
    
protected:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThemeable> get_OwnerOfInheritedTheme() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ChartThemeManager(System::SharedPtr<Aspose::Slides::Charts::Chart> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartThemeManager, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Charts::Chart> parentImmediate));
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


