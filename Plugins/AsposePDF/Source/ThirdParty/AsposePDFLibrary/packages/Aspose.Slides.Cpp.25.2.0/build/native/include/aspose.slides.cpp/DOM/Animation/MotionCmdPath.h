#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <drawing/point_f.h>
#include <DOM/Animation/IMotionCmdPath.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class MotionCommandPathType;
class MotionPath;
enum class MotionPathPointsType;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent one command of a path.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MotionCmdPath : public Aspose::Slides::Animation::IMotionCmdPath
{
    typedef MotionCmdPath ThisType;
    typedef Aspose::Slides::Animation::IMotionCmdPath BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Animation::MotionPath;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies points of command.
    /// Read <see cref="System::Drawing::PointF"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::Drawing::PointF> get_Points() override;
    /// <summary>
    /// Specifies points of command.
    /// Write <see cref="System::Drawing::PointF"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Points(System::ArrayPtr<System::Drawing::PointF> value) override;
    /// <summary>
    /// Specifies command type.
    /// Read <see cref="MotionCommandPathType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MotionCommandPathType get_CommandType() override;
    /// <summary>
    /// Specifies command type.
    /// Write <see cref="MotionCommandPathType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CommandType(MotionCommandPathType value) override;
    /// <summary>
    /// Determine command coordinates relative or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsRelative() override;
    /// <summary>
    /// Determine command coordinates relative or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsRelative(bool value) override;
    /// <summary>
    /// Specifies command points type
    /// Read <see cref="MotionPathPointsType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MotionPathPointsType get_PointsType() override;
    /// <summary>
    /// Specifies command points type
    /// Write <see cref="MotionPathPointsType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PointsType(MotionPathPointsType value) override;
    
protected:

    /// @cond
    MotionCommandPathType cmd;
    bool bRelativeCoord;
    System::ArrayPtr<System::Drawing::PointF> listPts;
    MotionPathPointsType ptsType;
    
    ASPOSE_SLIDES_LOCAL_API MotionCmdPath(MotionCommandPathType type, System::ArrayPtr<System::Drawing::PointF> pts, MotionPathPointsType typePts, bool bRelCoord);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MotionCmdPath, CODEPORTING_ARGS(MotionCommandPathType type, System::ArrayPtr<System::Drawing::PointF> pts, MotionPathPointsType typePts, bool bRelCoord));
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


