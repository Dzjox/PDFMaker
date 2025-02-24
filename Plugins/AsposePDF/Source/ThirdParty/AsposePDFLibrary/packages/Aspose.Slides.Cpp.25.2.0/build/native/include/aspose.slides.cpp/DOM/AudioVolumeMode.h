#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Constants which define audio volume.
/// </summary>
enum class AudioVolumeMode
{
    /// <summary>
    /// 
    /// </summary>
    Mixed = -1,
    /// <summary>
    /// Zero sound volume.
    /// </summary>
    Mute = 0,
    /// <summary>
    /// Low sound volume.
    /// </summary>
    Low,
    /// <summary>
    /// Medium sound volume.
    /// </summary>
    Medium,
    /// <summary>
    /// Loud sound volume.
    /// </summary>
    Loud
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::AudioVolumeMode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::AudioVolumeMode, const char_t*>, 5>& values();
};
/// @endcond



