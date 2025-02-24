#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Enumeration of types of shape thumbnail bounds.
/// </summary>
enum class ShapeThumbnailBounds
{
    /// <summary>
    /// Shape thumbnail will have the size equal to slide size.
    /// Shape position will be saved.
    /// </summary>
    Slide,
    /// <summary>
    /// Shape thumbnail will have size equal to the shape bounds rectangle
    /// with taking into account shape outline settings.
    /// </summary>
    Shape,
    /// <summary>
    /// Shape thumbnail will have size equal to the shape appearance (in bounds of a slide). 
    /// It can be cases when shape appearance doesn't fit into the shape bounds. E.g.
    /// rotation, miter join of acute angle , 3D effects, etc.
    /// </summary>
    Appearance
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ShapeThumbnailBounds>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ShapeThumbnailBounds, const char_t*>, 3>& values();
};
/// @endcond



