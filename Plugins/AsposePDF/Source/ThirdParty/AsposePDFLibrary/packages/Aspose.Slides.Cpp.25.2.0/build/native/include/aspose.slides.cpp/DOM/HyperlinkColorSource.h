#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents source of hyperlink color.
/// </summary>
enum class HyperlinkColorSource
{
    /// <summary>
    /// Styles.
    /// </summary>
    Styles,
    /// <summary>
    /// Portion format.
    /// </summary>
    PortionFormat
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::HyperlinkColorSource>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::HyperlinkColorSource, const char_t*>, 2>& values();
};
/// @endcond



