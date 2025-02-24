#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IHtmlGenerator;
} // namespace Export
class IPresentation;
class IShape;
class ISlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Controls a html file generation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHtmlFormattingController : public virtual System::Object
{
    typedef IHtmlFormattingController ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Called to write html document header. Called once per presentation conversion.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="presentation">Presentation which being currently rendered.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteDocumentStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) = 0;
    /// <summary>
    /// Called to write html document footer. Called once per presentation conversion.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="presentation">Presentation which being currently rendered.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteDocumentEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) = 0;
    /// <summary>
    /// Called to write html slide header. Called once per each of slides.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="slide">Slide which being currently rendered.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteSlideStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide) = 0;
    /// <summary>
    /// Called to write html slide footer. Called once per each of slides.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="slide">Slide which being currently rendered.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteSlideEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide) = 0;
    /// <summary>
    /// Called before shape's rendering. Called once per each of shape. If this function writes anything to generator, current slide image generation will be finished, added html fragment inserted and new image will be started atop of the previous.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="shape">Shape which is about to render.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteShapeStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IShape> shape) = 0;
    /// <summary>
    /// Called before shape's rendering. Called once per each of shape. If this function writes anything to generator, current slide image generation will be finished, added html fragment inserted and new image will be started atop of the previous.
    /// </summary>
    /// <param name="generator">Output object.</param>
    /// <param name="shape">Shape which is rendered last.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteShapeEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IShape> shape) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


