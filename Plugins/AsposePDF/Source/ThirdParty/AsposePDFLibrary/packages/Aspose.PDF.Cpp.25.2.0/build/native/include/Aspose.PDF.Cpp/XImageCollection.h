#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// extern alias AsposeImaging;
// using GraphicsImage = AsposeImaging::Aspose.Imaging.Image;
// using AsposeImaging::Aspose.Imaging.ImageOptions;
// using AsposeImaging::Aspose.Imaging;
// using AsposeImaging::Aspose.Imaging.CoreExceptions;
// using AsposeImaging::Aspose.Imaging.FileFormats.Png;
// using AsposeImaging::Aspose.Imaging.FileFormats.Svg;
// using AsposeImaging::Aspose.Imaging.FileFormats.Tiff;
// using AsposeImaging::Aspose.Imaging.FileFormats.Tiff.Enums;
// using AsposeImaging::Aspose.Imaging.Sources;
// using ImagingGraphics = AsposeImaging.Aspose.Imaging.Graphics;
// using ImagingColor = AsposeImaging.Aspose.Imaging.Color;
// using AsposeImaging.Aspose.Imaging.FileFormats.Jpeg2000;
// using ImagingRectangle = AsposeImaging.Aspose.Imaging.Rectangle;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Imaging
{
namespace FileFormats
{
namespace Tiff
{
namespace Enums
{
enum class TiffCompressions : uint16_t;
} // namespace Enums
class TiffImage;
} // namespace Tiff
} // namespace FileFormats
} // namespace Imaging
namespace Pdf
{
namespace Annotations
{
class Redaction;
class StampAnnotation;
} // namespace Annotations
class ApsToPdfConverter;
class ApsToPdfGraphicStateBuilder;
class ArtifactCollection;
class BitmapInfo;
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
class DataUtils;
class Document;
class DocumentExtensions;
namespace Engine
{
namespace Data
{
class IPdfDataStream;
class IPdfDictionary;
class IPdfObject;
class ITrailerable;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfConvertStrategy;
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
namespace Presentation
{
namespace IndependentImpl
{
namespace ColorInitializerStrategies
{
class ContentToGrayConversion;
} // namespace ColorInitializerStrategies
} // namespace IndependentImpl
} // namespace Presentation
} // namespace Engine
namespace Forms
{
class ButtonField;
} // namespace Forms
enum class ImageFilterType;
class ImagePlacement;
class ImagePlacementAbsorber;
class ImageStamp;
namespace Interchange
{
class ContentSequenceXObject;
} // namespace Interchange
namespace LogicalStructure
{
class StructureElement;
} // namespace LogicalStructure
namespace OFD
{
namespace Converters
{
class PageBlockConverter;
} // namespace Converters
} // namespace OFD
namespace Optimization
{
class ImageCompressor;
class ImageCompressor2;
} // namespace Optimization
class Page;
class Resources;
namespace Tests
{
class RegressionTests_v11_6;
class RegressionTests_v19_5;
class RegressionTests_v20_07;
class RegressionTests_v20_10;
class RegressionTests_v8_1;
} // namespace Tests
class XForm;
class XImage;
class XImageAddingParams;
} // namespace Pdf
namespace Utils
{
class ImageUtils;
} // namespace Utils
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Bitmap;
class Color;
class Image;
namespace Imaging
{
class BitmapData;
class ImageCodecInfo;
class ImageFormat;
enum class PixelFormat;
} // namespace Imaging
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Action which performed with image object when image is removed from collection. If image object is removed
/// </summary>
enum class ImageDeleteAction
{
    /// <summary>
    /// Image will be removed from the collection. If page contents contains references to the image they will not be removed. Document may became invalid.
    /// </summary>
    KeepContents,
    /// <summary>
    /// Image will be removed from the collection and from page contents, but image object will not be deleted. File size will not be decreased.
    /// </summary>
    None,
    /// <summary>
    /// Image will be removed from the collection and image object will be removed from the document. If other references on the same object exist the document may be corrupted.
    /// </summary>
    /// 
    ForceDelete,
    /// <summary>
    /// Image will be removed from the collection and image object will be removed only if no other references to the image from other pages. This may require more time in comparision with ForceDelete option. 
    /// </summary>
    Check
};

/// <summary>
/// Class representing XImage collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XImageCollection final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XImage>>
{
    typedef XImageCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XImage>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Optimization::ImageCompressor2;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::DocumentExtensions;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacement;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Utils::ImageUtils;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::XImage;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::ApsToPdfGraphicStateBuilder;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::OFD::Converters::PageBlockConverter;
    friend class Aspose::Pdf::Engine::Presentation::IndependentImpl::ColorInitializerStrategies::ContentToGrayConversion;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_10;
    
protected:

    class ThresholdMaskParameters : public System::Object
    {
        typedef ThresholdMaskParameters ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        uint8_t get_BlackOverWhiteThreshold() const;
        void set_BlackOverWhiteThreshold(uint8_t value);
        uint8_t get_WhiteOverBlackThreshold() const;
        void set_WhiteOverBlackThreshold(uint8_t value);
        uint8_t get_BitMask() const;
        void set_BitMask(uint8_t value);
        
        ThresholdMaskParameters();
        
    private:
    
        uint8_t _blackOverWhiteThreshold;
        uint8_t _whiteOverBlackThreshold;
        uint8_t _bitMask;
        
    };
    
    
private:

    class ImagesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XImage>>
    {
        typedef ImagesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XImage>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::XImage>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Aspose::Pdf::XImage>& get_Current() const override;
        
        ImagesEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> images, System::SharedPtr<Aspose::Pdf::XImageCollection> parent);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<Aspose::Pdf::XImageCollection> _parent;
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _images;
        int32_t _cursor;
        
        bool MoveNextImplementation();
        System::SharedPtr<Aspose::Pdf::XImage>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Count of images in collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Returns true if object is synchronized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Returns synchronization object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets array of image names.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_Names();
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds new image to Image list. This method adds image as reference to the same PdfObject (which allows to decrease file size)
    /// </summary>
    /// <param name="image">XImage to be added.</param>
    /// <returns>Name of the added image. </returns>
    ASPOSE_PDF_SHARED_API System::String AddWithName(System::SharedPtr<Aspose::Pdf::XImage> image);
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="image">Stream containing image data (in JPEG format).</param>
    /// <returns>Name of the added image.</returns>
    ASPOSE_PDF_SHARED_API System::String Add(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="bitmapInfo">Object containing array of pixels and bitmap information (Width, Height, PixelFormat).</param>
    /// <returns>Name of the added image.</returns>
    ASPOSE_PDF_SHARED_API System::String Add(System::SharedPtr<Aspose::Pdf::BitmapInfo> bitmapInfo);
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="image">Stream containing image data.</param> 
    /// <param name="filterType">The image filter type.</param>
    /// <returns>Name of the added image.</returns>
    ASPOSE_PDF_SHARED_API System::String Add(System::SharedPtr<System::IO::Stream> image, Aspose::Pdf::ImageFilterType filterType);
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="bitmapInfo">Object containing array of pixels and bitmap information (Width, Height, PixelFormat).</param>
    /// <param name="filterType">The image filter type.</param>
    /// <returns>Name of the added image.</returns>
    ASPOSE_PDF_SHARED_API System::String Add(System::SharedPtr<Aspose::Pdf::BitmapInfo> bitmapInfo, Aspose::Pdf::ImageFilterType filterType);
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="image">Stream containing image data (in JPEG format).</param>
    /// <param name="quality">JPEG quality.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<System::IO::Stream> image, int32_t quality);
    /// <summary>
    /// Removes index from collection by index.
    /// </summary>
    /// <param name="index">Image index.</param>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index);
    /// <summary>
    /// Removes image from collection by index performing action specified by action parameter. 
    /// </summary>
    /// <param name="index">Index of the image to be removed.</param>
    /// <param name="action">Action perfromed after image deleting.</param>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index, Aspose::Pdf::ImageDeleteAction action);
    /// <summary>
    /// Removes item from collection by name.
    /// </summary>
    /// <param name="name">Name of image which must to be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::String name);
    /// <summary>
    /// Removes item from collection by name.
    /// </summary>
    /// <param name="name">Name of image which must to be deleted.</param>
    /// <param name="action">Action to be performed with image object.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::String name, Aspose::Pdf::ImageDeleteAction action);
    /// <summary>
    /// Deletes images from collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    /// <summary>
    /// Returns collection enumerator.
    /// </summary>
    /// <returns>Enumerator of collection</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XImage>>> GetEnumerator() override;
    /// <summary>
    /// Copies array of images into collection.
    /// </summary>
    /// <param name="array">Array to be copied.</param>
    /// <param name="index">Index where images will be copied into collection.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::XImage>> array, int32_t index) override;
    /// <summary>
    /// Replace image in collection with another image. 
    /// </summary>
    /// <param name="index">Index of collection item which will be replaced in [1..images count] range.</param>
    /// <param name="stream">Stream containing image data (in JPEG format).</param>
    ASPOSE_PDF_SHARED_API void Replace(int32_t index, System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Replace image in collection with another image. 
    /// </summary>
    /// <param name="index">Index of collection item which will be replaced in [1..images count] range.</param>
    /// <param name="stream">Stream containing image data (in JPEG format).</param>
    /// <param name="quality">Quality of JPEG compression, in percent (valid vaues are 0..100).</param>
    /// <param name="isBlackAndWhite">If true, image is compressed with CCITT compression method which provides better compression for black nad white image. May be used only for black and white images.</param>
    ASPOSE_PDF_SHARED_API void Replace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackAndWhite);
    /// <summary>
    /// Replace image in collection with another image. 
    /// </summary>
    /// <param name="index">Index of collection item which will be replaced in [1..images count] range.</param>
    /// <param name="stream">Stream containing image data (in JPEG format).</param>
    /// <param name="quality">JPEG quality.</param>
    ASPOSE_PDF_SHARED_API void Replace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality);
    
    /// <summary>
    /// Gets image from collection by its index.
    /// </summary>
    /// <param name="index">Image index</param>
    /// <returns>Retrieved image.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::XImage> idx_get(int32_t index);
    /// <summary>
    /// Gets image from collection by its name.
    /// </summary>
    /// <param name="name">Image name.</param>
    /// <returns>Retrieved image.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::XImage> idx_get(System::String name);
    
    /// <summary>
    /// Returns name in images list which is key of the given image. 
    /// </summary>
    /// <param name="image">Image to search.</param>
    /// <returns>Name (key) of the found image; null if images was not found.</returns>
    ASPOSE_PDF_SHARED_API System::String GetImageName(System::SharedPtr<Aspose::Pdf::XImage> image);
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection.</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<Aspose::Pdf::XImage>& item) const override;
    /// <summary>
    /// Removes item from collection, throws <exception cref="NotImplementedException">NotImplementedException</exception>.
    /// </summary>
    /// <param name="item">Item to remove.</param>
    /// <returns><exception cref="NotImplementedException">NotImplementedException</exception></returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<Aspose::Pdf::XImage>& item) override;
    
protected:

    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<System::Drawing::Bitmap>>> get_BitmapCache();
    System::SharedPtr<Aspose::Pdf::Resources> get_Parent() const;
    
