#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the slide orientation.
/// </summary>
enum class SlideOrientation
{
    /// <summary>
    /// Landscape orientation.
    /// </summary>
    Landscape,
    /// <summary>
    /// Portrait orientation.
    /// </summary>
    Portrait
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideOrientation>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideOrientation, const char_t*>, 2>& values();
};
/// @endcond



