#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Specifies the types of printer's marks to be added to a document.
/// </summary>
/// <remarks>
/// This enumeration has a <see cref="FlagsAttribute"></see> attribute that allows a bitwise combination of its member values.
/// </remarks>
enum class PrinterMarksKind
{
    /// <summary>
    /// Specifies that no printer's marks are to be added.
    /// </summary>
    None = 0,
    /// <summary>
    /// Specifies that trim marks are to be added.
    /// </summary>
    TrimMarks = static_cast<int32_t>(static_cast<int32_t>(1 << 0)),
    /// <summary>
    /// Specifies that bleed marks are to be added.
    /// </summary>
    BleedMarks = static_cast<int32_t>(static_cast<int32_t>(1 << 1)),
    /// <summary>
    /// Specifies that registration marks are to be added.
    /// </summary>
    RegistrationMarks = static_cast<int32_t>(static_cast<int32_t>(1 << 2)),
    /// <summary>
    /// Specifies that color bars are to be added.
    /// </summary>
    ColorBars = static_cast<int32_t>(static_cast<int32_t>(1 << 3)),
    /// <summary>
    /// Specifies that page information is to be added.
    /// </summary>
    PageInformation = static_cast<int32_t>(static_cast<int32_t>(1 << 4)),
    /// <summary>
    /// Specifies that all types of printer's marks are to be added.
    /// </summary>
    All = static_cast<int32_t>(TrimMarks | BleedMarks | RegistrationMarks | ColorBars | PageInformation)
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Annotations::PrinterMarksKind);
DECLARE_USING_GLOBAL_OPERATORS

/// <summary>
/// Provides extension methods for the <see cref="PrinterMarksKind"></see> enumeration.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PrinterMarksKindExtensions
{
    typedef PrinterMarksKindExtensions ThisType;
    
public:

    /// <summary>
    /// Determines whether the current value includes a specified flag.
    /// </summary>
    /// <param name="value">The current value of the <see cref="PrinterMarksKind"></see> enumeration.</param>
    /// <param name="flag">The flag to check.</param>
    /// <returns><see langword="true"></see> if the flag is included in the current value; otherwise, <see langword="false"></see>.</returns>
    static ASPOSE_PDF_SHARED_API bool HasFlagFast(PrinterMarksKind value, PrinterMarksKind flag);
    
public:
    PrinterMarksKindExtensions() = delete;
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Annotations);



