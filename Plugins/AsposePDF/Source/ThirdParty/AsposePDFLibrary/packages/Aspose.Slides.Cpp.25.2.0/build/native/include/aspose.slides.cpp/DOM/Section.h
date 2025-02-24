#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/guid.h>
#include <DOM/ISection.h>

#include "DOM/SectionCollection.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISectionSlideCollection;
class ISlide;
namespace PptxSerialization
{
namespace PartParser
{
class SectionListPPTXSerialization;
} // namespace PartParser
class PptxDeserializator;
} // namespace PptxSerialization
class SlideCollection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents section of slides.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Section : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::SectionCollection>>, public Aspose::Slides::ISection
{
    typedef Section ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::SectionCollection>> BaseType;
    typedef Aspose::Slides::ISection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::SectionCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::SectionListPPTXSerialization;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Name of the section.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Name of the section.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    /// <summary>
    /// Section Id.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Guid get_SectionId() override;
    /// <summary>
    /// Returns first slide of the section.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> get_StartedFromSlide() override;
    
    /// <summary>
    /// Returns list of slides in the section.
    /// </summary>
    /// <returns>List of slides.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISectionSlideCollection> GetSlidesListOfSection() override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    /// <summary>
    /// Section Id.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SectionId(System::Guid value);
    /// <summary>
    /// Returns first slide of the section.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StartedFromSlide(System::SharedPtr<ISlide> value);
    
    ASPOSE_SLIDES_LOCAL_API Section(System::String name, System::SharedPtr<SectionCollection> parentIntermediate, System::SharedPtr<ISlide> startedFromSlide);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Section, CODEPORTING_ARGS(System::String name, System::SharedPtr<SectionCollection> parentIntermediate, System::SharedPtr<ISlide> startedFromSlide));
    
    virtual ASPOSE_SLIDES_SHARED_API ~Section();
    
private:

    System::String m_name;
    System::Guid m_SectionId;
    System::SharedPtr<ISlide> m_startedFromSlide;
    
};

} // namespace Slides
} // namespace Aspose


