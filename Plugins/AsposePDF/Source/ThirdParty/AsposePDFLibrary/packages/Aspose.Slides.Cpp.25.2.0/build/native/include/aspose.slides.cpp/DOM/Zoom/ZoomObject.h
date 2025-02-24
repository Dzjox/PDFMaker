#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/guid.h>
#include <DOM/Zoom/IZoomObject.h>
#include <cstdint>

#include "DOM/GraphicalObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDOMObject;
class IPPImage;
class ISlide;
class PictureFillFormat;
namespace PptxSerialization
{
namespace PartParser
{
class SectionZoomPPTXSerialization;
class SummaryZoomPPTXSerialization;
class ZoomPPTXSerialization;
} // namespace PartParser
class PptxDeserializator;
} // namespace PptxSerialization
class SectionZoomFrame;
class ShapeCollection;
class SlideCollection;
class ZoomFrame;
enum class ZoomImageType;
class ZoomObjectLayout;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an Zoom object in a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ZoomObject : public Aspose::Slides::GraphicalObject, public virtual Aspose::Slides::IZoomObject
{
    typedef ZoomObject ThisType;
    typedef Aspose::Slides::GraphicalObject BaseType;
    typedef Aspose::Slides::IZoomObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::SectionZoomFrame;
    friend class Aspose::Slides::ZoomFrame;
    friend class Aspose::Slides::ZoomObjectLayout;
    friend class Aspose::Slides::PptxSerialization::PartParser::SectionZoomPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SummaryZoomPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ZoomPPTXSerialization;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the image type of a zoom object.
    /// Read <see cref="ZoomImageType"></see>.
    /// Default value: Preview
    /// </summary>
    /// <remarks>
    /// Specifies whether the Zoom object is using the slide preview or a cover image.
    /// </remarks>
    /// <example>Next example demonstrates changing Image Type to Preview value. 
    /// In this case current image of a Zoom object changes to slide image:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto image = pres->get_Images()->AddImage(Image::FromFile(u"image.png"));
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1), image);
    /// zoomFrame->set_ImageType(ZoomImageType::Preview);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API ZoomImageType get_ImageType() override;
    /// <summary>
    /// Sets the image type of a zoom object.
    /// Write <see cref="ZoomImageType"></see>.
    /// Default value: Preview
    /// </summary>
    /// <remarks>
    /// Specifies whether the Zoom object is using the slide preview or a cover image.
    /// </remarks>
    /// <example>Next example demonstrates changing Image Type to Preview value. 
    /// In this case current image of a Zoom object changes to slide image:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto image = pres->get_Images()->AddImage(Image::FromFile(u"image.png"));
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1), image);
    /// zoomFrame->set_ImageType(ZoomImageType::Preview);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_ImageType(ZoomImageType value) override;
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
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_ReturnToParent(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_ReturnToParent() override;
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
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_ReturnToParent(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_ReturnToParent(bool value) override;
    /// <summary>
    /// Gets value that specifies whether the Zoom will use the background of the destination slide.
    /// Read <see cref="bool"></see>.
    /// Default value: true
    /// </summary>
    /// <example>the example demonstrates removing the background of an image of a Zoom object:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_ShowBackground(false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_ShowBackground() override;
    /// <summary>
    /// Sets value that specifies whether the Zoom will use the background of the destination slide.
    /// Write <see cref="bool"></see>.
    /// Default value: true
    /// </summary>
    /// <example>the example demonstrates removing the background of an image of a Zoom object:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto zoomFrame = shapes->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_ShowBackground(false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_ShowBackground(bool value) override;
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> get_ZoomImage() override;
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
    ASPOSE_SLIDES_SHARED_API void set_ZoomImage(System::SharedPtr<IPPImage> value) override;
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
    ASPOSE_SLIDES_SHARED_API float get_TransitionDuration() override;
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
    ASPOSE_SLIDES_SHARED_API void set_TransitionDuration(float value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::Guid get_ZoomId() const;
    ASPOSE_SLIDES_LOCAL_API void set_ZoomId(System::Guid value);
    ASPOSE_SLIDES_LOCAL_API uint32_t get_CId() const;
    ASPOSE_SLIDES_LOCAL_API void set_CId(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API uint32_t get_SldId() const;
    ASPOSE_SLIDES_LOCAL_API void set_SldId(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlide> get_TargetSlide();
    ASPOSE_SLIDES_LOCAL_API void set_TargetSlide(System::SharedPtr<ISlide> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PictureFillFormat> get_PictureFormat() const;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlide> get_TargetSlideInternal();
    ASPOSE_SLIDES_LOCAL_API void set_TargetSlideInternal(System::SharedPtr<ISlide> value);
    ASPOSE_SLIDES_LOCAL_API bool get_ShowBackgroundInternal();
    ASPOSE_SLIDES_LOCAL_API void set_ShowBackgroundInternal(bool value);
    ASPOSE_SLIDES_LOCAL_API ZoomImageType get_ImageTypeInternal();
    ASPOSE_SLIDES_LOCAL_API void set_ImageTypeInternal(ZoomImageType value);
    
    ASPOSE_SLIDES_LOCAL_API ZoomObject(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ZoomObject, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void ChangeZoomImage(System::SharedPtr<ISlide> slide);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ZoomObject();
    
private:

    System::WeakPtr<ISlide> m_targetSlide;
    bool m_showBg;
    ZoomImageType m_imageType;
    System::Guid pr_ZoomId;
    uint32_t pr_CId;
    uint32_t pr_SldId;
    bool pr_ReturnToParent;
    float pr_TransitionDuration;
    System::SharedPtr<PictureFillFormat> pr_PictureFormat;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void set_PictureFormat(System::SharedPtr<PictureFillFormat> value);
    /// @endcond
    
};

} // namespace Slides
} // namespace Aspose


