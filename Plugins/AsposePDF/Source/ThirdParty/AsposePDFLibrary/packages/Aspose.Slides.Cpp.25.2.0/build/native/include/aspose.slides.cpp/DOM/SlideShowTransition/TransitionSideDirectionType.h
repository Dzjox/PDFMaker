#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represent side direction transition types.
/// </summary>
enum class TransitionSideDirectionType
{
    /// <summary ></summary>
    Left = 0,
    /// <summary ></summary>
    Up,
    /// <summary ></summary>
    Down,
    /// <summary ></summary>
    Right
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionSideDirectionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionSideDirectionType, const char_t*>, 4>& values();
};
/// @endcond



