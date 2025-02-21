#pragma once

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Load options for TXT to PDF conversion. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TxtLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef TxtLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates load options for converting text into pdf document.
    /// </summary>
    ASPOSE_PDF_SHARED_API TxtLoadOptions();
    
};

} // namespace Pdf
} // namespace Aspose


