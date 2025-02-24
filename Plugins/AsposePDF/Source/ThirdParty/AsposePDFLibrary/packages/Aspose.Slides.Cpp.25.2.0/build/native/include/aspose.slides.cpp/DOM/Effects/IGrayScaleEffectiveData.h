#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which representsepresents a Gray Scale effect. Converts all effect color values to a shade of gray,
/// corresponding to their luminance. Effect alpha (opacity) values are unaffected.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGrayScaleEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IGrayScaleEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