    static System::SharedPtr<System::Drawing::Imaging::ImageCodecInfo> GetEncoder(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    static void SaveJpegWithQuality(System::SharedPtr<System::Drawing::Image> image, System::SharedPtr<System::IO::Stream> jpgStream, int32_t quality);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> MakeImageFromStream(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> parent);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> MakeMonochromeImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> CompressIndexedImage(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::ArrayPtr<uint8_t> indexedBytes, System::ArrayPtr<uint8_t> maskBytes, System::ArrayPtr<System::Drawing::Color> palette, int32_t width, int32_t height, int32_t bitsPerPixel);
    static void CopyMask(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> dest, System::SharedPtr<Aspose::Pdf::XImage> source);
    static void AddImageParams(System::SharedPtr<Aspose::Imaging::FileFormats::Tiff::TiffImage> tiff, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, Aspose::Imaging::FileFormats::Tiff::Enums::TiffCompressions compression, System::ArrayPtr<uint8_t> data);
    static bool CheckTiff(System::SharedPtr<Aspose::Imaging::FileFormats::Tiff::TiffImage> tiff, Aspose::Imaging::FileFormats::Tiff::Enums::TiffCompressions& compression);
    static void AddCCITTDecodeParams(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> dest, int32_t width, int32_t height, int32_t k, bool blackIs1);
    static void ReverseColors(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> dest);
    static void AddIndexedColorSpace(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::ArrayPtr<System::Drawing::Color> bmpPalette);
    static bool AddCCITTFaxDecodeImageMask(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<Aspose::Pdf::XImageCollection::ThresholdMaskParameters> thresholdMaskParameters, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> AddGifMaskedImage(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, Aspose::Pdf::ImageFilterType filterType, uint8_t bitMask, bool isMasked);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> AddOrReplaceGrayScaled(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool hasSoftMask);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams, System::String& nameOfImage, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr);
    static void AddSoftMaskToImage(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<System::Drawing::Image> originalImage, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::ArrayPtr<uint8_t> mask = nullptr);
    static void AddSoftMaskToImage(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::ArrayPtr<uint8_t> mask, int32_t width, int32_t height);
    static System::ArrayPtr<uint8_t> AddGrayScaleFlateDecodeImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img);
    /// <summary>
    /// Determines whether emf format is used.
    /// </summary>
    /// <param name="stream">Input stream with image.</param>
    /// <returns>Is emf format is detected than jpeg stream returned; otherwise, input stream.</returns>
    static bool IsMetafile(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> Add(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> Add(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams, System::String& name);
    /// <summary>
    /// Determines if collection contains image with specified name
    /// </summary>
    /// <param name="imageName">Image name to check</param>
    /// <returns>True if collection contains image with specified name, otherwise false</returns>
    bool ContainsName(System::String imageName);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> DeleteByIndex(int32_t index);
    /// <summary>
    /// Returns ObjectID of deleted image.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> DeleteBySize(int32_t index);
    
    XImageCollection(System::SharedPtr<Aspose::Pdf::Resources> parent, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> xobject);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XImageCollection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Resources> parent, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> xobject));
    void Add(System::String name, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> image);
    System::String Add(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> image);
    bool HasImage(System::String imgName);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> DeleteBySizeAndIndex(System::SharedPtr<Aspose::Pdf::XImage> image);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> DeleteBySize(System::SharedPtr<Aspose::Pdf::XImage> image);
    
