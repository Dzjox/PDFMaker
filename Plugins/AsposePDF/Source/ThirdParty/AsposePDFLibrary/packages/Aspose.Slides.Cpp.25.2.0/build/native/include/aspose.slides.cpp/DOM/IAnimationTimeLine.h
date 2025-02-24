#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

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
class IEffect;
class ISequence;
class ISequenceCollection;
class ITextAnimation;
class ITextAnimationCollection;
} // namespace Animation
class IShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents timeline of animation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAnimationTimeLine : public virtual System::Object
{
    typedef IAnimationTimeLine ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns collection of interactive sequences.
    /// This sequences may contain only effects by "click on shape" with specifies target shape.
    /// Read-only <see cref="Aspose::Slides::Animation::ISequenceCollection">Animation::ISequenceCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Animation::ISequenceCollection> get_InteractiveSequences() = 0;
    /// <summary>
    /// Returns main sequence which may contain only main effects collection.
    /// Read-only <see cref="Aspose::Slides::Animation::ISequence">Animation::ISequence</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Animation::ISequence> get_MainSequence() = 0;
    /// <summary>
    /// Returns collection of text animations.
    /// Read-only <see cref="Aspose::Slides::Animation::ITextAnimationCollection">Animation::ITextAnimationCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Animation::ITextAnimationCollection> get_TextAnimationCollection() = 0;
    
    /// <summary>
    /// Returns interactive sequence at the specified index.
    /// This sequence may contain only effects by "click on shape" with specifies target shape.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Animation::ISequence> get_InteractiveSequence(int32_t index) = 0;
    /// <summary>
    /// Returns effect from main sequence at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Animation::IEffect> get_MainSequenceEffect(int32_t index) = 0;
    /// <summary>
    /// Returns text animation at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Animation::ITextAnimation> get_TextAnimation(int32_t index) = 0;
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<Animation::ITextAnimation>> get_TextAnimation(System::SharedPtr<IShape> shape) = 0;
    
};

} // namespace Slides
} // namespace Aspose


