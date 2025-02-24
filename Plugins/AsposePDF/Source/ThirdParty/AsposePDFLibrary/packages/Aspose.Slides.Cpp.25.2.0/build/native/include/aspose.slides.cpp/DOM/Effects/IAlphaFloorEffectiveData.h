#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents an Alpha Floor effect.
/// Alpha (opacity) values less than 100% are changed to zero.
/// In other words, anything partially transparent becomes fully transparent.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAlphaFloorEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IAlphaFloorEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


