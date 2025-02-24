#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IImage;
class IPPImage;
class ISvgImage;
enum class LoadingStreamBehavior;
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
class ASPOSE_SLIDES_API_SHARED_CLASS IImageCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IPPImage>>
{
    typedef IImageCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IPPImage>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns image by its index.
    /// </summary>
    /// <param name="index">Index.</param>
    /// <returns>Image.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> idx_get(int32_t index) = 0;
    
    /// @deprecated Use AddImage(IImage image) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Add an image to a presentation.
    /// </summary>
    /// <remarks>This method converts WMF/EMF metafiles to raster PNG image before inserting to a presentation.</remarks>
    /// <param name="image">Image to add.</param>
    /// <returns>Added image.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<System::Drawing::Image> image) = 0;
    /// <summary>
    /// Add an image to a presentation.
    /// </summary>
    /// <remarks>This method converts WMF/EMF metafiles to raster PNG image before inserting to a presentation.</remarks>
    /// <param name="image">Image to add.</param>
    /// <returns>Added image.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<IImage> image) = 0;
    /// <summary>
    /// Adds image from a memory stream.
    /// </summary>
    /// <param name="stream">Memory stream.</param>
    /// <returns>Added image.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<System::IO::MemoryStream> stream) = 0;
    /// <summary>
    /// Add an image to a presentation from stream.
    /// </summary>
    /// <remarks>This method can add WMF/EMF metafiles to a presentation without converting them to raster PNG image.</remarks>
    /// <param name="stream">Stream to add image from.</param>
    /// <returns>Added image.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Creates and adds an image to a presentation from stream.
    /// </summary>
    /// <param name="stream">Stream to add image file from.</param>
    /// <param name="loadingStreamBehavior">The behavior which will be applied to the stream.</param>
    /// <returns>Added <see cref="Aspose::Slides::IPPImage">IPPImage</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<System::IO::Stream> stream, LoadingStreamBehavior loadingStreamBehavior) = 0;
    /// <summary>
    /// Adds an image to a presentation from specified buffer.
    /// </summary>
    /// <param name="buffer">Buffer.</param>
    /// <returns>Added image.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::ArrayPtr<uint8_t> buffer) = 0;
    /// <summary>
    /// Adds a copy of an image from an another presentation.
    /// </summary>
    /// <param name="imageSource">Source image.</param>
    /// <returns>Added image.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<IPPImage> imageSource) = 0;
    /// <summary>
    /// Add an image to a presentation from SVG object. 
    /// </summary>
    /// <param name="svgImage">SVG image object <see cref="Aspose::Slides::ISvgImage">ISvgImage</see></param>
    /// <returns>Added image.</returns>
    /// <exception cref="System::ArgumentNullException">Thrown when svgImage parameter is null.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> AddImage(System::SharedPtr<ISvgImage> svgImage) = 0;
    
};

} // namespace Slides
} // namespace Aspose


