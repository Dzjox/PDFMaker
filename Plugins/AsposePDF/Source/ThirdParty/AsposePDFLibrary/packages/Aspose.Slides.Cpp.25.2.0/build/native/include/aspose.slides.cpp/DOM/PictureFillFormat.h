#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/IPictureFillFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Control;
namespace Drawing
{
class Margin32f;
class Rect32f;
class Vector2d32f;
} // namespace Drawing
namespace Export
{
enum class PicturesCompression;
} // namespace Export
class FillFormat;
class FillFormatImpl;
class GeometryShapeLayout;
namespace HtmlIO
{
class TableNode;
} // namespace HtmlIO
class IDOMObject;
class IPictureFillFormatEffectiveData;
class IPPImage;
class ISlidesPicture;
namespace OdpSerialization
{
namespace PartParser
{
class PictureFillFormatOdpSerialization;
class ShapeOdpSerialization;
class StylePartsOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class OleObjectFrame;
class Picture;
class PictureFillFormatEffectiveData;
class PictureFillFormatImpl;
enum class PictureFillMode;
class PictureFillParam;
class PictureFrame;
class PictureImpl;
namespace PptSerialization
{
class BackgroundPPTSerialization;
class OleObjectPptSerialization;
class PictureFillFormatPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ImageDataVmlSerialization;
class PictureFillFormatPPTXSerialization;
class SectionZoomPPTXSerialization;
class SummaryZoomPPTXSerialization;
class ZoomPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
enum class RectangleAlignment : int8_t;
class SummaryZoomFrame;
enum class TileFlip;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class PictureFillFormatPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
class ZoomObject;
} // namespace Slides
} // namespace Aspose
namespace PdfImport
{
class PdfSlideHelper;
} // namespace PdfImport
namespace System
{
namespace Drawing
{
class RectangleF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a picture fill style.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PictureFillFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IPictureFillFormat
{
    typedef PictureFillFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IPictureFillFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PictureFillParam;
    friend class Aspose::Slides::ZoomObject;
    friend class Aspose::Slides::SummaryZoomFrame;
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::PictureFillFormatEffectiveData;
    friend class Aspose::Slides::PptxSerialization::PartParser::SectionZoomPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SummaryZoomPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ZoomPPTXSerialization;
    friend class PdfImport::PdfSlideHelper;
    friend class Aspose::Slides::FillFormatImpl;
    friend class Aspose::Slides::PictureFillFormatImpl;
    friend class Aspose::Slides::PictureImpl;
    friend class Aspose::Slides::HtmlIO::TableNode;
    friend class Aspose::Slides::PptxSerialization::PartParser::ImageDataVmlSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StylePartsOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PictureFillFormatOdpSerialization;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::Control;
    friend class Aspose::Slides::FillFormat;
    friend class Aspose::Slides::OleObjectFrame;
    friend class Aspose::Slides::PptxSerialization::PartParser::PictureFillFormatPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::BackgroundPPTSerialization;
    friend class Aspose::Slides::PptSerialization::OleObjectPptSerialization;
    friend class Aspose::Slides::PptSerialization::PictureFillFormatPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the dpi which is used to fill a picture.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Dpi() override;
    /// <summary>
    /// Sets the dpi which is used to fill a picture.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Dpi(int32_t value) override;
    /// <summary>
    /// Returns the picture fill mode.
    /// Read <see cref="Slides::PictureFillMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::PictureFillMode get_PictureFillMode() override;
    /// <summary>
    /// Sets the picture fill mode.
    /// Write <see cref="Slides::PictureFillMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PictureFillMode(Aspose::Slides::PictureFillMode value) override;
    /// <summary>
    /// Returns the picture.
    /// Read-only <see cref="Aspose::Slides::ISlidesPicture">ISlidesPicture</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlidesPicture> get_Picture() override;
    /// <summary>
    /// Returns the number of percents of real image width that are cropped off
    /// the left of the picture. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_CropLeft() override;
    /// <summary>
    /// Sets the number of percents of real image width that are cropped off
    /// the left of the picture. 
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CropLeft(float value) override;
    /// <summary>
    /// Returns the number of percents of real image height that are cropped off
    /// the top of the picture. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_CropTop() override;
    /// <summary>
    /// Sets the number of percents of real image height that are cropped off
    /// the top of the picture. 
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CropTop(float value) override;
    /// <summary>
    /// Returns the number of percents of real image width that are cropped off
    /// the right of the picture. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_CropRight() override;
    /// <summary>
    /// Sets the number of percents of real image width that are cropped off
    /// the right of the picture. 
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CropRight(float value) override;
    /// <summary>
    /// Returns the number of percents of real image height that are cropped off
    /// the bottom of the picture. 
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_CropBottom() override;
    /// <summary>
    /// Sets the number of percents of real image height that are cropped off
    /// the bottom of the picture. 
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CropBottom(float value) override;
    /// <summary>
    /// Returns left edge of the fill rectangle that is defined by a percentage offset 
    /// from the left edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_StretchOffsetLeft() override;
    /// <summary>
    /// Sets left edge of the fill rectangle that is defined by a percentage offset 
    /// from the left edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StretchOffsetLeft(float value) override;
    /// <summary>
    /// Returns top edge of the fill rectangle that is defined by a percentage offset 
    /// from the top edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_StretchOffsetTop() override;
    /// <summary>
    /// Sets top edge of the fill rectangle that is defined by a percentage offset 
    /// from the top edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StretchOffsetTop(float value) override;
    /// <summary>
    /// Returns right edge of the fill rectangle that is defined by a percentage offset 
    /// from the right edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_StretchOffsetRight() override;
    /// <summary>
    /// Sets right edge of the fill rectangle that is defined by a percentage offset 
    /// from the right edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StretchOffsetRight(float value) override;
    /// <summary>
    /// Returns bottom edge of the fill rectangle that is defined by a percentage offset 
    /// from the bottom edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_StretchOffsetBottom() override;
    /// <summary>
    /// Sets bottom edge of the fill rectangle that is defined by a percentage offset 
    /// from the bottom edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StretchOffsetBottom(float value) override;
    /// <summary>
    /// Returns the horizontal offset of the texture from the shape's origin in points.
    /// A positive value moves the texture to the right, while a negative value moves it to the left.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the horizontal offset of the texture to 20 points
    /// pictureFillFormat->set_TileOffsetX(20.f);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API float get_TileOffsetX() override;
    /// <summary>
    /// Sets the horizontal offset of the texture from the shape's origin in points.
    /// A positive value moves the texture to the right, while a negative value moves it to the left.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the horizontal offset of the texture to 20 points
    /// pictureFillFormat->set_TileOffsetX(20.f);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_TileOffsetX(float value) override;
    /// <summary>
    /// Returns the vertical offset of the texture from the shape's origin in points.
    /// A positive value moves the texture down, while a negative value moves it up.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the vertical offset of the texture to -50 points
    /// pictureFillFormat->set_TileOffsetY(-50.0f);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API float get_TileOffsetY() override;
    /// <summary>
    /// Sets the vertical offset of the texture from the shape's origin in points.
    /// A positive value moves the texture down, while a negative value moves it up.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the vertical offset of the texture to -50 points
    /// pictureFillFormat->set_TileOffsetY(-50.0f);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_TileOffsetY(float value) override;
    /// <summary>
    /// Returns the horizontal scale for the texture fill as a percentage.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the horizontal scale for the texture to 120 percents
    /// pictureFillFormat->set_TileScaleX(120.0f);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API float get_TileScaleX() override;
    /// <summary>
    /// Sets the horizontal scale for the texture fill as a percentage.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the horizontal scale for the texture to 120 percents
    /// pictureFillFormat->set_TileScaleX(120.0f);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_TileScaleX(float value) override;
    /// <summary>
    /// Returns the vertical scale for the texture fill as a percentage.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the vertical scale for the texture to 120 percents
    /// pictureFillFormat->set_TileScaleY(120.0f);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API float get_TileScaleY() override;
    /// <summary>
    /// Sets the vertical scale for the texture fill as a percentage.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the vertical scale for the texture to 120 percents
    /// pictureFillFormat->set_TileScaleY(120.0f);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_TileScaleY(float value) override;
    /// <summary>
    /// Returns how the texture is aligned within the shape. This setting controls the starting point of the texture pattern and how it repeats across the shape.
    /// Read <see cref="RectangleAlignment"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="RectangleAlignment::TopLeft"></see>.
    /// </remarks>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the alignment for the tiling to the right bottom
    /// pictureFillFormat->set_TileAlignment(Aspose::Slides::RectangleAlignment::BottomRight);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API RectangleAlignment get_TileAlignment() override;
    /// <summary>
    /// Sets how the texture is aligned within the shape. This setting controls the starting point of the texture pattern and how it repeats across the shape.
    /// Write <see cref="RectangleAlignment"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="RectangleAlignment::TopLeft"></see>.
    /// </remarks>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Sets the alignment for the tiling to the right bottom
    /// pictureFillFormat->set_TileAlignment(Aspose::Slides::RectangleAlignment::BottomRight);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_TileAlignment(RectangleAlignment value) override;
    /// <summary>
    /// Flips the texture tile around its horizontal, vertical or both axis.
    /// Read <see cref="Slides::TileFlip"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="TileFlip::NoFlip"></see>.
    /// </remarks>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Flips the texture tile around its vertical axis.
    /// pictureFillFormat->set_TileFlip(Aspose::Slides::TileFlip::FlipY);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::TileFlip get_TileFlip() override;
    /// <summary>
    /// Flips the texture tile around its horizontal, vertical or both axis.
    /// Write <see cref="Slides::TileFlip"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <see cref="TileFlip::NoFlip"></see>.
    /// </remarks>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the picture fill format of the shape
    /// System::SharedPtr<IPictureFillFormat> pictureFillFormat = slide->get_Shape(0)->get_FillFormat()->get_PictureFillFormat();
    /// 
    /// // Sets the picture fill mode to Tile
    /// pictureFillFormat->set_PictureFillMode(Aspose::Slides::PictureFillMode::Tile);
    /// 
    /// // Flips the texture tile around its vertical axis.
    /// pictureFillFormat->set_TileFlip(Aspose::Slides::TileFlip::FlipY);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_TileFlip(Aspose::Slides::TileFlip value) override;
    
