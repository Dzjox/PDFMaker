#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents a soft edge effect. 
/// The edges of the shape are blurred, while the fill is not affected.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISoftEdgeEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef ISoftEdgeEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the radius of blur to apply to the edges.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Radius() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


