#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Animation/IRotationEffect.h>

#include "DOM/Animation/Behavior.h"
#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent rotation behavior of effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS RotationEffect : public Aspose::Slides::Animation::Behavior, public Aspose::Slides::Animation::IRotationEffect
{
    typedef RotationEffect ThisType;
    typedef Aspose::Slides::Animation::Behavior BaseType;
    typedef Aspose::Slides::Animation::IRotationEffect BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Describes the starting value for the animation.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_From() override;
    /// <summary>
    /// Describes the starting value for the animation.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_From(float value) override;
    /// <summary>
    /// Describes the ending value for the animation.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_To() override;
    /// <summary>
    /// Describes the ending value for the animation.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_To(float value) override;
    /// <summary>
    /// Describes the relative offset value for the animation.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_By() override;
    /// <summary>
    /// Describes the relative offset value for the animation.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_By(float value) override;
    
    ASPOSE_SLIDES_SHARED_API RotationEffect();
    
protected:

    /// @cond
    float m_from, m_to, m_by;
    /// @endcond
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


