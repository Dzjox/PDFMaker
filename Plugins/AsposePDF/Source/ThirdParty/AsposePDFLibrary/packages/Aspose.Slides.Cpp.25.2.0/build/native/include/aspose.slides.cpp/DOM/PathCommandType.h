#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents graphics path commands
/// </summary>
enum class PathCommandType : uint8_t
{
    /// <summary>
    /// Closes geometry path
    /// </summary>
    Close,
    /// <summary>
    /// Sets next point position of the geometry path
    /// </summary>
    MoveTo,
    /// <summary>
    /// Appends line to the geometry path
    /// </summary>
    LineTo,
    /// <summary>
    /// Appends the specified arc to the geometry path.
    /// </summary>
    ArcTo,
    /// <summary>
    /// Appends quadratic Bezier curve to the geometry path
    /// </summary>
    QuadBezierTo,
    /// <summary>
    /// Appends cubic Bezier curve to the geometry path
    /// </summary>
    CubicBezierTo
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PathCommandType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PathCommandType, const char_t*>, 6>& values();
};
/// @endcond



