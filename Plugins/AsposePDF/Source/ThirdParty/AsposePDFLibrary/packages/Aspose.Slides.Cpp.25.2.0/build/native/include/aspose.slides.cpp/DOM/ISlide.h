#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "DOM/Theme/IOverrideThemeable.h"
#include "DOM/IBaseSlide.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IRenderingOptions;
class ISVGOptions;
class ITiffOptions;
} // namespace Export
class IComment;
class ICommentAuthor;
class IImage;
class ILayoutSlide;
class INotesSlideManager;
class ISlideHeaderFooterManager;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
class Graphics;
class Size;
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
/// Represents a slide in a presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISlide : public virtual Aspose::Slides::IBaseSlide, public Aspose::Slides::Theme::IOverrideThemeable
{
    typedef ISlide ThisType;
    typedef Aspose::Slides::IBaseSlide BaseType;
    typedef Aspose::Slides::Theme::IOverrideThemeable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the slide.
    /// Read-only <see cref="Aspose::Slides::ISlideHeaderFooterManager">ISlideHeaderFooterManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlideHeaderFooterManager> get_HeaderFooterManager() = 0;
    /// <summary>
    /// Returns a number of slide.
    /// Index of slide in <see cref="Aspose::Slides::IPresentation::get_Slides">IPresentation::get_Slides()</see> collection is always equal to SlideNumber - 1.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_SlideNumber() = 0;
    /// <summary>
    /// Returns a number of slide.
    /// Index of slide in <see cref="Aspose::Slides::IPresentation::get_Slides">IPresentation::get_Slides()</see> collection is always equal to SlideNumber - 1.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SlideNumber(int32_t value) = 0;
    /// <summary>
    /// Determines whether the specified slide is hidden during a slide show.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Hidden() = 0;
    /// <summary>
    /// Determines whether the specified slide is hidden during a slide show.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Hidden(bool value) = 0;
    /// <summary>
    /// Returns the layout slide for the current slide.
    /// Read <see cref="Aspose::Slides::ILayoutSlide">ILayoutSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> get_LayoutSlide() = 0;
    /// <summary>
    /// Sets the layout slide for the current slide.
    /// Write <see cref="Aspose::Slides::ILayoutSlide">ILayoutSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LayoutSlide(System::SharedPtr<ILayoutSlide> value) = 0;
    /// <summary>
    /// Allow to access notes slide, add and remove it.
    /// Read-only <see cref="Aspose::Slides::INotesSlideManager">INotesSlideManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INotesSlideManager> get_NotesSlideManager() = 0;
    
    /// @deprecated Use GetImage(float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object with custom scaling.
    /// </summary>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap object <see cref="System::Drawing::Bitmap"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(float scaleX, float scaleY) = 0;
    /// <summary>
    /// Returns an image object with custom scaling.
    /// </summary>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Image object <see cref="System::Drawing::Bitmap"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage(float scaleX, float scaleY) = 0;
    /// @deprecated Use GetImage method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Image object (20% of real size).
    /// </summary>
    /// <returns>Bitmap object <see cref="System::Drawing::Bitmap"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail() = 0;
    /// <summary>
    /// Returns a Thumbnail Image object (20% of real size).
    /// </summary>
    /// <returns>Image object <see cref="System::Drawing::Bitmap"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage() = 0;
    /// @deprecated Use GetImage(Size imageSize) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object with specified size.
    /// </summary>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap object.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::Drawing::Size imageSize) = 0;
    /// <summary>
    /// Returns an image object with specified size.
    /// </summary>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap object.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage(System::Drawing::Size imageSize) = 0;
    /// @deprecated Use GetImage(ITiffOptions options) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail tiff bitmap object with specified parameters.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <returns>Bitmap object.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::SharedPtr<Export::ITiffOptions> options) = 0;
    /// <summary>
    /// Returns a Thumbnail tiff bitmap object with specified parameters.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <returns>Image object.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage(System::SharedPtr<Export::ITiffOptions> options) = 0;
    /// @deprecated Use GetImage(IRenderingOptions options) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::SharedPtr<Export::IRenderingOptions> options) = 0;
    /// <summary>
    /// Returns a Thumbnail Bitmap object.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage(System::SharedPtr<Export::IRenderingOptions> options) = 0;
    /// @deprecated Use GetImage(IRenderingOptions options, float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::SharedPtr<Export::IRenderingOptions> options, float scaleX, float scaleY) = 0;
    /// <summary>
    /// Returns a Thumbnail Bitmap object with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage(System::SharedPtr<Export::IRenderingOptions> options, float scaleX, float scaleY) = 0;
    /// @deprecated Use GetImage(IRenderingOptions options, Size imageSize) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object with specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::SharedPtr<Export::IRenderingOptions> options, System::Drawing::Size imageSize) = 0;
    /// <summary>
    /// Returns a Thumbnail Bitmap object with specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage(System::SharedPtr<Export::IRenderingOptions> options, System::Drawing::Size imageSize) = 0;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Renders certain slide to a Graphics object.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="graphics">The object where to render to.</param>
    /// <exception cref="System::InvalidOperationException">Thrown when options.SlideLayoutOption is NotesCommentsLayoutingOptions and its property NotesPosition takes the value NotesPositions::BottomFull</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RenderToGraphics(System::SharedPtr<Export::IRenderingOptions> options, System::SharedPtr<System::Drawing::Graphics> graphics) = 0;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Renders certain slide to a Graphics object with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="graphics">The object where to render to.</param>
    /// <param name="scaleX">The scale for rendering the slide (1.0 is 100%) in the x-axis direction.</param>
    /// <param name="scaleY">The scale for rendering the slide (1.0 is 100%) in the y-axis direction.</param>
    /// <exception cref="System::InvalidOperationException">Thrown when options.SlideLayoutOption is NotesCommentsLayoutingOptions and its property NotesPosition takes the value NotesPositions::BottomFull</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RenderToGraphics(System::SharedPtr<Export::IRenderingOptions> options, System::SharedPtr<System::Drawing::Graphics> graphics, float scaleX, float scaleY) = 0;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Renders certain slide to a Graphics object using specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="graphics">The object where to render to.</param>
    /// <param name="renderingSize">The maximum dimensions (in pixels) that can be occupied by the rendered slide.</param>
    /// <exception cref="System::InvalidOperationException">Thrown when options.SlideLayoutOption is NotesCommentsLayoutingOptions and its property NotesPosition takes the value NotesPositions::BottomFull</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RenderToGraphics(System::SharedPtr<Export::IRenderingOptions> options, System::SharedPtr<System::Drawing::Graphics> graphics, System::Drawing::Size renderingSize) = 0;
    /// <summary>
    /// Returns all slide comments added by specific author.
    /// </summary>
    /// <param name="author">Author of comments to find or null to return all comments.</param>
    /// <returns>Array of <see cref="Aspose::Slides::IComment">IComment</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IComment>> GetSlideComments(System::SharedPtr<ICommentAuthor> author) = 0;
    /// <summary>
    /// Saves the slide content as an SVG file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteAsSvg(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Saves the slide content as an SVG file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    /// <param name="svgOptions">SVG generation options</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteAsSvg(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Export::ISVGOptions> svgOptions) = 0;
    /// <summary>
    /// Saves the slide content as an EMF file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteAsEmf(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Removes slide from presentation.
    /// </summary>
    /// <exception cref="Aspose::Slides::PptxEditException">
    /// Thrown if slide is already removed from presentation.
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove() = 0;
    /// <summary>
    /// Resets position, size and formatting of every shape that has a prototype on LayoutSlide.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Reset() = 0;
    
};

} // namespace Slides
} // namespace Aspose


