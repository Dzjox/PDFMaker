#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents CSS2 coordinate units used to define SVG coordinates.
/// </summary>
enum class SvgCoordinateUnit
{
    /// <summary>
    /// Inch
    /// </summary>
    Inch,
    /// <summary>
    /// Centimeter.
    /// </summary>
    Centimeter,
    /// <summary>
    /// Millimeter.
    /// </summary>
    Millimeter,
    /// <summary>
    /// Point (1/72 of inch),
    /// </summary>
    Point,
    /// <summary>
    /// Pica (1/6 of inch).
    /// </summary>
    Pica,
    /// <summary>
    /// Em size of a font of containing element.
    /// </summary>
    Em,
    /// <summary>
    /// Ex size (size of lowercase letter, usualy "x") of font of containing element.
    /// </summary>
    Ex,
    /// <summary>
    /// Pixel size.
    /// </summary>
    Pixel,
    /// <summary>
    /// Percent.
    /// </summary>
    Percent
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::SvgCoordinateUnit>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::SvgCoordinateUnit, const char_t*>, 9>& values();
};
/// @endcond



