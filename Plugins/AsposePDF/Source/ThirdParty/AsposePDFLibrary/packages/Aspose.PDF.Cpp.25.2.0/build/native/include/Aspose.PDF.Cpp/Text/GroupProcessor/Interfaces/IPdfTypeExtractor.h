#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/idisposable.h>

#include "Aspose.PDF.Cpp/Text/GroupProcessor/Interfaces/IDocumentTextExtractor.h"
#include "Aspose.PDF.Cpp/Text/GroupProcessor/Interfaces/IDocumentPageTextExtractor.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {

/// <summary>
/// Represents interface to interacting with extractor.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IPdfTypeExtractor : public Aspose::Pdf::GroupProcessor::IDocumentTextExtractor, public Aspose::Pdf::GroupProcessor::IDocumentPageTextExtractor, public System::IDisposable
{
    typedef IPdfTypeExtractor ThisType;
    typedef Aspose::Pdf::GroupProcessor::IDocumentTextExtractor BaseType;
    typedef Aspose::Pdf::GroupProcessor::IDocumentPageTextExtractor BaseType1;
    typedef System::IDisposable BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns page count.
    /// </summary>
    int32_t get_PageCount() override = 0;
    /// <summary>
    /// Returns version.
    /// </summary>
    virtual System::String get_Version() = 0;
    /// <summary>
    /// Returns if fast extraction mechanism used.
    /// </summary>
    virtual bool get_IsFastExtractionUsed() = 0;
    
    /// <summary>
    /// Returns collection of extracted text values.
    /// </summary>
    /// <returns>Collection of extracted text values.</returns>
    System::ArrayPtr<System::String> ExtractAllText() override = 0;
    /// <summary>
    /// Returns page text.
    /// </summary>
    /// <param name="pageNumber">Page number.</param>
    /// <returns>Page text.</returns>
    System::String ExtractPageText(int32_t pageNumber) override = 0;
    /// <summary>
    /// Dispose.
    /// </summary>
    void Dispose() override = 0;
    
};

} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


