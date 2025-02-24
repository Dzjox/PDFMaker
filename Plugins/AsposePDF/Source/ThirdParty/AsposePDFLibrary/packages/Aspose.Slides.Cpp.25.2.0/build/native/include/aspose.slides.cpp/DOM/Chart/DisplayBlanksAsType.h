#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Determines how missing data will be displayed.
/// </summary>
enum class DisplayBlanksAsType
{
    /// <summary>
    /// Specifies that blank values shall be left as a gap.
    /// </summary>
    Gap,
    /// <summary>
    /// Specifies that blank values shall be spanned with a line.
    /// </summary>
    Span,
    /// <summary>
    /// Specifies that blank values shall be treated as zero. 
    /// </summary>
    Zero
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::DisplayBlanksAsType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::DisplayBlanksAsType, const char_t*>, 3>& values();
};
/// @endcond



