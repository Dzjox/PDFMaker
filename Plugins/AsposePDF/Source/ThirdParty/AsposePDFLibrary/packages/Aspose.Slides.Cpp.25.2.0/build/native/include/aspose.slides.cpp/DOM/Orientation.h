#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the orientation of a shape.
/// </summary>
enum class Orientation : int8_t
{
    /// <summary>
    /// Horizontal.
    /// </summary>
    Horizontal,
    /// <summary>
    /// Vertical.
    /// </summary>
    Vertical
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Orientation>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Orientation, const char_t*>, 2>& values();
};
/// @endcond



