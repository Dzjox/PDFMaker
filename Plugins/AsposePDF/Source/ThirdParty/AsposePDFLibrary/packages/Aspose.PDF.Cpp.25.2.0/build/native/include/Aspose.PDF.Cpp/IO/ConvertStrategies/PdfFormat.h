#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents an pdf format.
/// </summary>
enum class PdfFormat
{
    /// Pdf/A-1a format
    PDF_A_1A = 0,
    /// Pdf/A-1b format
    PDF_A_1B,
    /// Pdf/A-2a format
    PDF_A_2A,
    /// Pdf/A-3a format
    PDF_A_3A,
    /// Pdf/A-2b format
    PDF_A_2B,
    /// Pdf/A-2u format
    PDF_A_2U,
    /// Pdf/A-3b format
    PDF_A_3B,
    /// Pdf/A-3u format
    PDF_A_3U,
    /// Adobe version 1.0
    v_1_0,
    /// Adobe version 1.1
    v_1_1,
    /// Adobe version 1.2
    v_1_2,
    /// Adobe version 1.3
    v_1_3,
    /// Adobe version 1.4
    v_1_4,
    /// Adobe version 1.5
    v_1_5,
    /// Adobe version 1.6
    v_1_6,
    /// Adobe version 1.7
    v_1_7,
    /// ISO Standard PDF 2.0
    v_2_0,
    /// PDF/UA-1 format
    PDF_UA_1,
    /// PDF/X-1a-2001 format
    PDF_X_1A_2001,
    /// PDF/X-1a format
    PDF_X_1A,
    /// PDF/X-3 format
    PDF_X_3,
    /// <summary>
    /// ZUGFeRD format
    /// </summary>
    ZUGFeRD,
    /// <summary>
    /// PDF/A-4 format
    /// </summary>
    PDF_A_4,
    /// <summary>
    /// PDF/A-4e format
    /// </summary>
    PDF_A_4E,
    /// <summary>
    /// PDF/A-4f format
    /// </summary>
    PDF_A_4F,
    /// <summary>
    /// PDF/X-4 format
    /// </summary>
    PDF_X_4
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::PdfFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::PdfFormat, const char_t*>, 26>& values();
};



