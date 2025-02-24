#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents the tick mark type for the specified axis.
/// </summary>
enum class TickMarkType
{
    /// <summary>
    /// Specifies the tick marks shall cross the axis. 
    /// </summary>
    Cross = 0,
    /// <summary>
    /// Specifies the tick marks shall be inside the plot area. 
    /// </summary>
    Inside,
    /// <summary>
    /// Specifies there shall be no tick marks. 
    /// </summary>
    None,
    /// <summary>
    /// Specifies the tick marks shall be outside the plot area.
    /// </summary>
    Outside
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::TickMarkType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::TickMarkType, const char_t*>, 4>& values();
};
/// @endcond



