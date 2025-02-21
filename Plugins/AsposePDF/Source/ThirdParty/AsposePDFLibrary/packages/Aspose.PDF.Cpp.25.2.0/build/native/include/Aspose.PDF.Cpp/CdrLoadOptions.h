#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class describes CDR load options.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CdrLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef CdrLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API CdrLoadOptions();
    
protected:

    bool UseClassicMode;
    
};

} // namespace Pdf
} // namespace Aspose


