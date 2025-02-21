#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>

#include "Aspose.PDF.Cpp/ImportOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Import option for import from Computer Graphics Metafile(CGM) format.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CgmImportOptions : public Aspose::Pdf::ImportOptions
{
    typedef CgmImportOptions ThisType;
    typedef Aspose::Pdf::ImportOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets output page size for import.
    /// Default page size - A4 300dpi 2480 X 3508.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::SizeF get_PageSize() const;
    /// <summary>
    /// Sets output page size for import.
    /// Default page size - A4 300dpi 2480 X 3508.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageSize(System::Drawing::SizeF value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API CgmImportOptions();
    
private:

    System::Drawing::SizeF pageSize;
    
};

} // namespace Pdf
} // namespace Aspose


