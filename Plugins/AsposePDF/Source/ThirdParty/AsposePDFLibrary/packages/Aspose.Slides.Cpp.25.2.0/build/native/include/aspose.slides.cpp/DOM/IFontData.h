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
class IThemeEffectiveData;
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

/// <summary>
/// Represents a font definition.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontData : public virtual System::Object
{
    typedef IFontData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the font name. 
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_FontName() = 0;
    
    /// <summary>
    /// Returns the font name, replacing theme referrence with an actual font used.
    /// </summary>
    /// <param name="theme">Theme from which themed font name should be taken. Its up to caller to provide a correct value.</param>
    /// <returns>Font name.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetFontName(System::SharedPtr<Theme::IThemeEffectiveData> theme) = 0;
    
};

} // namespace Slides
} // namespace Aspose