    virtual ASPOSE_PDF_SHARED_API ~XImageCollection();
    
private:

    System::SharedPtr<System::Object> syncRoot;
    int32_t lastKeyUsed;
    static uint8_t BinarizationBlackOverWhiteThreshold;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<System::Drawing::Bitmap>>> _bitmapCache;
    System::WeakPtr<Aspose::Pdf::Resources> _parent;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _cache;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> _hash;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject>>> _objectHash;
    
    static System::ArrayPtr<uint8_t> GetImageMask(System::SharedPtr<System::Drawing::Image> image);
    static System::ArrayPtr<uint8_t> ReadMonochromeImageData(System::SharedPtr<System::Drawing::Bitmap> image);
    static bool CheckPalette(System::SharedPtr<System::Drawing::Bitmap> bitmap);
    void AddJpxDecodeImage(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::SharedPtr<System::Drawing::Image>& originalImage);
    System::ArrayPtr<uint8_t> AddFlateDecodeImage(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::SharedPtr<System::Drawing::Image>& originalImage, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr);
    System::ArrayPtr<uint8_t> Get32bppPixels(System::SharedPtr<System::Drawing::Imaging::BitmapData> data, System::ArrayPtr<uint8_t> rgb);
    System::ArrayPtr<uint8_t> Get24bppPixels(System::SharedPtr<System::Drawing::Imaging::BitmapData> data, System::ArrayPtr<uint8_t> rgb);
    System::ArrayPtr<uint8_t> AddDCTDecodeImage(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::SharedPtr<System::Drawing::Image>& originalImage, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr);
    static void GetColorSpaceAndBitsPerComponent(System::Drawing::Imaging::PixelFormat pixelFormat, System::String& colorSpaceName, int32_t& bitsPerComponent);
    static void GetColorSpaceAndBitsPerComponentV1(System::Drawing::Imaging::PixelFormat pixelFormat, System::String& colorSpaceName, int32_t& bitsPerComponent);
    static System::SharedPtr<System::Drawing::Image> ConvertImageTo(System::SharedPtr<System::Drawing::Image> image, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    void AddCCITTFaxDecodeImage(System::SharedPtr<Aspose::Pdf::XImageAddingParams> addingParams, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img);
    static void SaveImageStream(System::SharedPtr<Aspose::Imaging::FileFormats::Tiff::TiffImage> tiff, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, Aspose::Imaging::FileFormats::Tiff::Enums::TiffCompressions compression);
    static void AddXImageDictionaryData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::String filterName, System::String colorSpaceName, int32_t bitsPerComponent, int32_t width, int32_t height);
    static void UpdateXImageDictionaryData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::String colorSpaceName, int32_t bitsPerComponent, int32_t width, int32_t height);
    bool CheckBitmapForAlphaValues(System::SharedPtr<System::Drawing::Image> image);
    void AddStencilMaskToImage(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, uint8_t bitMask, bool& maskCreated);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> AddOrReplaceImageToResources(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> p, int32_t index, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> img, System::String& nameOfImage);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, Aspose::Pdf::ImageFilterType filterType);
    bool HasReferences(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> imageObject, System::SharedPtr<Aspose::Pdf::Resources> resources);
    bool HasReferences(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> imageObject);
    void OnImageDelete(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> imageObject, Aspose::Pdf::ImageDeleteAction action);
    System::SharedPtr<Aspose::Pdf::XImage> get(int32_t index);
    System::SharedPtr<Aspose::Pdf::XImage> get(System::String name);
    void CopyToInner(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::XImage>> array, int32_t index);
    System::String GetUniqueImageName();
    static System::SharedPtr<System::Drawing::Image> ToImage(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Adds new image to Image list. This method adds image as reference to the same PdfObject (which allows to decrease file size)
    /// </summary>
    /// <param name="item">XImage to be added.</param>
    void Add(const System::SharedPtr<Aspose::Pdf::XImage>& item) override;
    
};

