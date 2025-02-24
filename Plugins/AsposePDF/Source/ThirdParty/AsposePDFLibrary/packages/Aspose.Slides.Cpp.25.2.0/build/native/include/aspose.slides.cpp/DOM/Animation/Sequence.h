#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/Animation/ISequence.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class AnimationTimeLine;
class Effect;
enum class EffectChartMajorGroupingType;
enum class EffectChartMinorGroupingType;
enum class EffectPresetClassType;
enum class EffectSubtype;
enum class EffectTriggerType;
enum class EffectType;
class IEffect;
class SequenceCollection;
class TextAnimation;
} // namespace Animation
namespace Charts
{
class IChart;
} // namespace Charts
class IParagraph;
class IShape;
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorOdpDeserialization;
class AnimEffectOdpDeserialization;
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
class MediaSequencePptxSerialization;
class SequencePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Shape;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace TimeLine
{
class SequencePPTXUnsupportedProps;
} // namespace TimeLine
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents sequence (collection of effects).
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Sequence final : public Aspose::Slides::Animation::ISequence
{
    typedef Sequence ThisType;
    typedef Aspose::Slides::Animation::ISequence BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimEffectOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimParGroupOdpDeserialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::MediaSequencePptxSerialization;
    friend class Aspose::Slides::PptSerialization::TimeNodeAnimateBehaviorPPTSerialization;
    friend class Aspose::Slides::Animation::AnimationTimeLine;
    friend class Aspose::Slides::Animation::Effect;
    friend class Aspose::Slides::Animation::SequenceCollection;
    friend class Aspose::Slides::Animation::TextAnimation;
    friend class Aspose::Slides::PptxSerialization::PartParser::AnimationTimeLinePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SequencePPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the number of effects in a sequense.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns shape target for INTERACTIVE sequence.
    /// If sequence is not interactive then returns null.
    /// Read <see cref="IShape"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_TriggerShape() override;
    /// <summary>
    /// Sets shape target for INTERACTIVE sequence.
    /// If sequence is not interactive then returns null.
    /// Write <see cref="IShape"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TriggerShape(System::SharedPtr<IShape> value) override;
    
    /// <summary>
    /// Removes specified effect from a collection.
    /// </summary>
    /// <param name="item">Effect to remove.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IEffect> item) override;
    /// <summary>
    /// Removes an effect from a collection.
    /// </summary>
    /// <param name="index"></param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all effects from a collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    
    /// <summary>
    /// Returns an effect at the specified index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> idx_get(int32_t index) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator{IEffect}"></see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IEffect>>> GetEnumerator() override;
    /// <summary>
    /// Remove effect for the specified shape.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveByShape(System::SharedPtr<IShape> shape) override;
    /// <summary>
    /// Returns array of effects for the specified shape.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IEffect>> GetEffectsByShape(System::SharedPtr<IShape> shape) override;
    /// <summary>
    /// Returns array of effects for the specified paragraph.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IEffect>> GetEffectsByParagraph(System::SharedPtr<IParagraph> paragraph) override;
    /// <summary>
    /// Returns count of effects for the specified shape.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t GetCount(System::SharedPtr<IShape> shape) override;
    /// <summary>
    /// Add new effect to the end of sequence.
    /// </summary>
    /// <param name="shape">Shape object <see cref="IShape"></see> for adding an effect</param>
    /// <param name="effectType">Type of an animation effect <see cref="EffectType"></see></param>
    /// <param name="subtype">Subtypes of animation effect <see cref="EffectSubtype"></see></param>
    /// <param name="triggerType">Trigger type of effect <see cref="EffectTriggerType"></see></param>
    /// <returns>New effect object <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> AddEffect(System::SharedPtr<IShape> shape, EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) override;
    /// <summary>
    /// Add new animation effect for paragraph to the end of sequence.
    /// </summary>
    /// <param name="paragraph">Paragraph object <see cref="IParagraph"></see></param>
    /// <param name="effectType">Type of an animation effect <see cref="EffectType"></see></param>
    /// <param name="subtype">Subtypes of animation effect <see cref="EffectSubtype"></see></param>
    /// <param name="triggerType">Trigger type of effect <see cref="EffectTriggerType"></see></param>
    /// <returns>New effect object <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject&lt;Presentation&gt;(path + u"input.pptx");
    /// // select paragraph to add effect
    /// auto autoShape = System::ExplicitCast&lt;Aspose::Slides::IAutoShape&gt;(presentation->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto paragraph = autoShape->get_TextFrame()->get_Paragraphs()->idx_get(0);
    /// // add Fly animation effect to selected paragraph
    /// auto effect = presentation->get_Slides()->idx_get(0)->get_Timeline()->get_MainSequence()->AddEffect(
    ///      paragraph, 
    ///      Aspose::Slides::Animation::EffectType::Fly, 
    ///      Aspose::Slides::Animation::EffectSubtype::Left, 
    ///      Aspose::Slides::Animation::EffectTriggerType::OnClick);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> AddEffect(System::SharedPtr<IParagraph> paragraph, EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) override;
    /// <summary>
    /// Adds the new chart animation effect for category or series to the end of sequence.
    /// </summary>
    /// <param name="chart">Chart object <see cref="Aspose::Slides::Charts::IChart"></see></param>
    /// <param name="type">Type of an animation effect <see cref="EffectChartMinorGroupingType"></see></param>
    /// <param name="index">Index <see cref="int32_t"></see></param>
    /// <param name="effectType">Type of an animation effect <see cref="EffectType"></see></param>
    /// <param name="subtype">Subtypes of animation effect <see cref="EffectSubtype"></see></param>
    /// <param name="triggerType">Trigger type of effect <see cref="EffectTriggerType"></see></param>
    /// <returns>New effect object <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> AddEffect(System::SharedPtr<Aspose::Slides::Charts::IChart> chart, EffectChartMajorGroupingType type, int32_t index, EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) override;
    /// <summary>
    /// Adds the new chart animation effect for elements in category or series to the end of sequence.
    /// </summary>
    /// <param name="chart">Chart object <see cref="Aspose::Slides::Charts::IChart"></see></param>
    /// <param name="type">Type of an animation effect <see cref="EffectChartMinorGroupingType"></see></param>
    /// <param name="seriesIndex">Index of chart series <see cref="int32_t"></see></param>
    /// <param name="categoriesIndex">Index of category <see cref="int32_t"></see></param>
    /// <param name="effectType">Type of an animation effect <see cref="EffectType"></see></param>
    /// <param name="subtype">Subtypes of animation effect <see cref="EffectSubtype"></see></param>
    /// <param name="triggerType">Trigger type of effect <see cref="EffectTriggerType"></see></param>
    /// <returns>New effect object <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffect> AddEffect(System::SharedPtr<Aspose::Slides::Charts::IChart> chart, EffectChartMinorGroupingType type, int32_t seriesIndex, int32_t categoriesIndex, EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) override;
    
protected:

    /// @cond
    int64_t m_presetSubtypeLast;
    System::SharedPtr<Shape> m_shapeTrigger;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::SequencePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AnimationTimeLine> get_ParentTimeline();
    
    ASPOSE_SLIDES_LOCAL_API Sequence(System::SharedPtr<AnimationTimeLine> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Sequence, CODEPORTING_ARGS(System::SharedPtr<AnimationTimeLine> parent));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<Effect>> GetEffectsByShapeId(uint32_t shapeId);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Effect> AddEffect(System::SharedPtr<IShape> shape, EffectType effectType, EffectSubtype subtype, EffectPresetClassType classType, EffectTriggerType triggerType);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Shape> GetShapeFromID(int32_t shapeIndex);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Sequence();
    
private:

    System::WeakPtr<AnimationTimeLine> m_parent;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::SequencePPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API void AddFromTemplate(System::SharedPtr<IShape> shape, EffectType effectType, EffectSubtype subtype, EffectPresetClassType classType);
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


