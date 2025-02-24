#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class RectangleAlignment : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents a Reflection effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IReflectionEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IReflectionEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the start position (along the alpha gradient ramp) of the start alpha value (percents).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_StartPosAlpha() = 0;
    /// <summary>
    /// Specifies the end position (along the alpha gradient ramp) of the end alpha value (percents).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_EndPosAlpha() = 0;
    /// <summary>
    /// Specifies the direction to offset the reflection. (angle).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FadeDirection() = 0;
    /// <summary>
    /// Starting reflection opacity. (percents).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_StartReflectionOpacity() = 0;
    /// <summary>
    /// End reflection opacity. (percents).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_EndReflectionOpacity() = 0;
    /// <summary>
    /// Blur radius.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_BlurRadius() = 0;
    /// <summary>
    /// Direction of reflection.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Direction() = 0;
    /// <summary>
    /// Distance of reflection.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Distance() = 0;
    /// <summary>
    /// Rectangle alignment.
    /// Read-only <see cref="RectangleAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API RectangleAlignment get_RectangleAlign() = 0;
    /// <summary>
    /// Specifies the horizontal skew angle.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_SkewHorizontal() = 0;
    /// <summary>
    /// Specifies the vertical skew angle.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_SkewVertical() = 0;
    /// <summary>
    /// Specifies whether the reflection should rotate with the shape if the shape is rotated.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RotateShadowWithShape() = 0;
    /// <summary>
    /// Specifies the horizontal scaling factor, negative scaling causes a flip. (percents)
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ScaleHorizontal() = 0;
    /// <summary>
    /// Specifies the vertical scaling factor, negative scaling causes a flip. (percents)
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ScaleVertical() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


