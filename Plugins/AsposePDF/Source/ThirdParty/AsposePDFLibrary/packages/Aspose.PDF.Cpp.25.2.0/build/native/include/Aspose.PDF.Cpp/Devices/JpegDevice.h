#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Devices/ImageDevice.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Devices
{
class Resolution;
} // namespace Devices
class Page;
class PageSize;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents image device that helps to save pdf document pages into jpeg. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS JpegDevice final : public Aspose::Pdf::Devices::ImageDevice
{
    typedef JpegDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with default resolution and maximum quality.
    /// </summary>
    ASPOSE_PDF_SHARED_API JpegDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class.
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    /// </summary>
    ASPOSE_PDF_SHARED_API JpegDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class.
    /// </summary>
    /// <param name="quality">
    /// Specifies the level of compression for an image. 
    /// The range of useful values for the quality is from 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// Zero would give you the lowest quality image and 100 the highest.
    /// </param>
    ASPOSE_PDF_SHARED_API JpegDevice(int32_t quality);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class.
    /// </summary>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    /// <param name="quality">
    /// Specifies the level of compression for an image. 
    /// The range of useful values for the quality is from 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// Zero would give you the lowest quality image and 100 the highest.
    /// </param>
    ASPOSE_PDF_SHARED_API JpegDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided image dimensions, 
    /// default resolution (=150) and maximum quality.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    ASPOSE_PDF_SHARED_API JpegDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided page size, 
    /// default resolution (=150) and maximum quality.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    ASPOSE_PDF_SHARED_API JpegDevice(System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided image dimensions, 
    /// resolution and maximum quality.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API JpegDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided page size, 
    /// resolution and maximum quality.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API JpegDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided image dimensions, 
    /// resolution and quality.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    /// <param name="quality">
    /// Specifies the level of compression for an image. 
    /// The range of useful values for the quality is from 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// Zero would give you the lowest quality image and 100 the highest.
    /// </param>
    ASPOSE_PDF_SHARED_API JpegDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided page size, 
    /// resolution and quality.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    /// <param name="quality">
    /// Specifies the level of compression for an image. 
    /// The range of useful values for the quality is from 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// Zero would give you the lowest quality image and 100 the highest.
    /// </param>
    ASPOSE_PDF_SHARED_API JpegDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    
    /// <summary>
    /// Converts the page into jpeg and saves it in the output stream.
    /// </summary>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with jpeg image.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) override;
    
private:

    int32_t quality;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


