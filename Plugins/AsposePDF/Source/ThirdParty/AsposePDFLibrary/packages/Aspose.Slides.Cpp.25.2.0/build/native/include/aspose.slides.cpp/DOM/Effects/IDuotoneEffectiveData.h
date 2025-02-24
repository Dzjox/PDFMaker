#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents a Duotone effect.
/// For each pixel, combines clr1 and clr2 through a linear interpolation
/// to determine the new color for that pixel.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDuotoneEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IDuotoneEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns target color format for dark pixels.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_Color1() = 0;
    /// <summary>
    /// Returns target color format for light pixels.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_Color2() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


