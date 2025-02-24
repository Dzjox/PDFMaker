#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Specifies the possible ways to represent data as bubble chart sizes.
/// </summary>
enum class BubbleSizeRepresentationType
{
    /// <summary>
    /// Specifies the area of the bubbles shall be proportional to the bubble size value.
    /// </summary>
    Area = 0,
    /// <summary>
    /// Specifies the radius of the bubbles shall be proportional to the bubble size value.
    /// </summary>
    Width
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::BubbleSizeRepresentationType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::BubbleSizeRepresentationType, const char_t*>, 2>& values();
};
/// @endcond



