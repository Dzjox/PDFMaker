#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents style scheme of a SmartArt diagram.
/// </summary>
enum class SmartArtQuickStyleType
{
    /// <summary>
    /// SimpleFill
    /// </summary>
    SimpleFill,
    /// <summary>
    /// WhiteOutline
    /// </summary>
    WhiteOutline,
    /// <summary>
    /// SubtleEffect
    /// </summary>
    SubtleEffect,
    /// <summary>
    /// ModerateEffect
    /// </summary>
    ModerateEffect,
    /// <summary>
    /// IntenceEffect
    /// </summary>
    IntenceEffect,
    /// <summary>
    /// Polished
    /// </summary>
    Polished,
    /// <summary>
    /// Inset
    /// </summary>
    Inset,
    /// <summary>
    /// Cartoon
    /// </summary>
    Cartoon,
    /// <summary>
    /// Powder
    /// </summary>
    Powder,
    /// <summary>
    /// BrickScene
    /// </summary>
    BrickScene,
    /// <summary>
    /// FlatScene
    /// </summary>
    FlatScene,
    /// <summary>
    /// MetallicScene
    /// </summary>
    MetallicScene,
    /// <summary>
    /// SunsetScene
    /// </summary>
    SunsetScene,
    /// <summary>
    /// BirdsEyeScene
    /// </summary>
    BirdsEyeScene
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SmartArt::SmartArtQuickStyleType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SmartArt::SmartArtQuickStyleType, const char_t*>, 14>& values();
};
/// @endcond



