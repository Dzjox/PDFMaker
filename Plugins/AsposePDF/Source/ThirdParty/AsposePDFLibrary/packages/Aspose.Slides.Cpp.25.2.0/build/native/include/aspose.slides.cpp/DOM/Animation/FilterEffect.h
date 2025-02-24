#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Animation/IFilterEffect.h>

#include "DOM/Animation/Behavior.h"
#include "aspose_slides_api_defs.h"

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
namespace PptxSerialization
{
namespace PartParser
{
class FilterEffectPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace TimeLine
{
class FilterEffectPPTXUnsupportedProps;
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
/// Represent filter effect of behavior.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FilterEffect : public Aspose::Slides::Animation::Behavior, public Aspose::Slides::Animation::IFilterEffect
{
    typedef FilterEffect ThisType;
    typedef Aspose::Slides::Animation::Behavior BaseType;
    typedef Aspose::Slides::Animation::IFilterEffect BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::FilterEffectPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Represents that effect with behavior must reveal (in/out)
    /// Read <see cref="FilterEffectRevealType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API FilterEffectRevealType get_Reveal() override;
    /// <summary>
    /// Represents that effect with behavior must reveal (in/out)
    /// Write <see cref="FilterEffectRevealType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Reveal(FilterEffectRevealType value) override;
    /// <summary>
    /// Represents type of filter effect.
    /// Read <see cref="FilterEffectType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API FilterEffectType get_Type() override;
    /// <summary>
    /// Represents type of filter effect.
    /// Write <see cref="FilterEffectType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(FilterEffectType value) override;
    /// <summary>
    /// Represents subtype of filter effect.
    /// Read <see cref="FilterEffectSubtype"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API FilterEffectSubtype get_Subtype() override;
    /// <summary>
    /// Represents subtype of filter effect.
    /// Write <see cref="FilterEffectSubtype"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Subtype(FilterEffectSubtype value) override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API FilterEffect();
    
protected:

    /// @cond
    FilterEffectType m_type;
    FilterEffectSubtype m_subtype;
    FilterEffectRevealType m_reveal;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TimeLine::FilterEffectPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    /// @endcond
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


