#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {

/// <summary>
/// Interface for document page text extractor.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IDocumentPageTextExtractor : public virtual System::Object
{
    typedef IDocumentPageTextExtractor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns page count.
    /// </summary>
    virtual int32_t get_PageCount() = 0;
    
    /// <summary>
    /// Extracted page text.
    /// </summary>
    /// <param name="pageNumber">Page number.</param>
    /// <returns>Extracted page text.</returns>
    virtual System::String ExtractPageText(int32_t pageNumber) = 0;
    
};

} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


