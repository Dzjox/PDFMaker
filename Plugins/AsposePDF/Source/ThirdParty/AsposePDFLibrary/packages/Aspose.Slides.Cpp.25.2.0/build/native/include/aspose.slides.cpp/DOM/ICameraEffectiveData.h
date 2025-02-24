#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class CameraPresetType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective camera properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IThreeDFormatEffectiveData">IThreeDFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ICameraEffectiveData : public virtual System::Object
{
    typedef ICameraEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Camera type.
    /// Read-only <see cref="CameraPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API CameraPresetType get_CameraType() = 0;
    /// <summary>
    /// Camera FOV (0-180 deg, field of View).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FieldOfViewAngle() = 0;
    /// <summary>
    /// Camera zoom (positive value in percentage).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Zoom() = 0;
    
    /// <summary>
    /// A rotation is defined through the use of a latitude
    /// coordinate, a longitude coordinate, and a revolution about the axis 
    /// as the latitude and longitude coordinates.
    /// first element in return array - latitude, second - longitude, third - revolution.
    /// Returns null if no rotation defined.
    /// </summary>
    /// <returns>
    /// Array of rotation values as <see cref="float"></see>[].
    /// </returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<float> GetRotation() = 0;
    
};

} // namespace Slides
} // namespace Aspose


