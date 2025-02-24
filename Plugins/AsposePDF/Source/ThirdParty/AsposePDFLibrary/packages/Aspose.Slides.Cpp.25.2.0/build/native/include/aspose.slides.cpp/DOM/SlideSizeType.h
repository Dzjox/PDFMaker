#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the slide size preset.
/// </summary>
enum class SlideSizeType
{
    /// <summary>
    /// On screen 4x3
    /// </summary>
    OnScreen = 0,
    /// <summary>
    /// Letter
    /// </summary>
    LetterPaper = 1,
    /// <summary>
    /// A4
    /// </summary>
    A4Paper = 2,
    /// <summary>
    /// Slide 35mm
    /// </summary>
    Slide35mm = 3,
    /// <summary>
    /// Overhead
    /// </summary>
    Overhead = 4,
    /// <summary>
    /// Banner
    /// </summary>
    Banner = 5,
    /// <summary>
    /// Custom size
    /// </summary>
    Custom = 6,
    /// <summary>
    /// Ledger
    /// </summary>
    Ledger,
    /// <summary>
    /// A3
    /// </summary>
    A3Paper,
    /// <summary>
    /// B4 ISO
    /// </summary>
    B4IsoPaper,
    /// <summary>
    /// B5 ISO
    /// </summary>
    B5IsoPaper,
    /// <summary>
    /// B4 JIS
    /// </summary>
    B4JisPaper,
    /// <summary>
    /// B5 JIS
    /// </summary>
    B5JisPaper,
    /// <summary>
    /// Hagaki card
    /// </summary>
    HagakiCard,
    /// <summary>
    /// On screen 16x9
    /// </summary>
    OnScreen16x9,
    /// <summary>
    /// On Screen 16x10
    /// </summary>
    OnScreen16x10,
    /// <summary>
    /// Widescreen
    /// </summary>
    Widescreen
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideSizeType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideSizeType, const char_t*>, 17>& values();
};
/// @endcond



