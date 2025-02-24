#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Determines blend mode.
/// </summary>
enum class FillBlendMode
{
    /// <summary>
    /// Darken blend mode.
    /// </summary>
    Darken = 0,
    /// <summary>
    /// Lighten blend mode.
    /// </summary>
    Lighten,
    /// <summary>
    /// Multiply blend mode.
    /// </summary>
    Multiply,
    /// <summary>
    /// Overlay blend mode.
    /// </summary>
    Overlay,
    /// <summary>
    /// Screen blend mode.
    /// </summary>
    Screen
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::FillBlendMode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::FillBlendMode, const char_t*>, 5>& values();
};
/// @endcond



