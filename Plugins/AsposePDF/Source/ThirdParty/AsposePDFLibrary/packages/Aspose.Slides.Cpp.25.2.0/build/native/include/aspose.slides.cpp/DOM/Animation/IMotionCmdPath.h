#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class MotionCommandPathType;
enum class MotionPathPointsType;
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
/// Represent one command of a path.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMotionCmdPath : public virtual System::Object
{
    typedef IMotionCmdPath ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies points of command.
    /// Read <see cref="System::Drawing::PointF"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::Drawing::PointF> get_Points() = 0;
    /// <summary>
    /// Specifies points of command.
    /// Write <see cref="System::Drawing::PointF"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Points(System::ArrayPtr<System::Drawing::PointF> value) = 0;
    /// <summary>
    /// Specifies command type.
    /// Read <see cref="MotionCommandPathType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API MotionCommandPathType get_CommandType() = 0;
    /// <summary>
    /// Specifies command type.
    /// Write <see cref="MotionCommandPathType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CommandType(MotionCommandPathType value) = 0;
    /// <summary>
    /// Determine command coordinates relative or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsRelative() = 0;
    /// <summary>
    /// Determine command coordinates relative or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsRelative(bool value) = 0;
    /// <summary>
    /// Specifies command points type
    /// Read <see cref="MotionPathPointsType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API MotionPathPointsType get_PointsType() = 0;
    /// <summary>
    /// Specifies command points type
    /// Write <see cref="MotionPathPointsType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PointsType(MotionPathPointsType value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


