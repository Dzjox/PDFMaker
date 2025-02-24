#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents types of accumulation of effect behaviors.
/// </summary>
enum class BehaviorAccumulateType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Always,
    /// <summary ></summary>
    None
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::BehaviorAccumulateType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::BehaviorAccumulateType, const char_t*>, 3>& values();
};
/// @endcond



