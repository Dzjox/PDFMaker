#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent fill types.
/// </summary>
enum class EffectFillType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Remove,
    /// <summary ></summary>
    Freeze,
    /// <summary ></summary>
    Hold,
    /// <summary ></summary>
    Transition
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::EffectFillType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::EffectFillType, const char_t*>, 5>& values();
};
/// @endcond



