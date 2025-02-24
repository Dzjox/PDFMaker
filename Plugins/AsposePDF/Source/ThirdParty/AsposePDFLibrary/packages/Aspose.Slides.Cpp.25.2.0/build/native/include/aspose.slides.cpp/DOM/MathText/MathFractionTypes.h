#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Fraction Types
/// </summary>
enum class MathFractionTypes
{
    /// <summary>
    /// Bar Fraction
    /// </summary>
    Bar = 1,
    /// <summary>
    /// Skewed
    /// </summary>
    Skewed = 2,
    /// <summary>
    /// Linear Fraction
    /// </summary>
    Linear = 3,
    /// <summary>
    /// No-Bar Fraction (Stack)
    /// </summary>
    NoBar = 4
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathFractionTypes>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathFractionTypes, const char_t*>, 4>& values();
};
/// @endcond



