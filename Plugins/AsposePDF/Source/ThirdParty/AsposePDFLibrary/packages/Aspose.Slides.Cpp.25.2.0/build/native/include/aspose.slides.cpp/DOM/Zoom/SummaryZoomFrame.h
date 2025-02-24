#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Zoom/ISummaryZoomFrame.h>
#include <cstdint>

#include "DOM/GraphicalObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISummaryZoomSection;
class ISummaryZoomSectionCollection;
class PictureFillFormat;
namespace PptxSerialization
{
namespace PartParser
{
class SummaryZoomPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class ShapeCollection;
enum class ZoomLayout;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Summary Zoom object in a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SummaryZoomFrame : public Aspose::Slides::GraphicalObject, public Aspose::Slides::ISummaryZoomFrame
{
    typedef SummaryZoomFrame ThisType;
    typedef Aspose::Slides::GraphicalObject BaseType;
    typedef Aspose::Slides::ISummaryZoomFrame BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::SummaryZoomPPTXSerialization;
    friend class Aspose::Slides::ShapeCollection;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API ZoomLayout get_Layout() override;
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISummaryZoomSectionCollection> get_SummaryZoomCollection() override;
    
    /// <summary>
    /// Returns the Summary Zoom Section object in the slide at the specified index.
    /// Read-only <see cref="Aspose::Slides::ISummaryZoomSection"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISummaryZoomSection> get_SummaryZoomSection(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PictureFillFormat> get_PictureFormat() const;
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
    ASPOSE_SLIDES_SHARED_API void set_Layout(ZoomLayout value);
    
    ASPOSE_SLIDES_LOCAL_API SummaryZoomFrame(System::SharedPtr<ShapeCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SummaryZoomFrame, CODEPORTING_ARGS(System::SharedPtr<ShapeCollection> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~SummaryZoomFrame();
    
private:

    ZoomLayout m_layout;
    System::SharedPtr<ISummaryZoomSectionCollection> m_summaryZoomObjects;
    System::SharedPtr<PictureFillFormat> pr_PictureFormat;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void set_PictureFormat(System::SharedPtr<PictureFillFormat> value);
    /// @endcond
    
};

} // namespace Slides
} // namespace Aspose


