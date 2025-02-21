#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Optimization
{
class ImageCompressionOptions;
enum class ImageEncoding;
} // namespace Optimization
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Optimization {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Optimization</b> is a namespace for classes for managing of document optimization process.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Class which describes document optimization algorithm.
/// Instance of this class may be used as parameter of OptimizeResources() method.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OptimizationOptions : public System::Object
{
    typedef OptimizationOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// If this flag is set to <see langword="true"></see>, Pdf objects will be packed into Objest Streams
    /// and compressed to reduce pdf file size.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CompressObjects() const;
    /// <summary>
    /// If this flag is set to <see langword="true"></see>, Pdf objects will be packed into Objest Streams
    /// and compressed to reduce pdf file size.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CompressObjects(bool value);
    /// @deprecated Use LinkDuplicateStreams instead.
    /// <summary>
    /// Obsolete! Use LinkDuplicateStreams instead.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_LinkDuplcateStreams() const;
    /// @deprecated Use LinkDuplicateStreams instead.
    /// <summary>
    /// Obsolete! Use LinkDuplicateStreams instead.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LinkDuplcateStreams(bool value);
    /// <summary>
    /// Level of scanning. Deeper scans (higher value) take longer but may produce smaller result files. Default value: 10.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_LinkDuplicateStreamsScanLevel() const;
    /// <summary>
    /// Level of scanning. Deeper scans (higher value) take longer but may produce smaller result files. Default value: 10.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LinkDuplicateStreamsScanLevel(int32_t value);
    /// <summary>
    /// If this flag is set to true, Resource streams will be analyzed. If duplicate streams are found (i.e. if stream contents is equal), then thes streams will be stored as one object. 
    /// This allows to decrease document size in some cases (for example, when same document was concatenedted multiple times).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_LinkDuplicateStreams() const;
    /// <summary>
    /// If this flag is set to true, Resource streams will be analyzed. If duplicate streams are found (i.e. if stream contents is equal), then thes streams will be stored as one object. 
    /// This allows to decrease document size in some cases (for example, when same document was concatenedted multiple times).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LinkDuplicateStreams(bool value);
    /// <summary>
    /// If true page contents will be reused when document is optimized for equal pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowReusePageContent() const;
    /// <summary>
    /// If true page contents will be reused when document is optimized for equal pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowReusePageContent(bool value);
    /// <summary>
    /// If this flag set to true, every resource is checked on it's usage. If resource is never used, then resources is removed.
    /// This may decrease document size for example when pages were extracted from document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RemoveUnusedStreams() const;
    /// <summary>
    /// If this flag set to true, every resource is checked on it's usage. If resource is never used, then resources is removed.
    /// This may decrease document size for example when pages were extracted from document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RemoveUnusedStreams(bool value);
    /// <summary>
    /// If this flag is set to true, all document objects will be checked and unused objects (i.e. objects which does not have any reference) are removed from document.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RemoveUnusedObjects() const;
    /// <summary>
    /// If this flag is set to true, all document objects will be checked and unused objects (i.e. objects which does not have any reference) are removed from document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RemoveUnusedObjects(bool value);
    /// <summary>
    /// Set of options which describe will images in the document be compressed and parameters of the compression.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Optimization::ImageCompressionOptions> get_ImageCompressionOptions() const;
    /// @deprecated Please use ImageCompressionOptions.CompressImages instead.
    /// <summary>
    /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CompressImages();
    /// @deprecated Please use ImageCompressionOptions.CompressImages instead.
    /// <summary>
    /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CompressImages(bool value);
    /// @deprecated Please use ImageCompressionOptions.ResizeImages instead.
    /// <summary>
    /// If this flag set to true and CompressImages is true images will be resized if image resoultion is greater then specified MaxResolution parameter.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ResizeImages();
    /// @deprecated Please use ImageCompressionOptions.ResizeImages instead.
    /// <summary>
    /// If this flag set to true and CompressImages is true images will be resized if image resoultion is greater then specified MaxResolution parameter.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ResizeImages(bool value);
    /// @deprecated Please use ImageCompressionOptions.ImageQuality instead.
    /// <summary>
    /// Specifies level of image compression when CompressIamges flag is used.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ImageQuality();
    /// @deprecated Please use ImageCompressionOptions.ImageQuality instead.
    /// <summary>
    /// Specifies level of image compression when CompressIamges flag is used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ImageQuality(int32_t value);
    /// <summary>
    /// Specifies maximum resolution of images. If image has higher resolition it will be scaled 
    /// </summary>
    /// [Obsolete("Please use ImageCompressionOptions.MaxResolution instead.")]
    ASPOSE_PDF_SHARED_API int32_t get_MaxResoultion();
    /// <summary>
    /// Specifies maximum resolution of images. If image has higher resolition it will be scaled 
    /// </summary>
    /// [Obsolete("Please use ImageCompressionOptions.MaxResolution instead.")]
    ASPOSE_PDF_SHARED_API void set_MaxResoultion(int32_t value);
    /// <summary>
    /// Make fonts not embedded if set to true. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UnembedFonts() const;
    /// <summary>
    /// Make fonts not embedded if set to true. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UnembedFonts(bool value);
    /// <summary>
    /// Fonts will be converted into subsets if set to true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SubsetFonts() const;
    /// <summary>
    /// Fonts will be converted into subsets if set to true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SubsetFonts(bool value);
    /// <summary>
    /// Remove private information (page piece info).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RemovePrivateInfo() const;
    /// <summary>
    /// Remove private information (page piece info).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RemovePrivateInfo(bool value);
    /// <summary>
    /// Image encodre which will be used.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Optimization::ImageEncoding get_ImageEncoding() const;
    /// <summary>
    /// Image encodre which will be used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ImageEncoding(Aspose::Pdf::Optimization::ImageEncoding value);
    
    /// <summary>
    /// Creates optimization strategy will all options activated.
    /// Please note that activated only options which does not change any functionality of the document.
    /// I.e. image compressing and fonts unembedding will not enabled (and can be embedded manually). 
    /// </summary>
    /// <returns>OptimizationOptions object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<OptimizationOptions> All();
    
    ASPOSE_PDF_SHARED_API OptimizationOptions();
    
private:

    bool _linkDuplicateStreams;
    int32_t _linkDuplicateStreamsScanLevel;
    bool _removeUnusedStreams;
    bool _removeUnusedObjects;
    bool _unembedFonts;
    bool _subsetFonts;
    bool _allowReusePageContents;
    bool _removePrivateInfo;
    Aspose::Pdf::Optimization::ImageEncoding _imageEncoding;
    System::SharedPtr<Aspose::Pdf::Optimization::ImageCompressionOptions> _imageCompressionOptions;
    bool _compressObjects;
    
};

} // namespace Optimization
} // namespace Pdf
} // namespace Aspose


