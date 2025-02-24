#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents filter effect types.
/// </summary>
enum class FilterEffectType
{
    /// <summary ></summary>
    None = 0,
    /// <summary ></summary>
    Barn,
    /// <summary ></summary>
    Blinds,
    /// <summary ></summary>
    Box,
    /// <summary ></summary>
    Checkerboard,
    /// <summary ></summary>
    Circle,
    /// <summary ></summary>
    Diamond,
    /// <summary ></summary>
    Dissolve,
    /// <summary ></summary>
    Fade,
    /// <summary ></summary>
    Image,
    /// <summary ></summary>
    Pixelate,
    /// <summary ></summary>
    Plus,
    /// <summary ></summary>
    RandomBar,
    /// <summary ></summary>
    Slide,
    /// <summary ></summary>
    Stretch,
    /// <summary ></summary>
    Strips,
    /// <summary ></summary>
    Wedge,
    /// <summary ></summary>
    Wheel,
    /// <summary ></summary>
    Wipe
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::FilterEffectType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::FilterEffectType, const char_t*>, 19>& values();
};
/// @endcond



