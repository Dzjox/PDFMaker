#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents how shape element should be drawn.
/// </summary>
enum class ShapeElementStrokeSource : uint8_t
{
    /// <summary>
    /// Don't stroke primitive.
    /// </summary>
    NoStroke,
    /// <summary>
    /// Use shape's LineFormat.
    /// </summary>
    Shape,
    /// <summary>
    /// Use own stroke.
    /// </summary>
    OwnStroke
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ShapeElementStrokeSource>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ShapeElementStrokeSource, const char_t*>, 3>& values();
};
/// @endcond



