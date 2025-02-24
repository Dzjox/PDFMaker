#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Hue/Saturation/Luminance effect.
/// The hue, saturation, and luminance may each be adjusted relative to its current value.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHSLEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IHSLEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns hue percentage.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Hue() = 0;
    /// <summary>
    /// Returns saturation percentage.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Saturation() = 0;
    /// <summary>
    /// Returns luminance percentage.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Luminance() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


