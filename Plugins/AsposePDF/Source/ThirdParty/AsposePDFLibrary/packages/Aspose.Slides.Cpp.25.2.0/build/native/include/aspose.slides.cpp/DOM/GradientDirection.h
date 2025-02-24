#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the gradient style.
/// </summary>
enum class GradientDirection
{
    /// <summary>
    /// Not defined
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// From Top Left Corner
    /// </summary>
    FromCorner1,
    /// <summary>
    /// From Top Right Corner
    /// </summary>
    FromCorner2,
    /// <summary>
    /// From Bottom Left Corner
    /// </summary>
    FromCorner3,
    /// <summary>
    /// From Bottom Right Corner
    /// </summary>
    FromCorner4,
    /// <summary>
    /// From Center
    /// </summary>
    FromCenter
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::GradientDirection>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::GradientDirection, const char_t*>, 6>& values();
};
/// @endcond



