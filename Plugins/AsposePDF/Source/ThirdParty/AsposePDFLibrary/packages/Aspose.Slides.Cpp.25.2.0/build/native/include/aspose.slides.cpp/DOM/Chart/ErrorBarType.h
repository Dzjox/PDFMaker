#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents type of error bar
/// </summary>
enum class ErrorBarType
{
    /// <summary>
    /// Specifies that error bars shall be shown in the positive and negative directions.
    /// </summary>
    Both,
    /// <summary>
    /// Specifies that error bars shall be shown in the negative direction only.
    /// </summary>
    Minus,
    /// <summary>
    /// Specifies that error bars shall be shown in the positive direction only.
    /// </summary>
    Plus
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::ErrorBarType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::ErrorBarType, const char_t*>, 3>& values();
};
/// @endcond



