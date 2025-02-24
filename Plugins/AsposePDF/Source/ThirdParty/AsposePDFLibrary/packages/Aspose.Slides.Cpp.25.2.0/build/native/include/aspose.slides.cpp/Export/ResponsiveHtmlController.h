#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IResponsiveHtmlController.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IHtmlFormattingController;
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
/// Responsive HTML Controller
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ResponsiveHtmlController : public Aspose::Slides::Export::IResponsiveHtmlController
{
    typedef ResponsiveHtmlController ThisType;
    typedef Aspose::Slides::Export::IResponsiveHtmlController BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates new instance
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ResponsiveHtmlController();
    /// <summary>
    /// Creates new instance
    /// </summary>
    /// <param name="controller">HTML formatting controller</param>
    ASPOSE_SLIDES_SHARED_API ResponsiveHtmlController(System::SharedPtr<IHtmlFormattingController> controller);
    
private:

    static const ASPOSE_SLIDES_LOCAL_API System::String CSS_LANDSCAPE;
    static const ASPOSE_SLIDES_LOCAL_API System::String CSS_PORTRAIT;
    System::SharedPtr<IHtmlFormattingController> m_controller;
    
    ASPOSE_SLIDES_SHARED_API void WriteDocumentStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) override;
    ASPOSE_SLIDES_SHARED_API void WriteDocumentEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IPresentation> presentation) override;
    ASPOSE_SLIDES_SHARED_API void WriteSlideStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide) override;
    ASPOSE_SLIDES_SHARED_API void WriteSlideEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<ISlide> slide) override;
    ASPOSE_SLIDES_SHARED_API void WriteShapeStart(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IShape> shape) override;
    ASPOSE_SLIDES_SHARED_API void WriteShapeEnd(System::SharedPtr<IHtmlGenerator> generator, System::SharedPtr<IShape> shape) override;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


