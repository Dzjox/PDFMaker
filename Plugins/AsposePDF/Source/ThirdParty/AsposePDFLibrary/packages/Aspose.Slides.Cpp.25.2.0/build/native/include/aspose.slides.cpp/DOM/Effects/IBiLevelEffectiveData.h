#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents a Bi-Level (black/white) effect.
/// Input colors whose luminance is less than the specified threshold value are changed to black.
/// Input colors whose luminance are greater than or equal the specified value are set to white.
/// The alpha effect values are unaffected by this effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBiLevelEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IBiLevelEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the threshold value.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Threshold() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


