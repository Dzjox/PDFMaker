#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

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
/// Represents Camera.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICamera : public virtual System::Object
{
    typedef ICamera ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Camera type
    /// Read <see cref="CameraPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API CameraPresetType get_CameraType() = 0;
    /// <summary>
    /// Camera type
    /// Write <see cref="CameraPresetType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CameraType(CameraPresetType value) = 0;
    /// <summary>
    /// Camera FOV (0-180 deg, field of View)
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_FieldOfViewAngle() = 0;
    /// <summary>
    /// Camera FOV (0-180 deg, field of View)
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FieldOfViewAngle(float value) = 0;
    /// <summary>
    /// Camera zoom (positive value in percentage)
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Zoom() = 0;
    /// <summary>
    /// Camera zoom (positive value in percentage)
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Zoom(float value) = 0;
    
    /// <summary>
    /// A rotation is defined through the use of a latitude
    /// coordinate, a longitude coordinate, and a revolution about the axis 
    /// as the latitude and longitude coordinates.
    /// If any of coordinate value is std::numeric_limits<float>::quiet_NaN(), all rotation is undefined.
    /// </summary>
    /// <param name="latitude">Latitude value <see cref="float"></see></param>.
    /// <param name="longitude">Longitude value <see cref="float"></see></param>
    /// <param name="revolution">revolution valule <see cref="float"></see></param> 
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetRotation(float latitude, float longitude, float revolution) = 0;
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


