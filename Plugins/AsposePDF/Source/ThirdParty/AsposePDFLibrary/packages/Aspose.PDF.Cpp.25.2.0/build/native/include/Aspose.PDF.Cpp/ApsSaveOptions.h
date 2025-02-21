#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ApsConverter;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to APS XML format.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ApsSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef ApsSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsConverter;
    
public:

    /// <summary>
    /// Constructor of APsSaveOptions class.
    /// </summary>
    ASPOSE_PDF_SHARED_API ApsSaveOptions();
    
protected:

    bool UseClassicMode;
    
};

} // namespace Pdf
} // namespace Aspose


