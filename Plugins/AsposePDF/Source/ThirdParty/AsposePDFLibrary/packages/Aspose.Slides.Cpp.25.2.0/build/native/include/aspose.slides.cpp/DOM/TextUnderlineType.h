#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the type of text underline.
/// </summary>
enum class TextUnderlineType : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    None = 0,
    /// <summary>
    /// 
    /// </summary>
    Words = 1,
    /// <summary>
    /// 
    /// </summary>
    Single = 2,
    /// <summary>
    /// 
    /// </summary>
    Double = 3,
    /// <summary>
    /// 
    /// </summary>
    Heavy = 4,
    /// <summary>
    /// 
    /// </summary>
    Dotted = 5,
    /// <summary>
    /// 
    /// </summary>
    HeavyDotted = 6,
    /// <summary>
    /// 
    /// </summary>
    Dashed = 7,
    /// <summary>
    /// 
    /// </summary>
    HeavyDashed = 8,
    /// <summary>
    /// 
    /// </summary>
    LongDashed = 9,
    /// <summary>
    /// 
    /// </summary>
    HeavyLongDashed = 10,
    /// <summary>
    /// 
    /// </summary>
    DotDash = 11,
    /// <summary>
    /// 
    /// </summary>
    HeavyDotDash = 12,
    /// <summary>
    /// 
    /// </summary>
    DotDotDash = 13,
    /// <summary>
    /// 
    /// </summary>
    HeavyDotDotDash = 14,
    /// <summary>
    /// 
    /// </summary>
    Wavy = 15,
    /// <summary>
    /// 
    /// </summary>
    HeavyWavy = 16,
    /// <summary>
    /// 
    /// </summary>
    DoubleWavy = 17
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TextUnderlineType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TextUnderlineType, const char_t*>, 19>& values();
};
/// @endcond



