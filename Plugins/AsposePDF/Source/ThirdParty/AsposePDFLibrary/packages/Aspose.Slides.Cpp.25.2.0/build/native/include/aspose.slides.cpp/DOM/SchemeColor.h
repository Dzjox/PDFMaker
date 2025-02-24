#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents colors in a color scheme.
/// </summary>
enum class SchemeColor
{
    /// <summary>
    /// Color scheme is not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Background1,
    /// <summary>
    /// 
    /// </summary>
    Text1,
    /// <summary>
    /// 
    /// </summary>
    Background2,
    /// <summary>
    /// 
    /// </summary>
    Text2,
    /// <summary>
    /// 
    /// </summary>
    Accent1,
    /// <summary>
    /// 
    /// </summary>
    Accent2,
    /// <summary>
    /// 
    /// </summary>
    Accent3,
    /// <summary>
    /// 
    /// </summary>
    Accent4,
    /// <summary>
    /// 
    /// </summary>
    Accent5,
    /// <summary>
    /// 
    /// </summary>
    Accent6,
    /// <summary>
    /// 
    /// </summary>
    Hyperlink,
    /// <summary>
    /// 
    /// </summary>
    FollowedHyperlink,
    /// <summary>
    /// 
    /// </summary>
    StyleColor,
    /// <summary>
    /// 
    /// </summary>
    Dark1,
    /// <summary>
    /// 
    /// </summary>
    Light1,
    /// <summary>
    /// 
    /// </summary>
    Dark2,
    /// <summary>
    /// 
    /// </summary>
    Light2
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SchemeColor>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SchemeColor, const char_t*>, 18>& values();
};
/// @endcond



