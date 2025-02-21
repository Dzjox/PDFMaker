#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/SaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Pdf format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef PdfSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Path for temporary files.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_TempPath() const;
    /// <summary>
    /// Path for temporary files.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TempPath(System::String value);
    /// <summary>
    /// Font name used by default for fonts which are absent on computer.
    /// When the PDF document that is saved into PDF contains fonts, that are not available 
    /// in the document itself and on the device, API replaces this fonts with the 
    /// default font(if font with <see cref="DefaultFontName"></see> is found on device)
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DefaultFontName() const;
    /// <summary>
    /// Font name used by default for fonts which are absent on computer.
    /// When the PDF document that is saved into PDF contains fonts, that are not available 
    /// in the document itself and on the device, API replaces this fonts with the 
    /// default font(if font with <see cref="DefaultFontName"></see> is found on device)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultFontName(System::String value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfSaveOptions();
    
private:

    System::String _tempPath;
    System::String pr_DefaultFontName;
    
};

} // namespace Pdf
} // namespace Aspose


