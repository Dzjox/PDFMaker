#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/idisposable.h>
#include <system/event.h>
#include <drawing/size.h>
#include <cstdint>

#include "Export/FramesStream/PresentationPlayer.h"
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
namespace AnimationPlaying
{
class AnimationRenderContext;
} // namespace AnimationPlaying
class ITimeDrawed;
class PresentationToGifExporter;
} // namespace FramesStream
class IPresentationAnimationPlayer;
} // namespace Export
enum class GradientStyle;
class ISlide;
class Presentation;
namespace SlideShow
{
class SlideShowTransition;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Bitmap;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents a generator of the animations in the <see cref="Presentation"></see>.
/// </summary>
/// <example>
/// <code>
/// void OnFrameTick(System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args)
/// {
///     args->GetFrame()->Save(System::String::Format(u"frame_{0}.png", sender->get_FrameIndex()), System::Drawing::Imaging::ImageFormat::get_Png());
/// }
/// 
/// void SaveFrames()
/// {
///     const int32_t FPS = 30;
/// 
///     auto presentation = System::MakeObject<Presentation>(u"animated.pptx");
///     auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(presentation);
/// 
///     auto player = System::MakeObject<PresentationPlayer>(animationsGenerator, FPS);
///     player->FrameTick += OnFrameTick;
/// 
///     animationsGenerator->Run(presentation->get_Slides());
/// }
/// </code>
/// </example>    
class ASPOSE_SLIDES_SHARED_CLASS PresentationAnimationsGenerator : public System::IDisposable
{
    typedef PresentationAnimationsGenerator ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::FramesStream::PresentationToGifExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the frame size.
    /// </summary>
    System::Drawing::Size FrameSize;
    
    /// <summary>
    /// Gets default delay time [ms].
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"animated.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(presentation->get_SlideSize()->get_Size().ToSize());
    /// 
    /// animationsGenerator->set_DefaultDelay(1000); // 1s
    /// // ...
    /// animationsGenerator->Run(presentation->get_Slides());
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API int32_t get_DefaultDelay() const;
    /// <summary>
    /// Sets default delay time [ms].
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"animated.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(presentation->get_SlideSize()->get_Size().ToSize());
    /// 
    /// animationsGenerator->set_DefaultDelay(1000); // 1s
    /// // ...
    /// animationsGenerator->Run(presentation->get_Slides());
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API void set_DefaultDelay(int32_t value);
    /// <summary>
    /// Get or sets if hidden slides should be included.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"animated.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(presentation->get_SlideSize()->get_Size().ToSize());
    /// 
    /// animationsGenerator->set_IncludeHiddenSlides(false);
    /// // ...
    /// animationsGenerator->Run(presentation->get_Slides());
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API bool get_IncludeHiddenSlides() const;
    /// <summary>
    /// Get or sets if hidden slides should be included.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"animated.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(presentation->get_SlideSize()->get_Size().ToSize());
    /// 
    /// animationsGenerator->set_IncludeHiddenSlides(false);
    /// // ...
    /// animationsGenerator->Run(presentation->get_Slides());
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API void set_IncludeHiddenSlides(bool value);
    /// <summary>
    /// Get the number of the exported slides count.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_ExportedSlides() const;
    
    /// <summary>
    /// Creates a new instance of the <see cref="Aspose::Slides::Export::PresentationAnimationsGenerator">PresentationAnimationsGenerator</see>.
    /// </summary>
    /// <param name="presentation">The frame size will be set with accordance to the <see cref="Presentation::get_SlideSize"></see></param>
    ASPOSE_SLIDES_SHARED_API PresentationAnimationsGenerator(System::SharedPtr<Presentation> presentation);
    /// <summary>
    /// Creates a new instance of the <see cref="Aspose::Slides::Export::PresentationAnimationsGenerator">PresentationAnimationsGenerator</see>.
    /// </summary>
    /// <param name="frameSize">The frame size.</param>
    ASPOSE_SLIDES_SHARED_API PresentationAnimationsGenerator(System::Drawing::Size frameSize);
    
