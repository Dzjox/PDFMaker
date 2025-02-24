#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Specifies the pixel format for the generated images.
/// </summary>
enum class ImagePixelFormat
{
    /// <summary>
    /// 1 bits per pixel, indexed.
    /// </summary>
    Format1bppIndexed = 1,
    /// <summary>
    /// 4 bits per pixel, indexed.
    /// </summary>
    Format4bppIndexed = 4,
    /// <summary>
    /// 8 bits per pixel, indexed.
    /// </summary>
    Format8bppIndexed = 8,
    /// <summary>
    /// 24 bits per pixel, RGB.
    /// </summary>
    Format24bppRgb = 24,
    /// <summary>
    /// 32 bits per pixel, ARGB.
    /// </summary>
    Format32bppArgb = 32
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::ImagePixelFormat>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::ImagePixelFormat, const char_t*>, 5>& values();
};
/// @endcond



