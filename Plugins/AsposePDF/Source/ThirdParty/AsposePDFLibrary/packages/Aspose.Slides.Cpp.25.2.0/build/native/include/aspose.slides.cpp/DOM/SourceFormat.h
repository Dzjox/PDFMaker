#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents source file format.
/// </summary>
enum class SourceFormat
{
    /// <summary>
    /// PPT format.
    /// </summary>
    Ppt,
    /// <summary>
    /// Pptx format.
    /// </summary>
    Pptx,
    /// <summary>
    /// Odp format.
    /// </summary>
    Odp
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SourceFormat>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SourceFormat, const char_t*>, 3>& values();
};
/// @endcond



