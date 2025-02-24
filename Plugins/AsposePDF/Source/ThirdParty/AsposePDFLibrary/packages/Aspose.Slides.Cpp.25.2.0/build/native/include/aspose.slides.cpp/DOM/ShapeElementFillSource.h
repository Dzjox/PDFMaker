#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents how shape element should be filled.
/// </summary>
enum class ShapeElementFillSource : uint8_t
{
    /// <summary>
    /// Don't fill primitive.
    /// </summary>
    NoFill,
    /// <summary>
    /// Use shape's fill.
    /// </summary>
    Shape,
    /// <summary>
    /// Use lighten shape's fill.
    /// </summary>
    Lighten,
    /// <summary>
    /// Use less lighten shape's fill.
    /// </summary>
    LightenLess,
    /// <summary>
    /// Use darken shape's fill.
    /// </summary>
    Darken,
    /// <summary>
    /// Use less darken shape's fill.
    /// </summary>
    DarkenLess
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ShapeElementFillSource>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ShapeElementFillSource, const char_t*>, 6>& values();
};
/// @endcond



