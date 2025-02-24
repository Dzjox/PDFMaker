#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFonts;
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
/// Stores theme-defined fonts.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontScheme : public virtual System::Object
{
    typedef IFontScheme ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the fonts collection for a "body" part of the slide.
    /// Read-only <see cref="IFonts"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFonts> get_Minor() = 0;
    /// <summary>
    /// Returns the fonts collection for a "heading" part of the slide.
    /// Read-only <see cref="IFonts"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFonts> get_Major() = 0;
    /// <summary>
    /// Returns the font scheme name.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Returns the font scheme name.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Name(System::String value) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


