#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/point_f.h>
#include <DOM/Animation/IScaleEffect.h>

#include "DOM/Animation/Behavior.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class NullableBool : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents animation scale effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ScaleEffect : public Aspose::Slides::Animation::Behavior, public Aspose::Slides::Animation::IScaleEffect
{
    typedef ScaleEffect ThisType;
    typedef Aspose::Slides::Animation::Behavior BaseType;
    typedef Aspose::Slides::Animation::IScaleEffect BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Determines whether a content should be zoomed.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_ZoomContent() override;
    /// <summary>
    /// Determines whether a content should be zoomed.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ZoomContent(NullableBool value) override;
    /// <summary>
    /// Specifies an x/y co-ordinate to start the animation from (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::PointF get_From() override;
    /// <summary>
    /// Specifies an x/y co-ordinate to start the animation from (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_From(System::Drawing::PointF value) override;
    /// <summary>
    /// Specifies the target location for an animation scale effect (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::PointF get_To() override;
    /// <summary>
    /// Specifies the target location for an animation scale effect (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_To(System::Drawing::PointF value) override;
    /// <summary>
    /// describes the relative offset value for the animation (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::PointF get_By() override;
    /// <summary>
    /// describes the relative offset value for the animation (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_By(System::Drawing::PointF value) override;
    
    ASPOSE_SLIDES_SHARED_API ScaleEffect();
    
protected:

    /// @cond
    System::Drawing::PointF m_ptFrom;
    System::Drawing::PointF m_ptTo;
    System::Drawing::PointF m_ptBy;
    NullableBool m_zoomContent;
    /// @endcond
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


