#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <drawing/rectangle.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Devices/PageDevice.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
class GraphicalPdfComparer;
} // namespace Comparison
namespace Devices
{
enum class FormPresentationMode;
class GraphicsDevice;
class Resolution;
} // namespace Devices
namespace Engine
{
namespace IO
{
namespace ConvertStrategies
{
class SearchablePdfConvertStrategy;
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
namespace Presentation
{
class ColorDetectHelper;
class IPresenter;
} // namespace Presentation
} // namespace Engine
namespace Facades
{
class PdfConverter;
} // namespace Facades
enum class HorizontalAlignment;
class Page;
enum class PageCoordinateType;
class PageSize;
class Point;
class RenderingOptions;
enum class VerticalAlignment;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Graphics;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// An abstract class for image devices.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ImageDevice : public Aspose::Pdf::Devices::PageDevice
{
    typedef ImageDevice ThisType;
    typedef Aspose::Pdf::Devices::PageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Engine::Presentation::ColorDetectHelper;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Devices::GraphicsDevice;
    friend class Aspose::Pdf::Comparison::GraphicalPdfComparer;
    
public:

    /// <summary>
    /// Gets the page coordinate type (Media/Crop boxes). CropBox value is used by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API PageCoordinateType get_CoordinateType() const;
    /// <summary>
    /// Sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CoordinateType(PageCoordinateType value);
    /// <summary>
    /// Gets rendering options.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::RenderingOptions> get_RenderingOptions() const;
    /// <summary>
    /// Sets rendering options.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RenderingOptions(System::SharedPtr<Aspose::Pdf::RenderingOptions> value);
    /// <summary>
    /// Gets form presentation mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Devices::FormPresentationMode get_FormPresentationMode() const;
    /// <summary>
    /// Sets form presentation mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FormPresentationMode(Aspose::Pdf::Devices::FormPresentationMode value);
    /// <summary>
    /// Gets image resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution() const;
    /// <summary>
    /// Gets image output width.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Width() const;
    /// <summary>
    /// Gets image output height.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Height() const;
    
    /// <summary>
    /// Abstract initializer for <see cref="ImageDevice"></see> descendants, set resolution to 150x150.
    /// </summary>
    ASPOSE_PDF_SHARED_API ImageDevice();
    /// <summary>
    /// Abstract initializer for <see cref="ImageDevice"></see> descendants.
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    /// </summary>
    ASPOSE_PDF_SHARED_API ImageDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided image dimensions and default resolution (=150).
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    ASPOSE_PDF_SHARED_API ImageDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided image dimensions and default resolution (=150).
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    ASPOSE_PDF_SHARED_API ImageDevice(System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided image dimensions and resolution.
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
    ASPOSE_PDF_SHARED_API ImageDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"></see> class with provided image dimensions and resolution.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API ImageDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
protected:

    ImageDevice(System::SharedPtr<Point> origin, int32_t paperWidth, int32_t paperHeight, System::Drawing::Rectangle marginBounds, float scaleFactor, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t rotateDegrees, bool autoSize, VerticalAlignment verticalAlignment, HorizontalAlignment horizontalAlignment, bool isIsXpsPrinting);
    
    /// <summary>
    /// processes current page and returns presenter
    /// </summary>
    /// <param name="page"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Presentation::IPresenter> ProcessPresentation(System::SharedPtr<Page> page);
    /// <summary>
    /// processes current page with the graphics and returns presenter
    /// </summary>
    /// <param name="page"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Presentation::IPresenter> ProcessPresentation(System::SharedPtr<Page> page, System::SharedPtr<System::Drawing::Graphics> gr);
    
private:

    int32_t width;
    int32_t height;
    bool autoSize;
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution;
    System::SharedPtr<Point> origin;
    float scaleFactor;
    int32_t paperWidth;
    int32_t paperHeight;
    int32_t rotateDegrees;
    System::Drawing::Rectangle marginBounds;
    bool isXpsPrinting;
    VerticalAlignment verticalAlignment;
    HorizontalAlignment horizontalAlignment;
    Aspose::Pdf::Devices::FormPresentationMode formPresentationMode;
    System::SharedPtr<Aspose::Pdf::RenderingOptions> renderingOptions;
    PageCoordinateType coordinateType;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


