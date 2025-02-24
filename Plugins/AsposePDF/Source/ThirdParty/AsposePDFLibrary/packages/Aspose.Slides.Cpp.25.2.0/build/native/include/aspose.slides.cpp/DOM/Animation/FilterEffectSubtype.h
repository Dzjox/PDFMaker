#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents filter effect subtypes.
/// </summary>
enum class FilterEffectSubtype
{
    /// <summary ></summary>
    None = 0,
    /// <summary ></summary>
    Across,
    /// <summary ></summary>
    Down,
    /// <summary ></summary>
    DownLeft,
    /// <summary ></summary>
    DownRight,
    /// <summary ></summary>
    FromBottom,
    /// <summary ></summary>
    FromLeft,
    /// <summary ></summary>
    FromRight,
    /// <summary ></summary>
    FromTop,
    /// <summary ></summary>
    Horizontal,
    /// <summary ></summary>
    In,
    /// <summary ></summary>
    InHorizontal,
    /// <summary ></summary>
    InVertical,
    /// <summary ></summary>
    Left,
    /// <summary ></summary>
    Out,
    /// <summary ></summary>
    OutHorizontal,
    /// <summary ></summary>
    OutVertical,
    /// <summary ></summary>
    Right,
    /// <summary ></summary>
    Spokes1,
    /// <summary ></summary>
    Spokes2,
    /// <summary ></summary>
    Spokes3,
    /// <summary ></summary>
    Spokes4,
    /// <summary ></summary>
    Spokes8,
    /// <summary ></summary>
    Up,
    /// <summary ></summary>
    UpLeft,
    /// <summary ></summary>
    UpRight,
    /// <summary ></summary>
    Vertical
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::FilterEffectSubtype>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::FilterEffectSubtype, const char_t*>, 27>& values();
};
/// @endcond



