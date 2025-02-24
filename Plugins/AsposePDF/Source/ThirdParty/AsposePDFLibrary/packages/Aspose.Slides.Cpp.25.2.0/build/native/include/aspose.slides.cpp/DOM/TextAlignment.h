#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents different text alignment styles.
/// </summary>
enum class TextAlignment
{
    /// <summary>
    /// Default aligment.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Left alignment.
    /// </summary>
    Left = 0,
    /// <summary>
    /// Center alignment.
    /// </summary>
    Center = 1,
    /// <summary>
    /// Right alignment.
    /// </summary>
    Right = 2,
    /// <summary>
    /// Justify alignment.
    /// </summary>
    Justify = 3,
    /// <summary>
    /// Kashida justify low.
    /// </summary>
    JustifyLow = 4,
    /// <summary>
    /// Distributed alignment.
    /// </summary>
    Distributed = 5
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TextAlignment>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TextAlignment, const char_t*>, 7>& values();
};
/// @endcond



