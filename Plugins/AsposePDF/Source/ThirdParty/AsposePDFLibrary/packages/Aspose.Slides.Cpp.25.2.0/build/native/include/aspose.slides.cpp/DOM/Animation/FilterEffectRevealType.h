#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents filter reveal type.
/// </summary>
enum class FilterEffectRevealType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    None,
    /// <summary ></summary>
    In,
    /// <summary ></summary>
    Out
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::FilterEffectRevealType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::FilterEffectRevealType, const char_t*>, 4>& values();
};
/// @endcond



