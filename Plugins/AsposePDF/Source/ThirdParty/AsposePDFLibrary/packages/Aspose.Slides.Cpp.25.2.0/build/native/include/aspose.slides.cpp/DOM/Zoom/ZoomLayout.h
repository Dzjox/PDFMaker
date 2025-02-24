#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Specifies the summary zoom layout.
/// </summary>
enum class ZoomLayout
{
    /// <summary>
    /// Specifies the layout as a grid layout for a list of objects.
    /// </summary>
    GridLayout = 0,
    /// <summary>
    /// Specifies the layout with user-defined Zoom positioning.
    /// </summary>
    FixedLayout = 1
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ZoomLayout>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ZoomLayout, const char_t*>, 2>& values();
};
/// @endcond



