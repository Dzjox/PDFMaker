#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Defines color transform operation.
/// </summary>
enum class ColorTransformOperation
{
    /// <summary>
    /// Tints the color. Parameter is in range between 0 (original color) and 1 (white).
    /// </summary>
    Tint,
    /// <summary>
    /// Shades the color. Parameter is in range between 0 (original color) and 1 (black).
    /// </summary>
    Shade,
    /// <summary>
    /// Changes the color to a RGB complementary one.
    /// m = Max(r, g, b);
    /// r = m - r;
    /// g = m - g;
    /// b = m - b;
    /// </summary>
    Complement,
    /// <summary>
    /// Changes the color to an inverted color.
    /// r = 1 - r;
    /// g = 1 - g;
    /// b = 1 - b;
    /// </summary>
    Inverse,
    /// <summary>
    /// Changes the color to a gray one with same lightness. Parameter ignored.
    /// </summary>
    Grayscale,
    /// <summary>
    /// Defines an alpha component of the color. Parameter is in range between 0 (transparent) and 1 (opaque).
    /// </summary>
    SetAlpha,
    /// <summary>
    /// Adds a parameter's value to an alpha component of the color. Parameter is in range between -1 and 1.
    /// </summary>
    AddAlpha,
    /// <summary>
    /// Multiplies an alpha component to a parameter's value.
    /// </summary>
    MultiplyAlpha,
    /// <summary>
    /// Changes a hue component of the color to a parameter's value. Parameter is in range between 0 and 360.
    /// </summary>
    SetHue,
    /// <summary>
    /// Adds parameter's value to hue component of the color. Parameter is in range between -360 and 360.
    /// </summary>
    AddHue,
    /// <summary>
    /// Multiplies a hue component to a parameter's value.
    /// </summary>
    MultiplyHue,
    /// <summary>
    /// Changes a saturation component of the color to a parameter's value. Parameter is in range between 0 and 1.
    /// </summary>
    SetSaturation,
    /// <summary>
    /// Adds a parameter's value to a saturation component of the color. Parameter is in range between -1 and 1.
    /// </summary>
    AddSaturation,
    /// <summary>
    /// Multiplies a saturation component to a parameter's value.
    /// </summary>
    MultiplySaturation,
    /// <summary>
    /// Changes a luminance component of the color to a parameter's value. Parameter is in range between 0 and 1.
    /// </summary>
    SetLuminance,
    /// <summary>
    /// Adds a parameter's value to a luminance component of the color. Parameter is in range between -1 and 1.
    /// </summary>
    AddLuminance,
    /// <summary>
    /// Multiplies a luminance component to a parameter's value.
    /// </summary>
    MultiplyLuminance,
    /// <summary>
    /// Changes a red component of the color to a parameter's value. Parameter is in range between 0 and 1.
    /// </summary>
    SetRed,
    /// <summary>
    /// Adds a parameter's value to a red component of the color. Parameter is in range between -1 and 1.
    /// </summary>
    AddRed,
    /// <summary>
    /// Multiplies a red component to a parameter.
    /// </summary>
    MultiplyRed,
    /// <summary>
    /// Changes a green component of the color to a parameter's value value. Parameter is in range between 0 and 1.
    /// </summary>
    SetGreen,
    /// <summary>
    /// Adds a parameter to a green component of the color. Parameter is in range between -1 and 1.
    /// </summary>
    AddGreen,
    /// <summary>
    /// Multiplies a green component of the color to a parameter's value.
    /// </summary>
    MultiplyGreen,
    /// <summary>
    /// Changes a blue component of the color to a parameter's value. Parameter is in range between 0 and 360.
    /// </summary>
    SetBlue,
    /// <summary>
    /// Adds a parameter's value to a blue component of the color. Parameter is in range between -1 and 1.
    /// </summary>
    AddBlue,
    /// <summary>
    /// Multiplies a blue component of the color to a parameter's value.
    /// </summary>
    MultiplyBlue,
    /// <summary>
    /// Gamma correction. Parameter ignored.
    /// </summary>
    Gamma,
    /// <summary>
    /// Inverse gamma correction. Parameter ignored.
    /// </summary>
    InverseGamma
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ColorTransformOperation>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ColorTransformOperation, const char_t*>, 28>& values();
};
/// @endcond



