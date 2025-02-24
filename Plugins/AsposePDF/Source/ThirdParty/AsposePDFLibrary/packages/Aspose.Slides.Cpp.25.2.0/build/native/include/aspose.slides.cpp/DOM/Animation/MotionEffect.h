#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/point_f.h>
#include <DOM/Animation/IMotionEffect.h>

#include "DOM/Animation/Behavior.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class IMotionPath;
enum class MotionOriginType;
class MotionPath;
enum class MotionPathEditMode;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent motion effect behavior of effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MotionEffect : public Aspose::Slides::Animation::Behavior, public Aspose::Slides::Animation::IMotionEffect
{
    typedef MotionEffect ThisType;
    typedef Aspose::Slides::Animation::Behavior BaseType;
    typedef Aspose::Slides::Animation::IMotionEffect BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

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
    /// Specifies the target location for an animation motion effect (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::PointF get_To() override;
    /// <summary>
    /// Specifies the target location for an animation motion effect (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_To(System::Drawing::PointF value) override;
    /// <summary>
    /// Describes the relative offset value for the animation (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::PointF get_By() override;
    /// <summary>
    /// Describes the relative offset value for the animation (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_By(System::Drawing::PointF value) override;
    /// <summary>
    /// Describes the center of the rotation used to rotate a motion path by X angle.
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::PointF get_RotationCenter() override;
    /// <summary>
    /// Describes the center of the rotation used to rotate a motion path by X angle.
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotationCenter(System::Drawing::PointF value) override;
    /// <summary>
    /// Specifies what the origin of the motion path is relative to such as the layout of the slide,
    /// or the parent.
    /// Read <see cref="MotionOriginType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MotionOriginType get_Origin() override;
    /// <summary>
    /// Specifies what the origin of the motion path is relative to such as the layout of the slide,
    /// or the parent.
    /// Write <see cref="MotionOriginType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Origin(MotionOriginType value) override;
    /// <summary>
    /// Specifies the path primitive followed by coordinates for the animation motion.
    /// Read <see cref="Aspose::Slides::Animation::IMotionPath">IMotionPath</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMotionPath> get_Path() override;
    /// <summary>
    /// Specifies the path primitive followed by coordinates for the animation motion.
    /// Write <see cref="Aspose::Slides::Animation::IMotionPath">IMotionPath</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Path(System::SharedPtr<IMotionPath> value) override;
    /// <summary>
    /// Specifies how the motion path moves when shape is moved.
    /// Read <see cref="MotionPathEditMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MotionPathEditMode get_PathEditMode() override;
    /// <summary>
    /// Specifies how the motion path moves when shape is moved.
    /// Write <see cref="MotionPathEditMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PathEditMode(MotionPathEditMode value) override;
    /// <summary>
    /// Describes the relative angle of the motion path.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Angle() override;
    /// <summary>
    /// Describes the relative angle of the motion path.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Angle(float value) override;
    
    ASPOSE_SLIDES_SHARED_API MotionEffect();
    
protected:

    /// @cond
    System::Drawing::PointF m_ptFrom;
    System::Drawing::PointF m_ptTo;
    System::Drawing::PointF m_ptBy;
    System::Drawing::PointF m_ptRotCentr;
    MotionOriginType m_origin;
    System::SharedPtr<MotionPath> m_path;
    MotionPathEditMode m_pathEditMode;
    float m_fAnglePath;
    /// @endcond
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


