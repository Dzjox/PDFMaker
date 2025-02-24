﻿#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the lines alignment type.
/// </summary>
enum class LineAlignment : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Center,
    /// <summary>
    /// 
    /// </summary>
    Inset
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LineAlignment>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LineAlignment, const char_t*>, 3>& values();
};
/// @endcond



