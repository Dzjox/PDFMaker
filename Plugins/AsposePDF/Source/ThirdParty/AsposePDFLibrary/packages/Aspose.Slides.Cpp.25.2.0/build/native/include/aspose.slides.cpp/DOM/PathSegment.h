#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IPathSegment.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class GeometryPath;
enum class PathCommandType : uint8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents segment of graphics path of GeometryShape
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PathSegment final : public Aspose::Slides::IPathSegment
{
    typedef PathSegment ThisType;
    typedef Aspose::Slides::IPathSegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GeometryPath;
    /// @endcond
    
public:

    /// <summary>
    /// Path data of the segment
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> get_SegmentData() override;
    /// <summary>
    /// Path type of the segment
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PathCommandType get_PathCommand() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API PathSegment(PathCommandType pathType, System::ArrayPtr<float> segmentData);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PathSegment, CODEPORTING_ARGS(PathCommandType pathType, System::ArrayPtr<float> segmentData));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void GetBounds(float& left, float& right, float& top, float& bottom);
    /// @endcond
    
private:

    System::ArrayPtr<float> m_segmentData;
    PathCommandType m_pathType;
    
};

} // namespace Slides
} // namespace Aspose


