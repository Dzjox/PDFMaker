#pragma once
// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents the after animation type of an animation effect.
/// </summary>
enum class AfterAnimationType
{
    /// <summary>
    /// Don't Dim after animation type.
    /// </summary>
    DoNotDim = 0,
    /// <summary>
    /// Color after animation type.
    /// </summary>
    Color,
    /// <summary>
    /// Hide After Animation type
    /// </summary>
    HideAfterAnimation,
    /// <summary>
    /// Hide on Next Mouse Click after animation type.
    /// </summary>
    HideOnNextMouseClick
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::AfterAnimationType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::AfterAnimationType, const char_t*>, 4>& values();
};
/// @endcond



