#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent types of command for animation motion effect behavior.
/// </summary>
enum class MotionCommandPathType
{
    /// <summary ></summary>
    MoveTo = 0,
    /// <summary ></summary>
    LineTo,
    /// <summary ></summary>
    CurveTo,
    /// <summary ></summary>
    CloseLoop,
    /// <summary ></summary>
    End
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::MotionCommandPathType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::MotionCommandPathType, const char_t*>, 5>& values();
};
/// @endcond



