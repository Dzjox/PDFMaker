#pragma once

#include <system/object.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Base slide show settings. Ancestors represent types of the slide show:
/// <see cref="Aspose::Slides::PresentedBySpeaker">PresentedBySpeaker</see> Presented by a speaker (full screen)
/// <see cref="Aspose::Slides::BrowsedByIndividual">BrowsedByIndividual</see> Browsed by individual (window)
/// <see cref="Aspose::Slides::BrowsedAtKiosk">BrowsedAtKiosk</see> Browsed at a kiosk (full screen)
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// 
/// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<PresentedBySpeaker>());
/// pres->Save(u"PresentedBySpeaker.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
/// 
/// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedByIndividual>());
/// pres->Save(u"BrowsedByIndividual.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
/// 
/// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedAtKiosk>());
/// pres->Save(u"BrowsedAtKiosk.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS SlideShowType : public System::Object
{
    typedef SlideShowType ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API SlideShowType();
    /// @endcond
    
};

} // namespace Slides
} // namespace Aspose


