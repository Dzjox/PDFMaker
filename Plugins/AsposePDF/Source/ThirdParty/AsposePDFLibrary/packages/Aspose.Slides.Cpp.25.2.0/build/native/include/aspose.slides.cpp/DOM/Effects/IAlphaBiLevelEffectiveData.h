#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents an Alpha Bi-Level effect.
/// Alpha (Opacity) values less than the threshold are changed to 0 (fully transparent) and
/// alpha values greater than or equal to the threshold are changed to 100% (fully opaque).
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAlphaBiLevelEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IAlphaBiLevelEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns effect threshold.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Threshold() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


