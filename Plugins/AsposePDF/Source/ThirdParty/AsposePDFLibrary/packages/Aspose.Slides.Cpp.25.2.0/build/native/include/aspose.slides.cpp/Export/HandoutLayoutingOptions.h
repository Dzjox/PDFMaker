#pragma once

#include <Export/ISlidesLayoutOptions.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class HandoutType;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents the handout presentation layout mode for export.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS HandoutLayoutingOptions : public Aspose::Slides::Export::ISlidesLayoutOptions
{
    typedef HandoutLayoutingOptions ThisType;
    typedef Aspose::Slides::Export::ISlidesLayoutOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Specifies how many slides and in what sequence will be placed on the page <see cref="HandoutType"></see>.
    /// </summary>
    /// <remarks>
    /// Default value is  <b>HandoutType::Handouts6Horizontal</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// System::Drawing::Size size(1920, 1080);
    /// pres->get_Slide(0)->GetThumbnail(options, size)->Save(u"pres-handout.png");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API HandoutType get_Handout() const;
    /// <summary>
    /// Specifies how many slides and in what sequence will be placed on the page <see cref="HandoutType"></see>.
    /// </summary>
    /// <remarks>
    /// Default value is  <b>HandoutType::Handouts6Horizontal</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// System::Drawing::Size size(1920, 1080);
    /// pres->get_Slide(0)->GetThumbnail(options, size)->Save(u"pres-handout.png");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Handout(HandoutType value);
    /// <summary>
    /// Specifies whether or not to print the displayed slide numbers.
    /// </summary>
    /// <remarks>
    /// Default value is  <b>true</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// handoutLayoutingOptions->set_PrintSlideNumbers(false);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// System::Drawing::Size size(1920, 1080);
    /// pres->get_Slide(0)->GetThumbnail(options, size)->Save(u"pres-handout.png");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_PrintSlideNumbers() const;
    /// <summary>
    /// Specifies whether or not to print the displayed slide numbers.
    /// </summary>
    /// <remarks>
    /// Default value is  <b>true</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// handoutLayoutingOptions->set_PrintSlideNumbers(false);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// System::Drawing::Size size(1920, 1080);
    /// pres->get_Slide(0)->GetThumbnail(options, size)->Save(u"pres-handout.png");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_PrintSlideNumbers(bool value);
    /// <summary>
    /// Specifies whether to draw frames around the displayed slides or not.
    /// </summary>
    /// <remarks>
    /// Default value is  <b>true</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// handoutLayoutingOptions->set_PrintFrameSlide(false);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// System::Drawing::Size size(1920, 1080);
    /// pres->get_Slide(0)->GetThumbnail(options, size)->Save(u"pres-handout.png");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_PrintFrameSlide() const;
    /// <summary>
    /// Specifies whether to draw frames around the displayed slides or not.
    /// </summary>
    /// <remarks>
    /// Default value is  <b>true</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// handoutLayoutingOptions->set_PrintFrameSlide(false);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// System::Drawing::Size size(1920, 1080);
    /// pres->get_Slide(0)->GetThumbnail(options, size)->Save(u"pres-handout.png");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_PrintFrameSlide(bool value);
    /// <summary>
    /// Specifies whether or not to display comments on slides
    /// </summary>
    /// <remarks>
    /// Default value is  <b>false</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// handoutLayoutingOptions->set_PrintComments(false);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// System::Drawing::Size size(1920, 1080);
    /// pres->get_Slide(0)->GetThumbnail(options, size)->Save(u"pres-handout.png");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_PrintComments() const;
    /// <summary>
    /// Specifies whether or not to display comments on slides
    /// </summary>
    /// <remarks>
    /// Default value is  <b>false</b>.
    /// </remarks>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> handoutLayoutingOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// handoutLayoutingOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// handoutLayoutingOptions->set_PrintComments(false);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(handoutLayoutingOptions);
    /// 
    /// System::Drawing::Size size(1920, 1080);
    /// pres->get_Slide(0)->GetThumbnail(options, size)->Save(u"pres-handout.png");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_PrintComments(bool value);
    
    /// <summary>
    /// Initializes the default values.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API HandoutLayoutingOptions();
    
private:

    HandoutType pr_Handout;
    bool pr_PrintSlideNumbers;
    bool pr_PrintFrameSlide;
    bool pr_PrintComments;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


