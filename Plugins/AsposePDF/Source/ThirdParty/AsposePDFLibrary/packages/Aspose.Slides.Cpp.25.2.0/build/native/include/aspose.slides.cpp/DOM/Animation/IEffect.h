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
namespace Animation
{
enum class AfterAnimationType;
enum class AnimateTextType;
enum class EffectPresetClassType;
enum class EffectSubtype;
enum class EffectType;
class IBehavior;
class IBehaviorCollection;
class ISequence;
class ITextAnimation;
class ITiming;
} // namespace Animation
class IAudio;
class IColorFormat;
class IShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents animation effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IEffect : public virtual System::Object
{
    typedef IEffect ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a sequence for an effect.
    /// Read-only <see cref="Aspose::Slides::Animation::ISequence">ISequence</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISequence> get_Sequence() = 0;
    /// <summary>
    /// Returns text animation.
    /// Read-only <see cref="Aspose::Slides::Animation::ITextAnimation">ITextAnimation</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextAnimation> get_TextAnimation() = 0;
    /// <summary>
    /// Defines class of effect.
    /// Read <see cref="EffectPresetClassType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API EffectPresetClassType get_PresetClassType() = 0;
    /// <summary>
    /// Defines class of effect.
    /// Write <see cref="EffectPresetClassType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PresetClassType(EffectPresetClassType value) = 0;
    /// <summary>
    /// Defines type of effect.
    /// Read <see cref="EffectType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API EffectType get_Type() = 0;
    /// <summary>
    /// Defines type of effect.
    /// Write <see cref="EffectType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(EffectType value) = 0;
    /// <summary>
    /// Defines subtype of effect.
    /// Read <see cref="EffectSubtype"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API EffectSubtype get_Subtype() = 0;
    /// <summary>
    /// Defines subtype of effect.
    /// Write <see cref="EffectSubtype"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Subtype(EffectSubtype value) = 0;
    /// <summary>
    /// Returns collection of behavior for effect.
    /// Read <see cref="Aspose::Slides::Animation::IBehaviorCollection">IBehaviorCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBehaviorCollection> get_Behaviors() = 0;
    /// <summary>
    /// Returns collection of behavior for effect.
    /// Write <see cref="Aspose::Slides::Animation::IBehaviorCollection">IBehaviorCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Behaviors(System::SharedPtr<IBehaviorCollection> value) = 0;
    /// <summary>
    /// Defines timing value for effect.
    /// Read <see cref="Aspose::Slides::Animation::ITiming">ITiming</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITiming> get_Timing() = 0;
    /// <summary>
    /// Defines timing value for effect.
    /// Write <see cref="Aspose::Slides::Animation::ITiming">ITiming</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Timing(System::SharedPtr<ITiming> value) = 0;
    /// <summary>
    /// Returns target shape for effect.
    /// Read-only <see cref="IShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_TargetShape() = 0;
    /// <summary>
    /// Defined embedded sound for effect.
    /// Read <see cref="IAudio"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// auto slide = presentation->get_Slides()->idx_get(0);
    /// 
    /// // Gets the effects sequence for the slide
    /// auto effectsSequence = slide->get_Timeline()->get_MainSequence();
    /// for (auto effect : effectsSequence)
    /// {
    ///     if (effect->get_Sound() == nullptr)
    ///     {
    ///         continue;
    ///     }
    /// 
    ///     // Extracts the effect sound in byte array
    ///     System::ArrayPtr<uint8_t> audio = effect->get_Sound()->get_BinaryData();
    /// }
    /// </code>
    /// </example> 
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> get_Sound() = 0;
    /// <summary>
    /// Defined embedded sound for effect.
    /// Write <see cref="IAudio"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// auto slide = presentation->get_Slides()->idx_get(0);
    /// 
    /// // Gets the effects sequence for the slide
    /// auto effectsSequence = slide->get_Timeline()->get_MainSequence();
    /// for (auto effect : effectsSequence)
    /// {
    ///     if (effect->get_Sound() == nullptr)
    ///     {
    ///         continue;
    ///     }
    /// 
    ///     // Extracts the effect sound in byte array
    ///     System::ArrayPtr<uint8_t> audio = effect->get_Sound()->get_BinaryData();
    /// }
    /// </code>
    /// </example> 
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Sound(System::SharedPtr<IAudio> value) = 0;
    /// <summary>
    /// This attribute specifies if the animation effect stops the previous sound.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// auto firstSlideEffect = presentation->get_Slides()->idx_get(0)->get_Timeline()->get_MainSequence()->idx_get(0);
    /// 
    /// // Get the first effect of the second slide.
    /// auto secondSlideEffect = presentation->get_Slides()->idx_get(1)->get_Timeline()->get_MainSequence()->idx_get(0);
    /// 
    /// if (firstSlideEffect->get_Sound() != nullptr)
    /// {
    ///     // Change the second effect Enhancements/Sound to "Stop Previous Sound"
    ///     secondSlideEffect->set_StopPreviousSound(true);
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_StopPreviousSound() = 0;
    /// <summary>
    /// This attribute specifies if the animation effect stops the previous sound.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// auto firstSlideEffect = presentation->get_Slides()->idx_get(0)->get_Timeline()->get_MainSequence()->idx_get(0);
    /// 
    /// // Get the first effect of the second slide.
    /// auto secondSlideEffect = presentation->get_Slides()->idx_get(1)->get_Timeline()->get_MainSequence()->idx_get(0);
    /// 
    /// if (firstSlideEffect->get_Sound() != nullptr)
    /// {
    ///     // Change the second effect Enhancements/Sound to "Stop Previous Sound"
    ///     secondSlideEffect->set_StopPreviousSound(true);
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StopPreviousSound(bool value) = 0;
    /// <summary>
    /// Defined an after animation type for effect.
    /// Read <see cref="AfterAnimationType"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// System::SharedPtr<IEffect> firstSlideEffect = presentation->get_Slide(0)->get_Timeline()->get_MainSequenceEffect(0);
    /// 
    /// // Change the effect After animation to "Hide on Next Mouse Click"
    /// firstSlideEffect->set_AfterAnimationType(AfterAnimationType::HideOnNextMouseClick);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Animation::AfterAnimationType get_AfterAnimationType() = 0;
    /// <summary>
    /// Defined an after animation type for effect.
    /// Write <see cref="AfterAnimationType"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// System::SharedPtr<IEffect> firstSlideEffect = presentation->get_Slide(0)->get_Timeline()->get_MainSequenceEffect(0);
    /// 
    /// // Change the effect After animation to "Hide on Next Mouse Click"
    /// firstSlideEffect->set_AfterAnimationType(AfterAnimationType::HideOnNextMouseClick);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AfterAnimationType(Aspose::Slides::Animation::AfterAnimationType value) = 0;
    /// <summary>
    /// Defined an after animation color for effect.
    /// Read <see cref="IColorFormat"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// System::SharedPtr<IEffect> firstSlideEffect = presentation->get_Slide(0)->get_Timeline()->get_MainSequenceEffect(0);
    /// 
    /// // Change the effect After animation type to "Color"
    /// firstSlideEffect->set_AfterAnimationType(AfterAnimationType::Color);
    /// 
    /// // Set the effect After animation color.
    /// firstSlideEffect->get_AfterAnimationColor()->set_Color(System::Drawing::Color::get_Green());
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_AfterAnimationColor() = 0;
    /// <summary>
    /// Defined an after animation color for effect.
    /// Write <see cref="IColorFormat"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// System::SharedPtr<IEffect> firstSlideEffect = presentation->get_Slide(0)->get_Timeline()->get_MainSequenceEffect(0);
    /// 
    /// // Change the effect After animation type to "Color"
    /// firstSlideEffect->set_AfterAnimationType(AfterAnimationType::Color);
    /// 
    /// // Set the effect After animation color.
    /// firstSlideEffect->get_AfterAnimationColor()->set_Color(System::Drawing::Color::get_Green());
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AfterAnimationColor(System::SharedPtr<IColorFormat> value) = 0;
    /// <summary>
    /// Defines an animate text type for effect. 
    /// The shape text can be animated by letter, by word or all at once.
    /// Read <see cref="AnimateTextType"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// System::SharedPtr<IEffect> firstSlideEffect = presentation->get_Slide(0)->get_Timeline()->get_MainSequenceEffect(0);
    /// 
    /// // Change the effect Animate text type to "By letter"
    /// firstSlideEffect->set_AnimateTextType(AnimateTextType::ByLetter);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Animation::AnimateTextType get_AnimateTextType() = 0;
    /// <summary>
    /// Defines an animate text type for effect. 
    /// The shape text can be animated by letter, by word or all at once.
    /// Write <see cref="AnimateTextType"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// System::SharedPtr<IEffect> firstSlideEffect = presentation->get_Slide(0)->get_Timeline()->get_MainSequenceEffect(0);
    /// 
    /// // Change the effect Animate text type to "By letter"
    /// firstSlideEffect->set_AnimateTextType(AnimateTextType::ByLetter);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AnimateTextType(Aspose::Slides::Animation::AnimateTextType value) = 0;
    /// <summary>
    /// Defines a delay between animated text parts (words or letters).
    /// A positive value specifies the percentage of effect duration.
    /// A negative value specifies the delay in seconds.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// System::SharedPtr<IEffect> firstSlideEffect = presentation->get_Slide(0)->get_Timeline()->get_MainSequenceEffect(0);
    /// 
    /// // Change the effect Animate text type to "By word"
    /// firstSlideEffect->set_AnimateTextType(AnimateTextType::ByWord);
    /// 
    /// // Set the delay between animated text parts to 20% of effect duration.
    /// firstSlideEffect->set_DelayBetweenTextParts(20.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_DelayBetweenTextParts() = 0;
    /// <summary>
    /// Defines a delay between animated text parts (words or letters).
    /// A positive value specifies the percentage of effect duration.
    /// A negative value specifies the delay in seconds.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// // Get the first effect of the first slide.
    /// System::SharedPtr<IEffect> firstSlideEffect = presentation->get_Slide(0)->get_Timeline()->get_MainSequenceEffect(0);
    /// 
    /// // Change the effect Animate text type to "By word"
    /// firstSlideEffect->set_AnimateTextType(AnimateTextType::ByWord);
    /// 
    /// // Set the delay between animated text parts to 20% of effect duration.
    /// firstSlideEffect->set_DelayBetweenTextParts(20.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DelayBetweenTextParts(float value) = 0;
    
    /// <summary>
    /// Returns an affect of a sequence at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffect> get_Effect(int32_t index) = 0;
    /// <summary>
    /// Returns animation behavior at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBehavior> get_Behavior(int32_t index) = 0;
    /// <summary>
    /// Set animation behavior at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Behavior(int32_t index, System::SharedPtr<IBehavior> value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


