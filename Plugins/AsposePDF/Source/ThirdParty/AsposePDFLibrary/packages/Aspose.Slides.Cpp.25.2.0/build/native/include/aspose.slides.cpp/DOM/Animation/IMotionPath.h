#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class IMotionCmdPath;
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
/// Represent motion path.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMotionPath : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::IMotionCmdPath>>
{
    typedef IMotionPath ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::IMotionCmdPath>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the number of paths in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Add new command to path
    /// </summary>
    /// <param name="type">Type of command for animation motion effect behavior <see cref="MotionCommandPathType"></see></param>
    /// <param name="pts">Points array <see cref="System::Drawing::PointF"></see>[]</param>
    /// <param name="ptsType">Type of points in animation motion path <see cref="MotionPathPointsType"></see></param>
    /// <param name="bRelativeCoord">Indicates whether to use relative coordinates or not <see cref="bool"></see></param>
    /// <returns>Command of a path <see cref="Aspose::Slides::Animation::IMotionCmdPath">IMotionCmdPath</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMotionCmdPath> Add(MotionCommandPathType type, System::ArrayPtr<System::Drawing::PointF> pts, MotionPathPointsType ptsType, bool bRelativeCoord) = 0;
    /// <summary>
    /// Insert new command to path
    /// </summary>
    /// <param name="index">Index for command insertion <see cref="int32_t"></see></param>
    /// <param name="type">Type of command for animation motion effect behavior <see cref="MotionCommandPathType"></see></param>
    /// <param name="pts">Points array <see cref="System::Drawing::PointF"></see>[]</param>
    /// <param name="ptsType">Type of points in animation motion path <see cref="MotionPathPointsType"></see></param>
    /// <param name="bRelativeCoord">Indicates whether to use relative coordinates or not <see cref="bool"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, MotionCommandPathType type, System::ArrayPtr<System::Drawing::PointF> pts, MotionPathPointsType ptsType, bool bRelativeCoord) = 0;
    /// <summary>
    /// Removes all commands from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Removes specified commans from the collection.
    /// </summary>
    /// <param name="item">Motion path to remove <see cref="Aspose::Slides::Animation::IMotionCmdPath">IMotionCmdPath</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IMotionCmdPath> item) = 0;
    /// <summary>
    /// Removes a command at the specified index.
    /// </summary>
    /// <param name="index">Index for removing command <see cref="int32_t"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    
    /// <summary>
    /// Returns a command at the specified index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns>Command at specified index <see cref="Aspose::Slides::Animation::IMotionCmdPath">IMotionCmdPath</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMotionCmdPath> idx_get(int32_t index) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


