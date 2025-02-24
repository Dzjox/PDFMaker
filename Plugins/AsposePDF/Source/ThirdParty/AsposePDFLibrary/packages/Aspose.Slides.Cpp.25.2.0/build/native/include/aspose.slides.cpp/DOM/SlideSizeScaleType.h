#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the scale type of slide content.
/// </summary>
enum class SlideSizeScaleType
{
    /// <summary>
    /// Do not scale.
    /// </summary>
    DoNotScale,
    /// <summary>
    /// Scale to ensure fit.
    /// </summary>
    EnsureFit,
    /// <summary>
    /// Maximize size of content.
    /// </summary>
    Maximize
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideSizeScaleType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideSizeScaleType, const char_t*>, 3>& values();
};
/// @endcond



