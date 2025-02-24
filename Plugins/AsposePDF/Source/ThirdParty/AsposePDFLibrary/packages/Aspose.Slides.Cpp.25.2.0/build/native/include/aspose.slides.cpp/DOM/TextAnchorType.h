#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// text box alignment within a text area.
/// </summary>
enum class TextAnchorType : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Top,
    /// <summary>
    /// 
    /// </summary>
    Center,
    /// <summary>
    /// 
    /// </summary>
    Bottom,
    /// <summary>
    /// 
    /// </summary>
    Justified,
    /// <summary>
    /// 
    /// </summary>
    Distributed
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TextAnchorType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TextAnchorType, const char_t*>, 6>& values();
};
/// @endcond



