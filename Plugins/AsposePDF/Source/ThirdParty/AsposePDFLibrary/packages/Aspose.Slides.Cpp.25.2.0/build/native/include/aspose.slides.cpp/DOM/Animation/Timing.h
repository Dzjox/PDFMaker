#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Animation/ITiming.h>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class Behavior;
class Effect;
enum class EffectFillType;
enum class EffectRestartType;
enum class EffectTriggerType;
class TextAnimation;
} // namespace Animation
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorOdpDeserialization;
class AnimEffectOdpDeserialization;
} // namespace Animation
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
namespace PartParser
{
class SequencePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents animation timing.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Timing : public Aspose::Slides::Animation::ITiming, public Aspose::Slides::IDOMObject
{
    typedef Timing ThisType;
    typedef Aspose::Slides::Animation::ITiming BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimEffectOdpDeserialization;
    friend class Aspose::Slides::Animation::Behavior;
    friend class Aspose::Slides::Animation::Effect;
    friend class Aspose::Slides::Animation::TextAnimation;
    friend class Aspose::Slides::PptxSerialization::PartParser::SequencePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Describes the percentage of duration accelerate behavior effect.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Accelerate() override;
    /// <summary>
    /// Describes the percentage of duration accelerate behavior effect.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Accelerate(float value) override;
    /// <summary>
    /// Describes the percentage of duration decelerate behavior effect.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Decelerate() override;
    /// <summary>
    /// Describes the percentage of duration decelerate behavior effect.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Decelerate(float value) override;
    /// <summary>
    /// Describes whether to automatically play the animation in reverse after
    /// playing it in the forward direction.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AutoReverse() override;
    /// <summary>
    /// Describes whether to automatically play the animation in reverse after
    /// playing it in the forward direction.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AutoReverse(bool value) override;
    /// <summary>
    /// Describes the duration of animation effect.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Duration() override;
    /// <summary>
    /// Describes the duration of animation effect.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Duration(float value) override;
    /// <summary>
    /// Describes the number of times the effect should repeat.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_RepeatCount() override;
    /// <summary>
    /// Describes the number of times the effect should repeat.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RepeatCount(float value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_RepeatUntilEndSlide() override;
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
    ASPOSE_SLIDES_SHARED_API void set_RepeatUntilEndSlide(bool value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_RepeatUntilNextClick() override;
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
    ASPOSE_SLIDES_SHARED_API void set_RepeatUntilNextClick(bool value) override;
    /// <summary>
    /// Describes the number of times the effect should repeat.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_RepeatDuration() override;
    /// <summary>
    /// Describes the number of times the effect should repeat.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RepeatDuration(float value) override;
    /// <summary>
    /// Specifies if a effect is to restart after complete.
    /// Read <see cref="EffectRestartType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API EffectRestartType get_Restart() override;
    /// <summary>
    /// Specifies if a effect is to restart after complete.
    /// Write <see cref="EffectRestartType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Restart(EffectRestartType value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_Rewind() override;
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
    ASPOSE_SLIDES_SHARED_API void set_Rewind(bool value) override;
    /// <summary>
    /// Specifies the percentage by which to speed up (or slow down) the timing.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Speed() override;
    /// <summary>
    /// Specifies the percentage by which to speed up (or slow down) the timing.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Speed(float value) override;
    /// <summary>
    /// Describes delay time after trigger.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_TriggerDelayTime() override;
    /// <summary>
    /// Describes delay time after trigger.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TriggerDelayTime(float value) override;
    /// <summary>
    /// Describes trigger type.
    /// Read <see cref="EffectTriggerType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API EffectTriggerType get_TriggerType() override;
    /// <summary>
    /// Describes trigger type.
    /// Write <see cref="EffectTriggerType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TriggerType(EffectTriggerType value) override;
    
protected:

    /// @cond
    float m_fAcc;
    float m_fDec;
    bool m_bAutoRev;
    float m_duration;
    float m_nRepeatCount;
    float m_nRepeatDur;
    EffectRestartType m_restart;
    float m_speed;
    float m_fTriggerDelay;
    EffectTriggerType m_typeTrigger;
    
    ASPOSE_SLIDES_LOCAL_API float get_DurationInternal();
    ASPOSE_SLIDES_LOCAL_API void set_DurationInternal(float value);
    ASPOSE_SLIDES_LOCAL_API EffectFillType get_FillType() const;
    ASPOSE_SLIDES_LOCAL_API void set_FillType(EffectFillType value);
    
    ASPOSE_SLIDES_LOCAL_API Timing(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Timing, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ITiming> source);
    /// @endcond
    
private:

    System::WeakPtr<IDOMObject> m_parentImmediate;
    bool m_repeatUntilNextClick;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    EffectFillType pr_FillType;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


