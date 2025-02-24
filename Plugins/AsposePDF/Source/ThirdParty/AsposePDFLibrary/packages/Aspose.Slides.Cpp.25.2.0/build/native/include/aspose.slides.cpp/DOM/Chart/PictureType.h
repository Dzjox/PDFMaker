#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Determines mode of bar picture filling.
/// </summary>
enum class PictureType
{
    /// <summary>
    /// Not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// The picture is sized to repeat a maximum of 15 times in the longest stacked bar.
    /// </summary>
    Stack,
    /// <summary>
    /// The picture is sized to a specified number of units and repeated the length of the bar.
    /// </summary>
    StackScale,
    /// <summary>
    /// The picture is stretched the full length of the stacked bar.
    /// </summary>
    Stretch
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::PictureType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::PictureType, const char_t*>, 4>& values();
};
/// @endcond



