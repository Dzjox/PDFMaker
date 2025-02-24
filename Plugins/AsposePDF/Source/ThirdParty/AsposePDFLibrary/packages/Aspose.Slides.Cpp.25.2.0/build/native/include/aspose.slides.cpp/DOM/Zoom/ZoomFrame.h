#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Zoom/IZoomFrame.h>

#include "DOM/Zoom/ZoomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDOMObject;
class ISlide;
class ShapeCollection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Slide Zoom object in a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ZoomFrame : public Aspose::Slides::ZoomObject, public Aspose::Slides::IZoomFrame
{
    typedef ZoomFrame ThisType;
    typedef Aspose::Slides::ZoomObject BaseType;
    typedef Aspose::Slides::IZoomFrame BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ShapeCollection;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the slide object that the Slide Zoom object links to.
    /// Read <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    /// <example>Next example demonstrates changing target slide and creates new image for the Slide Zoom object:
    /// <code>
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_TargetSlide(pres->get_Slides()->idx_get(2));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> get_TargetSlide() override;
    /// <summary>
    /// Sets the slide object that the Slide Zoom object links to.
    /// Write <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    /// <example>Next example demonstrates changing target slide and creates new image for the Slide Zoom object:
    /// <code>
    /// System::SharedPtr<IZoomFrame> zoomFrame = pres->get_Slides()->idx_get(0)->get_Shapes()->AddZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Slides()->idx_get(1));
    /// zoomFrame->set_TargetSlide(pres->get_Slides()->idx_get(2));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_TargetSlide(System::SharedPtr<ISlide> value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API ZoomFrame(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ZoomFrame, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
};

} // namespace Slides
} // namespace Aspose


