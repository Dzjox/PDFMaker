#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a rule fot font substitution
/// </summary>
enum class FontSubstCondition
{
    /// <summary>
    /// Substitute when font is not found
    /// </summary>
    WhenInaccessible,
    /// <summary>
    /// Substitute always
    /// </summary>
    Always
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::FontSubstCondition>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::FontSubstCondition, const char_t*>, 2>& values();
};
/// @endcond



