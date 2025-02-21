#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// extern alias AsposeImaging;
// using GraphicsImage = AsposeImaging.Aspose.Imaging.Image;
// using AsposeImaging.Aspose.Imaging;
// using PdfImage = Aspose.Pdf.Drawing.PdfImage;
// using ImageFormat = Aspose.Pdf.Drawing.ImageFormat;
// using ImagingRectangle = AsposeImaging.Aspose.Imaging.Rectangle;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Imaging
{
class RasterCachedImage;
} // namespace Imaging
namespace Pdf
{
namespace Annotations
{
class PDF3DAnnotation;
class Redaction;
} // namespace Annotations
enum class ColorType;
class DataUtils;
class DocumentExtensions;
namespace Engine
{
namespace CommonData
{
namespace Graphics
{
namespace Images
{
class IPdfImage;
} // namespace Images
} // namespace Graphics
namespace PageContent
{
namespace EmptyPageDetection
{
class EmptyPageDetectionManager;
} // namespace EmptyPageDetection
} // namespace PageContent
} // namespace CommonData
namespace Data
{
class IPdfDataStream;
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfA1ConvertStrategy;
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfUaConvertStrategy;
class SearchablePdfConvertStrategy;
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
namespace Presentation
{
class ColorDetectHelper;
namespace IndependentImpl
{
namespace ColorInitializerStrategies
{
class ContentToGrayConversion;
} // namespace ColorInitializerStrategies
} // namespace IndependentImpl
} // namespace Presentation
} // namespace Engine
namespace Facades
{
class PdfContentEditor;
class PdfConverter;
class PdfExtractor;
} // namespace Facades
namespace Forms
{
class SignatureField;
} // namespace Forms
enum class ImageFilterType;
class ImagePlacement;
class ImagePlacementAbsorber;
class ImageStamp;
namespace Interchange
{
class ContentSequenceXImage;
class ContentSequenceXObject;
} // namespace Interchange
namespace LogicalStructure
{
class StructureElement;
} // namespace LogicalStructure
class Metadata;
namespace Optimization
{
class ImageCompressor;
class ImageCompressor2;
} // namespace Optimization
namespace PageModel
{
class ImageElement;
} // namespace PageModel
namespace PdfToMarkdown
{
class ImageManager;
} // namespace PdfToMarkdown
class Resources;
namespace Tests
{
namespace Facades
{
class PdfFileStampTests;
} // namespace Facades
namespace Graphics
{
class ImageExtractionTests;
} // namespace Graphics
class RegressionTests_v11_1;
class RegressionTests_v19_1;
class RegressionTests_v19_12;
class RegressionTests_v19_5;
class RegressionTests_v20_02;
class RegressionTests_v20_05;
class RegressionTests_v24_02;
class RegressionTests_v24_08;
class RegressionTests_v6_2;
class RegressionTests_v6_9;
class RegressionTests_v7_0;
class RegressionTests_v7_1;
class RegressionTests_v7_5;
class RegressionTests_v7_7;
class RegressionTests_v7_8;
class RegressionTests_v7_9;
class RegressionTests_v8_1;
} // namespace Tests
class XImageCollection;
} // namespace Pdf
namespace Utils
{
class ImageUtils;
} // namespace Utils
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
class Color;
class Image;
namespace Imaging
{
class BitmapData;
class ImageFormat;
enum class ImageLockMode;
} // namespace Imaging
} // namespace Drawing
namespace IO
{
class MemoryStream;
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing image X-Object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XImage final : public System::Object
{
    typedef XImage ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Interchange::ContentSequenceXImage;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Optimization::ImageCompressor2;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::Engine::Presentation::ColorDetectHelper;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::EmptyPageDetection::EmptyPageDetectionManager;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::DocumentExtensions;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacement;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Utils::ImageUtils;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::PdfToMarkdown::ImageManager;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA1ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Engine::Presentation::IndependentImpl::ColorInitializerStrategies::ContentToGrayConversion;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_05;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_02;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_02;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_08;
    friend class Aspose::Pdf::Tests::Facades::PdfFileStampTests;
    friend class Aspose::Pdf::Tests::Graphics::ImageExtractionTests;
    
public:

    /// <summary>
    /// If the image contains transparancy than return true; otherwise, false.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ContainsTransparency();
    /// <summary>
    /// Gets grayscaled version of image.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Drawing::Image> get_Grayscaled();
    /// <summary>
    /// Gets image filter type.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ImageFilterType get_FilterType();
    /// <summary>
    /// Gets width of the image.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Width();
    /// <summary>
    /// Gets height of the image.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Height();
    /// <summary>
    /// Gets image name. Please note that if you change name of the image which has references in page contents, document may became incorrect. Please use XImage.Rename method in this case.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    /// <summary>
    /// Sets image name. Please note that if you change name of the image which has references in page contents, document may became incorrect. Please use XImage.Rename method in this case.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    /// <summary>
    /// Gets a flag indicating whether the image shall be treated as an image mask (see 8.9.6, "Masked Images").
    /// If this flag is true, the value of BitsPerComponent shall be 1 and Mask and ColorSpace shall not be specified; unmasked areas shall bepainted using the current nonstroking colour. Default value: false.
    /// </summary>
    /// <value>True is the image is image mask.</value>
    ASPOSE_PDF_SHARED_API bool get_ImageMask();
    /// <summary>
    /// Metadata of the image. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Metadata> get_Metadata();
    
    /// <summary>
    /// Renames image and replaces all references to the image with the new name
    /// </summary>
    /// <param name="name">New image name. </param>
    ASPOSE_PDF_SHARED_API void Rename(const System::String& name);
    /// <summary>
    /// Saves image data into stream as JPEG image.
    /// </summary>
    /// <param name="stream">Stream where image data will be saved.</param>
    ASPOSE_PDF_SHARED_API void Save(const System::SharedPtr<System::IO::Stream>& stream);
    /// <summary>
    /// Saves image into stream with requested format. 
    /// </summary>
    /// <param name="stream">Stream where image will be saved</param>
    /// <param name="format">Format which will be used for image enconding. <see cref="ImageFormat"></see></param>
    ASPOSE_PDF_SHARED_API void Save(const System::SharedPtr<System::IO::Stream>& stream, const System::SharedPtr<System::Drawing::Imaging::ImageFormat>& format);
    /// <summary>
    /// Retrieves the raw image data from the source image.
    /// </summary>
    /// <returns>
    /// A <see cref="MemoryStream"></see> containing the original image data.
    /// </returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::MemoryStream> GetRawImageData();
    /// <summary>
    /// Adds a stencil mask to the XImage.
    /// </summary>
    /// <param name="maskStream">Stencil mask bitmap stream.</param>
    ASPOSE_PDF_SHARED_API void AddStencilMask(const System::SharedPtr<System::IO::Stream>& maskStream);
    /// <summary>
    /// Saves image data into stream as JPEG image with specified resolution.
    /// </summary>
    /// <param name="stream">Stream where image data will be saved.</param>
    /// <param name="resolution">Image resolution</param>
    ASPOSE_PDF_SHARED_API void Save(const System::SharedPtr<System::IO::Stream>& stream, int32_t resolution);
    /// <summary>
    /// Saves image into stream with requested format with specified resolution. 
    /// </summary>
    /// <param name="stream">Stream where image will be saved</param>
    /// <param name="format">Format which will be used for image enconding. <see cref="ImageFormat"></see></param>
    /// <param name="resolution">Image resolution</param>
    ASPOSE_PDF_SHARED_API void Save(const System::SharedPtr<System::IO::Stream>& stream, const System::SharedPtr<System::Drawing::Imaging::ImageFormat>& format, int32_t resolution);
    /// <summary>
    /// Returns color type of image.
    /// </summary>
    /// <returns>The color type value.</returns>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ColorType GetColorType();
    /// <summary>
    /// Returns color type of image.
    /// </summary>
    static ASPOSE_PDF_SHARED_API Aspose::Pdf::ColorType DetectColorType(const System::SharedPtr<System::Drawing::Bitmap>& bmp);
    /// <summary>
    /// Returns true if both images references to the same object.
    /// </summary>
    /// <param name="image">Image to be compared with "this" image.</param>
    /// <returns>Boolean value which is true if images references to the same object. </returns>
    ASPOSE_PDF_SHARED_API bool IsTheSameObject(System::SharedPtr<Aspose::Pdf::XImage> image);
    /// <summary>
    /// Returns the name of the image in its collection.
    /// </summary>
    /// <returns>Image key (name).</returns>
    ASPOSE_PDF_SHARED_API System::String GetNameInCollection();
    /// <summary>
    /// Returns the original image stream.
    /// </summary>
    /// <returns>The original image stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ToStream();
    
protected:

    /// <summary>
    /// Gets the IPdfImage.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Images::IPdfImage> get_PdfImage();
    /// <summary>
    /// If the image contains smask than return true; otherwise, false.
    /// </summary>
    bool get_HasSMask();
    System::SharedPtr<Aspose::Pdf::XImageCollection> get_Parent() const;
    /// <summary>
    /// Gets black and white version of image.
    /// </summary>
    System::SharedPtr<System::Drawing::Image> get_BlackAndWhite();
    System::ArrayPtr<System::String> get_ColorSpace();
    
    /// <summary>
    /// IPdfImage object which decribes image.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> EngineImg;
    
    /// <summary>
    /// Gets default image format.
    /// </summary>
    static System::SharedPtr<System::Drawing::Imaging::ImageFormat> get_DefaultImageFormat();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObject();
    
    XImage(const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream>& image, const System::SharedPtr<Aspose::Pdf::XImageCollection>& parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XImage, CODEPORTING_ARGS(const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream>& image, const System::SharedPtr<Aspose::Pdf::XImageCollection>& parent));
    /// <summary>
    /// Deletes image from the parent collection. 
    /// </summary>
    void Delete();
    /// <summary>
    /// Replaces image onto stream specified in <paramref name="image"></paramref>.
    /// </summary>
    /// <param name="image">
    /// Stream with image data.
    /// </param>
    void Replace(const System::SharedPtr<System::IO::Stream>& image);
    
    XImage(const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream>& image);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XImage, CODEPORTING_ARGS(const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream>& image));
    System::SharedPtr<System::Drawing::Bitmap> GetBitmap();
    System::SharedPtr<System::Drawing::Bitmap> GetBitmap(const System::SharedPtr<System::Drawing::Imaging::ImageFormat>& imageFormat);
    System::SharedPtr<System::Drawing::Image> GetImage();
    System::SharedPtr<System::Drawing::Bitmap> BuildBitmap(const System::SharedPtr<System::Drawing::Imaging::ImageFormat>& format, int32_t resolution);
    /// <summary>
    /// Saves the image with blending applied to the specified stream.
    /// </summary>
    /// <param name="stream">The stream to which the image will be saved.</param>
    /// <param name="resolution">The resolution at which to save the image.</param>
    /// <param name="outputIccProfile">The ICC profile stream used for color management.</param>
    /// <remarks>
    /// This method handles thread conflicts and optimizes memory usage during the saving process.
    /// </remarks>
    void SaveWithBlending(const System::SharedPtr<System::IO::Stream>& stream, int32_t resolution, const System::SharedPtr<System::IO::Stream>& outputIccProfile);
    /// <summary>
    /// Returns true if the primitive is an image.
    /// </summary>
    static bool IsImage(const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>& primitive);
    System::SharedPtr<System::IO::Stream> MakeGrayscaleRawBytes();
    static System::SharedPtr<System::Drawing::Bitmap> MakeGrayscale(System::SharedPtr<System::IO::Stream> original);
    static bool IsBitmapFilled(System::SharedPtr<System::Drawing::Bitmap> bitmap, uint8_t whiteColorReplace);
    static bool IsBitmapFilledRgb(const System::SharedPtr<System::Drawing::Bitmap>& bitmap, uint8_t whiteColorReplace);
    /// <summary>
    /// Grayscale would have a delta of 0.
    /// </summary>
    /// <param name="color">The color for which to calculate the delta.</param>
    /// <returns>The difference in the RGB values.</returns>
    static int32_t GetRgbDelta(System::Drawing::Color color);
    void UpdateMetadata();
    
