#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class PageInfo;
class SvgConverter;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing SVG file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SvgLoadOptions final : public Aspose::Pdf::LoadOptions
{
    typedef SvgLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::SvgConverter;
    
public:

    /// <summary>
    /// Enumerates conversion engines that can be used for conversion
    /// </summary>
    enum class ConversionEngines
    {
        /// <summary>
        /// Represents legacy SVG to PDF conversion engine.
        /// </summary>  
        LegacyEngine,
        /// <summary>
        /// Represents new SVG to PDF conversion engine.
        /// </summary>  
        NewEngine
    };
    
    
public:

    /// <summary>
    /// Allows select conversion engine that will be in use during conversion.
    /// Currently new engine is in B-testing stage, so this value by default set to 
    /// ConversionEngines.LegacyEngine
    /// </summary>
    SvgLoadOptions::ConversionEngines ConversionEngine;
    
    /// <summary>
    /// Gets page info that should be applied during loading of document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo() const;
    /// <summary>
    /// Sets page info that should be applied during loading of document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    /// <summary>
    /// Adust pdf page size to svg size
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AdjustPageSize() const;
    /// <summary>
    /// Adust pdf page size to svg size
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AdjustPageSize(bool value);
    
    /// <summary>
    /// Creates <see cref="SvgLoadOptions"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API SvgLoadOptions();
    
protected:

    /// <summary>
    /// The base path/url for the SVG file.
    /// It's a compulsory parameter when document is loaded from stream
    /// </summary>
    System::String get_BasePath() const;
    /// <summary>
    /// The base path/url for the SVG file.
    /// It's a compulsory parameter when document is loaded from stream
    /// </summary>
    void set_BasePath(System::String value);
    
private:

    System::SharedPtr<Aspose::Pdf::PageInfo> _pageInfo;
    bool adjustPageSize;
    System::String _basePath;
    
};

} // namespace Pdf
} // namespace Aspose


