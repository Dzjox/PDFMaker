#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents the pictures compression level
/// </summary>
enum class PicturesCompression
{
    /// <summary>
    /// Good quality for high-definition (HD) displays
    /// </summary>
    Dpi330,
    /// <summary>
    /// Excellent quality on most printers and screens
    /// </summary>
    Dpi220,
    /// <summary>
    /// Good for web pages and projectors
    /// </summary>
    Dpi150,
    /// <summary>
    /// Minimize document size for sharing
    /// </summary>
    Dpi96,
    /// <summary>
    /// Default compression level
    /// </summary>
    Dpi72,
    /// <summary>
    /// Use document resolution - the picture will not be compressed and used in document as-is
    /// </summary>
    DocumentResolution
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::PicturesCompression>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::PicturesCompression, const char_t*>, 6>& values();
};
/// @endcond



