#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Windows.Forms;

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Tests
{
class RegressionTests_v9_5;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents an object that contains current printing page info.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfPrintPageInfo : public System::Object
{
    typedef PdfPrintPageInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::RegressionTests_v9_5;
    
public:

    /// <summary>
    /// Gets currently printed page number;
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageNumber() const;
    
protected:

    /// <summary>
    /// Initializes new PdfPrintPageInfo object.
    /// </summary>
    /// <param name="pageNumber">Currently printed page number.</param>
    PdfPrintPageInfo(int32_t pageNumber);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PdfPrintPageInfo, CODEPORTING_ARGS(int32_t pageNumber));
    
private:

    int32_t pageNumber;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


