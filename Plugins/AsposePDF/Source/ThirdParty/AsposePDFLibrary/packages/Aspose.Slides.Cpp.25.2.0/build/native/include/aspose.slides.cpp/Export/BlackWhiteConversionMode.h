#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how slides' images will be converted to bitonal images.
/// </summary>
enum class BlackWhiteConversionMode
{
    /// <summary>
    /// Specifies no conversion algorithm. The algorithm implemented in the TIFF codec will be used. (Default)
    /// </summary>
    Default = 0,
    /// <summary>
    /// Specifies the dithering algorithm (Floyd-Steinberg).
    /// </summary>
    Dithering,
    /// <summary>
    /// Specifies the Floyd-Steinberg dithering algorithm.
    /// </summary>
    DitheringFloydSteinberg,
    /// <summary>
    /// Specifies the automatically calculated threshold algorithm (Otsu).
    /// </summary>
    Auto,
    /// <summary>
    /// Specifies the automatically calculated Otsu's threshold algorithm.
    /// </summary>
    AutoOtsu,
    /// <summary>
    /// Specifies the static threshold algorithm (25%).
    /// </summary>
    Threshold25,
    /// <summary>
    /// Specifies the static threshold algorithm (50%).
    /// </summary>
    Threshold50,
    /// <summary>
    /// Specifies the static threshold algorithm (75%).
    /// </summary>
    Threshold75
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::BlackWhiteConversionMode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::BlackWhiteConversionMode, const char_t*>, 8>& values();
};
/// @endcond



