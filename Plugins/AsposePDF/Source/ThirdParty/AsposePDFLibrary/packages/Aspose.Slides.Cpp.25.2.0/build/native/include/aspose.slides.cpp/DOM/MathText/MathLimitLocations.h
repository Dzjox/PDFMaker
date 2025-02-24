#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Location of limits (subscript/superscript) in n-ary operators.
/// </summary>
enum class MathLimitLocations
{
    /// <summary>
    /// Not defined
    /// </summary>
    NotDefined = 0,
    /// <summary>
    /// Limits draw at top and bottom of the operator symbol
    /// </summary>
    UnderOver = 1,
    /// <summary>
    /// Limits draw as subscript and superscript
    /// </summary>
    SubscriptSuperscript = 2
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathLimitLocations>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathLimitLocations, const char_t*>, 3>& values();
};
/// @endcond



