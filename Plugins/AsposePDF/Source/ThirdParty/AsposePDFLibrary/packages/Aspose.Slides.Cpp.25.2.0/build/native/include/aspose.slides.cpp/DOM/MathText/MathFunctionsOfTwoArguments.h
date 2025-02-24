#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Common mathematical functions of two arguments
/// </summary>
enum class MathFunctionsOfTwoArguments
{
    /// <summary>
    /// Log
    /// </summary>
    Log,
    /// <summary>
    /// Limit
    /// </summary>
    Lim,
    /// <summary>
    /// Minimum
    /// </summary>
    Min,
    /// <summary>
    /// Maximum
    /// </summary>
    Max
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathFunctionsOfTwoArguments>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathFunctionsOfTwoArguments, const char_t*>, 4>& values();
};
/// @endcond



