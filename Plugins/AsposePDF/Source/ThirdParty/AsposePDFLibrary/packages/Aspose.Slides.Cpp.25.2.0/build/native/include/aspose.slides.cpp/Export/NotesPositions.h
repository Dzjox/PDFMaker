#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents the rule to render notes into exported document
/// </summary>
enum class NotesPositions
{
    /// <summary>
    /// Specifies that notes should not be displayed at all.
    /// </summary>
    None = 0,
    /// <summary>
    /// Specifies that notes should be full displayed using additional pages as it is needed.
    /// </summary>
    BottomFull = 1,
    /// <summary>
    /// Specifies that notes should be displayed in only one page.
    /// </summary>
    BottomTruncated = 2
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::NotesPositions>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::NotesPositions, const char_t*>, 3>& values();
};
/// @endcond



