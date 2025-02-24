#pragma once
//Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IEmbeddedEotFontsHtmlController.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class EmbeddedFontsHtmlControllerInternal;
class FontDataProvider;
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
/// The formatting controller class to use for fonts embedding in EOT format
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS EmbeddedEotFontsHtmlController : public Aspose::Slides::Export::IEmbeddedEotFontsHtmlController
{
    typedef EmbeddedEotFontsHtmlController ThisType;
    typedef Aspose::Slides::Export::IEmbeddedEotFontsHtmlController BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates new instance.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API EmbeddedEotFontsHtmlController();
    /// <summary>
    /// Creates new instance.
    /// </summary>
    /// <param name="controller">HTML formatting controller.</param>
    ASPOSE_SLIDES_SHARED_API EmbeddedEotFontsHtmlController(System::SharedPtr<IHtmlFormattingController> controller);
    
private:

    System::SharedPtr<EmbeddedFontsHtmlControllerInternal> m_controllerInternal;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FontDataProvider> m_fontDataProvider;
    
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


