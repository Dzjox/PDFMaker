#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents different levels of caching for PVI effective objects.
/// </summary>
enum class PVICachingMode
{
    /// <summary>
    /// Classic mode with creating every instance.
    /// </summary>
    NoCaching = 0,
    /// <summary>
    /// Use effective values caching for NotDefined formats, classic mode for the rest.
    /// </summary>
    NotDefinedOnly = 1,
    /// <summary>
    /// Use effective values caching for all formats.
    /// </summary>
    Full = 2
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PVICachingMode>
{
    static const ASPOSE_SLIDES_SHARED_API std::array<std::pair<Aspose::Slides::PVICachingMode, const char_t*>, 3>& values();
};
/// @endcond



