#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents the rule to render comments into exported document
/// </summary>
enum class CommentsPositions
{
    /// <summary>
    /// Specifies that comments should not be displayed at all.
    /// </summary>
    None = 0,
    /// <summary>
    /// Specifies that comments should be displayed at the bottom of the page.
    /// </summary>
    Bottom = 1,
    /// <summary>
    /// Specifies that comments should be displayed to the right of the page.
    /// </summary>
    Right = 2
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::CommentsPositions>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::CommentsPositions, const char_t*>, 3>& values();
};
/// @endcond



