#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <DOM/ISlide.h>

#include "DOM/BaseSlide.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace ImageCache
{
class ImageCacheInfo;
class ImageCacheKey;
} // namespace ImageCache
namespace Utils
{
template <typename, typename> class Cache;
} // namespace Utils
} // namespace Foundation
namespace Slides
{
class BackgroundEffectiveData;
namespace Charts
{
class Chart;
} // namespace Charts
class Comment;
class CommentCollection;
namespace Drawing
{
class DomInternalRenderingOptions;
class RenderContext;
class SVGCanvas;
} // namespace Drawing
namespace Export
{
class ApsPptxCanvas;
class DrawingProgressNotifier;
class ExportNotesSlides;
class IRenderingOptions;
class ISVGOptions;
class ITiffOptions;
class PptxExporter;
class PresentationAnimationPlayer;
class PrimitiveHtmlFormattingController;
} // namespace Export
class HandoutSlideView;
class HandoutsView;
namespace HtmlIO
{
class HtmlDocumentSlidesVisitor;
} // namespace HtmlIO
class IBaseSlide;
class IComment;
class ICommentAuthor;
class IImage;
class ILayoutSlide;
class IMasterSlide;
class INotesSlideManager;
class InterruptionToken;
class IPlaceholder;
class ISlideHeaderFooterManager;
namespace Layout
{
class TextFrameLayout;
} // namespace Layout
class LayoutSlide;
class MasterSlide;
class NotesSlideManager;
namespace OdpSerialization
{
namespace PartParser
{
class MasterPageOdpSerialization;
class SlideOdpDeserialization;
class SlideOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class PictureFrame;
class Portion;
namespace PptSerialization
{
class BaseSlidePPTSerialization;
class MasterThemePPTSerialization;
class PlaceholderPPTSerialization;
class PptDeserializator;
class PptSlideDeserializationContext;
class PptSlideSerializationContext;
class SlidePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AnimationTimeLinePPTXSerialization;
class AudioFramePPTXSerialization;
class HyperlinkPPTXSerialization;
class PresentationPartParser;
class SectionListPPTXSerialization;
class SectionZoomPPTXSerialization;
class SlidePartParser;
class SummaryZoomPPTXSerialization;
class VideoFramePPTXSerialization;
class ZoomPPTXSerialization;
} // namespace PartParser
class PptxCloner;
class PptxSerializator;
} // namespace PptxSerialization
class Presentation;
class PresentationHeaderFooterManager;
class Shape;
class SlideCollection;
class SlideHeaderFooterManager;
class SlideTemplateCreator;
namespace SmartArt
{
class SmartArt;
} // namespace SmartArt
class Table;
class TextFrame;
namespace Theme
{
class IOverrideThemeManager;
class SlideThemeManager;
class ThemeEffectiveData;
} // namespace Theme
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BaseSlidePPTUnsupportedProps;
class SlideOrLayoutPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BaseSlidePPTXUnsupportedProps;
class SlidePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
class VideoFrame;
namespace View
{
class NotesSlideView;
class SlideView;
} // namespace View
class ZoomObject;
} // namespace Slides
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
class ASPOSE_SLIDES_SHARED_CLASS Slide final : public Aspose::Slides::BaseSlide, public Aspose::Slides::ISlide
{
    typedef Slide ThisType;
    typedef Aspose::Slides::BaseSlide BaseType;
    typedef Aspose::Slides::ISlide BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HandoutSlideView;
    friend class Aspose::Slides::HandoutsView;
    friend class Aspose::Slides::HtmlIO::HtmlDocumentSlidesVisitor;
    friend class Aspose::Slides::ZoomObject;
    friend class Aspose::Slides::Drawing::RenderContext;
    friend class Aspose::Slides::Export::PresentationAnimationPlayer;
    friend class Aspose::Slides::BackgroundEffectiveData;
    friend class Aspose::Slides::Comment;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::View::NotesSlideView;
    friend class Aspose::Slides::View::SlideView;
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::Layout::TextFrameLayout;
    friend class Aspose::Slides::PptxSerialization::PartParser::SectionZoomPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SummaryZoomPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ZoomPPTXSerialization;
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::SlideHeaderFooterManager;
    friend class Aspose::Slides::Theme::ThemeEffectiveData;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::Export::ApsPptxCanvas;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::Export::DrawingProgressNotifier;
    friend class Aspose::Slides::Export::PrimitiveHtmlFormattingController;
    friend class Aspose::Slides::Export::PptxExporter;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::PptSerialization::PptSlideSerializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::SectionListPPTXSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::MasterPageOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpDeserialization;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::CommentCollection;
    friend class Aspose::Slides::LayoutSlide;
    friend class Aspose::Slides::MasterSlide;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::VideoFrame;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::AudioFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::HyperlinkPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::AnimationTimeLinePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::VideoFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PresentationPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlidePartParser;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptxSerialization::PptxSerializator;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::MasterThemePPTSerialization;
    friend class Aspose::Slides::PptSerialization::PlaceholderPPTSerialization;
    friend class Aspose::Slides::PptSerialization::SlidePPTSerialization;
    friend class Aspose::Slides::SlideTemplateCreator;
    /// @endcond
    
protected:

