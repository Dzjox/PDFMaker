#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IPresentationAnimationPlayer;
class PresentationPlayer;
} // namespace Export
class IImage;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents arguments of the <see cref="PresentationPlayer::FrameTick"></see> event.
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
/// 
/// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(pres);
/// auto player = System::MakeObject<PresentationPlayer>(animationsGenerator, 33);
/// 
/// int32_t frameNumber = 0;
/// player->FrameTick.connect(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
///     [&frameNumber](System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args) -> void
/// {
///     args->GetFrame()->Save(System::String::Format(u"frame_{0}.png", frameNumber++));
/// }));
/// 
/// animationsGenerator->Run(pres->get_Slides());
/// </code>
/// </example>    
class ASPOSE_SLIDES_SHARED_CLASS FrameTickEventArgs : public System::Object
{
    typedef FrameTickEventArgs ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::Export::PresentationPlayer;
    /// @endcond
    
public:

    /// <summary>
    /// Get the presentation player
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<PresentationPlayer> get_Player();
    
    /// <summary>
    /// Get the current <see cref="Aspose::Slides::Export::PresentationPlayer">PresentationPlayer</see> frame.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto animationsGenerator = System::MakeObject<PresentationAnimationsGenerator>(pres);
    /// auto player = System::MakeObject<PresentationPlayer>(animationsGenerator, 33);
    /// 
    /// int32_t frameNumber = 0;
    /// player->FrameTick.connect(static_cast<std::function<void(System::SharedPtr<PresentationPlayer>, System::SharedPtr<FrameTickEventArgs>)>>(
    ///     [&frameNumber](System::SharedPtr<PresentationPlayer> sender, System::SharedPtr<FrameTickEventArgs> args) -> void
    /// {
    ///     args->GetFrame()->Save(System::String::Format(u"frame_{0}.png", frameNumber++));
    /// }));
    /// 
    /// animationsGenerator->Run(pres->get_Slides());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetFrame();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API FrameTickEventArgs(System::SharedPtr<PresentationPlayer> player, System::SharedPtr<IPresentationAnimationPlayer> animationPlayer);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FrameTickEventArgs, CODEPORTING_ARGS(System::SharedPtr<PresentationPlayer> player, System::SharedPtr<IPresentationAnimationPlayer> animationPlayer));
    
private:

    System::SharedPtr<PresentationPlayer> m_player;
    System::SharedPtr<IPresentationAnimationPlayer> m_animationPlayer;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


