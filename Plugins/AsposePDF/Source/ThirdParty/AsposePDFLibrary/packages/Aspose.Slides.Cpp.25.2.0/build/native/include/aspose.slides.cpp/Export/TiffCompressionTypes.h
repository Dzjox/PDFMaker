#pragma once
//Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is compressed in TIFF format.
/// </summary>
enum class TiffCompressionTypes
{
    /// <summary>
    /// Specifies the default compression scheme (LZW).
    /// </summary>
    Default,
    /// <summary>
    /// Specifies no compression.
    /// </summary>
    None,
    /// <summary>
    /// Specifies the CCITT3 compression scheme.
    /// </summary>
    CCITT3,
    /// <summary>
    /// Specifies the CCITT4 compression scheme.
    /// </summary>
    CCITT4,
    /// <summary>
    /// Specifies the LZW compression scheme (Default).
    /// </summary>
    LZW,
    /// <summary>
    /// Specifies the RLE compression scheme.
    /// </summary>
    RLE
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::TiffCompressionTypes>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::TiffCompressionTypes, const char_t*>, 6>& values();
};
/// @endcond



