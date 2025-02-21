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
/// Represents image device that helps to save pdf document pages into png. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PngDevice final : public Aspose::Pdf::Devices::ImageDevice
{
    typedef PngDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets if image has transparent background.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_TransparentBackground() const;
    /// <summary>
    /// Sets if image has transparent background.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TransparentBackground(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"></see> class with default resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API PngDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"></see> class.
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    /// </summary>
    ASPOSE_PDF_SHARED_API PngDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"></see> class with provided image dimensions and
    /// resolution.
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
    ASPOSE_PDF_SHARED_API PngDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"></see> class with provided page size and
    /// resolution.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API PngDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
    /// <summary>
    /// Converts the page into png and saves it in the output stream.
    /// </summary>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with png image.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"></see> class with provided image dimensions, 
    /// default resolution (=150).
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    ASPOSE_PDF_SHARED_API PngDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"></see> class with provided page size, 
    /// default resolution (=150).
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    ASPOSE_PDF_SHARED_API PngDevice(System::SharedPtr<PageSize> pageSize);
    
private:

    bool pr_TransparentBackground;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


