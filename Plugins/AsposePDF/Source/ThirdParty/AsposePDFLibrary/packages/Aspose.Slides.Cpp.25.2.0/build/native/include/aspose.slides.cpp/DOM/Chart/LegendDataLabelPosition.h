#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Determines position of data labels.
/// </summary>
enum class LegendDataLabelPosition
{
    /// <summary>
    /// Position is not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Specifies that data labels shall be displayed below the data marker. 
    /// </summary>
    Bottom,
    /// <summary>
    /// Specifies that data labels shall be displayed in the best position. 
    /// </summary>
    BestFit,
    /// <summary>
    /// Specifies that data labels shall be displayed centered on the data marker. 
    /// </summary>
    Center,
    /// <summary>
    /// Specifies that data labels shall be displayed inside the base of the data marker. 
    /// </summary>
    InsideBase,
    /// <summary>
    /// Specifies that data labels shall be displayed inside the end of the data marker. 
    /// </summary>
    InsideEnd,
    /// <summary>
    /// Specifies that data labels shall be displayed to the left of the data marker. 
    /// </summary>
    Left,
    /// <summary>
    /// Specifies that data labels shall be displayed outside the end of the data marker. 
    /// </summary>
    OutsideEnd,
    /// <summary>
    /// Specifies that data labels shall be displayed to the right of the data marker. 
    /// </summary>
    Right,
    /// <summary>
    /// Specifies that data labels shall be displayed above the data marker. 
    /// </summary>
    Top
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::LegendDataLabelPosition>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::LegendDataLabelPosition, const char_t*>, 10>& values();
};
/// @endcond



