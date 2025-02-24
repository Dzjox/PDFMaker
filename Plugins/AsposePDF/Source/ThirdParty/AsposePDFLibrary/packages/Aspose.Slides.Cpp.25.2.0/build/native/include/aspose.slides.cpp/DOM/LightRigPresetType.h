#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Constants which define light preset types.
/// </summary>
enum class LightRigPresetType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Balanced,
    /// <summary ></summary>
    BrightRoom,
    /// <summary ></summary>
    Chilly,
    /// <summary ></summary>
    Contrasting,
    /// <summary ></summary>
    Flat,
    /// <summary ></summary>
    Flood,
    /// <summary ></summary>
    Freezing,
    /// <summary ></summary>
    Glow,
    /// <summary ></summary>
    Harsh,
    /// <summary ></summary>
    LegacyFlat1,
    /// <summary ></summary>
    LegacyFlat2,
    /// <summary ></summary>
    LegacyFlat3,
    /// <summary ></summary>
    LegacyFlat4,
    /// <summary ></summary>
    LegacyHarsh1,
    /// <summary ></summary>
    LegacyHarsh2,
    /// <summary ></summary>
    LegacyHarsh3,
    /// <summary ></summary>
    LegacyHarsh4,
    /// <summary ></summary>
    LegacyNormal1,
    /// <summary ></summary>
    LegacyNormal2,
    /// <summary ></summary>
    LegacyNormal3,
    /// <summary ></summary>
    LegacyNormal4,
    /// <summary ></summary>
    Morning,
    /// <summary ></summary>
    Soft,
    /// <summary ></summary>
    Sunrise,
    /// <summary ></summary>
    Sunset,
    /// <summary ></summary>
    ThreePt,
    /// <summary ></summary>
    TwoPt
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LightRigPresetType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LightRigPresetType, const char_t*>, 28>& values();
};
/// @endcond



