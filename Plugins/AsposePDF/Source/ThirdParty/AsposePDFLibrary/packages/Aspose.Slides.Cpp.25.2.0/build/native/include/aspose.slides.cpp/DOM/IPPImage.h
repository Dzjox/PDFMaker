#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IImage;
class ISvgImage;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Image;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an image in a presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPPImage : public virtual System::Object
{
    typedef IPPImage ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the copy of an image's data.
    /// Read-only <see cref="uint8_t"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> get_BinaryData() = 0;
    /// @deprecated Use Image property instead. The property will be removed after release of version 24.7.
    /// <summary>
    /// Returns the copy of an image of the System::Drawing::Image type.
    /// Read-only <see cref="System::Drawing::Image"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Image> get_SystemImage() = 0;
    /// <summary>
    /// Returns the copy of an image.
    /// Read-only <see cref="System::Drawing::Image"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> get_Image() = 0;
    /// <summary>
    /// Returns ISvgImage object <see cref="Aspose::Slides::ISvgImage">ISvgImage</see>
    /// </summary>
    /// <remarks>This value indicates that this image has been created from SVG.</remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISvgImage> get_SvgImage() const = 0;
    /// <summary>
    /// Sets ISvgImage object <see cref="Aspose::Slides::ISvgImage">ISvgImage</see>
    /// </summary>
    /// <remarks>This value indicates that this image has been created from SVG.</remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SvgImage(System::SharedPtr<ISvgImage> value) = 0;
    /// <summary>
    /// Returns a MIME type of an image, encoded in <see cref="IPPImage::get_BinaryData"></see>.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ContentType() = 0;
    /// <summary>
    /// Returns a width of an image.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Width() = 0;
    /// <summary>
    /// Returns a height of an image.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Height() = 0;
    /// <summary>
    /// Returns a X-offset of an image.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_X() = 0;
    /// <summary>
    /// Returns a Y-offset of an image.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Y() = 0;
    
    /// <summary>
    /// Replaces image data.
    /// </summary>
    /// <param name="newImageData">The new image's data.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceImage(System::ArrayPtr<uint8_t> newImageData) = 0;
    /// @deprecated Use ReplaceImage(IImage newImage) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Replaces image.
    /// </summary>
    /// <param name="newImage">The new image.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceImage(System::SharedPtr<System::Drawing::Image> newImage) = 0;
    /// <summary>
    /// Replaces image.
    /// </summary>
    /// <param name="newImage">The new image.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceImage(System::SharedPtr<IImage> newImage) = 0;
    /// <summary>
    /// Replaces image.
    /// </summary>
    /// <param name="newImage">The new IPPImage.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceImage(System::SharedPtr<IPPImage> newImage) = 0;
    
};

} // namespace Slides
} // namespace Aspose


