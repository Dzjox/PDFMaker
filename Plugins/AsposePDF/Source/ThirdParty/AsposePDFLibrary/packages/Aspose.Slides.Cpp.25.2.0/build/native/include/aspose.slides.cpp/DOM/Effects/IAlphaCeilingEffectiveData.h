#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents an Alpha Ceiling effect.
/// Alpha (opacity) values greater than zero are changed to 100%.
/// In other words, anything partially opaque becomes fully opaque.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAlphaCeilingEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IAlphaCeilingEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


