#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IAudio;
namespace SlideShow
{
class ITransitionValueBase;
enum class TransitionSoundMode;
enum class TransitionSpeed;
enum class TransitionType;
} // namespace SlideShow
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents slide show transition.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISlideShowTransition : public virtual System::Object
{
    typedef ISlideShowTransition ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the embedded audio data.
    /// Reads <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> get_Sound() = 0;
    /// <summary>
    /// Sets the embedded audio data.
    /// Writes <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Sound(System::SharedPtr<IAudio> value) = 0;
    /// <summary>
    /// Set or returns sound mode for slide transition.
    /// Reads <see cref="Aspose::Slides::SlideShow::TransitionSoundMode">TransitionSoundMode</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SlideShow::TransitionSoundMode get_SoundMode() = 0;
    /// <summary>
    /// Set or returns sound mode for slide transition.
    /// Writes <see cref="Aspose::Slides::SlideShow::TransitionSoundMode">TransitionSoundMode</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SoundMode(SlideShow::TransitionSoundMode value) = 0;
    /// <summary>
    /// This attribute specifies if the sound will loop until the next sound event occurs in
    /// slideshow.
    /// Reads <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SoundLoop() = 0;
    /// <summary>
    /// This attribute specifies if the sound will loop until the next sound event occurs in
    /// slideshow.
    /// Writes <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SoundLoop(bool value) = 0;
    /// <summary>
    /// Specifies whether a mouse click will advance the slide or not. If this attribute is not
    /// specified then a value of true is assumed.
    /// Reads <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AdvanceOnClick() = 0;
    /// <summary>
    /// Specifies whether a mouse click will advance the slide or not. If this attribute is not
    /// specified then a value of true is assumed.
    /// Writes <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AdvanceOnClick(bool value) = 0;
    /// <summary>
    /// This attribute specifies if the slideshow will move to the next slide after a certain time.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// // Get the first slide Transition
    /// auto slideTransition = pres->get_Slides()->idx_get(0)->get_SlideShowTransition();
    /// // Check if the Advance Slide After flag is checked
    /// if (slideTransition->get_AdvanceAfter())
    /// {
    ///     // Get the Advance Slide After Time value
    ///     uint32_t advanceAfterTime = slideTransition->get_AdvanceAfterTime();
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AdvanceAfter() = 0;
    /// <summary>
    /// This attribute specifies if the slideshow will move to the next slide after a certain time.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// // Get the first slide Transition
    /// auto slideTransition = pres->get_Slides()->idx_get(0)->get_SlideShowTransition();
    /// // Check if the Advance Slide After flag is checked
    /// if (slideTransition->get_AdvanceAfter())
    /// {
    ///     // Get the Advance Slide After Time value
    ///     uint32_t advanceAfterTime = slideTransition->get_AdvanceAfterTime();
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AdvanceAfter(bool value) = 0;
    /// <summary>
    /// Specifies the time, in milliseconds, after which the transition should start. This setting
    /// may be used in conjunction with the advClick attribute. If this attribute is not specified
    /// then it is assumed that no auto-advance will occur.
    /// Reads <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_AdvanceAfterTime() = 0;
    /// <summary>
    /// Specifies the time, in milliseconds, after which the transition should start. This setting
    /// may be used in conjunction with the advClick attribute. If this attribute is not specified
    /// then it is assumed that no auto-advance will occur.
    /// Writes <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AdvanceAfterTime(uint32_t value) = 0;
    /// <summary>
    /// Specifies the transition speed that is to be used when transitioning from the current slide
    /// to the next.
    /// Reads <see cref="Aspose::Slides::SlideShow::TransitionSpeed">TransitionSpeed</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SlideShow::TransitionSpeed get_Speed() = 0;
    /// <summary>
    /// Specifies the transition speed that is to be used when transitioning from the current slide
    /// to the next.
    /// Writes <see cref="Aspose::Slides::SlideShow::TransitionSpeed">TransitionSpeed</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Speed(SlideShow::TransitionSpeed value) = 0;
    /// <summary>
    /// Slide show transition value.
    /// Read-only <see cref="Aspose::Slides::SlideShow::ITransitionValueBase">SlideShow::ITransitionValueBase</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<SlideShow::ITransitionValueBase> get_Value() = 0;
    /// <summary>
    /// Type of transition.
    /// Reads <see cref="Aspose::Slides::SlideShow::TransitionType">TransitionType</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SlideShow::TransitionType get_Type() = 0;
    /// <summary>
    /// Type of transition.
    /// Writes <see cref="Aspose::Slides::SlideShow::TransitionType">TransitionType</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(SlideShow::TransitionType value) = 0;
    /// <summary>
    /// Specifies whether or not this sound is a built-in sound. If this attribute is set to true then
    /// the generating application is alerted to check the name attribute specified for this sound
    /// in it's list of built-in sounds and can then surface a custom name or UI as needed.
    /// Reads <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SoundIsBuiltIn() = 0;
    /// <summary>
    /// Specifies whether or not this sound is a built-in sound. If this attribute is set to true then
    /// the generating application is alerted to check the name attribute specified for this sound
    /// in it's list of built-in sounds and can then surface a custom name or UI as needed.
    /// Writes <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SoundIsBuiltIn(bool value) = 0;
    /// <summary>
    /// Specifies a human readable name for the sound of the transition. The <see cref="ISlideShowTransition::set_Sound"></see> must be assigned to get or set the sound name.
    /// Reads <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>This name appears in the PowerPoint user interface when configuring the transition sound manually.</remarks>
    /// <exception cref="Aspose::Slides::PptxException">When <see cref="ISlideShowTransition::set_Sound"></see> is not assigned.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_SoundName() = 0;
    /// <summary>
    /// Specifies a human readable name for the sound of the transition. The <see cref="ISlideShowTransition::set_Sound"></see> must be assigned to get or set the sound name.
    /// Writes <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>This name appears in the PowerPoint user interface when configuring the transition sound manually.</remarks>
    /// <exception cref="Aspose::Slides::PptxException">When <see cref="ISlideShowTransition::set_Sound"></see> is not assigned.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SoundName(System::String value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


