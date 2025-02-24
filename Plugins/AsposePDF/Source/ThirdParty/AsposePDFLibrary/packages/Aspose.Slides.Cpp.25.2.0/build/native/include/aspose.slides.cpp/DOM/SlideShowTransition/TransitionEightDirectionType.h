#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represent eight direction transition types.
/// </summary>
enum class TransitionEightDirectionType
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
    Left,
    /// <summary ></summary>
    Up,
    /// <summary ></summary>
    Down,
    /// <summary ></summary>
    Right
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionEightDirectionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionEightDirectionType, const char_t*>, 8>& values();
};
/// @endcond



