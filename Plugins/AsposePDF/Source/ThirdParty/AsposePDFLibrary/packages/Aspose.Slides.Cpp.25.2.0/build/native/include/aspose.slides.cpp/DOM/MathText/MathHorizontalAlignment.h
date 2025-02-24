#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Horizontal Alignment
/// </summary>
enum class MathHorizontalAlignment
{
    /// <summary>
    /// Value is not defined
    /// </summary>
    NotDefined = 0,
    /// <summary>
    /// Left Justification
    /// </summary>
    Left = 1,
    /// <summary>
    /// Center
    /// </summary>
    Center = 2,
    /// <summary>
    /// Right
    /// </summary>
    Right = 3
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathHorizontalAlignment>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathHorizontalAlignment, const char_t*>, 4>& values();
};
/// @endcond



