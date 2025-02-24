#pragma once

#include <DOM/Animation/IBehaviorFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class IColorEffect;
class ICommandEffect;
class IFilterEffect;
class IMotionEffect;
class IPropertyEffect;
class IRotationEffect;
class IScaleEffect;
class ISetEffect;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Allows to create animation effects
/// </summary>
/// <remarks>
/// For COM compatibility.
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS BehaviorFactory : public Aspose::Slides::Animation::IBehaviorFactory
{
    typedef BehaviorFactory ThisType;
    typedef Aspose::Slides::Animation::IBehaviorFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates color effect.
    /// </summary>
    /// <returns>Color effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorEffect> CreateColorEffect() override;
    /// <summary>
    /// Creates command effect.
    /// </summary>
    /// <returns>Command effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommandEffect> CreateCommandEffect() override;
    /// <summary>
    /// Creates filter effect.
    /// </summary>
    /// <returns>Filter effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFilterEffect> CreateFilterEffect() override;
    /// <summary>
    /// Creates motion effect.
    /// </summary>
    /// <returns>Motion effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMotionEffect> CreateMotionEffect() override;
    /// <summary>
    /// Creates property effect.
    /// </summary>
    /// <returns>Property effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPropertyEffect> CreatePropertyEffect() override;
    /// <summary>
    /// Creates rotation effect.
    /// </summary>
    /// <returns>Rotation effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IRotationEffect> CreateRotationEffect() override;
    /// <summary>
    /// Creates scale effect.
    /// </summary>
    /// <returns>Scale effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IScaleEffect> CreateScaleEffect() override;
    /// <summary>
    /// Creates set effect.
    /// </summary>
    /// <returns>Set effect.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISetEffect> CreateSetEffect() override;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


