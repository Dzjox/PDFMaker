﻿#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Constants which define camera preset type.
/// </summary>
enum class CameraPresetType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    IsometricBottomDown,
    /// <summary ></summary>
    IsometricBottomUp,
    /// <summary ></summary>
    IsometricLeftDown,
    /// <summary ></summary>
    IsometricLeftUp,
    /// <summary ></summary>
    IsometricOffAxis1Left,
    /// <summary ></summary>
    IsometricOffAxis1Right,
    /// <summary ></summary>
    IsometricOffAxis1Top,
    /// <summary ></summary>
    IsometricOffAxis2Left,
    /// <summary ></summary>
    IsometricOffAxis2Right,
    /// <summary ></summary>
    IsometricOffAxis2Top,
    /// <summary ></summary>
    IsometricOffAxis3Bottom,
    /// <summary ></summary>
    IsometricOffAxis3Left,
    /// <summary ></summary>
    IsometricOffAxis3Right,
    /// <summary ></summary>
    IsometricOffAxis4Bottom,
    /// <summary ></summary>
    IsometricOffAxis4Left,
    /// <summary ></summary>
    IsometricOffAxis4Right,
    /// <summary ></summary>
    IsometricRightDown,
    /// <summary ></summary>
    IsometricRightUp,
    /// <summary ></summary>
    IsometricTopDown,
    /// <summary ></summary>
    IsometricTopUp,
    /// <summary ></summary>
    LegacyObliqueBottom,
    /// <summary ></summary>
    LegacyObliqueBottomLeft,
    /// <summary ></summary>
    LegacyObliqueBottomRight,
    /// <summary ></summary>
    LegacyObliqueFront,
    /// <summary ></summary>
    LegacyObliqueLeft,
    /// <summary ></summary>
    LegacyObliqueRight,
    /// <summary ></summary>
    LegacyObliqueTop,
    /// <summary ></summary>
    LegacyObliqueTopLeft,
    /// <summary ></summary>
    LegacyObliqueTopRight,
    /// <summary ></summary>
    LegacyPerspectiveBottom,
    /// <summary ></summary>
    LegacyPerspectiveBottomLeft,
    /// <summary ></summary>
    LegacyPerspectiveBottomRight,
    /// <summary ></summary>
    LegacyPerspectiveFront,
    /// <summary ></summary>
    LegacyPerspectiveLeft,
    /// <summary ></summary>
    LegacyPerspectiveRight,
    /// <summary ></summary>
    LegacyPerspectiveTop,
    /// <summary ></summary>
    LegacyPerspectiveTopLeft,
    /// <summary ></summary>
    LegacyPerspectiveTopRight,
    /// <summary ></summary>
    ObliqueBottom,
    /// <summary ></summary>
    ObliqueBottomLeft,
    /// <summary ></summary>
    ObliqueBottomRight,
    /// <summary ></summary>
    ObliqueLeft,
    /// <summary ></summary>
    ObliqueRight,
    /// <summary ></summary>
    ObliqueTop,
    /// <summary ></summary>
    ObliqueTopLeft,
    /// <summary ></summary>
    ObliqueTopRight,
    /// <summary ></summary>
    OrthographicFront,
    /// <summary ></summary>
    PerspectiveAbove,
    /// <summary ></summary>
    PerspectiveAboveLeftFacing,
    /// <summary ></summary>
    PerspectiveAboveRightFacing,
    /// <summary ></summary>
    PerspectiveBelow,
    /// <summary ></summary>
    PerspectiveContrastingLeftFacing,
    /// <summary ></summary>
    PerspectiveContrastingRightFacing,
    /// <summary ></summary>
    PerspectiveFront,
    /// <summary ></summary>
    PerspectiveHeroicExtremeLeftFacing,
    /// <summary ></summary>
    PerspectiveHeroicExtremeRightFacing,
    /// <summary ></summary>
    PerspectiveHeroicLeftFacing,
    /// <summary ></summary>
    PerspectiveHeroicRightFacing,
    /// <summary ></summary>
    PerspectiveLeft,
    /// <summary ></summary>
    PerspectiveRelaxed,
    /// <summary ></summary>
    PerspectiveRelaxedModerately,
    /// <summary ></summary>
    PerspectiveRight
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::CameraPresetType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::CameraPresetType, const char_t*>, 63>& values();
};
/// @endcond



