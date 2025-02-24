#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGraphicalObject.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPPImage;
enum class ZoomImageType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Zoom object in a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IZoomObject : public virtual Aspose::Slides::IGraphicalObject
{
    typedef IZoomObject ThisType;
    typedef Aspose::Slides::IGraphicalObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the image type of a zoom object.
    /// Read <see cref="ZoomImageType"></see>.
    /// Default value: Preview
    /// </summary>
    /// <remarks>
    /// Specifies whether the Zoom object is using the slide preview or a cover image.
    /// </remarks>
    /// <example>This example demonstrates changing Image Type to Preview value. 
    /// In this case the current image of a Zoom object changes to slide image:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto image = pres->get_Images()->AddImage(Image::FromFile(u"image.png"));
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1), image);
    /// zoomFrame->set_ImageType(ZoomImageType::Preview);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API ZoomImageType get_ImageType() = 0;
    /// <summary>
    /// Sets the image type of a zoom object.
    /// Write <see cref="ZoomImageType"></see>.
    /// Default value: Preview
    /// </summary>
    /// <remarks>
    /// Specifies whether the Zoom object is using the slide preview or a cover image.
    /// </remarks>
    /// <example>This example demonstrates changing Image Type to Preview value. 
    /// In this case the current image of a Zoom object changes to slide image:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto image = pres->get_Images()->AddImage(Image::FromFile(u"image.png"));
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1), image);
    /// zoomFrame->set_ImageType(ZoomImageType::Preview);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ImageType(ZoomImageType value) = 0;
    /// <summary>
    /// Gets the navigation behavior in slideshow.
    /// Read <see cref="bool"></see>.
    /// Default value: false
    /// </summary>
    /// <remarks>
    /// True value of the property specifies return to parent navigation behavior in slideshow.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_ReturnToParent(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ReturnToParent() = 0;
    /// <summary>
    /// Sets the navigation behavior in slideshow.
    /// Write <see cref="bool"></see>.
    /// Default value: false
    /// </summary>
    /// <remarks>
    /// True value of the property specifies return to parent navigation behavior in slideshow.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_ReturnToParent(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ReturnToParent(bool value) = 0;
    /// <summary>
    /// Gets value that specifies whether the Zoom will use the background of the destination slide.
    /// Read <see cref="bool"></see>.
    /// Default value: true
    /// </summary>
    /// <example>The example demonstrates removing the background of an image of a Zoom object:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_ShowBackground(false);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowBackground() = 0;
    /// <summary>
    /// Sets value that specifies whether the Zoom will use the background of the destination slide.
    /// Write <see cref="bool"></see>.
    /// Default value: true
    /// </summary>
    /// <example>The example demonstrates removing the background of an image of a Zoom object:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_ShowBackground(false);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowBackground(bool value) = 0;
    /// <summary>
    /// Gets image for zoom object.
    /// Read <see cref="Aspose::Slides::IPPImage">IPPImage</see>.
    /// </summary>
    /// <example>
    /// The example demonstrates changing an image of a Zoom object:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slide(0)->get_Shapes()->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slide(1));
    /// System::SharedPtr<IPPImage> image = pres->get_Images()->AddImage(System::Drawing::Image::FromFile(u"image.png"));
    /// zoomFrame->set_ZoomImage(image);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPPImage> get_ZoomImage() = 0;
    /// <summary>
    /// Sets image for zoom object.
    /// Write <see cref="Aspose::Slides::IPPImage">IPPImage</see>.
    /// </summary>
    /// <example>
    /// The example demonstrates changing an image of a Zoom object:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slide(0)->get_Shapes()->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slide(1));
    /// System::SharedPtr<IPPImage> image = pres->get_Images()->AddImage(System::Drawing::Image::FromFile(u"image.png"));
    /// zoomFrame->set_ZoomImage(image);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ZoomImage(System::SharedPtr<IPPImage> value) = 0;
    /// <summary>
    /// Gets the duration of the transition between Zoom and slide.
    /// Read <see cref="float"></see>.
    /// Default value: 1.0f
    /// </summary>
    /// <remarks>
    /// If not specified (TransitionDur = 0), it will use the destination slide transition and the timings associated with that transition.
    /// </remarks>
    /// <example>the example demonstrates changing the duration of the transition between Zoom and slide:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_TransitionDuration(2.5f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TransitionDuration() = 0;
    /// <summary>
    /// Sets the duration of the transition between Zoom and slide.
    /// Write <see cref="float"></see>.
    /// Default value: 1.0f
    /// </summary>
    /// <remarks>
    /// If not specified (TransitionDur = 0), it will use the destination slide transition and the timings associated with that transition.
    /// </remarks>
    /// <example>the example demonstrates changing the duration of the transition between Zoom and slide:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_TransitionDuration(2.5f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TransitionDuration(float value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


