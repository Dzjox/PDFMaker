#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Determines how object will be processed during saving.
/// </summary>
enum class LinkEmbedDecision
{
    /// <summary>
    /// Object will be stored externally, referrenced by URL
    /// </summary>
    Link,
    /// <summary>
    /// Object should be embedded to a generated file if possible. If embedding is imposible, GetUrl will be called and, depending on result, object will be referrenced by URL or ignored.
    /// </summary>
    Embed,
    /// <summary>
    /// Object will be ignored.
    /// </summary>
    Ignore
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::LinkEmbedDecision>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::LinkEmbedDecision, const char_t*>, 3>& values();
};
/// @endcond



