#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Determines multiplicity of the displayed data.
/// </summary>
enum class DisplayUnitType
{
    /// <summary>
    /// Values will dislayed as is.
    /// </summary>
    None = 0,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 100. 
    /// </summary>
    Hundreds,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 1,000. 
    /// </summary>
    Thousands,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 10,000. 
    /// </summary>
    TenThousands,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 100,000. 
    /// </summary>
    HundredThousands,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 1,000,000. 
    /// </summary>
    Millions,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 10,000,000. 
    /// </summary>
    TenMillions,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 100,000,000. 
    /// </summary>
    HundredMillions,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 1,000,000,000. 
    /// </summary>
    Billions,
    /// <summary>
    /// Specifies the values on the chart shall be divided by 1,000,000,000. 
    /// </summary>
    Trillions,
    /// <summary>
    /// Specifies the values on the chart shall be divided by a custom value.
    /// </summary>
    CustomValue
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::DisplayUnitType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::DisplayUnitType, const char_t*>, 11>& values();
};
/// @endcond



