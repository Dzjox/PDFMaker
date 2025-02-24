#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Animation/ITextAnimation.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class BuildType;
class Effect;
enum class EffectPresetClassType;
enum class EffectSubtype;
enum class EffectTriggerType;
enum class EffectType;
class IEffect;
class Sequence;
class TextAnimationCollection;
} // namespace Animation
class IAutoShape;
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorTargetOdpDeserialization;
} // namespace Animation
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class TimeNodeAnimateBehaviorPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AnimationTimeLinePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace TimeLine
{
class TextAnimationPPTXUnsupportedProps;
} // namespace TimeLine
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent text animation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TextAnimation : public Aspose::Slides::Animation::ITextAnimation
{
    typedef TextAnimation ThisType;
    typedef Aspose::Slides::Animation::ITextAnimation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorTargetOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::TimeNodeAnimateBehaviorPPTSerialization;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::Animation::TextAnimationCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::AnimationTimeLinePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// List of build type (for exp. Paragraph 1,2,3, All at Once) of text animation.
    /// Read <see cref="Animation::BuildType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Animation::BuildType get_BuildType() override;
    /// <summary>
    /// List of build type (for exp. Paragraph 1,2,3, All at Once) of text animation.
    /// Write <see cref="Animation::BuildType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BuildType(Aspose::Slides::Animation::BuildType value) override;
    /// <summary>
    /// Linked shape effect with group or not (null).
    /// Read <see cref="Aspose::Slides::Animation::IEffect">IEffect</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> get_EffectAnimateBackgroundShape() override;
    /// <summary>
    /// Linked shape effect with group or not (null).
    /// Write <see cref="Aspose::Slides::Animation::IEffect">IEffect</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EffectAnimateBackgroundShape(System::SharedPtr<IEffect> value) override;
    
    /// <summary>
    /// Add new effect to the end of current sequence to end of group text animations.
    /// Only valid if count of text paragraphs equal or greater of counts effect of this group!
    /// </summary>
    /// <param name="effectType">Type of an animation effect <see cref="EffectType"></see></param>
    /// <param name="subtype">Subtypes of animation effect <see cref="EffectSubtype"></see></param>
    /// <param name="triggerType">Trigger type of effect <see cref="EffectTriggerType"></see></param>
    /// <returns>New effect object <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> AddEffect(EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) override;
    
    ASPOSE_SLIDES_SHARED_API TextAnimation();
    
protected:

    /// @cond
    Aspose::Slides::Animation::BuildType m_bldType;
    int32_t m_nIndexCounter;
    bool m_isBoundToParagraphs;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Sequence> get_SeqOwner();
    ASPOSE_SLIDES_LOCAL_API void set_SeqOwner(System::SharedPtr<Sequence> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::TextAnimationPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API void Update();
    ASPOSE_SLIDES_LOCAL_API void UpdateEffectsByParagraphsLevel(Aspose::Slides::Animation::BuildType beforeBuildType);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~TextAnimation();
    
private:

    System::WeakPtr<Sequence> m_seqOwner;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::TextAnimationPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API void SetStartEndParagraphsByDepth(System::SharedPtr<IAutoShape> shape, int32_t paragraphDepth, Aspose::Slides::Animation::BuildType beforeBuildType);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Effect> AddCopyEffect(System::SharedPtr<Effect> originEffect, EffectPresetClassType classType);
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


