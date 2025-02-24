#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents command effect type for command effect behavior.
/// </summary>
enum class CommandEffectType : int8_t
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Event,
    /// <summary ></summary>
    Call,
    /// <summary ></summary>
    Verb
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::CommandEffectType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::CommandEffectType, const char_t*>, 4>& values();
};
/// @endcond



