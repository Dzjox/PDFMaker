#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents which sketch type or effect a shape has been assigned.
/// </summary>
enum class LineSketchType
{
    /// <summary>
    /// Specifies that a shape Sketch effect is undefined. 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Specifies that a shape has no Sketch effect. This is equivalent to this property being empty.
    /// </summary>
    None = 0,
    /// <summary>
    /// Specifies that a shape has the Curved effect, which turns each edge of the shape into one big gentle curve.
    /// </summary>
    Curved = 1,
    /// <summary>
    /// Specifies that a shape has the Freehand effect, which most closely resembles an imperfectly drawn line.
    /// </summary>
    Freehand = 2,
    /// <summary>
    /// Specifies that a shape has the Scribble effect, which has exaggerated oscillation as if drawn purposely messy.
    /// </summary>
    Scribble = 3
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LineSketchType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LineSketchType, const char_t*>, 5>& values();
};
/// @endcond



