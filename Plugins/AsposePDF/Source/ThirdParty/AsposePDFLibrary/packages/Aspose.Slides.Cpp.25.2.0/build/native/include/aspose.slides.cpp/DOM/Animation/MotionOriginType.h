#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Specifies what the origin of the motion path is relative to.
/// Such as the layout of the slide, or the parent.
/// </summary>
enum class MotionOriginType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Parent,
    /// <summary ></summary>
    Layout
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::MotionOriginType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::MotionOriginType, const char_t*>, 3>& values();
};
/// @endcond



