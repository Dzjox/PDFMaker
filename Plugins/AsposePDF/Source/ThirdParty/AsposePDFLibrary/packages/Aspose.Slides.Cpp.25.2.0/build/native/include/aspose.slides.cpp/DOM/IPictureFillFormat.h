#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IFillParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class PicturesCompression;
} // namespace Export
class IPPImage;
class ISlidesPicture;
enum class PictureFillMode;
enum class RectangleAlignment : int8_t;
enum class TileFlip;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a picture fill style.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPictureFillFormat : public Aspose::Slides::IFillParamSource
{
    typedef IPictureFillFormat ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the dpi which is used to fill a picture.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Dpi() = 0;
    /// <summary>
    /// Sets the dpi which is used to fill a picture.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Dpi(int32_t value) = 0;
    /// <summary>
    /// Returns the picture fill mode.
    /// Read <see cref="Slides::PictureFillMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::PictureFillMode get_PictureFillMode() = 0;
    /// <summary>
    /// Sets the picture fill mode.
    /// Write <see cref="Slides::PictureFillMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PictureFillMode(Aspose::Slides::PictureFillMode value) = 0;
    /// <summary>
    /// Returns the picture.
    /// Read-only <see cref="Aspose::Slides::ISlidesPicture">ISlidesPicture</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlidesPicture> get_Picture() = 0;
    /// <summary>
    /// Returns the number of percents of real image width that are cropped off
    /// the left of the picture. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CropLeft() = 0;
    /// <summary>
    /// Sets the number of percents of real image width that are cropped off
    /// the left of the picture. 
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CropLeft(float value) = 0;
    /// <summary>
    /// Returns the number of percents of real image height that are cropped off
    /// the top of the picture. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CropTop() = 0;
    /// <summary>
    /// Sets the number of percents of real image height that are cropped off
    /// the top of the picture. 
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CropTop(float value) = 0;
    /// <summary>
    /// Returns the number of percents of real image width that are cropped off
    /// the right of the picture. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CropRight() = 0;
    /// <summary>
    /// Sets the number of percents of real image width that are cropped off
    /// the right of the picture. 
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CropRight(float value) = 0;
    /// <summary>
    /// Returns the number of percents of real image height that are cropped off
    /// the bottom of the picture. 
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CropBottom() = 0;
    /// <summary>
    /// Sets the number of percents of real image height that are cropped off
    /// the bottom of the picture. 
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CropBottom(float value) = 0;
    /// <summary>
    /// Returns left edge of the fill rectangle that is defined by a percentage offset 
    /// from the left edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_StretchOffsetLeft() = 0;
    /// <summary>
    /// Sets left edge of the fill rectangle that is defined by a percentage offset 
    /// from the left edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StretchOffsetLeft(float value) = 0;
    /// <summary>
    /// Returns top edge of the fill rectangle that is defined by a percentage offset 
    /// from the top edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_StretchOffsetTop() = 0;
    /// <summary>
    /// Sets top edge of the fill rectangle that is defined by a percentage offset 
    /// from the top edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StretchOffsetTop(float value) = 0;
    /// <summary>
    /// Returns right edge of the fill rectangle that is defined by a percentage offset 
    /// from the right edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_StretchOffsetRight() = 0;
    /// <summary>
    /// Sets right edge of the fill rectangle that is defined by a percentage offset 
    /// from the right edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StretchOffsetRight(float value) = 0;
    /// <summary>
    /// Returns bottom edge of the fill rectangle that is defined by a percentage offset 
    /// from the bottom edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_StretchOffsetBottom() = 0;
    /// <summary>
    /// Sets bottom edge of the fill rectangle that is defined by a percentage offset 
    /// from the bottom edge of the shape's bounding box. 
    /// A positive percentage specifies an inset, while a negative percentage specifies an outset.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StretchOffsetBottom(float value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TileOffsetX() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TileOffsetX(float value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TileOffsetY() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TileOffsetY(float value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TileScaleX() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TileScaleX(float value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TileScaleY() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TileScaleY(float value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API RectangleAlignment get_TileAlignment() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TileAlignment(RectangleAlignment value) = 0;
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
    /// }
    /// </code>
    /// </example> 
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TileFlip get_TileFlip() = 0;
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
    /// }
    /// </code>
    /// </example> 
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TileFlip(Aspose::Slides::TileFlip value) = 0;
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> DeletePictureCroppedAreas() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool CompressImage(bool deleteCroppedAreasOfImage, Export::PicturesCompression resolution) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool CompressImage(bool deleteCroppedAreasOfImage, float resolution) = 0;
    
};

} // namespace Slides
} // namespace Aspose


