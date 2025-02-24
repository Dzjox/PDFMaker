#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a preset for a shadow effect.
/// </summary>
enum class PresetShadowType
{
    /// <summary>
    /// Represents Top Left Drop Shadow.
    /// </summary>
    TopLeftDropShadow = 0,
    /// <summary>
    /// Represents Top Left Large Drop Shadow.
    /// </summary>
    TopLeftLargeDropShadow,
    /// <summary>
    /// Represents Back Left Long Perspective Shadow
    /// </summary>
    BackLeftLongPerspectiveShadow,
    /// <summary>
    /// Represents Back Right Long Perspective Shadow
    /// </summary>
    BackRightLongPerspectiveShadow,
    /// <summary>
    /// Represents Top Left Double Drop Shadow.
    /// </summary>
    TopLeftDoubleDropShadow,
    /// <summary>
    /// Represents Bottom Right Small Drop Shadow.
    /// </summary>
    BottomRightSmallDropShadow,
    /// <summary>
    /// Represents Front Left Long Perspective Shadow.
    /// </summary>
    FrontLeftLongPerspectiveShadow,
    /// <summary>
    /// Represents Front Right Long Perspective Shadow.
    /// </summary>
    FrontRightLongPerspectiveShadow,
    /// <summary>
    /// Represents Outer Box Shadow 3D.
    /// </summary>
    OuterBoxShadow3D,
    /// <summary>
    /// Represents Inner Box Shadow 3D.
    /// </summary>
    InnerBoxShadow3D,
    /// <summary>
    /// Represents Back Center Perspective Shadow.
    /// </summary>
    BackCenterPerspectiveShadow,
    /// <summary>
    /// Represents Top Right Drop Shadow.
    /// </summary>
    TopRightDropShadow,
    /// <summary>
    /// Represents Front Bottom Shadow.
    /// </summary>
    FrontBottomShadow,
    /// <summary>
    /// Represents Back Left Perspective Shadow.
    /// </summary>
    BackLeftPerspectiveShadow,
    /// <summary>
    /// Represents Back Right Perspective Shadow.
    /// </summary>
    BackRightPerspectiveShadow,
    /// <summary>
    /// Represents Bottom Left Drop Shadow.
    /// </summary>
    BottomLeftDropShadow,
    /// <summary>
    /// Represents Bottom Right Drop Shadow.
    /// </summary>
    BottomRightDropShadow,
    /// <summary>
    /// Represents Front Left Perspective Shadow.
    /// </summary>
    FrontLeftPerspectiveShadow,
    /// <summary>
    /// Represents Front Right Perspective Shadow.
    /// </summary>
    FrontRightPerspectiveShadow,
    /// <summary>
    /// Represents Top Left Small Drop Shadow.
    /// </summary>
    TopLeftSmallDropShadow
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PresetShadowType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PresetShadowType, const char_t*>, 20>& values();
};
/// @endcond



