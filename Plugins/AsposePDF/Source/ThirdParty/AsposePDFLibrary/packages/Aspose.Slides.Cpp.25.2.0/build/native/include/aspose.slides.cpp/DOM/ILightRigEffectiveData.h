#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class LightingDirection;
enum class LightRigPresetType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective light rig properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IThreeDFormatEffectiveData">IThreeDFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ILightRigEffectiveData : public virtual System::Object
{
    typedef ILightRigEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Light direction.
    /// Read-only <see cref="LightingDirection"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LightingDirection get_Direction() = 0;
    /// <summary>
    /// Represents a preset light right that can be applied to a shape. 
    /// The light rig represents a group of lights oriented in a specific way relative to a 3D scene.
    /// Read-only <see cref="LightRigPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LightRigPresetType get_LightType() = 0;
    
    /// <summary>
    /// A rotation is defined through the use of a latitude coordinate, a longitude coordinate, and a revolution about the axis as the latitude and longitude coordinates.
    /// First element in return array - latitude, second - longitude, third - revolution.
    /// </summary>
    /// <returns>Rotation coordinates as <see cref="float"></see>[]</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<float> GetRotation() = 0;
    
};

} // namespace Slides
} // namespace Aspose


