#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Types of gap (horizontal spacing) between columns of a matrix
/// </summary>
enum class MathSpacingRules
{
    /// <summary>
    /// Single (1 em for columns or 1 line for rows)
    /// </summary>
    SingleSpacingGap = 0,
    /// <summary>
    /// One and a half (1.5 ems for columns or 1.5 lines for rows)
    /// </summary>
    OneAndHalfSpacingGap = 1,
    /// <summary>
    /// Double spacing (2 ems for columns or 2 lines for rows)
    /// </summary>
    DoubleSpacingGap = 2,
    /// <summary>
    /// Exactly value
    /// For columns, rely on value of ColumnGap, measured in twips
    /// For rows, rely on value of RowGap, measured in twips
    /// </summary>
    Exactly = 3,
    /// <summary>
    /// Multiple
    /// For columns, rely on value of ColumnGap, measured in 0.5 em increments
    /// For rows, rely on value of RowGap, measured in lines
    /// </summary>
    Multiple = 4
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathSpacingRules>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathSpacingRules, const char_t*>, 5>& values();
};
/// @endcond



