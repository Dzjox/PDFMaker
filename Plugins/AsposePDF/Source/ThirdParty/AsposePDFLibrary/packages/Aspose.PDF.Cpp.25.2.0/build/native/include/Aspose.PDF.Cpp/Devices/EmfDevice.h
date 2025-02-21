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
/// Represents image device that helps to save pdf document pages into emf. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EmfDevice final : public Aspose::Pdf::Devices::ImageDevice
{
    typedef EmfDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="EmfDevice"></see> class with default resolution of raster image written to emf.
    /// </summary>
    ASPOSE_PDF_SHARED_API EmfDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="EmfDevice"></see> class.
    /// <param name="resolution">
    /// Resolution for the raster image written to emf, see <see cref="Resolution"></see> class.
    /// </param>
    /// </summary>
    ASPOSE_PDF_SHARED_API EmfDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="EmfDevice"></see> class with provided image dimensions, 
    /// and default resolution for the raster image written to emf (=150)
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    ASPOSE_PDF_SHARED_API EmfDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="EmfDevice"></see> class with provided page size, 
    /// and default resolution for the raster image written to emf (=150)
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    ASPOSE_PDF_SHARED_API EmfDevice(System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided image dimensions, 
    /// and resolution for the raster image written to emf.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the for the raster image written to emf, see <see cref="Resolution"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API EmfDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided page size, 
    /// and resolution for the raster image written to emf.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the for the raster image written to emf, see <see cref="Resolution"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API EmfDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
    /// <summary>
    /// Converts the page into emf and saves it in the output stream.
    /// </summary>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with emf image.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) override;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


