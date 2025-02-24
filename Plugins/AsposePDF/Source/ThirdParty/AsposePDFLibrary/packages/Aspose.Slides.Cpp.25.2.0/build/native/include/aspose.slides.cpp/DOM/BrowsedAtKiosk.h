#pragma once

#include <system/shared_ptr.h>

#include "DOM/SlideShowType.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace PptxSerialization
{
namespace PartParser
{
namespace XmlParser
{
class p_CT_ShowInfoKioskElementData;
} // namespace XmlParser
} // namespace PartParser
} // namespace PptxSerialization
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
/// Browsed at a kiosk (full screen)
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedAtKiosk>());
/// pres->Save(u"pres.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS BrowsedAtKiosk : public Aspose::Slides::SlideShowType
{
    typedef BrowsedAtKiosk ThisType;
    typedef Aspose::Slides::SlideShowType BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Serialization::PresentationPropertiesPartParser;
    /// @endcond
    
public:

    /// <summary>
    /// Initializes a new instance of the BrowsedAtKiosk class.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedAtKiosk>());
    /// pres->Save(u"pres.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API BrowsedAtKiosk();
    
protected:

    /// @cond
    System::SharedPtr<PptxSerialization::PartParser::XmlParser::p_CT_ShowInfoKioskElementData> Data;
    
    ASPOSE_SLIDES_LOCAL_API BrowsedAtKiosk(System::SharedPtr<PptxSerialization::PartParser::XmlParser::p_CT_ShowInfoKioskElementData> data);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BrowsedAtKiosk, CODEPORTING_ARGS(System::SharedPtr<PptxSerialization::PartParser::XmlParser::p_CT_ShowInfoKioskElementData> data));
    
};

} // namespace Slides
} // namespace Aspose


