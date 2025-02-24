#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Determines where axis will cross.
/// </summary>
enum class CrossesType
{
    /// <summary>
    /// The category axis crosses at the zero point of the value axis (if possible), or the minimum value (if the minimum is greater than zero) or the maximum (if the maximum is less than zero). 
    /// </summary>
    AxisCrossesAtZero = 0,
    /// <summary>
    /// The axis crosses at the maximum value.
    /// </summary>
    Maximum,
    /// <summary>
    /// Custom value from property CrossAt
    /// </summary>
    Custom
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::CrossesType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::CrossesType, const char_t*>, 3>& values();
};
/// @endcond



