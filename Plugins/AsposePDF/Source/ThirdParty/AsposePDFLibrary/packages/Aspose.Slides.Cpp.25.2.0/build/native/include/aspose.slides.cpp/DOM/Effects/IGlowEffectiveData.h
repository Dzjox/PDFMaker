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
/// Immutable object which represents a Glow effect, in which a color blurred outline 
/// is added outside the edges of the object.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGlowEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IGlowEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Radius.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Radius() = 0;
    /// <summary>
    /// Color.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_Color() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


