#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IAnimationTimeLine.h>

#include "DOM/DomObject.h"
#include "DOM/BaseSlide.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class Effect;
class IEffect;
class ISequence;
class ISequenceCollection;
class ITextAnimation;
class ITextAnimationCollection;
class Sequence;
class SequenceCollection;
class TextAnimation;
class TextAnimationCollection;
} // namespace Animation
class IShape;
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimParGroupOdpDeserialization;
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
/// Represents timeline of animation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AnimationTimeLine : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::BaseSlide>>, public Aspose::Slides::IAnimationTimeLine
{
    typedef AnimationTimeLine ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::BaseSlide>> BaseType;
    typedef Aspose::Slides::IAnimationTimeLine BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimParGroupOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::TimeNodeAnimateBehaviorPPTSerialization;
    friend class Aspose::Slides::Animation::Effect;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::Animation::TextAnimation;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::PptxSerialization::PartParser::AnimationTimeLinePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SequencePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns collection of interactive sequences.
    /// This sequences may contain only effects by "click on shape" with specifies target shape.
    /// Read-only <see cref="Aspose::Slides::Animation::ISequenceCollection">ISequenceCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISequenceCollection> get_InteractiveSequences() override;
    /// <summary>
    /// Returns main sequence which may contain only main effects collection.
    /// Read-only <see cref="Aspose::Slides::Animation::ISequence">ISequence</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISequence> get_MainSequence() override;
    /// <summary>
    /// Returns collection of text animations.
    /// Read-only <see cref="Aspose::Slides::Animation::ITextAnimationCollection">ITextAnimationCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextAnimationCollection> get_TextAnimationCollection() override;
    
    /// <summary>
    /// Returns interactive sequence at the specified index.
    /// This sequence may contain only effects by "click on shape" with specifies target shape.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISequence> get_InteractiveSequence(int32_t index) override;
    /// <summary>
    /// Returns effect from main sequence at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> get_MainSequenceEffect(int32_t index) override;
    /// <summary>
    /// Returns text animation at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextAnimation> get_TextAnimation(int32_t index) override;
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ITextAnimation>> get_TextAnimation(System::SharedPtr<IShape> shape) override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BaseSlide> get_Slide();
    
    System::SharedPtr<SequenceCollection> m_interSequences;
    System::SharedPtr<Sequence> m_mainSequence;
    System::SharedPtr<Aspose::Slides::Animation::TextAnimationCollection> m_texAnimations;
    
    ASPOSE_SLIDES_LOCAL_API AnimationTimeLine(System::SharedPtr<BaseSlide> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AnimationTimeLine, CODEPORTING_ARGS(System::SharedPtr<BaseSlide> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~AnimationTimeLine();
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


