#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Defines 2-dimension allignment.
/// </summary>
enum class RectangleAlignment : int8_t
{
    /// <summary>
    /// 
    /// </summary>
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
    Left,
    /// <summary>
    /// 
    /// </summary>
    Center,
    /// <summary>
    /// 
    /// </summary>
    Right,
    /// <summary>
    /// 
    /// </summary>
    BottomLeft,
    /// <summary>
    /// 
    /// </summary>
    Bottom,
    /// <summary>
    /// 
    /// </summary>
    BottomRight
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::RectangleAlignment>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::RectangleAlignment, const char_t*>, 10>& values();
};
/// @endcond



