#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Zoom/ISectionZoomFrame.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Summary Zoom Section object in a Summary Zoom frame.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISummaryZoomSection : public virtual Aspose::Slides::ISectionZoomFrame
{
    typedef ISummaryZoomSection ThisType;
    typedef Aspose::Slides::ISectionZoomFrame BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the text title of the Summary Zoom Section object. 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto zoomSection = zoomFrame->get_SummaryZoomCollection()->idx_get(1);
    /// zoomSection->set_Title(u"Title");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Title() = 0;
    /// <summary>
    /// Returns the text title of the Summary Zoom Section object. 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto zoomSection = zoomFrame->get_SummaryZoomCollection()->idx_get(1);
    /// zoomSection->set_Title(u"Title");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Title(System::String value) = 0;
    /// <summary>
    /// Returns the text description of the Summary Zoom Section object. 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto zoomSection = zoomFrame->get_SummaryZoomCollection()->idx_get(1);
    /// zoomSection->set_Description(u"Description");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Description() = 0;
    /// <summary>
    /// Returns the text description of the Summary Zoom Section object. 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::ExplicitCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto zoomSection = zoomFrame->get_SummaryZoomCollection()->idx_get(1);
    /// zoomSection->set_Description(u"Description");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Description(System::String value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


