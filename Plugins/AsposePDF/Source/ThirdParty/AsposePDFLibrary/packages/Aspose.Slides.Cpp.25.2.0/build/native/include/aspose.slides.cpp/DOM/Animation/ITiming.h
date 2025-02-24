#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class EffectRestartType;
enum class EffectTriggerType;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents animation timing.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITiming : public virtual System::Object
{
    typedef ITiming ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Describes the percentage of duration accelerate behavior effect.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Accelerate() = 0;
    /// <summary>
    /// Describes the percentage of duration accelerate behavior effect.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Accelerate(float value) = 0;
    /// <summary>
    /// Describes the percentage of duration decelerate behavior effect.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Decelerate() = 0;
    /// <summary>
    /// Describes the percentage of duration decelerate behavior effect.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Decelerate(float value) = 0;
    /// <summary>
    /// Describes whether to automatically play the animation in reverse after
    /// playing it in the forward direction.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AutoReverse() = 0;
    /// <summary>
    /// Describes whether to automatically play the animation in reverse after
    /// playing it in the forward direction.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AutoReverse(bool value) = 0;
    /// <summary>
    /// Describes the duration of animation effect.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Duration() = 0;
    /// <summary>
    /// Describes the duration of animation effect.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Duration(float value) = 0;
    /// <summary>
    /// Describes the number of times the effect should repeat.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_RepeatCount() = 0;
    /// <summary>
    /// Describes the number of times the effect should repeat.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RepeatCount(float value) = 0;
    /// <summary>
    /// This attribute specifies if the effect will repeat until the end of the slide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(path + u"demo.pptx");
    /// 
    /// // Gets the effects sequence for the first slide
    /// System::SharedPtr<ISequence> effectsSequence = presentation->get_Slides()->idx_get(0)->get_Timeline()->get_MainSequence();
    /// 
    /// // Gets the first effect of main sequence.
    /// System::SharedPtr<IEffect> effect = effectsSequence->idx_get(0);
    /// 
    /// // Changes effect Timing/Repeat to "Until End of Slide"
    /// effect->get_Timing()->set_RepeatUntilEndSlide(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RepeatUntilEndSlide() = 0;
    /// <summary>
    /// This attribute specifies if the effect will repeat until the end of the slide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(path + u"demo.pptx");
    /// 
    /// // Gets the effects sequence for the first slide
    /// System::SharedPtr<ISequence> effectsSequence = presentation->get_Slides()->idx_get(0)->get_Timeline()->get_MainSequence();
    /// 
    /// // Gets the first effect of main sequence.
    /// System::SharedPtr<IEffect> effect = effectsSequence->idx_get(0);
    /// 
    /// // Changes effect Timing/Repeat to "Until End of Slide"
    /// effect->get_Timing()->set_RepeatUntilEndSlide(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RepeatUntilEndSlide(bool value) = 0;
    /// <summary>
    /// This attribute specifies if the effect will repeat until the next click.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(path + u"demo.pptx");
    /// 
    /// // Gets the effects sequence for the first slide
    /// System::SharedPtr<ISequence> effectsSequence = presentation->get_Slides()->idx_get(0)->get_Timeline()->get_MainSequence();
    /// 
    /// // Gets the first effect of main sequence.
    /// System::SharedPtr<IEffect> effect = effectsSequence->idx_get(0);
    /// 
    /// // Changes effect Timing/Repeat to "Until End of Slide"
    /// effect->get_Timing()->set_RepeatUntilNextClick(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RepeatUntilNextClick() = 0;
    /// <summary>
    /// This attribute specifies if the effect will repeat until the next click.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(path + u"demo.pptx");
    /// 
    /// // Gets the effects sequence for the first slide
    /// System::SharedPtr<ISequence> effectsSequence = presentation->get_Slides()->idx_get(0)->get_Timeline()->get_MainSequence();
    /// 
    /// // Gets the first effect of main sequence.
    /// System::SharedPtr<IEffect> effect = effectsSequence->idx_get(0);
    /// 
    /// // Changes effect Timing/Repeat to "Until End of Slide"
    /// effect->get_Timing()->set_RepeatUntilNextClick(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RepeatUntilNextClick(bool value) = 0;
    /// <summary>
    /// Describes the number of times the effect should repeat.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_RepeatDuration() = 0;
    /// <summary>
    /// Describes the number of times the effect should repeat.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RepeatDuration(float value) = 0;
    /// <summary>
    /// Specifies if a effect is to restart after complete.
    /// Read <see cref="EffectRestartType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API EffectRestartType get_Restart() = 0;
    /// <summary>
    /// Specifies if a effect is to restart after complete.
    /// Write <see cref="EffectRestartType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Restart(EffectRestartType value) = 0;
    /// <summary>
    /// Specifies the percentage by which to speed up (or slow down) the timing.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Speed() = 0;
    /// <summary>
    /// Specifies the percentage by which to speed up (or slow down) the timing.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Speed(float value) = 0;
    /// <summary>
    /// Describes delay time after trigger.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_TriggerDelayTime() = 0;
    /// <summary>
    /// Describes delay time after trigger.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TriggerDelayTime(float value) = 0;
    /// <summary>
    /// Describes trigger type.
    /// Read <see cref="EffectTriggerType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API EffectTriggerType get_TriggerType() = 0;
    /// <summary>
    /// Describes trigger type.
    /// Write <see cref="EffectTriggerType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TriggerType(EffectTriggerType value) = 0;
    /// <summary>
    /// This attribute specifies if the effect will rewind when done playing.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the effects sequence for the first slide
    /// System::SharedPtr<ISequence> effectsSequence = presentation->get_Slide(0)->get_Timeline()->get_MainSequence();
    /// 
    /// // Get the first effect of main sequence.
    /// System::SharedPtr<IEffect> effect = effectsSequence->idx_get(0);
    /// 
    /// // Turn the effect Timing/Rewind on.
    /// effect->get_Timing()->set_Rewind(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Rewind() = 0;
    /// <summary>
    /// This attribute specifies if the effect will rewind when done playing.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the effects sequence for the first slide
    /// System::SharedPtr<ISequence> effectsSequence = presentation->get_Slide(0)->get_Timeline()->get_MainSequence();
    /// 
    /// // Get the first effect of main sequence.
    /// System::SharedPtr<IEffect> effect = effectsSequence->idx_get(0);
    /// 
    /// // Turn the effect Timing/Rewind on.
    /// effect->get_Timing()->set_Rewind(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Rewind(bool value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


