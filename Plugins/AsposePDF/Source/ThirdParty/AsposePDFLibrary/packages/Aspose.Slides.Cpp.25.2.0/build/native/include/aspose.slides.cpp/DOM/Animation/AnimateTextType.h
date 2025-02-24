#pragma once
// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents the animate text type of an animation effect.
/// </summary>
enum class AnimateTextType
{
    /// <summary>
    /// Animate all text at once.
    /// </summary>
    AllAtOnce = 0,
    /// <summary>
    /// Animate text by word.
    /// </summary>
    ByWord,
    /// <summary>
    /// Animate text by letter.
    /// </summary>
    ByLetter
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::AnimateTextType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::AnimateTextType, const char_t*>, 3>& values();
};
/// @endcond



