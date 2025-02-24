﻿#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the size of a placeholder.
/// </summary>
enum class PlaceholderSize : int8_t
{
    /// <summary>
    /// Full.
    /// </summary>
    Full,
    /// <summary>
    /// Half.
    /// </summary>
    Half,
    /// <summary>
    /// Quarter.
    /// </summary>
    Quarter
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PlaceholderSize>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PlaceholderSize, const char_t*>, 3>& values();
};
/// @endcond



