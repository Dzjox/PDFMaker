#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Top/bottom positions enumeration
/// </summary>
enum class MathTopBotPositions
{
    /// <summary>
    /// Not defined
    /// </summary>
    NotDefined,
    /// <summary>
    /// Top
    /// </summary>
    Top,
    /// <summary>
    /// Bottom
    /// </summary>
    Bottom
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathTopBotPositions>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathTopBotPositions, const char_t*>, 3>& values();
};
/// @endcond



