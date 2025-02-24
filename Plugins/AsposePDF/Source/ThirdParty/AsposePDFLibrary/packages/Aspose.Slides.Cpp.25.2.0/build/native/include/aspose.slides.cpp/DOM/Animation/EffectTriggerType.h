#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent trigger type of effect.
/// </summary>
enum class EffectTriggerType
{
    /// <summary ></summary>
    AfterPrevious = 0,
    /// <summary ></summary>
    OnClick,
    /// <summary ></summary>
    WithPrevious
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::EffectTriggerType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::EffectTriggerType, const char_t*>, 3>& values();
};
/// @endcond



