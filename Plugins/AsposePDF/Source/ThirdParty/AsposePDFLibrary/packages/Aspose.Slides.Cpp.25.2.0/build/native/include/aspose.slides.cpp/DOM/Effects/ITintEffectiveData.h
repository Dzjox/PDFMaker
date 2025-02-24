#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents a Tint effect.
/// Shifts effect color values towards/away from hue by the specified amount.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITintEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef ITintEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns hue.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Hue() = 0;
    /// <summary>
    /// Returns effect amount.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Amount() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


