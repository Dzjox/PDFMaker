#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents additive type for effect behavior.
/// </summary>
enum class BehaviorAdditiveType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    None,
    /// <summary ></summary>
    Base,
    /// <summary ></summary>
    Sum,
    /// <summary ></summary>
    Replace,
    /// <summary ></summary>
    Multiply
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::BehaviorAdditiveType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::BehaviorAdditiveType, const char_t*>, 6>& values();
};
/// @endcond



