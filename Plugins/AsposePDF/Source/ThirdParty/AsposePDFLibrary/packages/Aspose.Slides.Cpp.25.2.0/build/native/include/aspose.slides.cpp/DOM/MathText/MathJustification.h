#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies justification of the math paragraph (a series of adjacent instances of mathematical text within the same paragraph)
/// </summary>
enum class MathJustification
{
    /// <summary>
    /// Align mathematical text to the left
    /// </summary>
    LeftJustified = 1,
    /// <summary>
    /// Align mathematical text to the right
    /// </summary>
    RightJustified = 2,
    /// <summary>
    /// Align mathematical text to the center
    /// </summary>
    Centered = 3,
    /// <summary>
    /// Center on the page the entire group of math blocks as a single unit.
    /// This means that the instances of mathematical text can be aligned with respect to each other, 
    /// but the entire group of mathematical text is centered as a whole.
    /// </summary>
    CenteredAsGroup = 4
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathJustification>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathJustification, const char_t*>, 4>& values();
};
/// @endcond



