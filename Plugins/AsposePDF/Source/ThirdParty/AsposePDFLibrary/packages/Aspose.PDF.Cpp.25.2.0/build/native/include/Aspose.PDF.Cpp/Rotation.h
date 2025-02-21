#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumeration of possible rotation values.
/// </summary>
enum class Rotation
{
    /// <summary>
    /// Non-rotated.
    /// </summary>
    None,
    /// <summary>
    /// Rotated on 90 degrees clockwise.
    /// </summary>
    on90,
    /// <summary>
    /// Rotated on 180 degrees.
    /// </summary>
    on180,
    /// <summary>
    /// Rotated on 270 degrees clockwise.
    /// </summary>
    on270,
    /// <summary>
    /// Rotated on 360 degrees clockwise.
    /// </summary>
    on360
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Rotation>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Rotation, const char_t*>, 5>& values();
};



