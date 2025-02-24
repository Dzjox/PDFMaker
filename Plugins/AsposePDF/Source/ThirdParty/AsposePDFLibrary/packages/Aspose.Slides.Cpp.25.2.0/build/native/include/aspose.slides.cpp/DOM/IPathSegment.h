#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class PathCommandType : uint8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents segment of graphics path of GeometryShape
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPathSegment : public virtual System::Object
{
    typedef IPathSegment ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Path data of the segment
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<float> get_SegmentData() = 0;
    /// <summary>
    /// Path type of the segment
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API PathCommandType get_PathCommand() = 0;
    
};

} // namespace Slides
} // namespace Aspose


