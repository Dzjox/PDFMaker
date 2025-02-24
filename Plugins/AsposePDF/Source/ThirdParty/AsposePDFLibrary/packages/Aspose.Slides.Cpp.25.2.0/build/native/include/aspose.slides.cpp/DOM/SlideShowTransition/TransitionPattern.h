#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Specifies a geometric pattern that tiles together to fill a larger area.
/// </summary>
enum class TransitionPattern
{
    /// <summary>
    /// Diamond tile pattern 
    /// </summary>
    Diamond = 0,
    /// <summary>
    /// Hexagon tile pattern
    /// </summary>
    Hexagon
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionPattern>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionPattern, const char_t*>, 2>& values();
};
/// @endcond



