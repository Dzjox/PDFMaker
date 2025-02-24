#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Specifies a direction restricted to the values of left and right.
/// </summary>
enum class TransitionLeftRightDirectionType
{
    /// <summary ></summary>
    Left = 0,
    /// <summary ></summary>
    Right
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionLeftRightDirectionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionLeftRightDirectionType, const char_t*>, 2>& values();
};
/// @endcond



