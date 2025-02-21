#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Enumeration of posible types of Acro Form.
/// </summary>
enum class FormType
{
    /// <summary>
    /// Standard AcroForm.
    /// </summary>
    Standard,
    /// <summary>
    /// Static XFA form.
    /// </summary>
    Static,
    /// <summary>
    /// Dynamic XFA form.
    /// </summary>
    Dynamic
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Forms::FormType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Forms::FormType, const char_t*>, 3>& values();
};



