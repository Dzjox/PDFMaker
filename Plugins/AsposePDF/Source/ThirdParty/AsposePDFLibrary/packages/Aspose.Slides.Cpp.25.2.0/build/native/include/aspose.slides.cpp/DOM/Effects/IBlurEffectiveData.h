#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents a Blur effect that is applied to the entire shape, including its fill.
/// All color channels, including alpha, are affected.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBlurEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IBlurEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns blur radius.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Radius() = 0;
    /// <summary>
    /// Determines whether the bounds of the object should be grown as a result of the blurring.
    /// True indicates the bounds are grown while false indicates that they are not.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Grow() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


