#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents text wrapping shape.
/// </summary>
enum class TextShapeType : int8_t
{
    /// <summary>
    /// Not defined
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// No shape
    /// </summary>
    None,
    /// <summary>
    /// Plain
    /// </summary>
    Plain,
    /// <summary>
    /// Stop Sign
    /// </summary>
    Stop,
    /// <summary>
    /// Triangle
    /// </summary>
    Triangle,
    /// <summary>
    /// Inverted Triangle
    /// </summary>
    TriangleInverted,
    /// <summary>
    /// Chevron
    /// </summary>
    Chevron,
    /// <summary>
    /// Inverted Chevron
    /// </summary>
    ChevronInverted,
    /// <summary>
    /// Inside Ring
    /// </summary>
    RingInside,
    /// <summary>
    /// Outside Ring
    /// </summary>
    RingOutside,
    /// <summary>
    /// Upward Arch
    /// </summary>
    ArchUp,
    /// <summary>
    /// Downward Arch
    /// </summary>
    ArchDown,
    /// <summary>
    /// Circle
    /// </summary>
    Circle,
    /// <summary>
    /// Button
    /// </summary>
    Button,
    /// <summary>
    /// Upward Pour Arch
    /// </summary>
    ArchUpPour,
    /// <summary>
    /// Downward Pour Arch
    /// </summary>
    ArchDownPour,
    /// <summary>
    /// Circle Pour
    /// </summary>
    CirclePour,
    /// <summary>
    /// Button Pour
    /// </summary>
    ButtonPour,
    /// <summary>
    /// Upward Curve
    /// </summary>
    CurveUp,
    /// <summary>
    /// Downward Curve
    /// </summary>
    CurveDown,
    /// <summary>
    /// Upward Can
    /// </summary>
    CanUp,
    /// <summary>
    /// Downward Can
    /// </summary>
    CanDown,
    /// <summary>
    /// Wave 1
    /// </summary>
    Wave1,
    /// <summary>
    /// Wave 2
    /// </summary>
    Wave2,
    /// <summary>
    /// Double Wave 1
    /// </summary>
    DoubleWave1,
    /// <summary>
    /// Wave 4
    /// </summary>
    Wave4,
    /// <summary>
    /// Inflate
    /// </summary>
    Inflate,
    /// <summary>
    /// Deflate
    /// </summary>
    Deflate,
    /// <summary>
    /// Bottom Inflate
    /// </summary>
    InflateBottom,
    /// <summary>
    /// Bottom Deflate
    /// </summary>
    DeflateBottom,
    /// <summary>
    /// Top Inflate
    /// </summary>
    InflateTop,
    /// <summary>
    /// Top Deflate
    /// </summary>
    DeflateTop,
    /// <summary>
    /// Deflate-Inflate
    /// </summary>
    DeflateInflate,
    /// <summary>
    /// Deflate-Inflate-Deflate
    /// </summary>
    DeflateInflateDeflate,
    /// <summary>
    /// Right Fade
    /// </summary>
    FadeRight,
    /// <summary>
    /// Left Fade
    /// </summary>
    FadeLeft,
    /// <summary>
    /// Upward Fade
    /// </summary>
    FadeUp,
    /// <summary>
    /// Downward Fade
    /// </summary>
    FadeDown,
    /// <summary>
    /// Upward Slant
    /// </summary>
    SlantUp,
    /// <summary>
    /// Downward Slant
    /// </summary>
    SlantDown,
    /// <summary>
    /// Upward Cascade
    /// </summary>
    CascadeUp,
    /// <summary>
    /// Downward Cascade
    /// </summary>
    CascadeDown,
    /// <summary>
    /// Custom
    /// </summary>
    Custom
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TextShapeType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TextShapeType, const char_t*>, 43>& values();
};
/// @endcond



