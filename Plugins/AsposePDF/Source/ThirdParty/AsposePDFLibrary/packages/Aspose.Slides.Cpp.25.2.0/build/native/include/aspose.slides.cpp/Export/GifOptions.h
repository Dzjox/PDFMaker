#pragma once

#include <Export/IGifOptions.h>
#include <drawing/size.h>
#include <cstdint>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
namespace FramesStream
{
class PresentationToGifExporter;
} // namespace FramesStream
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents GIF exporting options.
/// </summary>
/// <example>
/// The following example shows how to converting presentations to animated GIF using custom settings.
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
/// auto gifOptions = System::MakeObject<GifOptions>();
/// 
/// gifOptions->set_FrameSize(System::Drawing::Size(960, 720)); // the size of the resulted GIF
/// gifOptions->set_DefaultDelay(2000); // how long each slide will be showed until it will be changed to the next one
/// gifOptions->set_TransitionFps(35); // increase FPS to better transition animation quality
/// 
/// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS GifOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::IGifOptions
{
    typedef GifOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::IGifOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::FramesStream::PresentationToGifExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Gets frame size.
    /// </summary>
    /// <remarks>If the size is empty then the value will be taken from <see cref="IPresentation::get_SlideSize"></see></remarks>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Size get_FrameSize() override;
    /// <summary>
    /// Sets frame size.
    /// </summary>
    /// <remarks>If the size is empty then the value will be taken from <see cref="IPresentation::get_SlideSize"></see></remarks>
    ASPOSE_SLIDES_SHARED_API void set_FrameSize(System::Drawing::Size value) override;
    /// <summary>
    /// Determines whether hidden slides will be exported.
    /// The default value is false. 
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_ExportHiddenSlides(false);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>  
    ASPOSE_SLIDES_SHARED_API bool get_ExportHiddenSlides() override;
    /// <summary>
    /// Determines whether hidden slides will be exported.
    /// The default value is false. 
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_ExportHiddenSlides(false);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>  
    ASPOSE_SLIDES_SHARED_API void set_ExportHiddenSlides(bool value) override;
    /// <summary>
    /// Gets transition FPS [frames/sec]
    /// The default value is 25.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    ///         
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_TransitionFps(60);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t get_TransitionFps() override;
    /// <summary>
    /// Sets transition FPS [frames/sec]
    /// The default value is 25.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    ///         
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_TransitionFps(60);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_TransitionFps(int32_t value) override;
    /// <summary>
    /// Gets default delay time [ms]. This value will be used if the <see cref="ISlideShowTransition::set_AdvanceAfterTime()"></see> method was not called.
    /// The default value is 1000.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_DefaultDelay(2000);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t get_DefaultDelay() override;
    /// <summary>
    /// Sets default delay time [ms]. This value will be used if the <see cref="ISlideShowTransition::set_AdvanceAfterTime()"></see> method was not called.
    /// The default value is 1000.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_DefaultDelay(2000);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_DefaultDelay(int32_t value) override;
    
    /// <summary>
    /// Initializes a new instance of the GifOptions class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API GifOptions();
    
protected:

    /// @cond
    static const ASPOSE_SLIDES_LOCAL_API int32_t DefaultTransitionFps;
    static const ASPOSE_SLIDES_LOCAL_API int32_t DefaultDelayValue;
    /// @endcond
    
private:

    System::Drawing::Size pr_FrameSize;
    bool pr_ExportHiddenSlides;
    int32_t pr_TransitionFps;
    int32_t pr_DefaultDelay;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


