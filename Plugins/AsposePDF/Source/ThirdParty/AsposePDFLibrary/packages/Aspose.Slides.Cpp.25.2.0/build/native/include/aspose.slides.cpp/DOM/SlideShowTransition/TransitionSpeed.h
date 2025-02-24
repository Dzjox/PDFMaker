#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represent transition speed types.
/// </summary>
enum class TransitionSpeed
{
    /// <summary ></summary>
    Fast = 0,
    /// <summary ></summary>
    Medium,
    /// <summary ></summary>
    Slow
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionSpeed>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionSpeed, const char_t*>, 3>& values();
};
/// @endcond



