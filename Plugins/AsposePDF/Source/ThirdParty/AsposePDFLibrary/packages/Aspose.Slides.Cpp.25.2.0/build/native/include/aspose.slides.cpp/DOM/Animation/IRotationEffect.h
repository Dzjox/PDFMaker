#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Animation/IBehavior.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent rotation behavior of effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IRotationEffect : public virtual Aspose::Slides::Animation::IBehavior
{
    typedef IRotationEffect ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the starting value for the animation.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_From() = 0;
    /// <summary>
    /// Describes the starting value for the animation.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_From(float value) = 0;
    /// <summary>
    /// Describes the ending value for the animation.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_To() = 0;
    /// <summary>
    /// Describes the ending value for the animation.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_To(float value) = 0;
    /// <summary>
    /// Describes the relative offset value for the animation.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_By() = 0;
    /// <summary>
    /// Describes the relative offset value for the animation.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_By(float value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