    virtual ASPOSE_PDF_SHARED_API ~XImage();
    
private:

    System::WeakPtr<Aspose::Pdf::XImageCollection> _parent;
    static System::ArrayPtr<System::String> _emptyColorSpace;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Graphics::Images::IPdfImage> _pdfImg;
    System::SharedPtr<Aspose::Pdf::Metadata> _metadata;
    
    System::SharedPtr<System::Drawing::Bitmap> MakeBlackAndWhite(const System::SharedPtr<System::Drawing::Bitmap>& original);
    /// <summary>
    /// Creates grayscaled version of image.
    /// </summary>
    /// <returns>Grayscaled version of original image.</returns>
    System::SharedPtr<System::Drawing::Bitmap> MakeGrayscale();
    static System::SharedPtr<System::IO::Stream> MakeGrayscaleRawBytes(System::SharedPtr<System::IO::Stream> original);
    static System::SharedPtr<Aspose::Imaging::RasterCachedImage> GetRasterCachedImage(System::SharedPtr<System::IO::Stream> original);
    static Aspose::Pdf::ColorType DetectColorTypeForRgbImage(System::SharedPtr<System::Drawing::Bitmap> bmp);
    static Aspose::Pdf::ColorType DetectColorTypeForBwImage(System::SharedPtr<System::Drawing::Bitmap> bmp);
    static Aspose::Pdf::ColorType DetectColorTypeForGrayscaleImage(System::SharedPtr<System::Drawing::Bitmap> bmp);
    static System::SharedPtr<System::Drawing::Imaging::BitmapData> GetBitmapData(System::SharedPtr<System::Drawing::Bitmap> bmp, System::Drawing::Imaging::ImageLockMode mode, System::ArrayPtr<uint8_t>& newData);
    static Aspose::Pdf::ColorType DetectColorTypeFor32bppArgbImage(System::SharedPtr<System::Drawing::Bitmap> bmp);
    System::SharedPtr<Aspose::Pdf::Metadata> GetMetadata();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose


