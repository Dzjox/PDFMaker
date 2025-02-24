#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents predefined color presets.
/// </summary>
enum class PresetColor
{
    /// <summary>
    /// Color preset is not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    AliceBlue,
    /// <summary>
    /// 
    /// </summary>
    AntiqueWhite,
    /// <summary>
    /// 
    /// </summary>
    Aqua,
    /// <summary>
    /// 
    /// </summary>
    Aquamarine,
    /// <summary>
    /// 
    /// </summary>
    Azure,
    /// <summary>
    /// 
    /// </summary>
    Beige,
    /// <summary>
    /// 
    /// </summary>
    Bisque,
    /// <summary>
    /// 
    /// </summary>
    Black,
    /// <summary>
    /// 
    /// </summary>
    BlanchedAlmond,
    /// <summary>
    /// 
    /// </summary>
    Blue,
    /// <summary>
    /// 
    /// </summary>
    BlueViolet,
    /// <summary>
    /// 
    /// </summary>
    Brown,
    /// <summary>
    /// 
    /// </summary>
    BurlyWood,
    /// <summary>
    /// 
    /// </summary>
    CadetBlue,
    /// <summary>
    /// 
    /// </summary>
    Chartreuse,
    /// <summary>
    /// 
    /// </summary>
    Chocolate,
    /// <summary>
    /// 
    /// </summary>
    Coral,
    /// <summary>
    /// 
    /// </summary>
    CornflowerBlue,
    /// <summary>
    /// 
    /// </summary>
    Cornsilk,
    /// <summary>
    /// 
    /// </summary>
    Crimson,
    /// <summary>
    /// 
    /// </summary>
    Cyan,
    /// <summary>
    /// 
    /// </summary>
    DarkBlue,
    /// <summary>
    /// 
    /// </summary>
    DarkCyan,
    /// <summary>
    /// 
    /// </summary>
    DarkGoldenrod,
    /// <summary>
    /// 
    /// </summary>
    DarkGray,
    /// <summary>
    /// 
    /// </summary>
    DarkGreen,
    /// <summary>
    /// 
    /// </summary>
    DarkKhaki,
    /// <summary>
    /// 
    /// </summary>
    DarkMagenta,
    /// <summary>
    /// 
    /// </summary>
    DarkOliveGreen,
    /// <summary>
    /// 
    /// </summary>
    DarkOrange,
    /// <summary>
    /// 
    /// </summary>
    DarkOrchid,
    /// <summary>
    /// 
    /// </summary>
    DarkRed,
    /// <summary>
    /// 
    /// </summary>
    DarkSalmon,
    /// <summary>
    /// 
    /// </summary>
    DarkSeaGreen,
    /// <summary>
    /// 
    /// </summary>
    DarkSlateBlue,
    /// <summary>
    /// 
    /// </summary>
    DarkSlateGray,
    /// <summary>
    /// 
    /// </summary>
    DarkTurquoise,
    /// <summary>
    /// 
    /// </summary>
    DarkViolet,
    /// <summary>
    /// 
    /// </summary>
    DeepPink,
    /// <summary>
    /// 
    /// </summary>
    DeepSkyBlue,
    /// <summary>
    /// 
    /// </summary>
    DimGray,
    /// <summary>
    /// 
    /// </summary>
    DodgerBlue,
    /// <summary>
    /// 
    /// </summary>
    Firebrick,
    /// <summary>
    /// 
    /// </summary>
    FloralWhite,
    /// <summary>
    /// 
    /// </summary>
    ForestGreen,
    /// <summary>
    /// 
    /// </summary>
    Fuchsia,
    /// <summary>
    /// 
    /// </summary>
    Gainsboro,
    /// <summary>
    /// 
    /// </summary>
    GhostWhite,
    /// <summary>
    /// 
    /// </summary>
    Gold,
    /// <summary>
    /// 
    /// </summary>
    Goldenrod,
    /// <summary>
    /// 
    /// </summary>
    Gray,
    /// <summary>
    /// 
    /// </summary>
    Green,
    /// <summary>
    /// 
    /// </summary>
    GreenYellow,
    /// <summary>
    /// 
    /// </summary>
    Honeydew,
    /// <summary>
    /// 
    /// </summary>
    HotPink,
    /// <summary>
    /// 
    /// </summary>
    IndianRed,
    /// <summary>
    /// 
    /// </summary>
    Indigo,
    /// <summary>
    /// 
    /// </summary>
    Ivory,
    /// <summary>
    /// 
    /// </summary>
    Khaki,
    /// <summary>
    /// 
    /// </summary>
    Lavender,
    /// <summary>
    /// 
    /// </summary>
    LavenderBlush,
    /// <summary>
    /// 
    /// </summary>
    LawnGreen,
    /// <summary>
    /// 
    /// </summary>
    LemonChiffon,
    /// <summary>
    /// 
    /// </summary>
    LightBlue,
    /// <summary>
    /// 
    /// </summary>
    LightCoral,
    /// <summary>
    /// 
    /// </summary>
    LightCyan,
    /// <summary>
    /// 
    /// </summary>
    LightGoldenrodYellow,
    /// <summary>
    /// 
    /// </summary>
    LightGray,
    /// <summary>
    /// 
    /// </summary>
    LightGreen,
    /// <summary>
    /// 
    /// </summary>
    LightPink,
    /// <summary>
    /// 
    /// </summary>
    LightSalmon,
    /// <summary>
    /// 
    /// </summary>
    LightSeaGreen,
    /// <summary>
    /// 
    /// </summary>
    LightSkyBlue,
    /// <summary>
    /// 
    /// </summary>
    LightSlateGray,
    /// <summary>
    /// 
    /// </summary>
    LightSteelBlue,
    /// <summary>
    /// 
    /// </summary>
    LightYellow,
    /// <summary>
    /// 
    /// </summary>
    Lime,
    /// <summary>
    /// 
    /// </summary>
    LimeGreen,
    /// <summary>
    /// 
    /// </summary>
    Linen,
    /// <summary>
    /// 
    /// </summary>
    Magenta,
    /// <summary>
    /// 
    /// </summary>
    Maroon,
    /// <summary>
    /// 
    /// </summary>
    MediumAquamarine,
    /// <summary>
    /// 
    /// </summary>
    MediumBlue,
    /// <summary>
    /// 
    /// </summary>
    MediumOrchid,
    /// <summary>
    /// 
    /// </summary>
    MediumPurple,
    /// <summary>
    /// 
    /// </summary>
    MediumSeaGreen,
    /// <summary>
    /// 
    /// </summary>
    MediumSlateBlue,
    /// <summary>
    /// 
    /// </summary>
    MediumSpringGreen,
    /// <summary>
    /// 
    /// </summary>
    MediumTurquoise,
    /// <summary>
    /// 
    /// </summary>
    MediumVioletRed,
    /// <summary>
    /// 
    /// </summary>
    MidnightBlue,
    /// <summary>
    /// 
    /// </summary>
    MintCream,
    /// <summary>
    /// 
    /// </summary>
    MistyRose,
    /// <summary>
    /// 
    /// </summary>
    Moccasin,
    /// <summary>
    /// 
    /// </summary>
    NavajoWhite,
    /// <summary>
    /// 
    /// </summary>
    Navy,
    /// <summary>
    /// 
    /// </summary>
    OldLace,
    /// <summary>
    /// 
    /// </summary>
    Olive,
    /// <summary>
    /// 
    /// </summary>
    OliveDrab,
    /// <summary>
    /// 
    /// </summary>
    Orange,
    /// <summary>
    /// 
    /// </summary>
    OrangeRed,
    /// <summary>
    /// 
    /// </summary>
    Orchid,
    /// <summary>
    /// 
    /// </summary>
    PaleGoldenrod,
    /// <summary>
    /// 
    /// </summary>
    PaleGreen,
    /// <summary>
    /// 
    /// </summary>
    PaleTurquoise,
    /// <summary>
    /// 
    /// </summary>
    PaleVioletRed,
    /// <summary>
    /// 
    /// </summary>
    PapayaWhip,
    /// <summary>
    /// 
    /// </summary>
    PeachPuff,
    /// <summary>
    /// 
    /// </summary>
    Peru,
    /// <summary>
    /// 
    /// </summary>
    Pink,
    /// <summary>
    /// 
    /// </summary>
    Plum,
    /// <summary>
    /// 
    /// </summary>
    PowderBlue,
    /// <summary>
    /// 
    /// </summary>
    Purple,
    /// <summary>
    /// 
    /// </summary>
    Red,
    /// <summary>
    /// 
    /// </summary>
    RosyBrown,
    /// <summary>
    /// 
    /// </summary>
    RoyalBlue,
    /// <summary>
    /// 
    /// </summary>
    SaddleBrown,
    /// <summary>
    /// 
    /// </summary>
    Salmon,
    /// <summary>
    /// 
    /// </summary>
    SandyBrown,
    /// <summary>
    /// 
    /// </summary>
    SeaGreen,
    /// <summary>
    /// 
    /// </summary>
    SeaShell,
    /// <summary>
    /// 
    /// </summary>
    Sienna,
    /// <summary>
    /// 
    /// </summary>
    Silver,
    /// <summary>
    /// 
    /// </summary>
    SkyBlue,
    /// <summary>
    /// 
    /// </summary>
    SlateBlue,
    /// <summary>
    /// 
    /// </summary>
    SlateGray,
    /// <summary>
    /// 
    /// </summary>
    Snow,
    /// <summary>
    /// 
    /// </summary>
    SpringGreen,
    /// <summary>
    /// 
    /// </summary>
    SteelBlue,
    /// <summary>
    /// 
    /// </summary>
    Tan,
    /// <summary>
    /// 
    /// </summary>
    Teal,
    /// <summary>
    /// 
    /// </summary>
    Thistle,
    /// <summary>
    /// 
    /// </summary>
    Tomato,
    /// <summary>
    /// 
    /// </summary>
    Turquoise,
    /// <summary>
    /// 
    /// </summary>
    Violet,
    /// <summary>
    /// 
    /// </summary>
    Wheat,
    /// <summary>
    /// 
    /// </summary>
    White,
    /// <summary>
    /// 
    /// </summary>
    WhiteSmoke,
    /// <summary>
    /// 
    /// </summary>
    Yellow,
    /// <summary>
    /// 
    /// </summary>
    YellowGreen
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PresetColor>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PresetColor, const char_t*>, 141>& values();
};
/// @endcond



