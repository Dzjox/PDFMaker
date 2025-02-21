#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Xps format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XpsSaveOptions : public Aspose::Pdf::UnifiedSaveOptions, public Aspose::Pdf::IPipelineOptions
{
    typedef XpsSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    typedef Aspose::Pdf::IPipelineOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Indicates whether to preserve transparent (OCR'ed) text.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SaveTransparentTexts() const;
    /// <summary>
    /// Indicates whether to preserve transparent (OCR'ed) text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SaveTransparentTexts(bool value);
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
    /// @deprecated UseNewImagingEngine is deprecated
    /// <summary>
    /// Gets UseNewImagingEngine option.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseNewImagingEngine() const;
    /// @deprecated UseNewImagingEngine is deprecated
    /// <summary>
    /// Sets UseNewImagingEngine option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseNewImagingEngine(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API XpsSaveOptions();
    
private:

    int32_t _batchSize;
    bool _useNewImagingEngine;
    bool pr_SaveTransparentTexts;
    
};

} // namespace Pdf
} // namespace Aspose


