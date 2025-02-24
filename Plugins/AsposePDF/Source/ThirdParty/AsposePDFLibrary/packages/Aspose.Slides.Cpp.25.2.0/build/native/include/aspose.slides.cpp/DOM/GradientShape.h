#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the shape of gradient fill.
/// </summary>
enum class GradientShape : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    Linear,
    /// <summary>
    /// 
    /// </summary>
    Rectangle,
    /// <summary>
    /// 
    /// </summary>
    Radial,
    /// <summary>
    /// 
    /// </summary>
    Path
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::GradientShape>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::GradientShape, const char_t*>, 5>& values();
};
/// @endcond



