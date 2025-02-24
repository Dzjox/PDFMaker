#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/idisposable.h>
#include <system/guid.h>
#include <system/array.h>
#include <drawing/rectangle.h>
#include <drawing/point_f.h>
#include <DOM/IPPImage.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Blob
{
class IBlobHandler;
} // namespace Blob
namespace Images
{
class ImageCrop;
} // namespace Images
} // namespace Foundation
namespace PptxPackage
{
namespace PartTypes
{
class ImagePartType;
} // namespace PartTypes
} // namespace PptxPackage
namespace Slides
{
namespace Charts
{
class Chart;
} // namespace Charts
namespace DOM
{
namespace Util
{
class SvgToShapesConverter;
} // namespace Util
} // namespace DOM
namespace Drawing
{
class Canvas;
class ImageCanvas;
class Margin32f;
class RenderContext;
class SVGCanvas;
} // namespace Drawing
namespace Export
{
class ApsPptxCanvas;
class PptxExporter;
namespace Web
{
class Output;
} // namespace Web
} // namespace Export
class HandoutSlideView;
class IImage;
class ImageCollection;
class IPresentation;
class ISvgImage;
namespace OdpSerialization
{
class OdpSerializationContext;
namespace PartParser
{
class OleObjectFrameOdpDeserialization;
class PictureFillFormatOdpSerialization;
class ShapeOdpSerialization;
class StylePartsOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class OleObjectFrame;
class OleObjectFrameLayout;
class Picture;
class PictureEffectiveData;
class PictureFillFormat;
class PictureFillParam;
class PictureFrame;
class PictureFrameLayout;
class PictureImpl;
namespace PptSerialization
{
class BackgroundPPTSerialization;
class ImagePptSerializationContext;
class OleObjectPptSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class OleObjectFramePPTXSerialization;
} // namespace PartParser
class PptxSerializationContext;
} // namespace PptxSerialization
class ShapeCollection;
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class ImagePPTUnsupportedProps;
} // namespace PPTUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Image;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an image in a presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PPImage : public Aspose::Slides::IPPImage, public System::IDisposable
{
    typedef PPImage ThisType;
    typedef Aspose::Slides::IPPImage BaseType;
    typedef System::IDisposable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HandoutSlideView;
    friend class Aspose::Slides::PictureFillParam;
    friend class Aspose::Slides::Drawing::RenderContext;
    friend class Aspose::Slides::OleObjectFrameLayout;
    friend class Aspose::Slides::PictureFrameLayout;
    friend class Aspose::Slides::PictureEffectiveData;
    friend class Aspose::Slides::Export::Web::Output;
    friend class Aspose::Slides::PictureImpl;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Drawing::Canvas;
    friend class Aspose::Slides::Drawing::ImageCanvas;
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::Export::ApsPptxCanvas;
    friend class Aspose::Slides::Export::PptxExporter;
    friend class Aspose::Slides::OdpSerialization::PartParser::OleObjectFrameOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::ImagePptSerializationContext;
    friend class Aspose::Slides::OdpSerialization::OdpSerializationContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StylePartsOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PictureFillFormatOdpSerialization;
    friend class Aspose::Slides::DOM::Util::SvgToShapesConverter;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::ImageCollection;
    friend class Aspose::Slides::OleObjectFrame;
    friend class Aspose::Slides::Picture;
    friend class Aspose::Slides::PictureFillFormat;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::OleObjectFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxSerializationContext;
    friend class Aspose::Slides::PptSerialization::BackgroundPPTSerialization;
    friend class Aspose::Slides::PptSerialization::OleObjectPptSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the copy of an image's data.
    /// Read-only <see cref="uint8_t"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> get_BinaryData() override;
    /// @deprecated Use Image property instead. The property will be removed after release of version 24.7.
    /// <summary>
    /// Returns the copy of an image.
    /// Read-only <see cref="System::Drawing::Image"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Image> get_SystemImage() override;
    /// <summary>
    /// Returns the copy of an image.
    /// Read-only <see cref="Aspose::Slides::IImage">IImage</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::IImage> get_Image() override;
    /// <summary>
    /// Returns ISvgImage object <see cref="Aspose::Slides::ISvgImage">ISvgImage</see>
    /// </summary>
    /// <remarks>This value indicates that this image has been created from SVG.</remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::ISvgImage> get_SvgImage() const override;
    /// <summary>
    /// Sets ISvgImage object <see cref="Aspose::Slides::ISvgImage">ISvgImage</see>
    /// </summary>
    /// <remarks>This value indicates that this image has been created from SVG.</remarks>
    ASPOSE_SLIDES_SHARED_API void set_SvgImage(System::SharedPtr<Aspose::Slides::ISvgImage> value) override;
    /// <summary>
    /// Returns a MIME type of an image, encoded in <see cref="PPImage::get_BinaryData"></see>.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ContentType() override;
    /// <summary>
    /// Returns a width of an image.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Width() override;
    /// <summary>
    /// Returns a height of an image.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Height() override;
    /// <summary>
    /// Returns a X-offset of an image.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_X() override;
    /// <summary>
    /// Returns a Y-offset of an image.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Y() override;
    
    /// <summary>
    /// Replaces image data.
    /// <param name="newImageData">The new image's data.</param>
    /// <exception cref="System::ArgumentNullException">When newImageData parameter is null.</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void ReplaceImage(System::ArrayPtr<uint8_t> newImageData) override;
    /// @deprecated Use ReplaceImage(IImage newImage) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Replaces image data. Attention: when Image is metafile - it will be rasterized due to restrictions of GDI+. Use ReplaceImage(byte[]) instead
    /// <param name="newImage">The new image.</param>
    /// <exception cref="System::ArgumentNullException">When newImage parameter is null.</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void ReplaceImage(System::SharedPtr<System::Drawing::Image> newImage) override;
    /// <summary>
    /// Replaces image data. Attention: when Image is metafile - it will be rasterized. Use ReplaceImage(byte[]) instead
    /// <param name="newImage">The new image.</param>
    /// <exception cref="System::ArgumentNullException">When newImage parameter is null.</exception>
    /// </summary>        
    ASPOSE_SLIDES_SHARED_API void ReplaceImage(System::SharedPtr<Aspose::Slides::IImage> newImage) override;
    /// <summary>
    /// Replaces image data.
    /// <param name="newImage">The new IPPImage.</param>
    /// <exception cref="System::ArgumentNullException">When newImage parameter is null.</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void ReplaceImage(System::SharedPtr<Aspose::Slides::IPPImage> newImage) override;
    /// <summary>
    /// Returns the hash code of an image.
    /// </summary>
    /// <returns>Hash code.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Disposes object.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Dispose() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::PptxPackage::PartTypes::ImagePartType> get_PartType();
    ASPOSE_SLIDES_LOCAL_API System::Drawing::Rectangle get_Frame();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::ImagePPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> get_BlobHandler() const;
    ASPOSE_SLIDES_LOCAL_API uint32_t get_CRC() const;
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> get_data() const;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Image> get_image();
    ASPOSE_SLIDES_LOCAL_API System::Drawing::PointF get_Dpi();
    ASPOSE_SLIDES_LOCAL_API bool get_IsMetafile();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::IPresentation> get_Presentation();
    ASPOSE_SLIDES_LOCAL_API System::Guid get_Guid();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    ASPOSE_SLIDES_LOCAL_API PPImage(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::ArrayPtr<uint8_t> data);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PPImage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::ArrayPtr<uint8_t> data));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API PPImage(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PPImage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API PPImage(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::Drawing::Rectangle imageFrame, System::Drawing::PointF dpi);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PPImage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::Drawing::Rectangle imageFrame, System::Drawing::PointF dpi));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API PPImage(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::Drawing::Rectangle imageFrame, uint32_t crc);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PPImage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, System::Drawing::Rectangle imageFrame, uint32_t crc));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API PPImage(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, uint32_t crc, System::Drawing::Rectangle imageFrame);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PPImage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::IPresentation> presentation, System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler, uint32_t crc, System::Drawing::Rectangle imageFrame));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> GetBinaryData();
    static ASPOSE_SLIDES_LOCAL_API uint32_t GetCRC(System::ArrayPtr<uint8_t> data);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::Images::ImageCrop> CropMetafile(Aspose::Slides::Drawing::Margin32f cropVal, System::SharedPtr<Aspose::Foundation::Images::ImageCrop> crop);
    static ASPOSE_SLIDES_LOCAL_API void LoadImageProperties(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::PptxPackage::PartTypes::ImagePartType>& partType, System::Drawing::Rectangle& imageFrame);
    static ASPOSE_SLIDES_LOCAL_API void LoadImageProperties(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::PptxPackage::PartTypes::ImagePartType>& partType, System::Drawing::PointF& dpi, bool& isMetafile, System::Drawing::Rectangle& imageFrame);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::PptxPackage::PartTypes::ImagePartType> GetImagePartType(System::ArrayPtr<uint8_t> buffer);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~PPImage();
    
private:

    System::SharedPtr<Aspose::Slides::ISvgImage> pr_SvgImage;
    System::SharedPtr<Aspose::PptxPackage::PartTypes::ImagePartType> m_partType;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::ImagePPTUnsupportedProps> m_pptUnsupportedProps;
    System::Guid m_guid;
    mutable System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> m_blobHandler;
    System::WeakPtr<Aspose::Slides::IPresentation> m_presentation;
    System::Drawing::PointF m_dpi;
    System::Drawing::Rectangle m_imageFrame;
    bool m_isMetafile;
    bool m_propertiesSet;
    mutable uint32_t m_CRC;
    uint32_t m_version;
    
    ASPOSE_SLIDES_LOCAL_API PPImage(System::SharedPtr<Aspose::Slides::IPresentation> presentation);
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PPImage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::IPresentation> presentation));
    ASPOSE_SLIDES_LOCAL_API void EndInit();
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void LoadImageProperties(bool force);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::PptxPackage::PartTypes::ImagePartType> GetImagePartType(System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::PptxPackage::PartTypes::ImagePartType> GetImagePartType(System::SharedPtr<System::IO::Stream> stream);
    
};

} // namespace Slides
} // namespace Aspose


