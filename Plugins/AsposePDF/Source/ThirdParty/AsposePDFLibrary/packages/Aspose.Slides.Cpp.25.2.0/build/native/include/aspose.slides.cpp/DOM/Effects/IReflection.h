#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IAccessiblePVIObject.h"
#include "DOM/Effects/IImageTransformOperation.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IReflectionEffectiveData;
} // namespace Effects
enum class RectangleAlignment : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a reflection effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IReflection : public virtual Aspose::Slides::Effects::IImageTransformOperation, public Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IReflectionEffectiveData>>
{
    typedef IReflection ThisType;
    typedef Aspose::Slides::Effects::IImageTransformOperation BaseType;
    typedef Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IReflectionEffectiveData>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the start position (along the alpha gradient ramp) of the start alpha value (percents).
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_StartPosAlpha() = 0;
    /// <summary>
    /// Specifies the start position (along the alpha gradient ramp) of the start alpha value (percents).
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StartPosAlpha(float value) = 0;
    /// <summary>
    /// Specifies the end position (along the alpha gradient ramp) of the end alpha value (percents).
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_EndPosAlpha() = 0;
    /// <summary>
    /// Specifies the end position (along the alpha gradient ramp) of the end alpha value (percents).
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndPosAlpha(float value) = 0;
    /// <summary>
    /// Specifies the direction to offset the reflection. (angle).
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FadeDirection() = 0;
    /// <summary>
    /// Specifies the direction to offset the reflection. (angle).
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FadeDirection(float value) = 0;
    /// <summary>
    /// Starting reflection opacity. (percents).
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_StartReflectionOpacity() = 0;
    /// <summary>
    /// Starting reflection opacity. (percents).
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StartReflectionOpacity(float value) = 0;
    /// <summary>
    /// End reflection opacity. (percents).
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_EndReflectionOpacity() = 0;
    /// <summary>
    /// End reflection opacity. (percents).
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndReflectionOpacity(float value) = 0;
    /// <summary>
    /// Blur radius.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_BlurRadius() = 0;
    /// <summary>
    /// Blur radius.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BlurRadius(double value) = 0;
    /// <summary>
    /// Direction of reflection.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Direction() = 0;
    /// <summary>
    /// Direction of reflection.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Direction(float value) = 0;
    /// <summary>
    /// Distance of reflection.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Distance() = 0;
    /// <summary>
    /// Distance of reflection.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Distance(double value) = 0;
    /// <summary>
    /// Rectangle alignment.
    /// Read <see cref="RectangleAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API RectangleAlignment get_RectangleAlign() = 0;
    /// <summary>
    /// Rectangle alignment.
    /// Write <see cref="RectangleAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RectangleAlign(RectangleAlignment value) = 0;
    /// <summary>
    /// Specifies the horizontal skew angle.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_SkewHorizontal() = 0;
    /// <summary>
    /// Specifies the horizontal skew angle.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SkewHorizontal(double value) = 0;
    /// <summary>
    /// Specifies the vertical skew angle.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_SkewVertical() = 0;
    /// <summary>
    /// Specifies the vertical skew angle.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SkewVertical(double value) = 0;
    /// <summary>
    /// Specifies whether the reflection should rotate with the shape if the shape is rotated.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RotateShadowWithShape() = 0;
    /// <summary>
    /// Specifies whether the reflection should rotate with the shape if the shape is rotated.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotateShadowWithShape(bool value) = 0;
    /// <summary>
    /// Specifies the horizontal scaling factor, negative scaling causes a flip. (percents)
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ScaleHorizontal() = 0;
    /// <summary>
    /// Specifies the horizontal scaling factor, negative scaling causes a flip. (percents)
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ScaleHorizontal(double value) = 0;
    /// <summary>
    /// Specifies the vertical scaling factor, negative scaling causes a flip. (percents)
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ScaleVertical() = 0;
    /// <summary>
    /// Specifies the vertical scaling factor, negative scaling causes a flip. (percents)
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ScaleVertical(double value) = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


