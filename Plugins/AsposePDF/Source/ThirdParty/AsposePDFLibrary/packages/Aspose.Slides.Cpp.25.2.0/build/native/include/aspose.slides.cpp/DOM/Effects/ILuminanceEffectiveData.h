#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Luminance effect.
/// Brightness linearly shifts all colors closer to white or black.
/// Contrast scales all colors to be either closer or further apart.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILuminanceEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef ILuminanceEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Brightness.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Brightness() = 0;
    /// <summary>
    /// Contrast.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Contrast() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


