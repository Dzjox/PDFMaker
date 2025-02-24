#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Constants which define 3D bevel of shape.
/// </summary>
enum class BevelPresetType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Angle,
    /// <summary ></summary>
    ArtDeco,
    /// <summary ></summary>
    Circle,
    /// <summary ></summary>
    Convex,
    /// <summary ></summary>
    CoolSlant,
    /// <summary ></summary>
    Cross,
    /// <summary ></summary>
    Divot,
    /// <summary ></summary>
    HardEdge,
    /// <summary ></summary>
    RelaxedInset,
    /// <summary ></summary>
    Riblet,
    /// <summary ></summary>
    Slope,
    /// <summary ></summary>
    SoftRound
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::BevelPresetType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::BevelPresetType, const char_t*>, 13>& values();
};
/// @endcond



