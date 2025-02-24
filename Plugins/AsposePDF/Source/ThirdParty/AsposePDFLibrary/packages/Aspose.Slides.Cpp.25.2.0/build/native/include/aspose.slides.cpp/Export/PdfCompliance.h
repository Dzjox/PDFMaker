#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Constants which define the PDF standards compliance level.
/// </summary>
enum class PdfCompliance
{
    /// <summary>
    /// The output file will comply with the PDF 1.5 standard.
    /// </summary>
    Pdf15,
    /// <summary>
    /// The output file will comply with the PDF 1.6 standard.
    /// </summary>
    Pdf16,
    /// <summary>
    /// The output file will comply with the PDF 1.7 standard.
    /// </summary>
    Pdf17,
    /// <summary>
    /// The output file will comply with the PDF/A-1b standard.
    /// </summary>
    PdfA1b,
    /// <summary>
    /// The output file will comply with the PDF/A-1a standard.
    /// </summary>
    PdfA1a,
    /// <summary>
    /// The output file will comply with the PDF/A-2b standard.
    /// </summary>
    PdfA2b,
    /// <summary>
    /// The output file will comply with the PDF/A-2a standard.
    /// </summary>
    PdfA2a,
    /// <summary>
    /// The output file will comply with the PDF/A-3b standard.
    /// </summary>
    PdfA3b,
    /// <summary>
    /// The output file will comply with the PDF/A-3a standard.
    /// </summary>
    PdfA3a,
    /// <summary>
    /// The output file will comply with the PDF/UA standard.
    /// </summary>
    PdfUa,
    /// <summary>
    /// The output file will comply with the PDF/A-2u standard.
    /// </summary>
    PdfA2u
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::PdfCompliance>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::PdfCompliance, const char_t*>, 11>& values();
};
/// @endcond



