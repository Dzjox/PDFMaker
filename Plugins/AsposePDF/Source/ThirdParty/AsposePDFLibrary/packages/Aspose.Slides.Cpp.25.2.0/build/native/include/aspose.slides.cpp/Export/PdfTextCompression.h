#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Constants which define the type of a compression applied to all content in the PDF file except images.
/// </summary>
enum class PdfTextCompression
{
    /// <summary>
    /// No compression.
    /// </summary>
    None,
    /// <summary>
    /// Flate (ZIP) compression.
    /// </summary>
    Flate
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::PdfTextCompression>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::PdfTextCompression, const char_t*>, 2>& values();
};
/// @endcond



