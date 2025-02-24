#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Specifies how the motion path moves when the target shape is moved
/// </summary>
enum class MotionPathEditMode
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Relative,
    /// <summary ></summary>
    Fixed
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::MotionPathEditMode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::MotionPathEditMode, const char_t*>, 3>& values();
};
/// @endcond



