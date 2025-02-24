#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent effect class types.
/// </summary>
enum class EffectPresetClassType
{
    /// <summary>
    /// <p>Entrance effects class.</p>
    /// <p>Target shape types: All</p>
    /// </summary>
    Entrance,
    /// <summary>
    /// <p>Exit effects class.</p>
    /// <p>Target shape types: All</p>
    /// </summary>
    Exit,
    /// <summary>
    /// <p>Emphasis effects class.</p>
    /// <p>Target shape types: All</p>
    /// </summary>
    Emphasis,
    /// <summary>
    /// <p>Motion Paths class.</p>
    /// <p>Target shape types: All</p>
    /// </summary>
    Path,
    /// <summary>
    /// <p>Media effects class.</p>
    /// <p>Target shape types: <see cref="IVideoFrame"></see>, <see cref="IAudioFrame"></see></p>
    /// </summary>
    MediaCall,
    /// <summary>
    /// <p>OLE Action Verbs class.</p>
    /// <p>Target shape types: <see cref="IOleObjectFrame"></see></p>
    /// </summary>
    OLEActionVerbs
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::EffectPresetClassType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::EffectPresetClassType, const char_t*>, 6>& values();
};
/// @endcond



