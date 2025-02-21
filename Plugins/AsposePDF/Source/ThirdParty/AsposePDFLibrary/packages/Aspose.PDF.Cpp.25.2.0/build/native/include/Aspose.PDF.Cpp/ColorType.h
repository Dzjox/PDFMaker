#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Specifies color type of elements on page.
/// </summary>
enum class ColorType
{
    /// <summary>
    /// RGB color type.
    /// </summary>
    Rgb,
    /// <summary>
    /// Grayscale color type.
    /// </summary>
    Grayscale,
    /// <summary>
    /// Black and white color type.
    /// </summary>
    BlackAndWhite,
    /// <summary>
    /// Undefined color type value.
    /// </summary>
    Undefined
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::ColorType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::ColorType, const char_t*>, 4>& values();
};



