#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Specifies how many slides and in what sequence will be placed on the page.
/// </summary>
enum class HandoutType
{
    /// <summary>
    /// One slide per page.
    /// </summary>
    Handouts1,
    /// <summary>
    /// Two slides per page.
    /// </summary>
    Handouts2,
    /// <summary>
    /// Three slides per page.
    /// </summary>
    Handouts3,
    /// <summary>
    /// Four slides per page in a horizontal sequence.
    /// </summary>
    Handouts4Horizontal,
    /// <summary>
    /// Four slides per page in a vertical sequence.
    /// </summary>
    Handouts4Vertical,
    /// <summary>
    /// Six slides per page in a horizontal sequence.
    /// </summary>
    Handouts6Horizontal,
    /// <summary>
    /// Six slides per page in a vertical sequence.
    /// </summary>
    Handouts6Vertical,
    /// <summary>
    /// Nine slides per page in a horizontal sequence.
    /// </summary>
    Handouts9Horizontal,
    /// <summary>
    /// Nine slides per page in a vertical sequence.
    /// </summary>
    Handouts9Vertical
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::HandoutType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::HandoutType, const char_t*>, 9>& values();
};
/// @endcond



