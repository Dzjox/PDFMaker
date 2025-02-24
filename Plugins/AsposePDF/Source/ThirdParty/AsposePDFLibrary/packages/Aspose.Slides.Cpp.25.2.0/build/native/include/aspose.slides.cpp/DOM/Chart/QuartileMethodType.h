#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Returns type of quartile method
/// </summary>
enum class QuartileMethodType
{
    /// <summary>
    /// Represents exclusive quartile method.
    /// </summary>
    Exclusive,
    /// <summary>
    /// Represents inclusive quartile method.
    /// </summary>
    Inclusive
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::QuartileMethodType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::QuartileMethodType, const char_t*>, 2>& values();
};
/// @endcond



