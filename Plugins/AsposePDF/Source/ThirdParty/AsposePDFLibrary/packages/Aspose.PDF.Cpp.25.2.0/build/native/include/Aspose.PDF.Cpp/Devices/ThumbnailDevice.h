#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Devices/ImageDevice.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Page;
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
/// Represents image device that save pdf document pages into Thumbnail image. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ThumbnailDevice final : public Aspose::Pdf::Devices::ImageDevice
{
    typedef ThumbnailDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="ThumbnailDevice"></see> class
    /// with default size of thumbnail image (200x200 pixels).
    /// </summary>
    ASPOSE_PDF_SHARED_API ThumbnailDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="ThumbnailDevice"></see> class.
    /// </summary>
    /// <param name="width">Thumbnail image output width.</param>
    /// <param name="height">Thumbnail image output height.</param>
    ASPOSE_PDF_SHARED_API ThumbnailDevice(int32_t width, int32_t height);
    
    /// <summary>
    /// Converts the page into thumbnail image png and saves it in the output stream.
    /// </summary>
    /// <param name="page">The page to convert.</param>
    /// <param name="output">Output stream with png image.</param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) override;
    
private:

    int32_t _width;
    int32_t _height;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


