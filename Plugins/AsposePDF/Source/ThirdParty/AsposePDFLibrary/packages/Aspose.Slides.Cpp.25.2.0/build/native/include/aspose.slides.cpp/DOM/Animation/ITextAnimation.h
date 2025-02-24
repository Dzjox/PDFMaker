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
enum class BuildType;
enum class EffectSubtype;
enum class EffectTriggerType;
enum class EffectType;
class IEffect;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent text animation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextAnimation : public virtual System::Object
{
    typedef ITextAnimation ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// List of build type (for exp. Paragraph 1,2,3, All at Once) of text animation.
    /// Read <see cref="BuildType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Animation::BuildType get_BuildType() = 0;
    /// <summary>
    /// List of build type (for exp. Paragraph 1,2,3, All at Once) of text animation.
    /// Write <see cref="BuildType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BuildType(Aspose::Slides::Animation::BuildType value) = 0;
    /// <summary>
    /// Linked shape effect with group or not (null)
    /// Read <see cref="Aspose::Slides::Animation::IEffect">IEffect</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffect> get_EffectAnimateBackgroundShape() = 0;
    /// <summary>
    /// Linked shape effect with group or not (null)
    /// Write <see cref="Aspose::Slides::Animation::IEffect">IEffect</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EffectAnimateBackgroundShape(System::SharedPtr<IEffect> value) = 0;
    
    /// <summary>
    /// Add new effect to the end of current sequence to end of group text animations.
    /// Only valid if count of text paragraphs equal or greater of counts effect of this group!
    /// </summary>
    /// <param name="effectType">Type of an animation effect <see cref="EffectType"></see></param>
    /// <param name="subtype">Subtypes of animation effect <see cref="EffectSubtype"></see></param>
    /// <param name="triggerType">Trigger type of effect <see cref="EffectTriggerType"></see></param>
    /// <returns>New effect object <see cref="Aspose::Slides::Animation::IEffect">IEffect</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffect> AddEffect(EffectType effectType, EffectSubtype subtype, EffectTriggerType triggerType) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


