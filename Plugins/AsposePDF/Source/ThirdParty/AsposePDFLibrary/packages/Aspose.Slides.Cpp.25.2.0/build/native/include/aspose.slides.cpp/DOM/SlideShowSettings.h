#pragma once

#include <system/object.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IColorFormat;
namespace PptxSerialization
{
namespace PartParser
{
namespace XmlParser
{
class p_CT_ShowPropertiesElementData;
} // namespace XmlParser
} // namespace PartParser
} // namespace PptxSerialization
class Presentation;
namespace Serialization
{
class PresentationPropertiesPartParser;
} // namespace Serialization
class SlideShowType;
class SlidesRange;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the slide show settings for the presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SlideShowSettings : public System::Object
{
    typedef SlideShowSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::Serialization::PresentationPropertiesPartParser;
    friend class Aspose::Slides::Presentation;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the slide show type. Represented by the following <see cref="SlideShowType"></see> ancestors: <see cref="Aspose::Slides::BrowsedAtKiosk">BrowsedAtKiosk</see>, <see cref="Aspose::Slides::PresentedBySpeaker">PresentedBySpeaker</see> and <see cref="Aspose::Slides::BrowsedByIndividual">BrowsedByIndividual</see> 
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// // to set "Browsed at a kiosk (full screen)" type
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedAtKiosk>());
    /// 
    /// // to set "Browsed by individual (window)" type
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedByIndividual>());
    /// 
    /// // to set "Presented by a speaker (full screen)" type
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<PresentedBySpeaker>());
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::SlideShowType> get_SlideShowType();
    /// <summary>
    /// Sets the slide show type. Represented by the following <see cref="SlideShowType"></see> ancestors: <see cref="Aspose::Slides::BrowsedAtKiosk">BrowsedAtKiosk</see>, <see cref="Aspose::Slides::PresentedBySpeaker">PresentedBySpeaker</see> and <see cref="Aspose::Slides::BrowsedByIndividual">BrowsedByIndividual</see> 
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// // to set "Browsed at a kiosk (full screen)" type
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedAtKiosk>());
    /// 
    /// // to set "Browsed by individual (window)" type
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<BrowsedByIndividual>());
    /// 
    /// // to set "Presented by a speaker (full screen)" type
    /// pres->get_SlideShowSettings()->set_SlideShowType(System::MakeObject<PresentedBySpeaker>());
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_SlideShowType(System::SharedPtr<Aspose::Slides::SlideShowType> value);
    /// <summary>
    /// Loop Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Loop();
    /// <summary>
    /// Loop Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Loop(bool value);
    /// <summary>
    /// Show Narration in Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowNarration();
    /// <summary>
    /// Show Narration in Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowNarration(bool value);
    /// <summary>
    /// Show Animation in Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowAnimation();
    /// <summary>
    /// Show Animation in Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowAnimation(bool value);
    /// <summary>
    /// Pen Color for Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_PenColor();
    /// <summary>
    /// Slides range
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slidesRange = System::MakeObject<SlidesRange>();
    /// slidesRange->set_Start(1);
    /// slidesRange->set_End(3);
    /// 
    /// pres->get_SlideShowSettings()->set_Slides(slidesRange);
    /// </code>
    /// </example>         
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<SlidesRange> get_Slides() const;
    /// <summary>
    /// Slides range
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slidesRange = System::MakeObject<SlidesRange>();
    /// slidesRange->set_Start(1);
    /// slidesRange->set_End(3);
    /// 
    /// pres->get_SlideShowSettings()->set_Slides(slidesRange);
    /// </code>
    /// </example>         
    ASPOSE_SLIDES_SHARED_API void set_Slides(System::SharedPtr<SlidesRange> value);
    /// <summary>
    /// Use Timings in Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_UseTimings();
    /// <summary>
    /// Use Timings in Slide Show
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UseTimings(bool value);
    /// <summary>
    /// Show Media Controls
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// pres->get_SlideShowSettings()->set_ShowMediaControls(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMediaControls() const;
    /// <summary>
    /// Show Media Controls
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// pres->get_SlideShowSettings()->set_ShowMediaControls(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_ShowMediaControls(bool value);
    
protected:

    /// @cond
    System::SharedPtr<PptxSerialization::PartParser::XmlParser::p_CT_ShowPropertiesElementData> Data;
    
    ASPOSE_SLIDES_LOCAL_API SlideShowSettings(System::SharedPtr<Presentation> presentation, System::SharedPtr<PptxSerialization::PartParser::XmlParser::p_CT_ShowPropertiesElementData> data);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SlideShowSettings, CODEPORTING_ARGS(System::SharedPtr<Presentation> presentation, System::SharedPtr<PptxSerialization::PartParser::XmlParser::p_CT_ShowPropertiesElementData> data));
    
private:

    System::SharedPtr<IColorFormat> m_penColor;
    System::SharedPtr<Aspose::Slides::SlideShowType> m_slideShowType;
    System::SharedPtr<SlidesRange> pr_Slides;
    bool pr_ShowMediaControls;
    
};

} // namespace Slides
} // namespace Aspose


