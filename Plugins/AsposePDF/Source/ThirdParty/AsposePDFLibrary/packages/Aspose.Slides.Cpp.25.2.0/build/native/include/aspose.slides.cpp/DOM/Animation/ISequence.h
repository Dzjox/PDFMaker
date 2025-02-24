#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class EffectChartMajorGroupingType;
enum class EffectChartMinorGroupingType;
enum class EffectSubtype;
enum class EffectTriggerType;
enum class EffectType;
class IEffect;
} // namespace Animation
namespace Charts
{
class IChart;
} // namespace Charts
class IParagraph;
class IShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents sequence (collection of effects).
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISequence : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::IEffect>>
{
    typedef ISequence ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::IEffect>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the number of effects in a sequense.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    /// <summary>
    /// Returns shape target for INTERACTIVE sequence.
    /// If sequence is not interactive then returns null.
    /// Read <see cref="IShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_TriggerShape() = 0;
    /// <summary>
    /// Sets shape target for INTERACTIVE sequence.
    /// If sequence is not interactive then returns null.
    /// Write <see cref="IShape"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TriggerShape(System::SharedPtr<IShape> value) = 0;
    
    /// <summary>
    /// Removes specified effect from a collection.
    /// </summary>
    /// <param name="item">Effect to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IEffect> item) = 0;
    /// <summary>
    /// Removes an effect from a collection.
    /// </summary>
    /// <param name="index">Index of effect to remove <see cref="int32_t"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all effects from a collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
    /// <summary>
    /// Returns an effect at the specified index.
    /// </summary>
    /// <param name="index">Index</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffect> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Remove effect for the specified shape.
    /// </summary>
    /// <param name="shape">Shape object <see cref="IShape"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveByShape(System::SharedPtr<IShape> shape) = 0;
    /// <summary>
    /// Returns array of effects for the specified shape.
    /// </summary>
    /// <param name="shape">Shape object <see cref="IShape"></see></param>
    /// <returns>Array of effects <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IEffect>> GetEffectsByShape(System::SharedPtr<IShape> shape) = 0;
    /// <summary>
    /// Returns array of effects for the specified paragraph.
    /// </summary>
    /// <param name="paragraph">Paragraph object <see cref="IParagraph"></see></param>
    /// <returns>Array of effects <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IEffect>> GetEffectsByParagraph(System::SharedPtr<IParagraph> paragraph) = 0;
    /// <summary>
    /// Returns count of effects for the specified shape.
    /// </summary>
    /// <param name="shape">Shape object <see cref="IShape"></see></param>
    /// <returns>Count of effects <see cref="int32_t"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t GetCount(System::SharedPtr<IShape> shape) = 0;
    /// <summary>
    /// Add new effect to the end of sequence.
    /// </summary>
    /// <param name="shape">Shape object <see cref="IShape"></see> for adding an effect</param>
    /// <param name="effectType">Type of an animation effect <see cref="EffectType"></see></param>
    /// <param name="subtype">Subtypes of animation effect <see cref="EffectSubtype"></see></param>
    /// <param name="triggerType">Trigger type of effect <see cref="EffectTriggerType"></see></param>
    /// <returns>New effect object <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffect> AddEffect(System::SharedPtr<IShape> shape, EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffect> AddEffect(System::SharedPtr<IParagraph> paragraph, EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffect> AddEffect(System::SharedPtr<Aspose::Slides::Charts::IChart> chart, EffectChartMajorGroupingType type, int32_t index, EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffect> AddEffect(System::SharedPtr<Aspose::Slides::Charts::IChart> chart, EffectChartMinorGroupingType type, int32_t seriesIndex, int32_t categoriesIndex, EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


