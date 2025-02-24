#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the tab alignment.
/// </summary>
enum class TabAlignment
{
    /// <summary>
    /// Left alignment
    /// </summary>
    Left = 0,
    /// <summary>
    /// Center alignment
    /// </summary>
    Center = 1,
    /// <summary>
    /// Right alignment
    /// </summary>
    Right = 2,
    /// <summary>
    /// Decimal alignment
    /// </summary>
    Decimal = 3
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TabAlignment>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TabAlignment, const char_t*>, 4>& values();
};
/// @endcond



