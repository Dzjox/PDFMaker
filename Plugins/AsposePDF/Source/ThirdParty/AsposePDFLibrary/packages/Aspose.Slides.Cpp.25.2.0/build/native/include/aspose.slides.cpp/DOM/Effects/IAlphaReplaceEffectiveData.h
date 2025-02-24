#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents and Alpha Replace effect.
/// Effect alpha (opacity) values are replaced by a fixed alpha.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAlphaReplaceEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IAlphaReplaceEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns new alpha value in the interval [0..1]
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Alpha() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


