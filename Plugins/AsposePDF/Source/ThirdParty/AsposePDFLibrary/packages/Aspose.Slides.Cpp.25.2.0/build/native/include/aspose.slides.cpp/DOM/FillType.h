#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Specifies the interior fill type of various visual objects.
/// </summary>
enum class FillType : int8_t
{
    /// <summary>
    /// The fill type is not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// No fill applied.
    /// </summary>
    NoFill = 0,
    /// <summary>
    /// Filled with a solid color.
    /// </summary>
    Solid = 1,
    /// <summary>
    /// The fill is gradient.
    /// </summary>
    Gradient = 2,
    /// <summary>
    /// Repeating pattern is used to fill the object.
    /// </summary>
    Pattern = 3,
    /// <summary>
    /// A single picture is used to fill the object.
    /// </summary>
    Picture = 4,
    /// <summary>
    /// The visual object inherits the fill properties from the group.
    /// </summary>
    Group = 5
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::FillType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::FillType, const char_t*>, 7>& values();
};
/// @endcond



