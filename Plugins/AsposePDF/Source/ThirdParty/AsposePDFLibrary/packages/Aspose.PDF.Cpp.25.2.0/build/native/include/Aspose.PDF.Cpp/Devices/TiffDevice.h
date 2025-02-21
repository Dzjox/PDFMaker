#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// extern alias AsposeImaging;
// using AsposeImaging::Aspose.Imaging;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/Devices/DocumentDevice.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Devices
{
enum class FormPresentationMode;
class ImageGenerator;
class Resolution;
class TiffSettings;
} // namespace Devices
class Document;
namespace Engine
{
namespace Presentation
{
namespace GDIImpl
{
namespace Utils
{
class TiffSettings;
} // namespace Utils
} // namespace GDIImpl
} // namespace Presentation
} // namespace Engine
class IIndexBitmapConverter;
class Page;
class PageSize;
class RenderingOptions;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// This class helps to save pdf document page by page into the one tiff image.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TiffDevice final : public Aspose::Pdf::Devices::DocumentDevice
{
    typedef TiffDevice ThisType;
    typedef Aspose::Pdf::Devices::DocumentDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

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
    /// Gets settings for mapping pdf into tiff image.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TiffSettings> get_Settings() const;
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
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="resolution">
    /// Resolution for the result image file.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>        
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class with default settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API TiffDevice();
    
    /// <summary>
    /// Do Bradley binarization for input stream.
    /// </summary>
    /// <param name="inputImageStream">The input image stream.</param>
    /// <param name="outputImageStream">The output image stream.</param>
    /// <param name="threshold">The threshold value between 0.0 and 1.0.</param>
    ASPOSE_PDF_SHARED_API void BinarizeBradley(System::SharedPtr<System::IO::Stream> inputImageStream, System::SharedPtr<System::IO::Stream> outputImageStream, double threshold);
    /// <summary>
    /// Converts certain document pages into tiff and save it in the output stream.
    /// </summary>
    /// <param name="document">
    /// The document to convert.
    /// </param>
    /// <param name="fromPage">
    /// Defines page number from which converting will start.
    /// </param>
    /// <param name="toPage">
    /// Defines page number which will end the converting.
    /// </param>
    /// <param name="output">
    /// Output stream with tiff image.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Aspose::Pdf::Document> document, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output) override;
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(int32_t width, int32_t height, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(int32_t width, int32_t height, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"></see> class.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"></see> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    ASPOSE_PDF_SHARED_API TiffDevice(System::SharedPtr<PageSize> pageSize);
    
protected:

    /// <summary>
    /// Converts certain document pages into tiff and save it in the output stream.
    /// </summary>
    /// <param name="doc">The document to convert.</param>
    /// <param name="pages">
    /// The pages to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with tiff image.
    /// </param>
    void Process(System::SharedPtr<Aspose::Pdf::Document> doc, System::SharedPtr<System::Collections::Generic::IList<int32_t>> pages, System::SharedPtr<System::IO::Stream> output);
    
private:

    static const double EmptyPageDetectionThreshold;
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution;
    System::SharedPtr<TiffSettings> settings;
    System::SharedPtr<IIndexBitmapConverter> converter;
    int32_t width;
    int32_t height;
    Aspose::Pdf::Devices::FormPresentationMode formPresentationMode;
    System::SharedPtr<Aspose::Pdf::RenderingOptions> renderingOptions;
    
    System::SharedPtr<System::Collections::Generic::List<int32_t>> GetPages(int32_t fromPage, int32_t toPage);
    System::SharedPtr<Engine::Presentation::GDIImpl::Utils::TiffSettings> GetSettings();
    System::SharedPtr<ImageGenerator> CreateImageGeneratorForPage(System::SharedPtr<Page> page);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


