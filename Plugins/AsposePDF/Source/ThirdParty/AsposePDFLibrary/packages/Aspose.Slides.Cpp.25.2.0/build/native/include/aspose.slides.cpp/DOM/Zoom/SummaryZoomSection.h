#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Zoom/ISummaryZoomSection.h>

#include "DOM/Zoom/SectionZoomFrame.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDOMObject;
namespace PptxSerialization
{
namespace PartParser
{
class SummaryZoomPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class SummaryZoomSectionCollection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Summary Zoom Section object in a Summary Zoom frame.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SummaryZoomSection : public Aspose::Slides::SectionZoomFrame, public Aspose::Slides::ISummaryZoomSection
{
    typedef SummaryZoomSection ThisType;
    typedef Aspose::Slides::SectionZoomFrame BaseType;
    typedef Aspose::Slides::ISummaryZoomSection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::SummaryZoomSectionCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::SummaryZoomPPTXSerialization;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API System::String get_Title() override;
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
    ASPOSE_SLIDES_SHARED_API void set_Title(System::String value) override;
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
    ASPOSE_SLIDES_SHARED_API System::String get_Description() override;
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
    ASPOSE_SLIDES_SHARED_API void set_Description(System::String value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API float get_OffsetFactorX() const;
    ASPOSE_SLIDES_LOCAL_API void set_OffsetFactorX(float value);
    ASPOSE_SLIDES_LOCAL_API float get_OffsetFactorY() const;
    ASPOSE_SLIDES_LOCAL_API void set_OffsetFactorY(float value);
    ASPOSE_SLIDES_LOCAL_API float get_ScaleFactorX() const;
    ASPOSE_SLIDES_LOCAL_API void set_ScaleFactorX(float value);
    ASPOSE_SLIDES_LOCAL_API float get_ScaleFactorY() const;
    ASPOSE_SLIDES_LOCAL_API void set_ScaleFactorY(float value);
    
    ASPOSE_SLIDES_LOCAL_API SummaryZoomSection(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SummaryZoomSection, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
private:

    System::String pr_Title;
    System::String pr_Description;
    float pr_OffsetFactorX;
    float pr_OffsetFactorY;
    float pr_ScaleFactorX;
    float pr_ScaleFactorY;
    
};

} // namespace Slides
} // namespace Aspose


