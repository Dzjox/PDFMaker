#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGraphicalObject.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISummaryZoomSection;
class ISummaryZoomSectionCollection;
enum class ZoomLayout;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Summary Zoom frame in a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISummaryZoomFrame : public virtual Aspose::Slides::IGraphicalObject
{
    typedef ISummaryZoomFrame ThisType;
    typedef Aspose::Slides::IGraphicalObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets layout of Summary Zoom Sections in the frame.
    /// Default value is GridLayout.
    /// </summary>
    /// <example>The example demonstrates getting Summary Zoom Section element by index:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::AsCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// ZoomLayout layout = zoomFrame->get_Layout();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API ZoomLayout get_Layout() = 0;
    /// <summary>
    /// Gets <see cref="Aspose::Slides::ISummaryZoomSectionCollection">ISummaryZoomSectionCollection</see> for the Summary Zoom Frame object.
    /// </summary>
    /// <example>The example demonstrates getting Summary Zoom Section element by index:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto shapes = pres->get_Slides()->idx_get(1)->get_Shapes();
    /// 
    /// auto zoomFrame = System::AsCast<ISummaryZoomFrame>(shapes->idx_get(0));
    /// auto collection = zoomFrame->get_SummaryZoomCollection();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISummaryZoomSectionCollection> get_SummaryZoomCollection() = 0;
    
    /// <summary>
    /// Returns the Summary Zoom Section object in the slide at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISummaryZoomSection"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISummaryZoomSection> get_SummaryZoomSection(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


