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
/// Immutable object which represents a Color Replacement effect.
/// All effect colors are changed to a fixed color.
/// Alpha values are unaffected.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorReplaceEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IColorReplaceEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns color format which will replace color of every pixel.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_Color() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


