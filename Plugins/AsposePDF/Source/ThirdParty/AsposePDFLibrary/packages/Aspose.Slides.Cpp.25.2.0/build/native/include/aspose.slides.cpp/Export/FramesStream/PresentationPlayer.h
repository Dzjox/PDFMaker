﻿#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>
#include <system/idisposable.h>
#include <system/event.h>
#include <cstdint>

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
class FrameRateFilter;
} // namespace FramesStream
class FrameTickEventArgs;
class IPresentationAnimationPlayer;
class PresentationAnimationsGenerator;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents the player of animations associated with the <see cref="Presentation"></see>. 
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
/// 
/// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(pres);
/// 
/// // Play animation with 33 FPS
/// System::SharedPtr<PresentationPlayer> player1 = System::MakeObject<PresentationPlayer>(animationsGenerator, 33);
/// 
/// player1->FrameTick.connect(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
///     [](System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args) -> void
/// {
///     args->GetFrame()->Save(System::IO::Path::Combine(u"33fps", System::String::Format(u"frame_{0}.png", sender->get_FrameIndex())));
/// }));
/// 
/// animationsGenerator->Run(pres->get_Slides());
/// 
/// // Play animation with 45 FPS
/// System::SharedPtr<PresentationPlayer> player2 = System::MakeObject<PresentationPlayer>(animationsGenerator, 45);
/// 
/// player2->FrameTick.connect(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
///     [](System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args) -> void
/// {
///     args->GetFrame()->Save(System::IO::Path::Combine(u"45fps", System::String::Format(u"frame_{0}.png", sender->get_FrameIndex())));
/// }));
/// 
/// animationsGenerator->Run(pres->get_Slides());
/// </code>
/// </example> 
class ASPOSE_SLIDES_SHARED_CLASS PresentationPlayer : public System::IDisposable
{
    typedef PresentationPlayer ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Represents the frame tick handler of <see cref="PresentationPlayer::FrameTick"></see> event.
    /// </summary>
    /// <param name="sender">Sender of the frame tick event.</param>
    /// <param name="args">Frame tick arguments.</param>
    using FrameTickHandler = System::MulticastDelegate<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>;
    
    
public:

    /// <summary>
    /// Gets the frame index.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(pres);
    /// auto player = System::MakeObject<PresentationPlayer>(animationsGenerator, 33);
    /// 
    /// player->FrameTick.connect(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
    ///     [](System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args) -> void
    /// {
    ///     args->GetFrame()->Save(System::String::Format(u"frame_{0}.png", sender->get_FrameIndex()));
    /// }));
    /// 
    /// animationsGenerator->Run(pres->get_Slides());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API int32_t get_FrameIndex();
    
    /// <summary>
    /// Creates new instance of the <see cref="Aspose::Slides::Export::PresentationPlayer">PresentationPlayer</see>.
    /// </summary>
    /// <param name="generator"></param>
    /// <param name="fps">Frames per second (FPS)</param>
    ASPOSE_SLIDES_SHARED_API PresentationPlayer(System::SharedPtr<PresentationAnimationsGenerator> generator, double fps);
    
    /// <summary>
    /// Disposes the instance of the <see cref="Aspose::Slides::Export::PresentationPlayer">PresentationPlayer</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Dispose() override;
    
    /// <summary>
    /// Frame tick event.
    /// <remarks>
    /// Occurs when each frame of the animation created by <see cref="Aspose::Slides::Export::PresentationAnimationsGenerator">PresentationAnimationsGenerator</see> is generated by the player.  
    /// </remarks>
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(pres);
    /// auto player = System::MakeObject<PresentationPlayer>(animationsGenerator, 33);
    /// 
    /// player->FrameTick.connect(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
    ///     [](System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args) -> void
    /// {
    ///     args->GetFrame()->Save(System::String::Format(u"frame_{0}.png", sender->get_FrameIndex()));
    /// }));
    /// 
    /// animationsGenerator->Run(pres->get_Slides());
    /// </code>
    /// </example> 
    System::Event<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)> FrameTick;
    
protected:

    virtual ASPOSE_SLIDES_SHARED_API ~PresentationPlayer();
    
private:

    System::SharedPtr<PresentationAnimationsGenerator> m_generator;
    System::SharedPtr<FramesStream::FrameRateFilter> m_frameRateFilter;
    int32_t m_framesCount;
    double m_frameTime;
    
    ASPOSE_SLIDES_LOCAL_API double get_FrameTime();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentationAnimationsGenerator> get_Generator();
    
    ASPOSE_SLIDES_LOCAL_API void OnNewAnimation(System::SharedPtr<IPresentationAnimationPlayer> player);
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


