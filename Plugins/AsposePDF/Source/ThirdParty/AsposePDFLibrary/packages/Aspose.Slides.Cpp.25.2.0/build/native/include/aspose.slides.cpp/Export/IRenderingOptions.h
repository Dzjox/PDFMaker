#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IInkOptions;
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
/// using System::Drawing::Imaging::ImageFormat;
/// 
/// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
/// 
/// System::SharedPtr<NotesCommentsLayoutingOptions> notesCommentsLayoutingOptions = System::MakeObject<NotesCommentsLayoutingOptions>();
/// notesCommentsLayoutingOptions->set_NotesPosition(NotesPositions::BottomTruncated);
/// 
/// System::SharedPtr<IRenderingOptions> renderingOpts = System::MakeObject<RenderingOptions>();
/// renderingOpts->set_SlidesLayoutOptions(notesCommentsLayoutingOptions);
/// 
/// System::Shared_Ptr<ISlide> slide = pres->get_Slide(0);
/// 
/// slide->GetThumbnail(renderingOpts)->Save(u"pres-Original.png", ImageFormat::get_Png());
/// 
/// renderingOpts->set_DefaultRegularFont(u"Arial Black");
/// slide->GetThumbnail(renderingOpts)->Save(u"pres-ArialBlackDefault.png", ImageFormat::get_Png());
/// 
/// renderingOpts->set_DefaultRegularFont(u"Arial Narrow");
/// slide->GetThumbnail(renderingOpts)->Save(u"pres-ArialNarrowDefault.png", ImageFormat::get_Png());
/// </code>
/// </example>   
class ASPOSE_SLIDES_API_SHARED_CLASS IRenderingOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IRenderingOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlidesLayoutOptions> get_SlidesLayoutOptions() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SlidesLayoutOptions(System::SharedPtr<ISlidesLayoutOptions> value) = 0;
    /// <summary>
    /// Provides options that control the look of Ink objects in exported document.
    /// Read-only <see cref="Aspose::Slides::Export::IInkOptions">IInkOptions</see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInkOptions> get_InkOptions() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DisableFontLigatures() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DisableFontLigatures(bool value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


