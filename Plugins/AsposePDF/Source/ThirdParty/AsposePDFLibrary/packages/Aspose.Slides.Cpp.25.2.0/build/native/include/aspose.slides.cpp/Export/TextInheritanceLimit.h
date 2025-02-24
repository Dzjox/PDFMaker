#pragma once
//Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Controls the depth of the text properties inheritance.
/// </summary>
enum class TextInheritanceLimit
{
    /// <summary>
    /// Inherit all text properties.
    /// </summary>
    All,
    /// <summary>
    /// Inherit only from TextFrame's style.
    /// </summary>
    TextBox,
    /// <summary>
    /// Use only properties defined for paragraph.
    /// </summary>
    ParagraphOnly
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::TextInheritanceLimit>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::TextInheritanceLimit, const char_t*>, 3>& values();
};
/// @endcond



