#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Constants which define light directions.
/// </summary>
enum class LightingDirection
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    TopLeft,
    /// <summary>
    /// 
    /// </summary>
    Top,
    /// <summary>
    /// 
    /// </summary>
    TopRight,
    /// <summary>
    /// 
    /// </summary>
    Right,
    /// <summary>
    /// 
    /// </summary>
    BottomRight,
    /// <summary>
    /// 
    /// </summary>
    Bottom,
    /// <summary>
    /// 
    /// </summary>
    BottomLeft,
    /// <summary>
    /// 
    /// </summary>
    Left
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LightingDirection>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LightingDirection, const char_t*>, 9>& values();
};
/// @endcond