class XImageAddingParams : public System::Object
{
    typedef XImageAddingParams ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class ImageType
    {
        FileFormat,
        RawBytes
    };
    
    
public:

    System::SharedPtr<Aspose::Pdf::BitmapInfo> get_BitmapInfo() const;
    void set_BitmapInfo(System::SharedPtr<Aspose::Pdf::BitmapInfo> value);
    Aspose::Pdf::XImageAddingParams::ImageType get_Type() const;
    const System::SharedPtr<System::IO::Stream>& get_ImageStream() const;
    void set_ImageStream(System::SharedPtr<System::IO::Stream> value);
    const System::SharedPtr<System::Drawing::Image>& get_Image() const;
    void set_Image(System::SharedPtr<System::Drawing::Image> value);
    int32_t get_Quality() const;
    void set_Quality(int32_t value);
    bool get_IsBlackWhite() const;
    void set_IsBlackWhite(bool value);
    Aspose::Pdf::ImageFilterType get_FilterType() const;
    void set_FilterType(Aspose::Pdf::ImageFilterType value);
    bool get_IsStencilMasked() const;
    void set_IsStencilMasked(bool value);
    uint8_t get_BitMask() const;
    void set_BitMask(uint8_t value);
    bool get_IsGrayScaled() const;
    void set_IsGrayScaled(bool value);
    bool get_IsGrayScaleSoftMasked() const;
    void set_IsGrayScaleSoftMasked(bool value);
    
    XImageAddingParams();
    
private:

    System::SharedPtr<Aspose::Pdf::BitmapInfo> _rawBitmapInfo;
    Aspose::Pdf::XImageAddingParams::ImageType pr_Type;
    
    void set_Type(Aspose::Pdf::XImageAddingParams::ImageType value);
    
    System::SharedPtr<System::IO::Stream> pr_ImageStream;
    System::SharedPtr<System::Drawing::Image> pr_Image;
    int32_t pr_Quality;
    bool pr_IsBlackWhite;
    Aspose::Pdf::ImageFilterType pr_FilterType;
    bool pr_IsStencilMasked;
    uint8_t pr_BitMask;
    bool pr_IsGrayScaled;
    bool pr_IsGrayScaleSoftMasked;
    
};

} // namespace Pdf
} // namespace Aspose


