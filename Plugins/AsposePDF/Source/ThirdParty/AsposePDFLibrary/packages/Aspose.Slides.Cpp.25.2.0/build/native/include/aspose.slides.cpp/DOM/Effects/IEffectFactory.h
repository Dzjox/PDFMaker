#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IGlow;
class IImageTransformOperationFactory;
class IInnerShadow;
class IOuterShadow;
class IPresetShadow;
class IReflection;
class ISoftEdge;
} // namespace Effects
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Allows to create effects' instances
/// </summary>
/// <remarks>
/// For COM compatibility.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IEffectFactory : public virtual System::Object
{
    typedef IEffectFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns ImageTransformOperationFactory.
    /// Read-only <see cref="Aspose::Slides::Effects::IImageTransformOperationFactory">IImageTransformOperationFactory</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImageTransformOperationFactory> get_ImageTransformOperationFactory() = 0;
    
    /// <summary>
    /// Creates Glow effect.
    /// </summary>
    /// <returns>Glow effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGlow> CreateGlow() = 0;
    /// <summary>
    /// Creates Inner shafow effect.
    /// </summary>
    /// <returns>Inner shafow effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInnerShadow> CreateInnerShadow() = 0;
    /// <summary>
    /// Creates Outer shadow effect.
    /// </summary>
    /// <returns>Outer shadow effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IOuterShadow> CreateOuterShadow() = 0;
    /// <summary>
    /// Creates Preset shadow effect.
    /// </summary>
    /// <returns>Preset shadow effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresetShadow> CreatePresetShadow() = 0;
    /// <summary>
    /// Creates Reflection effect.
    /// </summary>
    /// <returns>Reflection effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IReflection> CreateReflection() = 0;
    /// <summary>
    /// Creates Soft Edge effect.
    /// </summary>
    /// <returns>Soft Edge effect.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISoftEdge> CreateSoftEdge() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


