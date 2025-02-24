#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Animation/IEffect.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class AfterAnimationType;
enum class AnimateTextType;
class BehaviorCollection;
enum class EffectPresetClassType;
enum class EffectSubtype;
enum class EffectType;
class IBehavior;
class IBehaviorCollection;
class ISequence;
class ITextAnimation;
class ITiming;
class Sequence;
class TextAnimation;
class Timing;
} // namespace Animation
namespace Export
{
namespace FramesStream
{
namespace AnimationPlaying
{
class PlayerFactory;
} // namespace AnimationPlaying
} // namespace FramesStream
class PresentationAnimationsGenerator;
} // namespace Export
class IAudio;
class IColorFormat;
class IShape;
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorOdpDeserialization;
class AnimBehaviorTargetOdpDeserialization;
class AnimEffectOdpDeserialization;
class AnimParGroupOdpDeserialization;
} // namespace Animation
} // namespace PartParser
} // namespace OdpSerialization
class Paragraph;
class ParagraphCollection;
class ParagraphEventArgs;
namespace PptSerialization
{
class PptShapeSerializationContext;
class TimeNodeAnimateBehaviorPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AnimationTimeLinePPTXSerialization;
class ChartSequencePptxSerialization;
class MediaSequencePptxSerialization;
class SequencePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace TimeLine
{
enum class TimeNodePresetClassType : int8_t;
} // namespace TimeLine
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace TimeLine
{
class EffectPPTXUnsupportedProps;
} // namespace TimeLine
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

// TODO: there is class Effect. But classes like ScaleEffect, RotationEffect are inherited from the class Behavior. This is confusion.
/// <summary>
/// Represents animation effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Effect : public Aspose::Slides::Animation::IEffect, public Aspose::Slides::IDOMObject
{
    typedef Effect ThisType;
    typedef Aspose::Slides::Animation::IEffect BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::FramesStream::AnimationPlaying::PlayerFactory;
    friend class Aspose::Slides::Export::PresentationAnimationsGenerator;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorTargetOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimEffectOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimParGroupOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::PptShapeSerializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::ChartSequencePptxSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::MediaSequencePptxSerialization;
    friend class Aspose::Slides::PptSerialization::TimeNodeAnimateBehaviorPPTSerialization;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::Animation::TextAnimation;
    friend class Aspose::Slides::Animation::Timing;
    friend class Aspose::Slides::PptxSerialization::PartParser::AnimationTimeLinePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SequencePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a sequence for an effect.
    /// Read-only <see cref="Aspose::Slides::Animation::ISequence">ISequence</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISequence> get_Sequence() override;
    /// <summary>
    /// TextAnimation
    /// Read-only <see cref="Aspose::Slides::Animation::ITextAnimation">ITextAnimation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextAnimation> get_TextAnimation() override;
    /// <summary>
    /// Defines class of effect.
    /// Read <see cref="EffectPresetClassType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API EffectPresetClassType get_PresetClassType() override;
    /// <summary>
    /// Defines class of effect.
    /// Write <see cref="EffectPresetClassType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PresetClassType(EffectPresetClassType value) override;
    /// <summary>
    /// Defines type of effect.
    /// Read <see cref="EffectType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API EffectType get_Type() override;
    /// <summary>
    /// Defines type of effect.
    /// Write <see cref="EffectType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(EffectType value) override;
    /// <summary>
    /// Defines subtype of effect.
    /// Read <see cref="EffectSubtype"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API EffectSubtype get_Subtype() override;
    /// <summary>
    /// Defines subtype of effect.
    /// Write <see cref="EffectSubtype"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Subtype(EffectSubtype value) override;
    /// <summary>
    /// Returns collection of behavior for effect.
    /// Read <see cref="Aspose::Slides::Animation::IBehaviorCollection">IBehaviorCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBehaviorCollection> get_Behaviors() override;
    /// <summary>
    /// Returns collection of behavior for effect.
    /// Write <see cref="Aspose::Slides::Animation::IBehaviorCollection">IBehaviorCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Behaviors(System::SharedPtr<IBehaviorCollection> value) override;
    /// <summary>
    /// Defines timing value for effect.
    /// Read <see cref="Aspose::Slides::Animation::ITiming">ITiming</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITiming> get_Timing() override;
    /// <summary>
    /// Defines timing value for effect.
    /// Write <see cref="Aspose::Slides::Animation::ITiming">ITiming</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Timing(System::SharedPtr<ITiming> value) override;
    /// <summary>
    /// Returns target shape for effect.
    /// Read-only <see cref="IShape"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_TargetShape() override;
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> get_Sound() override;
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
    ASPOSE_SLIDES_SHARED_API void set_Sound(System::SharedPtr<IAudio> value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_StopPreviousSound() override;
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
    ASPOSE_SLIDES_SHARED_API void set_StopPreviousSound(bool value) override;
    /// <summary>
    /// Defines an after animation type for effect.
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
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Animation::AfterAnimationType get_AfterAnimationType() override;
    /// <summary>
    /// Defines an after animation type for effect.
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
    ASPOSE_SLIDES_SHARED_API void set_AfterAnimationType(Aspose::Slides::Animation::AfterAnimationType value) override;
    /// <summary>
    /// Defines an after animation color for effect.
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_AfterAnimationColor() override;
    /// <summary>
    /// Defines an after animation color for effect.
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
    ASPOSE_SLIDES_SHARED_API void set_AfterAnimationColor(System::SharedPtr<IColorFormat> value) override;
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
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Animation::AnimateTextType get_AnimateTextType() override;
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
    ASPOSE_SLIDES_SHARED_API void set_AnimateTextType(Aspose::Slides::Animation::AnimateTextType value) override;
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
    ASPOSE_SLIDES_SHARED_API float get_DelayBetweenTextParts() override;
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
    ASPOSE_SLIDES_SHARED_API void set_DelayBetweenTextParts(float value) override;
    
    /// <summary>
    /// Returns an affect of a sequence at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> get_Effect(int32_t index) override;
    /// <summary>
    /// Returns animation behavior at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBehavior> get_Behavior(int32_t index) override;
    /// <summary>
    /// Set animation behavior at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Behavior(int32_t index, System::SharedPtr<IBehavior> value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Paragraph> get_StartParagraph();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Paragraph> get_EndParagraph();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::EffectPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    System::WeakPtr<Aspose::Slides::Animation::Sequence> m_parent;
    System::SharedPtr<BehaviorCollection> m_behaviorCollection;
    System::SharedPtr<Aspose::Slides::Animation::Timing> m_timing;
    int32_t m_startParagraphIndex;
    int32_t m_endParagraphIndex;
    
    ASPOSE_SLIDES_LOCAL_API Effect(System::SharedPtr<Aspose::Slides::Animation::Sequence> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Effect, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Animation::Sequence> parent));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetStartEndParagraphs(int32_t startParagraphIndex, int32_t endParagraphIndex, System::SharedPtr<ParagraphCollection> paragraphs);
    ASPOSE_SLIDES_LOCAL_API float GetEffectDuration();
    ASPOSE_SLIDES_LOCAL_API void SetEffectDuration(float duration);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Effect();
    
private:

    System::SharedPtr<IColorFormat> pr_AfterAnimationColor;
    float pr_DelayBetweenTextParts;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::EffectPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<ParagraphCollection> m_paragraphs;
    Aspose::Slides::Animation::AfterAnimationType m_afterAnimationType;
    Aspose::Slides::Animation::AnimateTextType m_animateTextType;
    
    ASPOSE_SLIDES_LOCAL_API void OnParagraphRemoved(System::SharedPtr<System::Object> sender, System::SharedPtr<ParagraphEventArgs> e);
    ASPOSE_SLIDES_LOCAL_API float GetEntranceEffectDuration();
    ASPOSE_SLIDES_LOCAL_API float GetEmphasisEffectDuration();
    ASPOSE_SLIDES_LOCAL_API void SetEmphasisEffectDuration(float duration);
    ASPOSE_SLIDES_LOCAL_API void SetRiseUpEffectDuration(float duration);
    ASPOSE_SLIDES_LOCAL_API void SetCenterRevolveEffectDuration(float duration);
    ASPOSE_SLIDES_LOCAL_API void SetFloatEffectDuration(float duration);
    ASPOSE_SLIDES_LOCAL_API void SetMagnifyEffectDuration(float duration);
    ASPOSE_SLIDES_LOCAL_API void SetBoomerangEffectDuration(float duration);
    ASPOSE_SLIDES_LOCAL_API void SetBounceEffectDuration(float duration);
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::TimeLine::TimeNodePresetClassType GetTnPresetClassType(EffectPresetClassType classType);
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


