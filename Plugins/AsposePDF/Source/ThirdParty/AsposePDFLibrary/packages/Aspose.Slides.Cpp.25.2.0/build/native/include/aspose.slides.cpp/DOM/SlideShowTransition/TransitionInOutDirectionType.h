#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represent in or out direction transition types.
/// </summary>
enum class TransitionInOutDirectionType
{
    /// <summary ></summary>
    In = 0,
    /// <summary ></summary>
    Out
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionInOutDirectionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionInOutDirectionType, const char_t*>, 2>& values();
};
/// @endcond



