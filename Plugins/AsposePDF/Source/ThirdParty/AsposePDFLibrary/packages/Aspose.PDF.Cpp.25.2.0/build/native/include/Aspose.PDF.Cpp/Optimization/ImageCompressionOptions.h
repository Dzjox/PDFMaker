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
enum class ImageCompressionVersion;
enum class ImageEncoding;
} // namespace Optimization
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Optimization {

/// <summary>
/// Class contains set  options for image compression.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ImageCompressionOptions : public System::Object
{
    typedef ImageCompressionOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CompressImages() const;
    /// <summary>
    /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CompressImages(bool value);
    /// <summary>
    /// If this flag set to true and CompressImages is true images will be resized if image resoultion is greater then specified MaxResolution parameter.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ResizeImages() const;
    /// <summary>
    /// If this flag set to true and CompressImages is true images will be resized if image resoultion is greater then specified MaxResolution parameter.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ResizeImages(bool value);
    /// <summary>
    /// Specifies level of image compression when CompressIamges flag is used.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ImageQuality() const;
    /// <summary>
    /// Specifies level of image compression when CompressIamges flag is used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ImageQuality(int32_t value);
    /// <summary>
    /// Specifies maximum resolution of images. If image has higher resolition it will be scaled 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_MaxResolution() const;
    /// <summary>
    /// Specifies maximum resolution of images. If image has higher resolition it will be scaled 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MaxResolution(int32_t value);
    /// <summary>
    /// Version of compression algorithm. Possible values are: 1. standard compression, 2. fast (improved compression which is faster then standard but may be applicable not for all images), 3. mixed (standard compression is applied to images which can not be compressed by  faster algorithm, this may give best compression but more slow then "fast" algorithm. Version "Fast" is not applicable for resizing images (standard method will be used). Default is "Standard".
    /// </summary>
    ASPOSE_PDF_SHARED_API ImageCompressionVersion get_Version() const;
    /// <summary>
    /// Version of compression algorithm. Possible values are: 1. standard compression, 2. fast (improved compression which is faster then standard but may be applicable not for all images), 3. mixed (standard compression is applied to images which can not be compressed by  faster algorithm, this may give best compression but more slow then "fast" algorithm. Version "Fast" is not applicable for resizing images (standard method will be used). Default is "Standard".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Version(ImageCompressionVersion value);
    /// <summary>
    /// Gets encoding used to store images. 
    /// </summary>
    ASPOSE_PDF_SHARED_API ImageEncoding get_Encoding() const;
    /// <summary>
    /// Sets encoding used to store images. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Encoding(ImageEncoding value);
    
    ASPOSE_PDF_SHARED_API ImageCompressionOptions();
    
private:

    int32_t _imageQuality;
    int32_t _maxResolution;
    ImageCompressionVersion _version;
    bool _resizeImages;
    bool _compressImages;
    ImageEncoding _imageEncoding;
    
};

} // namespace Optimization
} // namespace Pdf
} // namespace Aspose


