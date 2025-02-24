#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Determines how text will appear on a shape during animation.
/// </summary>
enum class BuildType
{
    /// <summary>
    /// With containing shape.
    /// </summary>
    AsOneObject = 0,
    /// <summary>
    /// All paragraph.
    /// </summary>
    AllParagraphsAtOnce,
    /// <summary>
    /// By groups of paragraphs of depth 1.
    /// </summary>
    ByLevelParagraphs1,
    /// <summary>
    /// By groups of paragraphs of depth 2.
    /// </summary>
    ByLevelParagraphs2,
    /// <summary>
    /// By groups of paragraphs of depth 3.
    /// </summary>
    ByLevelParagraphs3,
    /// <summary>
    /// By groups of paragraphs of depth 4.
    /// </summary>
    ByLevelParagraphs4,
    /// <summary>
    /// By groups of paragraphs of depth 5.
    /// </summary>
    ByLevelParagraphs5
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::BuildType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::BuildType, const char_t*>, 7>& values();
};
/// @endcond



