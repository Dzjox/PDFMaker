#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/guid.h>
#include <DOM/Zoom/ISectionZoomFrame.h>

#include "DOM/Zoom/ZoomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDOMObject;
class ISection;
namespace PptxSerialization
{
namespace PartParser
{
class SectionZoomPPTXSerialization;
class SummaryZoomPPTXSerialization;
} // namespace PartParser
class PptxDeserializator;
} // namespace PptxSerialization
class ShapeCollection;
class SlideCollection;
class SummaryZoomSection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a Section Zoom object in a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SectionZoomFrame : public Aspose::Slides::ZoomObject, public virtual Aspose::Slides::ISectionZoomFrame
{
    typedef SectionZoomFrame ThisType;
    typedef Aspose::Slides::ZoomObject BaseType;
    typedef Aspose::Slides::ISectionZoomFrame BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::SummaryZoomSection;
    friend class Aspose::Slides::PptxSerialization::PartParser::SectionZoomPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SummaryZoomPPTXSerialization;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the section object that the Section Zoom object links to.
    /// Read <see cref="Aspose::Slides::ISection">ISection</see>.
    /// </summary>
    /// <example>Next example demonstrates changing target section and creates new image for the section zoom object:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto sectionZoomFrame = shapes->AddSectionZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Sections()->idx_get(1));
    /// sectionZoomFrame->set_TargetSection(pres->get_Sections()->idx_get(2));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISection> get_TargetSection() override;
    /// <summary>
    /// Sets the section object that the Section Zoom object links to.
    /// Write <see cref="Aspose::Slides::ISection">ISection</see>.
    /// </summary>
    /// <example>Next example demonstrates changing target section and creates new image for the section zoom object:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shapes = pres->get_Slides()->idx_get(0)->get_Shapes();
    /// 
    /// auto sectionZoomFrame = shapes->AddSectionZoomFrame(150.0f, 20.0f, 50.0f, 50.0f, pres->get_Sections()->idx_get(1));
    /// sectionZoomFrame->set_TargetSection(pres->get_Sections()->idx_get(2));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_TargetSection(System::SharedPtr<ISection> value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::Guid get_SectionId() const;
    ASPOSE_SLIDES_LOCAL_API void set_SectionId(System::Guid value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISection> get_TargetSectionInternal();
    ASPOSE_SLIDES_LOCAL_API void set_TargetSectionInternal(System::SharedPtr<ISection> value);
    
    ASPOSE_SLIDES_LOCAL_API SectionZoomFrame(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SectionZoomFrame, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
private:

    System::SharedPtr<ISection> m_targetSection;
    System::Guid pr_SectionId;
    
};

} // namespace Slides
} // namespace Aspose


