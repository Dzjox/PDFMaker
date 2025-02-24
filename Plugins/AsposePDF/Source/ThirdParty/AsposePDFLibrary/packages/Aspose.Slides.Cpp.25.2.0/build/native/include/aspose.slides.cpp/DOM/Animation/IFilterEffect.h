#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Animation/IBehavior.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
enum class FilterEffectRevealType;
enum class FilterEffectSubtype;
enum class FilterEffectType;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent filter effect of behavior.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFilterEffect : public virtual Aspose::Slides::Animation::IBehavior
{
    typedef IFilterEffect ThisType;
    typedef Aspose::Slides::Animation::IBehavior BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents that effect with behavior must reveal (in/out)
    /// Read <see cref="FilterEffectRevealType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API FilterEffectRevealType get_Reveal() = 0;
    /// <summary>
    /// Represents that effect with behavior must reveal (in/out)
    /// Write <see cref="FilterEffectRevealType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Reveal(FilterEffectRevealType value) = 0;
    /// <summary>
    /// Represents type of filter effect.
    /// Read <see cref="FilterEffectType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API FilterEffectType get_Type() = 0;
    /// <summary>
    /// Represents type of filter effect.
    /// Write <see cref="FilterEffectType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(FilterEffectType value) = 0;
    /// <summary>
    /// Represents subtype of filter effect.
    /// Read <see cref="FilterEffectSubtype"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API FilterEffectSubtype get_Subtype() = 0;
    /// <summary>
    /// Represents subtype of filter effect.
    /// Write <see cref="FilterEffectSubtype"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Subtype(FilterEffectSubtype value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


