#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using ImageFormat = Aspose.Pdf.Drawing.ImageFormat;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/nullable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Devices
{
enum class CompressionType;
enum class FormPresentationMode;
class ImageDevice;
class Resolution;
class TiffSettings;
} // namespace Devices
class Document;
namespace Drawing
{
enum class ImageFormat;
} // namespace Drawing
namespace Facades
{
enum class ImageMergeMode;
} // namespace Facades
enum class HorizontalAlignment;
class IIndexBitmapConverter;
class Page;
enum class PageCoordinateType;
class PageSize;
class RenderingOptions;
namespace Tests
{
namespace Fonts
{
class FontConversionTests;
} // namespace Fonts
} // namespace Tests
enum class VerticalAlignment;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Bitmap;
class Graphics;
class Image;
namespace Imaging
{
class ImageFormat;
} // namespace Imaging
class Rectangle;
} // namespace Drawing
namespace IO
{
class MemoryStream;
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to convert a pdf file's each page to images, supporting BMP, JPEG, PNG and TIFF now.
/// Supported content in pdfs: pictures, form, comment.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfConverter final : public Aspose::Pdf::Facades::Facade
{
    typedef PdfConverter ThisType;
    typedef Aspose::Pdf::Facades::Facade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Tests::Fonts::FontConversionTests;
    
public:

    /// <summary>
    /// Gets the page coordinate type (Media/Crop boxes). CropBox value is used by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API PageCoordinateType get_CoordinateType() const;
    /// <summary>
    /// Sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CoordinateType(PageCoordinateType value);
    /// @deprecated CoordinateType property should be used instead of ShowHiddenAreas.
    /// <summary>
    /// Gets flag that controls visibility of hidden areas on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ShowHiddenAreas() const;
    /// @deprecated CoordinateType property should be used instead of ShowHiddenAreas.
    /// <summary>
    /// Sets flag that controls visibility of hidden areas on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ShowHiddenAreas(bool value);
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
    /// Gets resolution during convertting. The higher resolution, the slower convertting speed. The default value is 150.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution() const;
    /// <summary>
    /// Sets resolution during convertting. The higher resolution, the slower convertting speed. The default value is 150.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Resolution(System::SharedPtr<Aspose::Pdf::Devices::Resolution> value);
    /// <summary>
    /// Gets start position which you want to convert. The minimal value is 1.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StartPage() const;
    /// <summary>
    /// Sets start position which you want to convert. The minimal value is 1.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartPage(int32_t value);
    /// <summary>
    /// Gets end position which you want to convert.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_EndPage();
    /// <summary>
    /// Sets end position which you want to convert.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndPage(int32_t value);
    /// <summary>
    /// Gets document OwnerPassword.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Password() const;
    /// <summary>
    /// Sets document OwnerPassword.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Password(System::String value);
    /// <summary>
    /// Gets document UserPassword.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_UserPassword() const;
    /// <summary>
    /// Sets document UserPassword.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UserPassword(System::String value);
    /// <summary>
    /// Gets the page count.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageCount();
    
    /// <summary>
    /// Do some initial works for converting a pdf document to images.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DoConvert();
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file to save the TIFF image.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The output file.</param>
    /// <param name="compressionType">Type of the compression.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, Aspose::Pdf::Devices::CompressionType compressionType);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Converts each pages of a pdf document to images with page size and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="pageSize">The page size of the image.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Converts each pages of a pdf document to images with page size and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="compressionType">Type of the compression.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, Aspose::Pdf::Devices::CompressionType compressionType);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    /// <param name="converter">External converter</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF file.
    /// </summary>
    /// <param name="outputFile">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void SaveAsTIFFClassF(System::String outputFile, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF file.
    /// </summary>
    /// <param name="outputFile">The stream to save the TIFF image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFFClassF(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputStream">The output stream.</param>
    /// <param name="compressionType">Type of the compression.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, Aspose::Pdf::Devices::CompressionType compressionType);
    /// <summary>
    /// Converts each pages of a pdf document to images with page size and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Converts each pages of a pdf document to images with page size and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="compressionType">Type of the compression.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, Aspose::Pdf::Devices::CompressionType compressionType);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    /// <param name="converter">External converter</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Indicates whether the pdf file has more images or not.
    /// </summary>
    /// <returns>Can get more images or not, true if can, or false.</returns>
    ASPOSE_PDF_SHARED_API bool HasNextImage();
    /// <summary>
    /// Saves image to file with default image format - jpeg.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile);
    /// <summary>
    /// Saves image to file with ith given page size and default image format - jpeg.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Saves image to file with the givin image format.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image to file with given page size and image format.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="format">The format of the image.</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image to stream with default image format - jpeg.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Saves image to stream with given page size.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Saves image to stream with given image format.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image to stream with given page size.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="format">The format of the image.</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image to file with the given image format, dimensions and quality.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, int32_t quality);
    /// <summary>
    /// Saves image to stream with the givin image format, dimensions and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, int32_t quality);
    /// <summary>
    /// Saves image to file with the givin image format, image size,  and quality.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixels.</param>
    /// <param name="imageHeight">The image height, the unit is pixels..</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, double imageWidth, double imageHeight, int32_t quality);
    /// <summary>
    /// Saves image to stream with the givin image format, size and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, double imageWidth, double imageHeight, int32_t quality);
    /// <summary>
    /// Binds a Pdf file for converting.
    /// </summary>
    /// <param name="inputFile">The pdf file.</param>		
    ASPOSE_PDF_SHARED_API void BindPdf(System::String inputFile) override;
    /// <summary>
    /// Binds a Pdf Stream for convert.
    /// </summary>
    /// <param name="inputStream">The pdf Stream.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> inputStream) override;
    
    /// <summary>
    /// Initializes new <see cref="PdfConverter"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfConverter();
    /// <summary>
    /// Initializes new <see cref="PdfConverter"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfConverter(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    ///  Close the instance of PdfConverter and release the resources.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF file.
    /// </summary>
    /// <param name="outputFile">The stream to save the TIFF image.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void SaveAsTIFFClassF(System::String outputFile);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Converts each pages of a pdf document to images with and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    /// <param name="converter">External converter</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::String outputFile, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    /// <param name="converter">External converter</param>
    ASPOSE_PDF_SHARED_API void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Saves image to file with the given image format and dimensions.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Saves image to stream with the givin image format, size and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Saves image to stream with given image format and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    /// <summary>
    /// Saves image to stream with given page size, image format and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    /// <summary>
    /// Saves image to file with given image format and quality.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    /// <summary>
    /// Saves image to file with given page size, image format and quality.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    ASPOSE_PDF_SHARED_API void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    /// <summary>
    /// Merges list of image streams as one image stream. Png/jpg/tiff outputs formats are supported, in case of using non supported format output stream encoded as Jpeg by default.
    /// </summary>
    /// <param name="inputImagesStreams">The list of image streams to merge.</param>
    /// <param name="outputImageFormat">Image output format for merged stream.</param>
    /// <param name="mergeMode">Merge mode. Used for Png/Jpg formats.</param>
    /// <param name="horizontal">Horizontal ratio to set canvas width for output image stream. Used for Png/Jpg formats with ImageMergeMode.Center only.</param>
    /// <param name="vertical">Vertical ratio to set canvas height for output image stream. Used for Png/Jpg formats with ImageMergeMode.Center only.</param>
    /// <returns>Image stream encoded as output image format.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> MergeImages(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::IO::Stream>>> inputImagesStreams, Aspose::Pdf::Drawing::ImageFormat outputImageFormat, ImageMergeMode mergeMode, System::Nullable<int32_t> horizontal, System::Nullable<int32_t> vertical);
    /// <summary>
    /// Merges list of tiff streams as one multiple frames tiff stream.
    /// </summary>
    /// <param name="inputImagesStreams">The list of tiff streams.</param>
    /// <returns>Multiple frames tiff stream.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> MergeImagesAsTiff(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::IO::Stream>>> inputImagesStreams);
    
protected:

    /// <summary>
    /// Converts the current page to Bitmap.
    /// </summary>
    /// <returns>The bitmap.</returns>
    System::SharedPtr<System::Drawing::Bitmap> GetNextImage();
    /// <summary>
    /// Saves image to stream with the given image format, optionally converting it to grayscale.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="asGrayscale">If <see langword="true"></see>, the image will be converted to grayscale before saving.</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, bool asGrayscale);
    /// <summary>
    /// Saves image to stream with the givin image format, dimensions and quality.
    /// </summary>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    /// <returns>The bitmap.</returns>
    System::SharedPtr<System::Drawing::Bitmap> GetNextImage(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, int32_t quality);
    System::SharedPtr<System::IO::MemoryStream> ConvertPageToPNGMemoryStream(System::SharedPtr<Page> page);
    System::ArrayPtr<uint8_t> ConvertPageToPNGByteArray(System::SharedPtr<Page> page);
    /// <summary>
    /// draws page to graphics
    /// </summary>
    void GetNextImage(System::SharedPtr<System::Drawing::Graphics> outGraphics, float leftTopX, float leftTopY, int32_t paperWidth, int32_t paperHeight, System::Drawing::Rectangle marginBounds, float scaleFactor, int32_t rotateDegrees, bool autoSize, VerticalAlignment verticalAlignment, HorizontalAlignment horizontalAlignment, bool isXPSPrinting, bool isIntermidiateImage, bool isGrayscale);
    
private:

    System::SharedPtr<Aspose::Pdf::Devices::Resolution> _resolution;
    int32_t _startPage;
    int32_t _endPage;
    int32_t _currentPage;
    System::String _password;
    System::String _userPassword;
    Aspose::Pdf::Devices::FormPresentationMode _formPresentationMode;
    bool _convertFontsToUnicodeTTF;
    System::SharedPtr<Aspose::Pdf::RenderingOptions> _renderingOptions;
    /// <summary>
    /// Stores the flag that controls visibility of hidden areas on the page.
    /// </summary>
    bool _showHiddenAreas;
    bool _showHiddenAreasExplicitlySet;
    PageCoordinateType _coordinateType;
    
    System::SharedPtr<Aspose::Pdf::Devices::ImageDevice> CreateNonTiffDevice(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    System::SharedPtr<Aspose::Pdf::Devices::ImageDevice> CreateGraphicsDevice(float leftTopX, float leftTopY, int32_t paperWidth, int32_t paperHeight, System::Drawing::Rectangle marginBounds, float scaleFactor, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t rotateDegrees, bool autoSize, VerticalAlignment verticalAlignment, HorizontalAlignment horizontalAlignment, bool isXpsPrinting);
    System::SharedPtr<Aspose::Pdf::Devices::ImageDevice> CreateNonTiffDevice(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    System::SharedPtr<Aspose::Pdf::Devices::ImageDevice> CreateNonTiffDevice(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    static System::ArrayPtr<uint8_t> ReadFully(System::SharedPtr<System::IO::Stream> input);
    /// <summary>
    /// Convert Dynamic Xfa Fomrs into "static" pdf document
    /// </summary>
    void ConvertDynamicXfa();
    static void PostProcessPageImage(System::SharedPtr<System::Drawing::Image> img, int32_t rotateDegrees);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