    /// @cond
    using LongDrawingStageFinishedHandler = System::MulticastDelegate<void()>;
    
    /// @endcond
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the slide.
    /// Read-only <see cref="Aspose::Slides::ISlideHeaderFooterManager">ISlideHeaderFooterManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlideHeaderFooterManager> get_HeaderFooterManager() override;
    /// <summary>
    /// Returns the overriding theme manager.
    /// Read-only <see cref="Aspose::Slides::Theme::IOverrideThemeManager">Theme::IOverrideThemeManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Theme::IOverrideThemeManager> get_ThemeManager() override;
    /// <summary>
    /// Returns a number of slide.
    /// Index of slide in <see cref="Aspose::Slides::Presentation::get_Slides">Presentation::get_Slides()</see> collection is always equal to SlideNumber - Presentation::get(set)_FirstSlideNumber.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_SlideNumber() override;
    /// <summary>
    /// Returns a number of slide.
    /// Index of slide in <see cref="Aspose::Slides::Presentation::get_Slides">Presentation::get_Slides()</see> collection is always equal to SlideNumber - Presentation::get(set)_FirstSlideNumber.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SlideNumber(int32_t value) override;
    /// <summary>
    /// Determines whether the specified slide is hidden during a slide show.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Hidden() override;
    /// <summary>
    /// Determines whether the specified slide is hidden during a slide show.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Hidden(bool value) override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMasterShapes() override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowMasterShapes(bool value) override;
    /// <summary>
    /// Returns the layout slide for the current slide.
    /// Read <see cref="Aspose::Slides::ILayoutSlide">ILayoutSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILayoutSlide> get_LayoutSlide() override;
    /// <summary>
    /// Sets the layout slide for the current slide.
    /// Write <see cref="Aspose::Slides::ILayoutSlide">ILayoutSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LayoutSlide(System::SharedPtr<ILayoutSlide> value) override;
    /// <summary>
    /// Allow to access notes slide, add and remove it.
    /// Read-only <see cref="Aspose::Slides::INotesSlideManager">INotesSlideManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INotesSlideManager> get_NotesSlideManager() override;
    
