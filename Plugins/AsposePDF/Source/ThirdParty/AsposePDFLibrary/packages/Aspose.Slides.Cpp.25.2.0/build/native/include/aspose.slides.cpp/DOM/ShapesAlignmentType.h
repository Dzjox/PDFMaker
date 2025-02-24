#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Defines a way to change the placement of selected shapes on the slide.
/// </summary>
enum class ShapesAlignmentType
{
    /// <summary>
    /// Align left
    /// </summary>
    AlignLeft = 0,
    /// <summary>
    /// Align right
    /// </summary>
    AlignRight = 1,
    /// <summary>
    /// Align center
    /// </summary>
    AlignCenter = 2,
    /// <summary>
    /// Align top
    /// </summary>
    AlignTop = 3,
    /// <summary>
    /// Align middle
    /// </summary>
    AlignMiddle = 4,
    /// <summary>
    /// Align bottom
    /// </summary>
    AlignBottom = 5,
    /// <summary>
    /// Distribute horizontally
    /// </summary>
    DistributeHorizontally = 6,
    /// <summary>
    /// Distribute vertically
    /// </summary>
    DistributeVertically = 7
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ShapesAlignmentType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ShapesAlignmentType, const char_t*>, 8>& values();
};
/// @endcond



