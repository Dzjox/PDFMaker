#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {

/// <summary>
/// Interface for document text extractor.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IDocumentTextExtractor : public virtual System::Object
{
    typedef IDocumentTextExtractor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns collection of extracted text values.
    /// </summary>
    /// <returns>Extracted text values.</returns>
    virtual System::ArrayPtr<System::String> ExtractAllText() = 0;
    
};

} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


