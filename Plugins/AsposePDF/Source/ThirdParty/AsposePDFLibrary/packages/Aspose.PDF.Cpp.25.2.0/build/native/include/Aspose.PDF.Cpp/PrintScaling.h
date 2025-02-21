#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The page scaling option that shall be selected when a print dialog is displayed for this document.
/// </summary>
enum class PrintScaling
{
    /// <summary>
    /// The conforming reader's default print scaling.
    /// </summary>
    AppDefault,
    /// <summary>
    /// No page scaling.
    /// </summary>
    None
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Represents conversion routines between <see cref="PrintScaling"></see> value and string representation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PrintScalingConverter
{
    typedef PrintScalingConverter ThisType;
    
public:

    /// <summary>
    /// Converts <see cref="PrintScaling"></see> value to the corresponding string representation.
    /// </summary>
    /// <param name="value">Value to convert.</param>
    /// <returns>String representation of the value.</returns>
    static ASPOSE_PDF_SHARED_API System::String ToString(PrintScaling value);
    /// <summary>
    /// Converts string representation of the value to the corresponding <see cref="PrintScaling"></see> value.
    /// </summary>
    /// <param name="value">String value to convert.</param>
    /// <returns>Corresponding <see cref="PrintScaling"></see> value.</returns>
    static ASPOSE_PDF_SHARED_API PrintScaling ToEnum(System::String value);
    
public:
    PrintScalingConverter() = delete;
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::PrintScaling>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::PrintScaling, const char_t*>, 2>& values();
};



