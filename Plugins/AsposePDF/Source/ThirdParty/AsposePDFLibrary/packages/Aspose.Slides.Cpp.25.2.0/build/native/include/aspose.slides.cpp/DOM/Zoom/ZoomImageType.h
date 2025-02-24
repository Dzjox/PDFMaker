#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Defines whether the Zoom object is using the slide preview or a cover image.
/// </summary>
enum class ZoomImageType
{
    /// <summary>
    /// Use the image of the slide or section.
    /// </summary>
    Preview = 1,
    /// <summary>
    /// Use a custom image.
    /// </summary>
    Cover = 2
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ZoomImageType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ZoomImageType, const char_t*>, 2>& values();
};
/// @endcond



