#pragma once

#include <system/shared_ptr.h>

#include "DOM/SlideShowType.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Serialization
{
class PresentationPropertiesPartParser;
} // namespace Serialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Presented by a speaker (full screen)
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<PresentedBySpeaker>());
/// pres->Save(u"pres.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS PresentedBySpeaker : public Aspose::Slides::SlideShowType
{
    typedef PresentedBySpeaker ThisType;
    typedef Aspose::Slides::SlideShowType BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Serialization::PresentationPropertiesPartParser;
    /// @endcond
    
public:

    /// <summary>
    /// Initializes a new instance of the PresentedBySpeaker class.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<PresentedBySpeaker>());
    /// pres->Save(u"pres.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API PresentedBySpeaker();
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentedBySpeaker> Instance;
    /// @endcond
    
};

} // namespace Slides
} // namespace Aspose


