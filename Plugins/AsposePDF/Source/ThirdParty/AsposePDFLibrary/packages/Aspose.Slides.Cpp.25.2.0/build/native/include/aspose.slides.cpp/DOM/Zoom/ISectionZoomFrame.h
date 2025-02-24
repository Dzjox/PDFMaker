#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Zoom/IZoomObject.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Section Zoom object in a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISectionZoomFrame : public virtual Aspose::Slides::IZoomObject
{
    typedef ISectionZoomFrame ThisType;
    typedef Aspose::Slides::IZoomObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the section object that the Section Zoom object is linked to.
    /// Read <see cref="Aspose::Slides::ISection">ISection</see>.
    /// </summary>
    /// <example>This example demonstrates changing target section and creates a new image for the section zoom object:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto sectionZoomFrame = shapes->AddSectionZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Sections()->idx_get(1));
    /// sectionZoomFrame->set_TargetSection(pres->get_Sections()->idx_get(2));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISection> get_TargetSection() = 0;
    /// <summary>
    /// Sets the section object that the Section Zoom object is linked to.
    /// Write <see cref="Aspose::Slides::ISection">ISection</see>.
    /// </summary>
    /// <example>This example demonstrates changing target section and creates a new image for the section zoom object:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto sectionZoomFrame = shapes->AddSectionZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Sections()->idx_get(1));
    /// sectionZoomFrame->set_TargetSection(pres->get_Sections()->idx_get(2));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TargetSection(System::SharedPtr<ISection> value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


