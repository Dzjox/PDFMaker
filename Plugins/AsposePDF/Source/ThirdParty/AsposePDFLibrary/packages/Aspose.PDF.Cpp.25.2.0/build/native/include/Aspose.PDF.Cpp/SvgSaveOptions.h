#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/SaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to SVG format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SvgSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef SvgSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///  enumerates possible types of image files
    ///  that can be saved as external resources during
    ///  during Pdf to SVG conversion
    /// </summary>
    enum class SvgExternalImageType
    {
        /// <summary>
        /// Jpeg format
        /// </summary>
        Jpeg = 0,
        /// <summary>
        /// Png format
        /// </summary>
        Png = 1,
        /// <summary>
        /// Bmp format 
        /// </summary>
        Bmp = 2,
        /// <summary>
        /// Gif format 
        /// </summary>
        Gif = 3,
        /// <summary>
        ///  Tiff format
        /// </summary>
        Tiff = 4,
        /// <summary>
        /// Unknown - means that converter cannot detect type of content itself
        /// </summary>
        Unknown = 5
    };
    
    
public:

    /// <summary>
    ///    To property of such type You can  assign delegate created from custom method that implements processing 
    ///    of external saving of image  that was extracted from SVG created from PDF and must be saved as external resource during conversion of PDF to HTML.
    ///     In such case  processing (like self-made saving into stream or on disk)
    ///   can be done in that custom code and that custom code must return path(or any another string without quotemarks)
    ///     that will be afterwards incorporated into generated SVG instead of original supposed path to that image resource. 
    ///  In such case all the necessary actions for saving of image must be undertaken
    ///  in code of supplied method, because saving of result in code of converter will be not in use. 
    ///    If processing for this or that file for some reason must be done by converter's code itself, not in custom code,
    ///    please set in custom code flag 'CustomProcessingCancelled' of 'imageSavingInfo' parameter's variable
    ///      It signals to converter that all the necessary steps for processing of that resource 
    ///      must be done in converter itself as if there was no any external custom code .
    ///      <param name="imageSavingInfo">represents information about saved image that can be use in custom code </param>
    ///      <returns>must return string that represents URL of image that will be put into SVG</returns>
    /// </summary>
    class SvgImageSavingInfo;
    using EmbeddedImagesSavingStrategy = System::MulticastDelegate<System::String(System::SharedPtr<SvgSaveOptions::SvgImageSavingInfo>)>;
    
    
public:

    /// <summary>
    ///   This class represents set of data 
    ///   that related to external resource image file's saving
    ///   during PDF to HTML conversion.  
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS SvgImageSavingInfo : public Aspose::Pdf::SaveOptions::ResourceSavingInfo
    {
        typedef SvgImageSavingInfo ThisType;
        typedef Aspose::Pdf::SaveOptions::ResourceSavingInfo BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        ///  represent type os saved image referenced in HTML.
        ///  Set by converter and can be used in custom code 
        ///  to decide what should be done
        /// </summary>
        SvgSaveOptions::SvgExternalImageType ImageType;
        
        /// <summary>
        ///  creates new instance of HtmlImageSavingInfo
        /// </summary>
        ASPOSE_PDF_SHARED_API SvgImageSavingInfo();
        
    };
    
    
public:

    /// <summary>
    ///   This field can contain saving strategy
    ///   that must be used (if present) during conversion 
    ///   for customized handling of created referenced external images
    ///   files (like embedded BMP or JPEG) embedded into saved SVG.
    ///   That strategy must process resources 
    ///   and return string that represents desirable URI of saved resource
    ///   in generated SVG.
    ///      If processing for this or that file for some reason must be done by converter's code itself, not in custom code,
    ///   please set in custom code flag 'CustomProcessingCancelled' of 'imageSavingInfo' parameter's variable
    ///   It signals to converter that all the necessary steps for processing of that resource 
    ///   must be done in converter itself as if there was no any external custom code .
    /// </summary>
    SvgSaveOptions::EmbeddedImagesSavingStrategy CustomStrategyOfEmbeddedImagesSaving;
    /// <summary>
    ///  This options defines whether will be created target directory
    ///  (if absent yet) with same name as requested output file 
    ///  instead of requested output file itself.
    ///  It so, that directory will contain all output SVG-images of pages (like described below).
    ///    If no, output files of pages other then first one will be created exactly in requested directory
    /// as main output file, but will contain in file name suffix _[2...n], that
    ///  is defined by page number, f.e. if You define output file "C:\AsposeTests\output.svg"
    ///  and output will contain several svg-files of pages,
    ///  then files of pages will be created also in directory "C:\AsposeTests\" and have names 'output.svg', 'output_2.svg', 'output_3.svg' etc.
    /// </summary>
    bool TreatTargetFileNameAsDirectory;
    /// <summary>
    ///  Specifies whether output will be created as one zip-archive.
    ///  Please refer comment to 'TreatTargetFileNameAsDirectory' options to see rules of naming
    ///  of svg-files of pages for multipage source document, that are also applied to zipped set of output files.
    ///  </summary>
    bool CompressOutputToZipArchive;
    /// <summary>
    /// Specifies whether to scale the output document from typographic points to pixels.
    /// </summary>
    bool ScaleToPixels;
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API SvgSaveOptions();
    
};

} // namespace Pdf
} // namespace Aspose


