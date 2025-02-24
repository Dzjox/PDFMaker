#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ColorSchemeIndex : uint8_t;
class IColorFormat;
namespace Theme
{
class IColorScheme;
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
/// Represents an additional color scheme which can be assigned to a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IExtraColorScheme : public virtual System::Object
{
    typedef IExtraColorScheme ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a name of this scheme.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Returns a color scheme.
    /// Read-only <see cref="Aspose::Slides::Theme::IColorScheme">IColorScheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorScheme> get_ColorScheme() = 0;
    
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_ColorFormat(ColorSchemeIndex index) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


