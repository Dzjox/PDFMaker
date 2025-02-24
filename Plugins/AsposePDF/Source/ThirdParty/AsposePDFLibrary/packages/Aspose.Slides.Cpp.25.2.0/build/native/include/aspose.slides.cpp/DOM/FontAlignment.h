#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents vertical font alignment.
/// </summary>
enum class FontAlignment
{
    /// <summary>
    /// 
    /// </summary>
    Default = -1,
    /// <summary>
    /// 
    /// </summary>
    Automatic = 0,
    /// <summary>
    /// 
    /// </summary>
    Top = 1,
    /// <summary>
    /// 
    /// </summary>
    Center = 2,
    /// <summary>
    /// 
    /// </summary>
    Bottom = 3,
    /// <summary>
    /// 
    /// </summary>
    Baseline = 4
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::FontAlignment>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::FontAlignment, const char_t*>, 6>& values();
};
/// @endcond



