#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents type of error bar value
/// </summary>
enum class ErrorBarValueType
{
    /// <summary>
    /// Specifies that the length of the error bars shall be determined by the Plus and Minus elements.
    /// </summary>
    Custom,
    /// <summary>
    /// Specifies that the length of the error bars shall be the fixed value determined by Error Bar Value.
    /// </summary>
    Fixed,
    /// <summary>
    /// Specifies that the length of the error bars shall be Error Bar Value percent of the data.
    /// </summary>
    Percentage,
    /// <summary>
    /// Specifies that the length of the error bars shall be Error Bar Value standard deviations of the data.
    /// </summary>
    StandardDeviation,
    /// <summary>
    /// Specifies that the length of the error bars shall be Error Bar Value standard errors of the data.
    /// </summary>
    StandardError
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::ErrorBarValueType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::ErrorBarValueType, const char_t*>, 5>& values();
};
/// @endcond