    /// @deprecated Use GetImage(float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object with custom scaling.
    /// </summary>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap object.</returns>
    /// <example>
    /// The following example shows how to generate thumbnails from PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"ThumbnailFromSlide.pptx");
    /// 
    /// // Access the first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Create a full scale image
    /// System::SharedPtr<System::Drawing::Bitmap> bmp = slide->GetThumbnail(1.0f, 1.0f);
    /// // Save the image to disk in JPEG format
    /// bmp->Save(u"Thumbnail_out.jpg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    /// </code>
    /// The following example shows how to converting slides to bitmap and saving the images in PNG.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// // Converts the first slide in the presentation to a Bitmap object
    /// System::SharedPtr<System::Drawing::Bitmap> bmp = pres->get_Slides()->idx_get(0)->GetThumbnail();
    /// 
    /// // Saves the image in the PNG format
    /// bmp->Save(u"Slide_0.png", System::Drawing::Imaging::ImageFormat::get_Png());
    /// </code>
    /// The following example shows how to convert PowerPoint PPT/PPTX to JPG.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"PowerPoint-Presentation.ppt");
    /// 
    /// for (auto&& slide : pres->get_Slides())
    /// {
    ///     // Create a full scale image
    ///     System::SharedPtr<System::Drawing::Bitmap> bmp = slide->GetThumbnail(1.0f, 1.0f);
    ///     // Save the image to disk in JPEG format
    ///     bmp->Save(System::String::Format(u"Slide_{0}.jpg", slide->get_SlideNumber()),
    ///               System::Drawing::Imaging::ImageFormat::get_Jpeg());
    /// }
    /// </code>
    /// The following example shows how to convert PowerPoint PPT/PPTX to JPG with customized dimensions.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"PowerPoint-Presentation.pptx");
    /// 
    /// // Define dimensions
    /// int32_t desiredX = 1200;
    /// int32_t desiredY = 800;
    /// // Get scaled values of X and Y
    /// auto size = pres->get_SlideSize()->get_Size();
    /// float scaleX = (float)(1.0 / size.get_Width()) * desiredX;
    /// float scaleY = (float)(1.0 / size.get_Height()) * desiredY;
    /// for (auto&& slide : System::IterateOver(pres->get_Slides()))
    /// {
    ///     // Create a full scale image
    ///     System::SharedPtr<System::Drawing::Bitmap> bmp = slide->GetThumbnail(scaleX, scaleY);
    ///     // Save the image to disk in JPEG format
    ///     bmp->Save(System::String::Format(u"Slide_{0}.jpg", slide->get_SlideNumber()),
    ///               System::Drawing::Imaging::ImageFormat::get_Jpeg());
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(float scaleX, float scaleY) override;
    /// <summary> 
    /// Returns a Thumbnail Image object with custom scaling. 
    /// </summary> 
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param> 
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param> 
    /// <returns>IImage object.</returns> 
    /// <example>
    /// The following example shows how to generate thumbnails from PowerPoint Presentation:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"ThumbnailFromSlide.pptx");
    /// 
    /// // Access the first slide
    /// System::SharedPtr<ISlide> sld = pres->get_Slide(0);
    /// // Create a full scale image
    /// System::SharedPtr<IImage> bmp = sld->GetImage(1.0f, 1.0f);
    /// // Save the image to disk in JPEG format
    /// bmp->Save(u"Thumbnail_out.jpg", Aspose::Slides::ImageFormat::Jpeg);
    /// </code>
    /// The following example shows how to converting slides to bitmap and saving the images in PNG:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// // Converts the first slide in the presentation to a Bitmap object
    /// System::SharedPtr<IImage> bmp = pres->get_Slide(0)->GetImage();
    /// // Saves the image in the PNG format
    /// bmp->Save(u"Slide_0.png", Aspose::Slides::ImageFormat::Png);
    /// </code>
    /// The following example shows how to convert PowerPoint PPT/PPTX to JPG:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"PowerPoint-Presentation.ppt");
    /// 
    /// for (auto&& sld : pres->get_Slides())
    /// {
    ///     // Create a full scale image
    ///     System::SharedPtr<IImage> bmp = sld->GetImage(1.f, 1.f);
    ///     // Save the image to disk in JPEG format
    ///     bmp->Save(System::String::Format(u"Slide_{0}.jpg", sld->get_SlideNumber()), Aspose::Slides::ImageFormat::Jpeg);
    /// }
    /// </code>
    /// The following example shows how to convert PowerPoint PPT/PPTX to JPG with customized dimensions:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"PowerPoint-Presentation.pptx");
    /// 
    /// // Define dimensions
    /// int32_t desiredX = 1200;
    /// int32_t desiredY = 800;
    /// // Get scaled values of X and Y
    /// float scaleX = (float)(1.0 / pres->get_SlideSize()->get_Size().get_Width()) * desiredX;
    /// float scaleY = (float)(1.0 / pres->get_SlideSize()->get_Size().get_Height()) * desiredY;
    /// 
    /// for (auto&& sld : pres->get_Slides())
    /// {
    ///     // Create a full scale image
    ///     System::SharedPtr<IImage> bmp = sld->GetImage(scaleX, scaleY);
    ///     // Save the image to disk in JPEG format
    ///     bmp->Save(System::String::Format(u"Slide_{0}.jpg", sld->get_SlideNumber()), Aspose::Slides::ImageFormat::Jpeg);
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage(float scaleX, float scaleY) override;
    /// @deprecated Use GetImage method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Image object (20% of real size).
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail() override;
    /// <summary>
    /// Returns a Thumbnail Image object (20% of real size).
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage() override;
    /// @deprecated Use GetImage(IRenderingOptions options) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <returns>Bitmap objects.</returns>
    /// <exception cref="System::InvalidOperationException">Thrown when notesCommentsLayouting.NotesPosition takes the value NotesPositions::BottomFull</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::SharedPtr<Export::IRenderingOptions> options) override;
    /// @deprecated Use GetImage(Size imageSize) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object with specified size.
    /// </summary>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap object.</returns>
    /// <example>
    /// The following example shows how to converting slides to images with custom sizes using C#.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// // Converts the first slide in the presentation to a Bitmap with the specified size
    /// System::Drawing::Size size(1820, 1040)
    /// System::SharedPtr<System::Drawing::Bitmap> bmp = pres->get_Slides()->idx_get(0)->GetThumbnail(size);
    /// 
    /// // Saves the image in the JPEG format
    /// bmp->Save(u"Slide_0.jpg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::Drawing::Size imageSize) override;
    /// <summary>
    /// Returns a Thumbnail Image object with specified size.
    /// </summary>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Image object.</returns>
    /// <example>
    /// The following example shows how to converting slides to images with custom sizes using C#.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// // Converts the first slide in the presentation to a Bitmap with the specified size
    /// System::SharedPtr<IImage> bmp = pres->get_Slide(0)->GetImage(System::Drawing::Size(1820, 1040));
    /// 
    /// // Saves the image in the JPEG format
    /// bmp->Save(u"Slide_0.jpg", Aspose::Slides::ImageFormat::Jpeg);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage(System::Drawing::Size imageSize) override;
    /// @deprecated Use GetImage(ITiffOptions options) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail tiff bitmap object with specified parameters.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <returns>Bitmap object.</returns>
    /// <exception cref="System::InvalidOperationException">Thrown when options.SlideLayoutOption is NotesCommentsLayoutingOptions and its property NotesPosition takes the value NotesPositions::BottomFull.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::SharedPtr<Export::ITiffOptions> options) override;
    /// <summary>
    /// Returns a Thumbnail tiff image object with specified parameters.
    /// </summary>
    /// <param name="options">Tiff options.</param>
    /// <returns>Image object.</returns>
    /// <exception cref="System::InvalidOperationException">Thrown when options.SlideLayoutOption is NotesCommentsLayoutingOptions and its property NotesPosition takes the value NotesPositions::BottomFull.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage(System::SharedPtr<Export::ITiffOptions> options) override;
    /// <summary>
    /// Returns a Thumbnail Image object.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <returns>Image object.</returns>
    /// <exception cref="System::InvalidOperationException">Thrown when notesCommentsLayouting.NotesPosition takes the value NotesPositions::BottomFull</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage(System::SharedPtr<Export::IRenderingOptions> options) override;
    /// @deprecated Use GetImage(IRenderingOptions options, float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    /// <exception cref="System::InvalidOperationException">Thrown when notesCommentsLayouting.NotesPosition takes the value NotesPositions::BottomFull</exception>
    /// <example>
    /// The following example shows how to converting slides With notes and comments to Images using C#.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"PresentationNotesComments.pptx");
    /// 
    /// // Create the rendering options
    /// System::SharedPtr<IRenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// // Create notes and comments layouting options
    /// System::SharedPtr<NotesCommentsLayoutingOptions> notesCommentsLayouting = System::MakeObject<NotesCommentsLayoutingOptions>();
    /// // Sets the position of the notes on the page
    /// notesCommentsLayouting->set_NotesPosition(NotesPositions::BottomTruncated);
    /// // Sets the position of the comments on the page
    /// notesCommentsLayouting->set_CommentsPosition(CommentsPositions::Right);
    /// // Sets the width of the comment output area
    /// notesCommentsLayouting->set_CommentsAreaWidth(500);
    /// // Sets the color for the comments area
    /// notesCommentsLayouting->set_CommentsAreaColor(System::Drawing::Color::get_AntiqueWhite());
    /// // Set layout options for rendering
    /// options->set_SlidesLayoutOptions(notesCommentsLayouting);
    /// // Converts the first slide of the presentation to a Bitmap object
    /// System::SharedPtr<System::Drawing::Bitmap> bmp = pres->get_Slide(0)->GetThumbnail(options, 2.0f, 2.0f);
    /// // Saves the image in the GIF format
    /// bmp->Save(u"Slide_Notes_Comments_0.gif", System::Drawing::Imaging::ImageFormat::get_Gif());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::SharedPtr<Export::IRenderingOptions> options, float scaleX, float scaleY) override;
    /// <summary>
    /// Returns a Thumbnail Image object with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="scaleX">The value by which to scale this Thumbnail in the x-axis direction.</param>
    /// <param name="scaleY">The value by which to scale this Thumbnail in the y-axis direction.</param>
    /// <returns>Bitmap objects.</returns>
    /// <exception cref="System::InvalidOperationException">Thrown when notesCommentsLayouting.NotesPosition takes the value NotesPositions::BottomFull</exception>
    /// <example>
    /// The following example shows how to converting slides With notes and comments to Images using C#.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"PresentationNotesComments.pptx");
    /// 
    /// // Create the rendering options
    /// System::SharedPtr<IRenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// // Create notes and comments layouting options
    /// System::SharedPtr<NotesCommentsLayoutingOptions> notesCommentsLayouting = System::MakeObject<NotesCommentsLayoutingOptions>();
    /// // Sets the position of the notes on the page
    /// notesCommentsLayouting->set_NotesPosition(NotesPositions::BottomTruncated);
    /// // Sets the position of the comments on the page
    /// notesCommentsLayouting->set_CommentsPosition(CommentsPositions::Right);
    /// // Sets the width of the comment output area
    /// notesCommentsLayouting->set_CommentsAreaWidth(500);
    /// // Sets the color for the comments area
    /// notesCommentsLayouting->set_CommentsAreaColor(System::Drawing::Color::get_AntiqueWhite());
    /// // Set layout options for rendering
    /// options->set_SlidesLayoutOptions(notesCommentsLayouting);
    /// // Converts the first slide of the presentation to a IImage object
    /// System::SharedPtr<IImage> image = pres->get_Slide(0)->GetImage(options, 2.0f, 2.0f);
    /// // Saves the image in the GIF format
    /// image->Save(u"Slide_Notes_Comments_0.gif", ImageFormat::Gif);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage(System::SharedPtr<Export::IRenderingOptions> options, float scaleX, float scaleY) override;
    /// @deprecated Use GetImage(IRenderingOptions options, Size imageSize) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns a Thumbnail Bitmap object with specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Bitmap objects.</returns>
    /// <exception cref="System::InvalidOperationException">Thrown when options.SlideLayoutOption is NotesCommentsLayoutingOptions and its property NotesPosition takes the value NotesPositions::BottomFull.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(System::SharedPtr<Export::IRenderingOptions> options, System::Drawing::Size imageSize) override;
    /// <summary>
    /// Returns a Thumbnail Image object with specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="imageSize">Size of the image to create.</param>
    /// <returns>Image object.</returns>
    /// <exception cref="System::InvalidOperationException">Thrown when options.SlideLayoutOption is NotesCommentsLayoutingOptions and its property NotesPosition takes the value NotesPositions::BottomFull.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetImage(System::SharedPtr<Export::IRenderingOptions> options, System::Drawing::Size imageSize) override;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Renders certain slide to a Graphics object.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="graphics">The object where to render to.</param>
    /// <exception cref="System::InvalidOperationException">Thrown when notesCommentsLayouting.NotesPosition takes the value NotesPositions::BottomFull</exception>
    ASPOSE_SLIDES_SHARED_API void RenderToGraphics(System::SharedPtr<Export::IRenderingOptions> options, System::SharedPtr<System::Drawing::Graphics> graphics) override;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Renders certain slide to a Graphics object with custom scaling.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="graphics">The object where to render to.</param>
    /// <param name="scaleX">The scale for rendering the slide (1.0 is 100%) in the x-axis direction.</param>
    /// <param name="scaleY">The scale for rendering the slide (1.0 is 100%) in the y-axis direction.</param>
    /// <exception cref="System::InvalidOperationException">Thrown when notesCommentsLayouting.NotesPosition takes the value NotesPositions::BottomFull</exception>
    ASPOSE_SLIDES_SHARED_API void RenderToGraphics(System::SharedPtr<Export::IRenderingOptions> options, System::SharedPtr<System::Drawing::Graphics> graphics, float scaleX, float scaleY) override;
    /// @deprecated The method will be removed after release of version 24.7.
    /// <summary>
    /// Renders certain slide to a Graphics object using specified size.
    /// </summary>
    /// <param name="options">Rendering options.</param>
    /// <param name="graphics">The object where to render to.</param>
    /// <param name="renderingSize">The maximum dimensions (in pixels) that can be occupied by the rendered slide.</param>
    /// <exception cref="System::InvalidOperationException">Thrown when notesCommentsLayouting.NotesPosition takes the value NotesPositions::BottomFull</exception>
    /// <example>
    /// The following example shows how to convert the first slide to the framed image with the RenderToGraphics method.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// auto slide = pres->get_Slide(0);
    /// 
    /// System::Drawing::Size slideSize(1820, 1040);
    /// // Creates a Bitmap with the specified size (slide size + fields)
    /// auto slideImage = System::MakeObject<System::Drawing::Bitmap>(slideSize.get_Width() + 50, slideSize.get_Height() + 50);
    /// 
    /// System::SharedPtr<System::Drawing::Graphics> graphics = System::Drawing::Graphics::FromImage(slideImage);
    /// 
    /// // Fills and translates Graphics to create a frame around the slide
    /// graphics->Clear(System::Drawing::Color::get_Red());
    /// graphics->TranslateTransform(25.0f, 25.0f);
    /// // Renders the first slide to Graphics
    /// slide->RenderToGraphics(System::MakeObject<RenderingOptions>(), graphics, slideSize);
    /// 
    /// // Saves the image in the JPEG format
    /// slideImage->Save(u"FramedSlide_0.jpg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    /// </code>
    /// The following example shows how to conversion process for a slide with notes using the RenderToGraphics.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"PresentationNotes.pptx");
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// // Gets the presentation notes size
    /// System::Drawing::Size notesSize = pres->get_NotesSize()->get_Size().ToSize();
    /// // Creates the rendering options
    /// System::SharedPtr<IRenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// // Sets the position of the notes
    /// System::SharedPtr<NotesCommentsLayoutingOptions> notesCommentsLayouting = System::MakeObject<NotesCommentsLayoutingOptions>();
    /// notesCommentsLayouting->set_NotesPosition(NotesPositions::BottomTruncated);
    /// options->set_SlidesLayoutOptions(notesCommentsLayouting);
    /// // Creates a Bitmap with the notes' size
    /// System::SharedPtr<System::Drawing::Bitmap> slideImage = System::MakeObject<System::Drawing::Bitmap>(notesSize.get_Width(), notesSize.get_Height());
    /// 
    /// // Renders the first slide to Graphics
    /// System::SharedPtr<System::Drawing::Graphics> graphics = System::Drawing::Graphics::FromImage(slideImage);
    /// 
    /// slide->RenderToGraphics(options, graphics, notesSize);
    /// 
    /// // Saves the image in PNG format
    /// slideImage->Save(u"Slide_Notes_0.png", System::Drawing::Imaging::ImageFormat::get_Png());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void RenderToGraphics(System::SharedPtr<Export::IRenderingOptions> options, System::SharedPtr<System::Drawing::Graphics> graphics, System::Drawing::Size renderingSize) override;
    /// <summary>
    /// Saves the slide content as an SVG file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    /// <example>
    /// The following code example demonstrates how to convert the first slide from a PowerPoint presentation into an SVG file.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<System::IO::Stream> fileStream = System::IO::File::Create(u"slide_1.svg");
    /// 
    /// // Saves the first slide as an SVG file
    /// pres->get_Slide(0)->WriteAsSvg(fileStream);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void WriteAsSvg(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Saves the slide content as an SVG file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    /// <param name="svgOptions">SVG generation options</param>
    /// <example>
    /// The following code example demonstrates how to convert the first slide from a PowerPoint presentation into an SVG file with options.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<System::IO::Stream> fileStream = System::IO::File::Create(u"slide_1.svg");
    /// 
    /// auto options = System::MakeObject<SVGOptions>();
    /// options->set_VectorizeText(true);
    /// 
    /// // Saves the first slide as an SVG file
    /// pres->get_Slide(0)->WriteAsSvg(fileStream, options);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void WriteAsSvg(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Export::ISVGOptions> svgOptions) override;
    /// <summary>
    /// Saves the slide content as an EMF file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    /// <exception cref="System::ArgumentNullException">Target stream is <c>null</c></exception>
    /// <example>
    /// The following code example demonstrates how to convert the first slide from a PowerPoint presentation into a metafile.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<System::IO::Stream> fileStream = System::IO::File::Create(u"slide_1.emf");
    /// 
    /// // Saves the first slide as a metafile
    /// pres->get_Slide(0)->WriteAsEmf(fileStream);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void WriteAsEmf(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Removes slide from presentation.
    /// </summary>
    /// <exception cref="PptxEditException">
    /// Thrown if slide is already removed from presentation.
    /// </exception>
    ASPOSE_SLIDES_SHARED_API void Remove() override;
    /// <summary>
    /// Resets position, size and formatting of every shape that has a prototype on LayoutSlide.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Reset() override;
    /// <summary>
    /// Returns all slide comments added by specific author.
    /// </summary>
    /// <param name="author">Author of comments to find or null to return all comments.</param>
    /// <returns>Array of <see cref="Aspose::Slides::Comment">Comment</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IComment>> GetSlideComments(System::SharedPtr<ICommentAuthor> author) override;
    /// <summary>
    /// Joins runs with same formatting in all paragraphs in all acceptable shapes.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void JoinPortionsWithSameFormatting() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<View::SlideView> get_View();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::BaseSlidePPTXUnsupportedProps> get_BaseSlidePPTXUnsupportedProps() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BaseSlidePPTUnsupportedProps> get_BaseSlidePPTUnsupportedProps() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::SlidePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::SlideOrLayoutPPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SlideHeaderFooterManager> get_HeaderFooterManagerInternal();
    ASPOSE_SLIDES_LOCAL_API bool get_IsLayoutShapesShown();
    ASPOSE_SLIDES_LOCAL_API bool get_IsLayoutMasterShapesShown();
    ASPOSE_SLIDES_LOCAL_API int32_t get_SlideIndex();
    ASPOSE_SLIDES_LOCAL_API int32_t get_SlideNumberInternal();
    ASPOSE_SLIDES_LOCAL_API void set_SlideNumberInternal(int32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::LayoutSlide> get_LayoutSlideInternal();
    ASPOSE_SLIDES_LOCAL_API void set_LayoutSlideInternal(System::SharedPtr<Aspose::Slides::LayoutSlide> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IMasterSlide> get_MasterSlide();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IBaseSlide>> get_BaseSlides() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API int32_t get_LongDrawingStageCount();
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::Slide::LongDrawingStageFinishedHandler get_LongDrawingStageFinished() const;
    ASPOSE_SLIDES_LOCAL_API void set_LongDrawingStageFinished(Aspose::Slides::Slide::LongDrawingStageFinishedHandler value);
    
    ASPOSE_SLIDES_LOCAL_API Slide(System::SharedPtr<SlideCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Slide, CODEPORTING_ARGS(System::SharedPtr<SlideCollection> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Export::ApsPptxCanvas> SaveToAps(bool saveMetafileAsPng, System::SharedPtr<Aspose::Foundation::Utils::Cache<System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey>, System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheInfo>>> imageCache, System::SharedPtr<Drawing::DomInternalRenderingOptions> renderingOptions, System::SharedPtr<InterruptionToken> interruptionToken);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Export::ApsPptxCanvas> SaveToAps(bool saveMetafileAsPng, System::SharedPtr<Aspose::Foundation::Utils::Cache<System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheKey>, System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheInfo>>> imageCache, System::SharedPtr<Drawing::DomInternalRenderingOptions> renderingOptions, System::SharedPtr<System::Collections::Generic::List<int32_t>> slidesExportPositionList, System::SharedPtr<InterruptionToken> interruptionToken);
    ASPOSE_SLIDES_LOCAL_API void SetLayoutSlideInternal(System::SharedPtr<ILayoutSlide> layout);
    ASPOSE_SLIDES_LOCAL_API void SetLayoutSlideInternalRaw(System::SharedPtr<Aspose::Slides::LayoutSlide> layout);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<IComment>> GetClassicComments(System::SharedPtr<ICommentAuthor> author);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<IComment>> GetModernComments(System::SharedPtr<ICommentAuthor> author);
    ASPOSE_SLIDES_LOCAL_API void AddComment(System::SharedPtr<IComment> comment);
    ASPOSE_SLIDES_LOCAL_API void RemoveComment(System::SharedPtr<IComment> comment);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<Shape>> GetPlaceholders(System::SharedPtr<IPlaceholder> placeholder) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~Slide();
    
private:

    Aspose::Slides::Slide::LongDrawingStageFinishedHandler pr_LongDrawingStageFinished;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::SlidePPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::SlideOrLayoutPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<Aspose::Slides::LayoutSlide> m_layout;
    System::SharedPtr<Aspose::Slides::NotesSlideManager> m_notesSlideManager;
    System::SharedPtr<SlideHeaderFooterManager> m_headerFooterManager;
    System::SharedPtr<Theme::SlideThemeManager> m_themeManager;
    bool m_visible;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IComment>>> m_slideComments;
    bool m_showMasterShapes;
    int32_t m_slideNumberInternal;
    
    ASPOSE_SLIDES_LOCAL_API void DetachLayout();
    ASPOSE_SLIDES_LOCAL_API void AttachLayout();
    ASPOSE_SLIDES_LOCAL_API void SubscribeForChangesInPlaceholders();
    ASPOSE_SLIDES_LOCAL_API void UnSubscribeForChangesInPlaceholders();
    ASPOSE_SLIDES_LOCAL_API void CheckIsLayoutCorrect(System::SharedPtr<ILayoutSlide> layout);
    
};

} // namespace Slides
} // namespace Aspose


