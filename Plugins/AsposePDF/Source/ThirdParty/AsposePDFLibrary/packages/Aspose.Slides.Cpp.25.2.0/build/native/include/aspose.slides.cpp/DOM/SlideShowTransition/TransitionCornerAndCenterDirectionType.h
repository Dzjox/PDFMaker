#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Specifies a direction restricted to the corners and center.
/// </summary>
enum class TransitionCornerAndCenterDirectionType
{
    /// <summary ></summary>
    LeftDown = 0,
    /// <summary ></summary>
    LeftUp,
    /// <summary ></summary>
    RightDown,
    /// <summary ></summary>
    RightUp,
    /// <summary ></summary>
    Center
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionCornerAndCenterDirectionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionCornerAndCenterDirectionType, const char_t*>, 5>& values();
};
/// @endcond



