#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents formatting type the child nodes in an organization chart
/// </summary>
enum class OrganizationChartLayoutType
{
    /// <summary>
    /// Initial layout type
    /// </summary>
    Initial,
    /// <summary>
    /// Places child nodes horizontally below the parent node.
    /// </summary>
    Standart,
    /// <summary>
    /// Places child nodes vertically below the parent node on both the left and the right side.
    /// </summary>
    BothHanging,
    /// <summary>
    /// Places child nodes vertically below the parent node on the left side.
    /// </summary>
    LeftHanging,
    /// <summary>
    /// Places child nodes vertically below the parent node on the right side.
    /// </summary>
    RightHanging
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SmartArt::OrganizationChartLayoutType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SmartArt::OrganizationChartLayoutType, const char_t*>, 5>& values();
};
/// @endcond



