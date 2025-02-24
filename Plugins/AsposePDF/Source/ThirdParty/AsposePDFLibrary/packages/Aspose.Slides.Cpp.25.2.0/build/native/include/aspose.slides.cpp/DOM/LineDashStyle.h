#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the line dash style.
/// </summary>
enum class LineDashStyle : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Solid,
    /// <summary>
    /// 
    /// </summary>
    Dot,
    /// <summary>
    /// 
    /// </summary>
    Dash,
    /// <summary>
    /// 
    /// </summary>
    LargeDash,
    /// <summary>
    /// 
    /// </summary>
    DashDot,
    /// <summary>
    /// 
    /// </summary>
    LargeDashDot,
    /// <summary>
    /// 
    /// </summary>
    LargeDashDotDot,
    /// <summary>
    /// 
    /// </summary>
    SystemDash,
    /// <summary>
    /// 
    /// </summary>
    SystemDot,
    /// <summary>
    /// 
    /// </summary>
    SystemDashDot,
    /// <summary>
    /// 
    /// </summary>
    SystemDashDotDot,
    /// <summary>
    /// 
    /// </summary>
    Custom
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LineDashStyle>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LineDashStyle, const char_t*>, 13>& values();
};
/// @endcond



