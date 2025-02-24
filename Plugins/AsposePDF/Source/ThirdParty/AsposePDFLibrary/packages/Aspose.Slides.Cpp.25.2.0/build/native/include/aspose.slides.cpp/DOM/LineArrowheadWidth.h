#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the width of an arrowhead.
/// </summary>
enum class LineArrowheadWidth : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Narrow = 0,
    /// <summary>
    /// 
    /// </summary>
    Medium = 1,
    /// <summary>
    /// 
    /// </summary>
    Wide = 2
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LineArrowheadWidth>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LineArrowheadWidth, const char_t*>, 4>& values();
};
/// @endcond



