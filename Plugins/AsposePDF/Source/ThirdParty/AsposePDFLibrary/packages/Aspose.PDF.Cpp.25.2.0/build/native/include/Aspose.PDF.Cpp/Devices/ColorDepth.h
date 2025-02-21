#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Used to specify the parameter value passed to a Tiff image device.
/// </summary>
enum class ColorDepth
{
    /// <summary>
    /// Default color depth.
    /// 32 bit depth is used by default.
    /// </summary>
    Default,
    /// <summary>
    /// Rgb 24 bit depth.
    /// </summary>
    Format24bpp,
    /// <summary>
    /// 8 bits per pixel. Equal <see cref="PixelFormat::Format8bppIndexed"></see>
    /// </summary>
    Format8bpp,
    /// <summary>
    /// 4 bits per pixel. Equal <see cref="PixelFormat::Format4bppIndexed"></see>
    /// </summary>
    Format4bpp,
    /// <summary>
    /// 1 bit per pixel. Equal <see cref="PixelFormat::Format32bppRgb"></see>
    /// </summary>
    Format1bpp
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


