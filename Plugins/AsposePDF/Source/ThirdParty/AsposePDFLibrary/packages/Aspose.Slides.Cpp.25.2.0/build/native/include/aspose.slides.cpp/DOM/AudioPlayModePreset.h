#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Constants which define how a sound is played.
/// </summary>
enum class AudioPlayModePreset
{
    /// <summary>
    /// 
    /// </summary>
    Mixed = -1,
    /// <summary>
    /// Play automatically.
    /// </summary>
    Auto = 0,
    /// <summary>
    /// Play only when the icon is clicked on.
    /// </summary>
    OnClick,
    /// <summary>
    /// Play on all slides. 
    /// Please use <see cref="IAudioFrame::set_PlayAcrossSlides()"></see> method instead.
    /// </summary>
    AllSlides,
    /// <summary>
    /// Play automatically with a click.
    /// </summary>
    InClickSequence
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::AudioPlayModePreset>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::AudioPlayModePreset, const char_t*>, 5>& values();
};
/// @endcond



