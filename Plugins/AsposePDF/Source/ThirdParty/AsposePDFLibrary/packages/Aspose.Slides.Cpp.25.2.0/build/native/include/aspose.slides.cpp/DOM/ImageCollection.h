#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/IImageCollection.h>

#include "DOM/Presentation.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AudioFrame;
class AutoShapeLayout;
namespace DOM
{
namespace Ole
{
class OleEmbedder;
} // namespace Ole
} // namespace DOM
namespace Drawing
{
class SVGCanvas;
class SvgResources;
} // namespace Drawing
namespace Export
{
class ApsPptxCanvas;
} // namespace Export
class GeometryShapeLayout;
class IImage;
class IPPImage;
class ISvgImage;
namespace Layout
{
class TableLayout;
} // namespace Layout
enum class LoadingStreamBehavior;
namespace OdpSerialization
{
class OdpDeserializationContext;
class OdpSerializationContext;
namespace PartParser
{
class GradientFillFormatOdpSerialization;
class OleObjectFrameOdpDeserialization;
class OleObjectFrameOdpSerialization;
class ShapeOdpSerialization;
class StylePartsOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class PictureFillFormat;
class PictureFillParam;
class PictureFrame;
class PictureFrameLayout;
class PPImage;
namespace PptSerialization
{
class FillFormatPPTSerialization;
class OleObjectPptSerialization;
class PicturePPTSerialization;
class PptDeserializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class GroupShapePPTXSerialization;
class OleObjectFramePPTXSerialization;
class PicturePPTXSerialization;
class SvgBlipPPTXSerialization;
class VmlDrawingPartParser;
} // namespace PartParser
class PptxDeserializationContext;
class PptxSerializationContext;
} // namespace PptxSerialization
class ShapeCollection;
class SvgImage;
namespace Warnings
{
enum class WarningType;
} // namespace Warnings
class ZoomObjectLayout;
} // namespace Slides
namespace Zip
{
class ZipEntry;
} // namespace Zip
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Image;
} // namespace Drawing
class Guid;
namespace IO
{
class MemoryStream;
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents collection of PPImage.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ImageCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>>, public Aspose::Slides::IImageCollection
{
    typedef ImageCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>> BaseType;
    typedef Aspose::Slides::IImageCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PictureFillParam;
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::PictureFrameLayout;
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::ZoomObjectLayout;
    friend class Aspose::Slides::PptxSerialization::PartParser::SvgBlipPPTXSerialization;
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::Drawing::SvgResources;
    friend class Aspose::Slides::Export::ApsPptxCanvas;
    friend class Aspose::Slides::OdpSerialization::PartParser::OleObjectFrameOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::OleObjectFrameOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::OdpDeserializationContext;
    friend class Aspose::Slides::OdpSerialization::OdpSerializationContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::GradientFillFormatOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StylePartsOdpSerialization;
    friend class Aspose::Slides::AudioFrame;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::PPImage;
    friend class Aspose::Slides::PictureFillFormat;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::DOM::Ole::OleEmbedder;
    friend class Aspose::Slides::PptSerialization::PicturePPTSerialization;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::OleObjectFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PicturePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::VmlDrawingPartParser;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PptxSerializationContext;
    friend class Aspose::Slides::PptSerialization::FillFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::OleObjectPptSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IPPImage>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Returns a number of images in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::IPPImage">IPPImage</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> idx_get(int32_t index) override;
    
    /// <summary>
    /// Adds a copy of an image from an another presentation.
    /// </summary>
    /// <param name="imageSource">Source image.</param>
    /// <returns>Added image.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<IPPImage> imageSource) override;
    /// @deprecated Use AddImage(IImage image) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Add an image to a presentation.
    /// </summary>
    /// <remarks>This method converts WMF/EMF metafiles to raster PNG image before inserting to a presentation.</remarks>
    /// <param name="image">Image to add.</param>
    /// <returns>Added image.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<System::Drawing::Image> image) override;
    /// <summary>
    /// Add an image to a presentation.
    /// </summary>
    /// <remarks>This method converts WMF/EMF metafiles to raster PNG image before inserting to a presentation.</remarks>
    /// <param name="image">Image to add.</param>
    /// <returns>Added image.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<IImage> image) override;
    /// <summary>
    /// Add an image to a presentation from stream.
    /// </summary>
    /// <remarks>This method can add WMF/EMF metafiles to a presentation without converting them to raster PNG image.</remarks>
    /// <param name="stream">Stream to add image from.</param>
    /// <returns>Added image.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<System::IO::MemoryStream> stream) override;
    /// <summary>
    /// Add an image to a presentation from stream.
    /// </summary>
    /// <remarks>This method can add WMF/EMF metafiles to a presentation without converting them to raster PNG image.</remarks>
    /// <param name="stream">Stream to add image from.</param>
    /// <returns>Added image.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Creates and adds an image to a presentation from stream.
    /// </summary>
    /// <param name="stream">Stream to add image file from.</param>
    /// <param name="loadingStreamBehavior">The behavior which will be applied to the stream.</param>
    /// <returns>Added <see cref="Aspose::Slides::IPPImage">IPPImage</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<System::IO::Stream> stream, LoadingStreamBehavior loadingStreamBehavior) override;
    /// <summary>
    /// Adds an image to a presentation from specified buffer.
    /// </summary>
    /// <param name="buffer">Buffer.</param>
    /// <returns>Added image.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> AddImage(System::ArrayPtr<uint8_t> buffer) override;
    /// <summary>
    /// Add an image to a presentation from Svg object. 
    /// </summary>
    /// <param name="svgImage">Svg image object <see cref="Aspose::Slides::ISvgImage">ISvgImage</see></param>
    /// <returns>Added image.</returns>
    /// <exception cref="System::ArgumentNullException">When svgImage parameter is null.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<ISvgImage> svgImage) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IPPImage>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IPPImage>> array, int32_t index) override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> get_NoImage();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PPImage> get_AudioImage();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PPImage> get_OleSubstituteImageTemplate();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PPImage>>> get_OleDefaultSubstituteImages();
    
    static const ASPOSE_SLIDES_LOCAL_API System::String gifType;
    static const ASPOSE_SLIDES_LOCAL_API System::String jpegType;
    static const ASPOSE_SLIDES_LOCAL_API System::String wmfType;
    static const ASPOSE_SLIDES_LOCAL_API System::String emfType;
    static const ASPOSE_SLIDES_LOCAL_API System::String pngType;
    static const ASPOSE_SLIDES_LOCAL_API System::String tiffType;
    static const ASPOSE_SLIDES_LOCAL_API System::String bmpType;
    static const ASPOSE_SLIDES_LOCAL_API System::String pictType;
    
    ASPOSE_SLIDES_LOCAL_API ImageCollection(System::SharedPtr<Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ImageCollection, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PPImage> FindImage(System::ArrayPtr<uint8_t> data, uint32_t crc32);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PPImage> FindImage(System::Guid guid);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PPImage> FindImage(System::SharedPtr<SvgImage> svgImage);
    ASPOSE_SLIDES_LOCAL_API void OnAdd(System::SharedPtr<PPImage> image);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<ISvgImage> svgImage, float scale);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<ISvgImage> svgImage, float width, float height, float scale, bool rasterizeMetafile);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<Zip::ZipEntry> imageData);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> AddNewImage(System::SharedPtr<ISvgImage> svgImage);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> AddNewImage(System::ArrayPtr<uint8_t> data);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> CreateImage(System::SharedPtr<ISvgImage> svgImage);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PPImage> CreateImage(System::ArrayPtr<uint8_t> data);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> AddImageFromLink(System::String imageFilePath, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<IPPImage>>> imageFileToImage);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SvgImage> AddSvgImageFromLink(System::String svgFilePath);
    ASPOSE_SLIDES_LOCAL_API void SendMetafileRasterizationWarning();
    ASPOSE_SLIDES_LOCAL_API void SendGdiPlusErrorWarning(System::String partPath);
    ASPOSE_SLIDES_LOCAL_API void SendImageFormatNotSupportedWarning(System::String imageFileName);
    ASPOSE_SLIDES_LOCAL_API void SendNotImplementedWarning(System::String description, Warnings::WarningType warningType);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::IO::MemoryStream> CreateMemoryStream(System::SharedPtr<System::IO::Stream> stream);
    static ASPOSE_SLIDES_LOCAL_API System::String GetExtByContentType(System::String contentType);
    static ASPOSE_SLIDES_LOCAL_API System::String GetFileNameWindows(System::String path);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::IO::MemoryStream> GetBitmapStream(System::SharedPtr<ISvgImage> svgImage, float width, float height, float scale, bool& isMetafile);
    ASPOSE_SLIDES_LOCAL_API void Remove(System::SharedPtr<IPPImage> image);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ImageCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IPPImage>>> m_images;
    System::SharedPtr<PPImage> m_noImage;
    System::SharedPtr<PPImage> m_audioImage;
    System::SharedPtr<PPImage> m_oleImage;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PPImage>>> m_oleDefaultSubstituteImages;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> AddNewImage(System::ArrayPtr<uint8_t> data, System::SharedPtr<System::Drawing::Image> image);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PPImage> CreateImage(System::SharedPtr<System::IO::Stream> stream);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PPImage> CreateImage(System::ArrayPtr<uint8_t> data, System::SharedPtr<System::Drawing::Image> image, bool addToCollection);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPPImage> ExtractImage(System::String imageFileName, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<IPPImage>>> imageFileToImage);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::IO::MemoryStream> GetImageStream(System::SharedPtr<System::IO::MemoryStream> stream);
    static ASPOSE_SLIDES_LOCAL_API bool IsGZip(System::SharedPtr<System::IO::MemoryStream> stream);
    
};

} // namespace Slides
} // namespace Aspose


