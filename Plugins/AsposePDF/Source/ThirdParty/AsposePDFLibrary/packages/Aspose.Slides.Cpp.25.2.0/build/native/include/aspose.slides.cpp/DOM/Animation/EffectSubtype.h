#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents subtypes of animation effect.
/// </summary>
enum class EffectSubtype
{
    /// <summary/>
    None = 0,
    /// <summary/>
    Across,
    /// <summary/>
    Bottom,
    /// <summary/>
    BottomLeft,
    /// <summary/>
    BottomRight,
    /// <summary/>
    Center,
    /// <summary ></summary>
    ObjectCenter,
    /// <summary ></summary>
    SlideCenter,
    /// <summary/>
    Clockwise,
    /// <summary ></summary>
    CounterClockwise,
    /// <summary ></summary>
    GradualAndCycleClockwise,
    /// <summary ></summary>
    GradualAndCycleCounterClockwise,
    /// <summary ></summary>
    Down,
    /// <summary ></summary>
    DownLeft,
    /// <summary ></summary>
    DownRight,
    /// <summary ></summary>
    FontAllCaps,
    /// <summary ></summary>
    FontBold,
    /// <summary ></summary>
    FontItalic,
    /// <summary ></summary>
    FontShadow,
    /// <summary ></summary>
    FontStrikethrough,
    /// <summary ></summary>
    FontUnderline,
    /// <summary ></summary>
    Gradual,
    /// <summary ></summary>
    Horizontal,
    /// <summary ></summary>
    HorizontalIn,
    /// <summary ></summary>
    HorizontalOut,
    /// <summary ></summary>
    In,
    /// <summary ></summary>
    InBottom,
    /// <summary ></summary>
    InCenter,
    /// <summary ></summary>
    InSlightly,
    /// <summary ></summary>
    Instant,
    /// <summary ></summary>
    Left,
    /// <summary ></summary>
    OrdinalMask,
    /// <summary ></summary>
    Out,
    /// <summary ></summary>
    OutBottom,
    /// <summary ></summary>
    OutCenter,
    /// <summary ></summary>
    OutSlightly,
    /// <summary ></summary>
    Right,
    /// <summary ></summary>
    Slightly,
    /// <summary ></summary>
    Top,
    /// <summary ></summary>
    TopLeft,
    /// <summary ></summary>
    TopRight,
    /// <summary ></summary>
    Up,
    /// <summary ></summary>
    UpLeft,
    /// <summary ></summary>
    UpRight,
    /// <summary ></summary>
    Vertical,
    /// <summary ></summary>
    VerticalIn,
    /// <summary ></summary>
    VerticalOut,
    /// <summary ></summary>
    Wheel1,
    /// <summary ></summary>
    Wheel2,
    /// <summary ></summary>
    Wheel3,
    /// <summary ></summary>
    Wheel4,
    /// <summary ></summary>
    Wheel8
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::EffectSubtype>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::EffectSubtype, const char_t*>, 52>& values();
};
/// @endcond



