#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represent sound mode of transition.
/// </summary>
enum class TransitionSoundMode
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    StartSound,
    /// <summary ></summary>
    StopPrevoiusSound
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionSoundMode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionSoundMode, const char_t*>, 3>& values();
};
/// @endcond



