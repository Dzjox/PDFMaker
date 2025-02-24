#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the length of an arrowhead.
/// </summary>
enum class LineArrowheadLength : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Short = 0,
    /// <summary>
    /// 
    /// </summary>
    Medium = 1,
    /// <summary>
    /// 
    /// </summary>
    Long = 2
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LineArrowheadLength>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LineArrowheadLength, const char_t*>, 4>& values();
};
/// @endcond



