﻿#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Represents styles for drawing check in check box.
/// </summary>
enum class BoxStyle
{
    /// <summary>
    /// Circle style.
    /// </summary>
    Circle,
    /// <summary>
    /// Check style.
    /// </summary>
    Check,
    /// <summary>
    /// Cross style.
    /// </summary>
    Cross,
    /// <summary>
    /// Diamond style.
    /// </summary>
    Diamond,
    /// <summary>
    /// Square style.
    /// </summary>
    Square,
    /// <summary>
    /// Star style.
    /// </summary>
    Star
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Forms::BoxStyle>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Forms::BoxStyle, const char_t*>, 6>& values();
};



