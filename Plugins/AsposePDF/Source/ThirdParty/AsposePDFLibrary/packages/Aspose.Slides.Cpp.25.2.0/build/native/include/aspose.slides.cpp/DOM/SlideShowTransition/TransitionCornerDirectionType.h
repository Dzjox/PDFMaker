#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represent corner direction transition types.
/// </summary>
enum class TransitionCornerDirectionType
{
    /// <summary ></summary>
    LeftDown = 0,
    /// <summary ></summary>
    LeftUp,
    /// <summary ></summary>
    RightDown,
    /// <summary ></summary>
    RightUp
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionCornerDirectionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionCornerDirectionType, const char_t*>, 4>& values();
};
/// @endcond



