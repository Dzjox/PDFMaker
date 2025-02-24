#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// The location and size of the delimiters relative to the content of the operands
/// </summary>
enum class MathDelimiterShape
{
    /// <summary>
    /// Centered to math axis
    /// </summary>
    Centered,
    /// <summary>
    /// Match to content
    /// </summary>
    Match
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathDelimiterShape>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathDelimiterShape, const char_t*>, 2>& values();
};
/// @endcond



