#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// The type of vertical spacing between columns in a matrix or array
/// </summary>
enum class MathRowSpacingRule
{
    /// <summary>
    /// single line gap
    /// </summary>
    SingleLineGap = 0,
    /// <summary>
    /// One and a half line gap
    /// </summary>
    OneAndAHalfLineGap = 1,
    /// <summary>
    /// Two lines gap
    /// </summary>
    TwoLineGap = 2,
    /// <summary>
    /// Exactly (rely on value of the RowSpacing property, measured in points)
    /// </summary>
    Exactly = 3,
    /// <summary>
    /// Multiple (rely on value of the RowSpacing property, measured in lines)
    /// </summary>
    Multiple = 4
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathRowSpacingRule>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathRowSpacingRule, const char_t*>, 5>& values();
};
/// @endcond



