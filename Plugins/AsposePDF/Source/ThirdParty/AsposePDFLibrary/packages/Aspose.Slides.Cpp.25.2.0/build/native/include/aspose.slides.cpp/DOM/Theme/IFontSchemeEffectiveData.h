#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFontsEffectiveData;
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
/// Immutable object which contains effective font scheme properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::Theme::IThemeEffectiveData">IThemeEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontSchemeEffectiveData : public virtual System::Object
{
    typedef IFontSchemeEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the fonts collection for a "body" part of the slide.
    /// Read-only <see cref="IFontsEffectiveData"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontsEffectiveData> get_Minor() = 0;
    /// <summary>
    /// Returns the fonts collection for a "heading" part of the slide.
    /// Read-only <see cref="IFontsEffectiveData"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontsEffectiveData> get_Major() = 0;
    /// <summary>
    /// Returns the font scheme name.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


