#pragma once

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
class p_CT_ShowInfoBrowseElementData;
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
/// Browsed by individual (window)
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedByIndividual>());
/// pres->Save(u"pres.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
/// </code>
/// </example>    
class ASPOSE_SLIDES_SHARED_CLASS BrowsedByIndividual : public Aspose::Slides::SlideShowType
{
    typedef BrowsedByIndividual ThisType;
    typedef Aspose::Slides::SlideShowType BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Serialization::PresentationPropertiesPartParser;
    /// @endcond
    
public:

    /// <summary>
    /// Show Scroll Bar in Window
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowScrollbar() const;
    /// <summary>
    /// Show Scroll Bar in Window
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowScrollbar(bool value);
    
    /// <summary>
    /// Initializes a new instance of the BrowsedByIndividual class.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedByIndividual>());
    /// pres->Save(u"pres.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API BrowsedByIndividual();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API BrowsedByIndividual(System::SharedPtr<PptxSerialization::PartParser::XmlParser::p_CT_ShowInfoBrowseElementData> data);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BrowsedByIndividual, CODEPORTING_ARGS(System::SharedPtr<PptxSerialization::PartParser::XmlParser::p_CT_ShowInfoBrowseElementData> data));
    
private:

    bool pr_ShowScrollbar;
    
};

} // namespace Slides
} // namespace Aspose