    /// <summary>
    /// Disposes the instance of the <see cref="Aspose::Slides::Export::PresentationAnimationsGenerator">PresentationAnimationsGenerator</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Dispose() override;
    
    /// <summary>
    /// An event represents that a new animation was generated.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SimpleAnimations.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(presentation->get_SlideSize()->get_Size().ToSize());
    /// 
    /// animationsGenerator->NewAnimation.connect(static_cast<std::function<void(System::SharedPtr<IPresentationAnimationPlayer>)>>(
    ///     [](System::SharedPtr<IPresentationAnimationPlayer> animationPlayer) -> void
    /// {
    ///     System::Console::WriteLine(u"Animation total duration: {0}", animationPlayer->get_Duration());
    /// }));
    /// 
    /// animationsGenerator->Run(presentation->get_Slides());
    /// </code>
    /// </example>        
    System::Event<void(System::SharedPtr<IPresentationAnimationPlayer>)> NewAnimation;
    
    /// <summary>
    /// Run the animation events generation for each slide.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"animated.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(presentation->get_SlideSize()->get_Size().ToSize());
    /// auto player = System::MakeObject<PresentationPlayer>(animationsGenerator, 33);
    /// 
    /// animationsGenerator->NewAnimation.connect(static_cast<std::function<void(System::SharedPtr<IPresentationAnimationPlayer>)>>(
    ///     [](System::SharedPtr<IPresentationAnimationPlayer> animationPlayer) -> void
    /// {
    ///     // handle new animation
    /// }));
    /// 
    /// player->FrameTick.connect(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
    ///     [](System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args) -> void
    /// {
    ///     // handle frame tick within the new animation
    /// }));
    /// 
    /// animationsGenerator->Run(presentation->get_Slides());
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API void Run(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<ISlide>>> slides);
    /// <summary>
    /// Run the animation events generation for each slide.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"animated.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(presentation->get_SlideSize()->get_Size().ToSize());
    /// 
    /// animationsGenerator->Run(presentation->get_Slides(), 33, static_cast<PresentationPlayer::FrameTickHandler>(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
    ///     [](System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args) -> void
    /// {
    ///     sender->FrameTick.connect(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
    ///         [](System::SharedPtr<PresentationPlayer> sender2, System::SharedPtr<FrameTickEventArgs> args2) -> void
    ///     {
    ///         args2->GetFrame()->Save(System::String::Format(u"frame_{0}.png", sender2->get_FrameIndex()));
    ///     }));
    /// })));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Run(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<ISlide>>> slides, int32_t fps, PresentationPlayer::FrameTickHandler onFrame);
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::GradientStyle get_GradientStyle();
    ASPOSE_SLIDES_LOCAL_API void set_GradientStyle(Aspose::Slides::GradientStyle value);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~PresentationAnimationsGenerator();
    
private:

    System::SharedPtr<System::Drawing::Bitmap> m_transitionImage;
    Aspose::Slides::GradientStyle m_gradientStyle;
    int32_t pr_DefaultDelay;
    bool pr_IncludeHiddenSlides;
    int32_t pr_ExportedSlides;
    
    /// <summary>
    /// Get the number of the exported slides count.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ExportedSlides(int32_t value);
    
    ASPOSE_SLIDES_LOCAL_API void PlayTransition(System::SharedPtr<FramesStream::AnimationPlaying::AnimationRenderContext> rc, System::SharedPtr<Aspose::Slides::SlideShow::SlideShowTransition> transition, System::SharedPtr<System::Drawing::Bitmap> slideImage, System::SharedPtr<System::Drawing::Bitmap> prevSlideImage);
    ASPOSE_SLIDES_LOCAL_API void PlayWait(double delayTime, System::SharedPtr<System::Drawing::Bitmap> slideImage);
    ASPOSE_SLIDES_LOCAL_API void DrawEffect(System::SharedPtr<FramesStream::ITimeDrawed> effect, double duration);
    ASPOSE_SLIDES_LOCAL_API void RaiseBeginPlay(System::SharedPtr<IPresentationAnimationPlayer> args);
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


