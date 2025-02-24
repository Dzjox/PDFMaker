#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents an Alpha Modulate Fixed effect.
/// Effect alpha (opacity) values are multiplied by a fixed percentage.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAlphaModulateFixedEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IAlphaModulateFixedEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns an amount of effect in percents.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Amount() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


