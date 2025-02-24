#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

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
class ASPOSE_SLIDES_API_SHARED_CLASS IBehaviorFactory : public virtual System::Object
{
    typedef IBehaviorFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates color effect.
    /// </summary>
    /// <returns>Color effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorEffect> CreateColorEffect() = 0;
    /// <summary>
    /// Creates command effect.
    /// </summary>
    /// <returns>Command effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommandEffect> CreateCommandEffect() = 0;
    /// <summary>
    /// Creates filter effect.
    /// </summary>
    /// <returns>Filter effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFilterEffect> CreateFilterEffect() = 0;
    /// <summary>
    /// Creates motion effect.
    /// </summary>
    /// <returns>Motion effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMotionEffect> CreateMotionEffect() = 0;
    /// <summary>
    /// Creates property effect.
    /// </summary>
    /// <returns>Property effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPropertyEffect> CreatePropertyEffect() = 0;
    /// <summary>
    /// Creates rotation effect.
    /// </summary>
    /// <returns>Rotation effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IRotationEffect> CreateRotationEffect() = 0;
    /// <summary>
    /// Creates scale effect.
    /// </summary>
    /// <returns>Scale effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IScaleEffect> CreateScaleEffect() = 0;
    /// <summary>
    /// Creates set effect.
    /// </summary>
    /// <returns>Set effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISetEffect> CreateSetEffect() = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


