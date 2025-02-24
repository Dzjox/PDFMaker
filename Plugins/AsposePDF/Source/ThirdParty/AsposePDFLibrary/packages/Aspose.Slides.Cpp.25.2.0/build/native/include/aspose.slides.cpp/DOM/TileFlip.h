#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Defines tile flipping mode.
/// </summary>
enum class TileFlip
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    NoFlip,
    /// <summary>
    /// 
    /// </summary>
    FlipX,
    /// <summary>
    /// 
    /// </summary>
    FlipY,
    /// <summary>
    /// 
    /// </summary>
    FlipBoth
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TileFlip>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TileFlip, const char_t*>, 5>& values();
};
/// @endcond



