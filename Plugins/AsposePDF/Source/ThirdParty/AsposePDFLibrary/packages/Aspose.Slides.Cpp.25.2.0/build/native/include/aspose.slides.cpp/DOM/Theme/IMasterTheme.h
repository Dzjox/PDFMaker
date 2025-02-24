#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Theme/ITheme.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IExtraColorScheme;
class IExtraColorSchemeCollection;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents a master theme.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterTheme : public virtual Aspose::Slides::Theme::ITheme
{
    typedef IMasterTheme ThisType;
    typedef Aspose::Slides::Theme::ITheme BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the collection of additional color schemes.
    /// These schemes don't affect presentation's look, they can be selected as main color scheme for a slide.
    /// Read-only <see cref="Aspose::Slides::Theme::IExtraColorSchemeCollection">IExtraColorSchemeCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IExtraColorSchemeCollection> get_ExtraColorSchemes() = 0;
    /// <summary>
    /// Returns the name of a theme.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Returns the name of a theme.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Name(System::String value) = 0;
    
    /// <summary>
    /// Returns the additional color scheme at the specified index.
    /// This scheme don't affect presentation's look, it can be selected as main color scheme for a slide.
    /// Read-only <see cref="Aspose::Slides::Theme::IExtraColorScheme"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IExtraColorScheme> get_ExtraColorScheme(int32_t index) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


