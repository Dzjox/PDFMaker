#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents layout of category data labels. Used with Treemap series only.
/// </summary>
enum class ParentLabelLayoutType
{
    /// <summary>
    /// Specifies that parent category labels are shown as banner
    /// </summary>
    Banner,
    /// <summary>
    /// Specifies that parent category labels are not drawn
    /// </summary>
    None,
    /// <summary>
    /// Specifies that parent category labels are shown as overlapping
    /// </summary>
    Overlapping
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::ParentLabelLayoutType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::ParentLabelLayoutType, const char_t*>, 3>& values();
};
/// @endcond



