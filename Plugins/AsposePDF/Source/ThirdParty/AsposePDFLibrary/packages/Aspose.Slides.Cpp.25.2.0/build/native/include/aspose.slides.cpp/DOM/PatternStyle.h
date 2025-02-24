#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the pattern style.
/// </summary>
enum class PatternStyle : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Unknown = 0,
    /// <summary>
    /// 
    /// </summary>
    Percent05 = 1,
    /// <summary>
    /// 
    /// </summary>
    Percent10 = 2,
    /// <summary>
    /// 
    /// </summary>
    Percent20 = 3,
    /// <summary>
    /// 
    /// </summary>
    Percent25 = 4,
    /// <summary>
    /// 
    /// </summary>
    Percent30 = 5,
    /// <summary>
    /// 
    /// </summary>
    Percent40 = 6,
    /// <summary>
    /// 
    /// </summary>
    Percent50 = 7,
    /// <summary>
    /// 
    /// </summary>
    Percent60 = 8,
    /// <summary>
    /// 
    /// </summary>
    Percent70 = 9,
    /// <summary>
    /// 
    /// </summary>
    Percent75 = 10,
    /// <summary>
    /// 
    /// </summary>
    Percent80 = 11,
    /// <summary>
    /// 
    /// </summary>
    Percent90 = 12,
    /// <summary>
    /// 
    /// </summary>
    DarkHorizontal = 13,
    /// <summary>
    /// 
    /// </summary>
    DarkVertical = 14,
    /// <summary>
    /// 
    /// </summary>
    DarkDownwardDiagonal = 15,
    /// <summary>
    /// 
    /// </summary>
    DarkUpwardDiagonal = 16,
    /// <summary>
    /// 
    /// </summary>
    SmallCheckerBoard = 17,
    /// <summary>
    /// 
    /// </summary>
    Trellis = 18,
    /// <summary>
    /// 
    /// </summary>
    LightHorizontal = 19,
    /// <summary>
    /// 
    /// </summary>
    LightVertical = 20,
    /// <summary>
    /// 
    /// </summary>
    LightDownwardDiagonal = 21,
    /// <summary>
    /// 
    /// </summary>
    LightUpwardDiagonal = 22,
    /// <summary>
    /// 
    /// </summary>
    SmallGrid = 23,
    /// <summary>
    /// 
    /// </summary>
    DottedDiamond = 24,
    /// <summary>
    /// 
    /// </summary>
    WideDownwardDiagonal = 25,
    /// <summary>
    /// 
    /// </summary>
    WideUpwardDiagonal = 26,
    /// <summary>
    /// 
    /// </summary>
    DashedDownwardDiagonal = 27,
    /// <summary>
    /// 
    /// </summary>
    DashedUpwardDiagonal = 28,
    /// <summary>
    /// 
    /// </summary>
    NarrowVertical = 29,
    /// <summary>
    /// 
    /// </summary>
    NarrowHorizontal = 30,
    /// <summary>
    /// 
    /// </summary>
    DashedVertical = 31,
    /// <summary>
    /// 
    /// </summary>
    DashedHorizontal = 32,
    /// <summary>
    /// 
    /// </summary>
    LargeConfetti = 33,
    /// <summary>
    /// 
    /// </summary>
    LargeGrid = 34,
    /// <summary>
    /// 
    /// </summary>
    HorizontalBrick = 35,
    /// <summary>
    /// 
    /// </summary>
    LargeCheckerBoard = 36,
    /// <summary>
    /// 
    /// </summary>
    SmallConfetti = 37,
    /// <summary>
    /// 
    /// </summary>
    Zigzag = 38,
    /// <summary>
    /// 
    /// </summary>
    SolidDiamond = 39,
    /// <summary>
    /// 
    /// </summary>
    DiagonalBrick = 40,
    /// <summary>
    /// 
    /// </summary>
    OutlinedDiamond = 41,
    /// <summary>
    /// 
    /// </summary>
    Plaid = 42,
    /// <summary>
    /// 
    /// </summary>
    Sphere = 43,
    /// <summary>
    /// 
    /// </summary>
    Weave = 44,
    /// <summary>
    /// 
    /// </summary>
    DottedGrid = 45,
    /// <summary>
    /// 
    /// </summary>
    Divot = 46,
    /// <summary>
    /// 
    /// </summary>
    Shingle = 47,
    /// <summary>
    /// 
    /// </summary>
    Wave = 48,
    /// <summary>
    /// 
    /// </summary>
    Horizontal = 49,
    /// <summary>
    /// 
    /// </summary>
    Vertical = 50,
    /// <summary>
    /// 
    /// </summary>
    Cross = 51,
    /// <summary>
    /// 
    /// </summary>
    DownwardDiagonal = 52,
    /// <summary>
    /// 
    /// </summary>
    UpwardDiagonal = 53,
    /// <summary>
    /// 
    /// </summary>
    DiagonalCross = 54
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PatternStyle>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PatternStyle, const char_t*>, 56>& values();
};
/// @endcond



