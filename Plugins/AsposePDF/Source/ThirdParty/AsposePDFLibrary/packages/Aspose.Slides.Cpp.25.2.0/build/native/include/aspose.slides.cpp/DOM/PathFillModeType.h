#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Specifies the manner in which a path should be filled
/// </summary>
enum class PathFillModeType : uint8_t
{
    /// <summary>
    /// No Path Fill
    /// This specifies that the corresponding path should have no fill. 
    /// </summary>
    None = 0,
    /// <summary>
    /// Normal Path Fill
    /// This specifies that the corresponding path should have a normally shaded color applied to it’s fill. 
    /// </summary>
    Normal = 1,
    /// <summary>
    /// Lighten Path Fill
    /// This specifies that the corresponding path should have  a lightly shaded color applied to it’s fill. 
    /// </summary>
    Lighten = 2,
    /// <summary>
    /// Lighten Path Fill Less
    /// This specifies that the corresponding path should have a slightly lighter shaded color applied to it’s fill. 
    /// </summary>
    LightenLess = 3,
    /// <summary>
    /// Darken Path Fill
    /// This specifies that the corresponding path should have a darker shaded color applied to it’s fill. 
    /// </summary>
    Darken = 4,
    /// <summary>
    /// Darken Path Fill Less
    /// This specifies that the corresponding path should have a slightly darker shaded color applied to it’s fill. 
    /// </summary>
    DarkenLess = 5
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PathFillModeType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PathFillModeType, const char_t*>, 6>& values();
};
/// @endcond



