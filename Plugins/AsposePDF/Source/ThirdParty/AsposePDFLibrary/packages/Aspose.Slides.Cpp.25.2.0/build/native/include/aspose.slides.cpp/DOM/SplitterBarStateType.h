#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Specifies the state that the splitter bar should be shown in. The splitter bar separates a primary and
/// secondary region within a viewing area.
/// </summary>
enum class SplitterBarStateType
{
    /// <summary>
    /// The primary region occupies the least amount of the viewing area allowed by the application.
    /// </summary>
    Minimized,
    /// <summary>
    /// The primary region has a specific intermediate size.
    /// </summary>
    Restored,
    /// <summary>
    /// The primary region occupies the greatest amount of the viewing area allowed by the application.
    /// </summary>
    Maximized
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SplitterBarStateType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SplitterBarStateType, const char_t*>, 3>& values();
};
/// @endcond



