#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the file format of the image.
/// </summary>
enum class ImageFormat
{
    /// <summary>
    /// Represents the format of a bitmap in memory.
    /// </summary>
    MemoryBmp,
    /// <summary>
    /// Represents the bitmap (BMP) image format.
    /// </summary>
    Bmp,
    /// <summary>
    /// Represents the enhanced metafile (EMF) image format.
    /// </summary>
    Emf,
    /// <summary>
    /// Represents the Windows metafile (WMF) image format.
    /// </summary>
    Wmf,
    /// <summary>
    /// Represents the Graphics Interchange Format (GIF) image format.
    /// </summary>
    Gif,
    /// <summary>
    /// Represents the Joint Photographic Experts Group (JPEG) image format.
    /// </summary>
    Jpeg,
    /// <summary>
    /// Represents the W3C Portable Network Graphics (PNG) image format.
    /// </summary>
    Png,
    /// <summary>
    /// Represents the Tagged Image File Format (TIFF) image format.
    /// </summary>
    Tiff,
    /// <summary>
    /// Represents the Exchangeable Image File (Exif) format.
    /// </summary>
    Exif,
    /// <summary>
    /// Represents the Windows icon image format.
    /// </summary>
    Icon
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ImageFormat>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ImageFormat, const char_t*>, 10>& values();
};
/// @endcond



