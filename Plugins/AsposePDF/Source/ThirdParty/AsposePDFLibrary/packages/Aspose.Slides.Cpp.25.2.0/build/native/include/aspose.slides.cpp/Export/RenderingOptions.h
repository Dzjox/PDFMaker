#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <Export/IRenderingOptions.h>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IInkOptions;
class InkOptions;
class ISlidesLayoutOptions;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation/slide is rendered.
/// </summary>
/// <example>
/// <code>
/// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
/// 
/// System::SharedPtr<IRenderingOptions> renderingOpts = System::MakeObject<RenderingOptions>();
/// System::SharedPtr<NotesCommentsLayoutingOptions> slidesLayoutOptions = System::MakeObject<NotesCommentsLayoutingOptions>();
/// slidesLayoutOptions->set_NotesPosition(NotesPositions::BottomTruncated);
/// renderingOpts->set_SlidesLayoutOptions(slidesLayoutOptions);
/// 
/// System::SharedPtr<ISlide> slide = pres->get_Slide(0);
/// 
/// slide->GetImage(renderingOpts)->Save(u"pres-Original.png", ImageFormat::Png);
/// 
/// renderingOpts->set_DefaultRegularFont(u"Arial Black");
/// slide->GetImage(renderingOpts)->Save(u"pres-ArialBlackDefault.png", ImageFormat::Png);
/// 
/// renderingOpts->set_DefaultRegularFont(u"Arial Narrow");
/// slide->GetImage(renderingOpts)->Save(u"pres-ArialNarrowDefault.png", ImageFormat::Png);
/// </code>
/// </example>       
class ASPOSE_SLIDES_SHARED_CLASS RenderingOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::IRenderingOptions
{
    typedef RenderingOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::IRenderingOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Gets the mode in which slides are placed on the page when exporting a presentation <see cref="Aspose::Slides::Export::ISlidesLayoutOptions">ISlidesLayoutOptions</see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> slidesLayoutOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// slidesLayoutOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// slidesLayoutOptions->set_PrintSlideNumbers(false);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(slidesLayoutOptions);
    /// 
    /// System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> handoutSlides = pres->GetThumbnails(options);
    /// for (int32_t index = 0; index < handoutSlides->get_Length(); index++)
    /// {
    ///     auto handoutSlide = handoutSlides[index];
    ///     handoutSlide->Save(System::String::Format(u"handout-{0}.png", index));
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlidesLayoutOptions> get_SlidesLayoutOptions() override;
    /// <summary>
    /// Sets the mode in which slides are placed on the page when exporting a presentation <see cref="Aspose::Slides::Export::ISlidesLayoutOptions">ISlidesLayoutOptions</see>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<HandoutLayoutingOptions> slidesLayoutOptions = System::MakeObject<HandoutLayoutingOptions>();
    /// slidesLayoutOptions->set_Handout(HandoutType::Handouts4Horizontal);
    /// slidesLayoutOptions->set_PrintSlideNumbers(false);
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_SlidesLayoutOptions(slidesLayoutOptions);
    /// 
    /// System::ArrayPtr<System::SharedPtr<System::Drawing::Bitmap>> handoutSlides = pres->GetThumbnails(options);
    /// for (int32_t index = 0; index < handoutSlides->get_Length(); index++)
    /// {
    ///     auto handoutSlide = handoutSlides[index];
    ///     handoutSlide->Save(System::String::Format(u"handout-{0}.png", index));
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_SlidesLayoutOptions(System::SharedPtr<ISlidesLayoutOptions> value) override;
    /// <summary>
    /// Provides options that control the look of Ink objects in exported document.
    /// Read-only <see cref="Aspose::Slides::Export::IInkOptions">IInkOptions</see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IInkOptions> get_InkOptions() override;
    /// <summary>
    /// Gets a value indicating whether text is rendered without using ligatures.
    /// When set to <c>true</c>, ligatures will be disabled in the rendered output. By default, this property is set to <c>false</c>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_DisableFontLigatures(true); // Disable ligatures in text rendering
    /// 
    /// System::ArrayPtr<System::SharedPtr<IImage>> renderedSlides = pres->GetImages(options);
    /// for (int32_t index = 0; index < renderedSlides->get_Length(); index++)
    /// {
    ///     auto slideImage = renderedSlides[index];
    ///     slideImage->Save(System::String::Format(u"slide-{0}.png", index));
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_DisableFontLigatures() override;
    /// <summary>
    /// Sets a value indicating whether text is rendered without using ligatures.
    /// When set to <c>true</c>, ligatures will be disabled in the rendered output. By default, this property is set to <c>false</c>.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<RenderingOptions> options = System::MakeObject<RenderingOptions>();
    /// options->set_DisableFontLigatures(true); // Disable ligatures in text rendering
    /// 
    /// System::ArrayPtr<System::SharedPtr<IImage>> renderedSlides = pres->GetImages(options);
    /// for (int32_t index = 0; index < renderedSlides->get_Length(); index++)
    /// {
    ///     auto slideImage = renderedSlides[index];
    ///     slideImage->Save(System::String::Format(u"slide-{0}.png", index));
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DisableFontLigatures(bool value) override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API RenderingOptions();
    
private:

    bool pr_DisableFontLigatures;
    System::SharedPtr<ISlidesLayoutOptions> m_slideLayoutOptions;
    System::SharedPtr<Aspose::Slides::Export::InkOptions> m_inkOptions;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


