#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Animation/IBehavior.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class NullableBool : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents animation scale effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IScaleEffect : public virtual Aspose::Slides::Animation::IBehavior
{
    typedef IScaleEffect ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether a content should be zoomed.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_ZoomContent() = 0;
    /// <summary>
    /// Determines whether a content should be zoomed.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ZoomContent(NullableBool value) = 0;
    /// <summary>
    /// Specifies an x/y co-ordinate to start the animation from (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::PointF get_From() = 0;
    /// <summary>
    /// Specifies an x/y co-ordinate to start the animation from (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_From(System::Drawing::PointF value) = 0;
    /// <summary>
    /// Specifies the target location for an animation scale effect (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::PointF get_To() = 0;
    /// <summary>
    /// Specifies the target location for an animation scale effect (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_To(System::Drawing::PointF value) = 0;
    /// <summary>
    /// describes the relative offset value for the animation (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::PointF get_By() = 0;
    /// <summary>
    /// describes the relative offset value for the animation (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_By(System::Drawing::PointF value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


