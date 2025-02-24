#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents triple boolean values.
/// </summary>
enum class NullableBool : int8_t
{
    /// <summary>
    /// Boolean value is undefined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// False value.
    /// </summary>
    False = 0,
    /// <summary>
    /// True value.
    /// </summary>
    True = 1
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::NullableBool>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::NullableBool, const char_t*>, 3>& values();
};
/// @endcond



