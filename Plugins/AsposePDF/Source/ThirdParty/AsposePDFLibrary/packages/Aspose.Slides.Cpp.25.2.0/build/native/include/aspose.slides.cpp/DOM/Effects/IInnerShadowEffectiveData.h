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
/// Immutable object which represents a inner shadow effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IInnerShadowEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IInnerShadowEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Blur radius.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_BlurRadius() = 0;
    /// <summary>
    /// Direction of shadow.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Direction() = 0;
    /// <summary>
    /// Distance of shadow.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Distance() = 0;
    /// <summary>
    /// Color of shadow.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_ShadowColor() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


