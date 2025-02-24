#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents text vertical overflow type.
/// </summary>
enum class TextVerticalOverflowType : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Overflow,
    /// <summary>
    /// 
    /// </summary>
    Ellipsis,
    /// <summary>
    /// 
    /// </summary>
    Clip
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TextVerticalOverflowType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TextVerticalOverflowType, const char_t*>, 4>& values();
};
/// @endcond



