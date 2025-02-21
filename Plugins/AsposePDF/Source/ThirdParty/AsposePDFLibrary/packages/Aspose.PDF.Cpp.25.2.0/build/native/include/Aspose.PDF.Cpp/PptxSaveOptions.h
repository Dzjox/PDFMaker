#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to SVG format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PptxSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef PptxSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// If set to true then all the content is recognized as images (one per page)
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SlidesAsImages() const;
    /// <summary>
    /// If set to true then all the content is recognized as images (one per page)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SlidesAsImages(bool value);
    /// <summary>
    /// Gets the image resolution (dpi). Default is 192 dpi.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ImageResolution() const;
    /// <summary>
    /// Sets the image resolution (dpi). Default is 192 dpi.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ImageResolution(int32_t value);
    /// <summary>
    /// If set to true then images are separated from all other graphics
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SeparateImages() const;
    /// <summary>
    /// If set to true then images are separated from all other graphics
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SeparateImages(bool value);
    /// <summary>
    /// Toggles text columns recognition
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_OptimizeTextBoxes() const;
    /// <summary>
    /// Toggles text columns recognition
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OptimizeTextBoxes(bool value);
    /// <summary>
    ///  This handler can be used to handle conversion progress events
    ///  f.e. it can be used to show progress bar or messages about current amount
    ///  of processed  pages, example of handler's code that shows progress on console is :
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API UnifiedSaveOptions::ConversionProgressEventHandler get_CustomProgressHandler() const;
    /// <summary>
    ///  This handler can be used to handle conversion progress events
    ///  f.e. it can be used to show progress bar or messages about current amount
    ///  of processed  pages, example of handler's code that shows progress on console is :
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_CustomProgressHandler(UnifiedSaveOptions::ConversionProgressEventHandler value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API PptxSaveOptions();
    
private:

    int32_t _imageResolution;
    UnifiedSaveOptions::ConversionProgressEventHandler _customProgressHandler;
    bool pr_SlidesAsImages;
    bool pr_SeparateImages;
    bool pr_OptimizeTextBoxes;
    
};

} // namespace Pdf
} // namespace Aspose


