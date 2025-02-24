#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent types of points in animation motion path.
/// </summary>
enum class MotionPathPointsType
{
    /// <summary ></summary>
    None = 0,
    /// <summary ></summary>
    Auto,
    /// <summary ></summary>
    Corner,
    /// <summary ></summary>
    Straight,
    /// <summary ></summary>
    Smooth,
    /// <summary ></summary>
    CurveAuto,
    /// <summary ></summary>
    CurveCorner,
    /// <summary ></summary>
    CurveStraight,
    /// <summary ></summary>
    CurveSmooth
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::MotionPathPointsType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::MotionPathPointsType, const char_t*>, 9>& values();
};
/// @endcond



