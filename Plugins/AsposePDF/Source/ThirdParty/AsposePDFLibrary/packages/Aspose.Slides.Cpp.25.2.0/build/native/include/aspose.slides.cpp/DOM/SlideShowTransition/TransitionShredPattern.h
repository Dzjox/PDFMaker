#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Specifies a geometric shape that tiles together to fill a larger area.
/// </summary>
enum class TransitionShredPattern
{
    /// <summary>
    /// Vertical strips
    /// </summary>
    Strip = 0,
    /// <summary>
    /// Small rectangles
    /// </summary>
    Rectangle
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionShredPattern>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionShredPattern, const char_t*>, 2>& values();
};
/// @endcond