    /// <summary>
    /// Delete cropped areas of the fill Picture.
    /// </summary>
    /// <remarks>This method converts WMF/EMF metafiles to raster PNG image while cropping.</remarks>
    /// <returns>Cropped image or origin image if cropping is not necessary.</returns>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the PictureFrame
    /// System::SharedPtr<IPictureFrame> picFrame = System::AsCast<IPictureFrame>(slide->get_Shape(0));
    /// 
    /// // Deletes cropped areas of the PictureFrame image
    /// System::SharedPtr<IPPImage> croppedImage = picFrame->get_PictureFormat()->DeletePictureCroppedAreas();
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> DeletePictureCroppedAreas() override;
    /// <summary>
    /// Compresses the image by reducing its size based on the shape size and specified resolution. Optionally, it also deletes cropped areas.
    /// </summary>
    /// <remarks>This method changes the image's size and resolution similar to PowerPoint's "Picture Format -> Compress Pictures" feature.</remarks>
    /// <param name="deleteCroppedAreasOfImage" >If true, the method will remove the cropped areas of the image, potentially further reducing its size.</param>
    /// <param name="resolution">The target resolution for compression, specified as a value of the <see cref="Aspose::Slides::Export::PicturesCompression">Export::PicturesCompression</see> enum.</param>
    /// <returns>
    /// A <see cref="bool"></see> indicating whether the image was successfully compressed. Returns <see langword="true"></see> if the image was resized or cropped, otherwise <see langword="false"></see>.
    /// </returns>
    /// <exception cref="System::ArgumentException">Thrown when the resolution is not a valid value.</exception>
    /// <example>
    /// The following example demonstrates how to use the <c>CompressImage</c> method to reduce the size of an image in a presentation by setting a target resolution and removing cropped areas:
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// System::SharedPtr<IPictureFrame> picFrame = System::AsCast<IPictureFrame>(slide->get_Shape(0));
    /// // Compress the image with a target resolution of 150 DPI (Web resolution) and remove cropped areas
    /// bool result = picFrame->get_PictureFormat()->CompressImage(true, PicturesCompression::Dpi150);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool CompressImage(bool deleteCroppedAreasOfImage, Export::PicturesCompression resolution) override;
    /// <summary>
    /// Compresses the image by reducing its size based on the shape size and specified resolution. Optionally, it also deletes cropped areas.
    /// </summary>
    /// <remarks>This method changes the image's size and resolution similar to PowerPoint's "Picture Format -> Compress Pictures" feature.</remarks>
    /// <param name="deleteCroppedAreasOfImage" >If true, the method will remove the cropped areas of the image, potentially further reducing its size.</param>
    /// <param name="resolution">The target resolution in DPI. This value must be positive and defines how the image will be resized.</param>
    /// <returns>
    /// A <see cref="bool"></see> indicating whether the image was successfully compressed. Returns <see langword="true"></see> if the image was resized or cropped, otherwise <see langword="false"></see>.
    /// </returns>
    /// <exception cref="System::ArgumentException">Thrown when the resolution is not a positive value.</exception>
    /// <example>
    /// The following example demonstrates how to use the <c>CompressImage</c> method to reduce the size of an image in a presentation by setting a target resolution and removing cropped areas:
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<ISlide> slide = presentation->get_Slide(0);
    /// 
    /// // Gets the PictureFrame
    /// System::SharedPtr<IPictureFrame> picFrame = System::AsCast<IPictureFrame>(slide->get_Shape(0));
    /// 
    /// // Compress the image with a target resolution of 150 DPI (Web resolution) and remove cropped areas
    /// bool result = picFrame->get_PictureFormat()->CompressImage(true, 150.0f); // Web resolution
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool CompressImage(bool deleteCroppedAreasOfImage, float resolution) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PictureFillFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Drawing::Margin32f get_Crop();
    ASPOSE_SLIDES_LOCAL_API void set_Crop(Drawing::Margin32f value);
    ASPOSE_SLIDES_LOCAL_API bool get_RotateWithShape();
    ASPOSE_SLIDES_LOCAL_API void set_RotateWithShape(bool value);
    ASPOSE_SLIDES_LOCAL_API Drawing::Margin32f get_StretchOffset();
    ASPOSE_SLIDES_LOCAL_API void set_StretchOffset(Drawing::Margin32f value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PictureFillFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    System::Event<void()> PictureFillFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API PictureFillFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PictureFillFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::Drawing::RectangleF GetSourceRectangle(int32_t imageWidth, int32_t imageHeight);
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<PictureFillFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IPictureFillFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void OnPictureFillFormatChanged();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~PictureFillFormat();
    
private:

    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d32f get_TileOffset();
    ASPOSE_SLIDES_LOCAL_API void set_TileOffset(Drawing::Vector2d32f value);
    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d32f get_TileScale();
    ASPOSE_SLIDES_LOCAL_API void set_TileScale(Drawing::Vector2d32f value);
    
    System::SharedPtr<Aspose::Slides::Picture> m_picture;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PictureFillFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    bool m_rotWithShape;
    
    ASPOSE_SLIDES_LOCAL_API bool ReduceImageSize(float resolution);
    ASPOSE_SLIDES_LOCAL_API Drawing::Rect32f GetScaledRectangle(Drawing::Rect32f sourceRect, float scaleX, float scaleY, bool isStretch);
    
};

} // namespace Slides
} // namespace Aspose


