#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing xps file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XpsLoadOptions final : public Aspose::Pdf::LoadOptions, public Aspose::Pdf::IPipelineOptions
{
    typedef XpsLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    typedef Aspose::Pdf::IPipelineOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Defines batch size if batched conversion is applicable
    /// to source and destination formats pair.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_BatchSize() override;
    /// <summary>
    /// Defines batch size if batched conversion is applicable
    /// to source and destination formats pair.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BatchSize(int32_t value) override;
    
    /// <summary>
    /// Creates default load options for converting xps file into pdf document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API XpsLoadOptions();
    
private:

    int32_t _batchSize;
    
};

} // namespace Pdf
} // namespace Aspose


