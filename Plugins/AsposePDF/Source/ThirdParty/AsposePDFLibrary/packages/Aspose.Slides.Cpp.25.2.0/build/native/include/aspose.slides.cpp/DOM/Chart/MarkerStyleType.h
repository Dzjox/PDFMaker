#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Determines form of marker on chart's data point.
/// </summary>
enum class MarkerStyleType
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// Specifies a circle shall be drawn at each data point. 
    /// </summary>
    Circle,
    /// <summary>
    /// Specifies a dash shall be drawn at each data point. 
    /// </summary>
    Dash,
    /// <summary>
    /// Specifies a diamond shall be drawn at each data point. 
    /// </summary>
    Diamond,
    /// <summary>
    /// Specifies a dot shall be drawn at each data point. 
    /// </summary>
    Dot,
    /// <summary>
    /// Specifies nothing shall be drawn at each data point. 
    /// </summary>
    None,
    /// <summary>
    /// Specifies a picture shall be drawn at each data point. 
    /// </summary>
    Picture,
    /// <summary>
    /// Specifies a plus shall be drawn at each data point. 
    /// </summary>
    Plus,
    /// <summary>
    /// Specifies a square shall be drawn at each data point. 
    /// </summary>
    Square,
    /// <summary>
    /// Specifies a star shall be drawn at each data point. 
    /// </summary>
    Star,
    /// <summary>
    /// Specifies a triangle shall be drawn at each data point. 
    /// </summary>
    Triangle,
    /// <summary>
    /// Specifies an X shall be drawn at each data point. 
    /// </summary>
    X
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::MarkerStyleType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::MarkerStyleType, const char_t*>, 12>& values();
};
/// @endcond



