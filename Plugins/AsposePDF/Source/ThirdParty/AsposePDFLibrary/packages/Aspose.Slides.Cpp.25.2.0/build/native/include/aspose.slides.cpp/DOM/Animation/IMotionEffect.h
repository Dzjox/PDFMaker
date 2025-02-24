#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Animation/IBehavior.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class IMotionPath;
enum class MotionOriginType;
enum class MotionPathEditMode;
} // namespace Animation
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
/// Represent motion effect behavior of effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMotionEffect : public virtual Aspose::Slides::Animation::IBehavior
{
    typedef IMotionEffect ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

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
    /// Specifies the target location for an animation motion effect (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::PointF get_To() = 0;
    /// <summary>
    /// Specifies the target location for an animation motion effect (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_To(System::Drawing::PointF value) = 0;
    /// <summary>
    /// Describes the relative offset value for the animation (in percents).
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::PointF get_By() = 0;
    /// <summary>
    /// Describes the relative offset value for the animation (in percents).
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_By(System::Drawing::PointF value) = 0;
    /// <summary>
    /// Describes the center of the rotation used to rotate a motion path by X angle.
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::PointF get_RotationCenter() = 0;
    /// <summary>
    /// Describes the center of the rotation used to rotate a motion path by X angle.
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotationCenter(System::Drawing::PointF value) = 0;
    /// <summary>
    /// Specifies what the origin of the motion path is relative to such as the layout of the slide,
    /// or the parent.
    /// Read <see cref="MotionOriginType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API MotionOriginType get_Origin() = 0;
    /// <summary>
    /// Specifies what the origin of the motion path is relative to such as the layout of the slide,
    /// or the parent.
    /// Write <see cref="MotionOriginType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Origin(MotionOriginType value) = 0;
    /// <summary>
    /// Specifies the path primitive followed by coordinates for the animation motion.
    /// Read <see cref="Aspose::Slides::Animation::IMotionPath">IMotionPath</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMotionPath> get_Path() = 0;
    /// <summary>
    /// Specifies the path primitive followed by coordinates for the animation motion.
    /// Write <see cref="Aspose::Slides::Animation::IMotionPath">IMotionPath</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Path(System::SharedPtr<IMotionPath> value) = 0;
    /// <summary>
    /// Specifies how the motion path moves when shape is moved.
    /// Read <see cref="MotionPathEditMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API MotionPathEditMode get_PathEditMode() = 0;
    /// <summary>
    /// Specifies how the motion path moves when shape is moved.
    /// Write <see cref="MotionPathEditMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PathEditMode(MotionPathEditMode value) = 0;
    /// <summary>
    /// Describes the relative angle of the motion path.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Angle() = 0;
    /// <summary>
    /// Describes the relative angle of the motion path.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Angle(float value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


