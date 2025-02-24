#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents the rule to use for adding new embedding font into <see cref="Aspose::Slides::IPresentation">IPresentation</see>
/// </summary>
enum class EmbedFontCharacters
{
    /// <summary>
    /// Embed only the characters used in the presentation (best for reducing file size).
    /// </summary>
    OnlyUsed,
    /// <summary>
    /// Embed all characters (best for editing by other people).
    /// </summary>
    All
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::EmbedFontCharacters>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::EmbedFontCharacters, const char_t*>, 2>& values();
};
/// @endcond



