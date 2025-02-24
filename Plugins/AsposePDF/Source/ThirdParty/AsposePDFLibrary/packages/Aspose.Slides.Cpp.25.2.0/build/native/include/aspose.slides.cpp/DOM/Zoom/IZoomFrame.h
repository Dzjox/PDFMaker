#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Zoom/IZoomObject.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISlide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Slide Zoom object in a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IZoomFrame : public virtual Aspose::Slides::IZoomObject
{
    typedef IZoomFrame ThisType;
    typedef Aspose::Slides::IZoomObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> get_TargetSlide() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TargetSlide(System::SharedPtr<ISlide> value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


