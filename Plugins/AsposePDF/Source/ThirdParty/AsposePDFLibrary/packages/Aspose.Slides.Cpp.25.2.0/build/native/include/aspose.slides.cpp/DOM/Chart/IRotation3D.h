#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents 3D rotation of a chart.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IRotation3D : public virtual System::Object
{
    typedef IRotation3D ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the rotation degree around the X-axis, i.e. in the Y direction for 3D charts (between -90 and 90 degrees).
    /// The property matches with the 21.2.2.157 rotX (X Rotation) item in ECMA-376 and with the "Y Rotation" option in PowerPoint 2007+.
    /// Read <see cref="int8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int8_t get_RotationX() = 0;
    /// <summary>
    /// Sets the rotation degree around the X-axis, i.e. in the Y direction for 3D charts (between -90 and 90 degrees).
    /// The property matches with the 21.2.2.157 rotX (X Rotation) item in ECMA-376 and with the "Y Rotation" option in PowerPoint 2007+.
    /// Write <see cref="int8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotationX(int8_t value) = 0;
    /// <summary>
    /// Returns the rotation degree around the Y-axis, i.e. in the X direction for 3D charts (between 0 and 360 degrees).
    /// The property matches with the 21.2.2.158 rotY (Y Rotation) item in ECMA-376 and with the "X Rotation" option in PowerPoint 2007+.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_RotationY() = 0;
    /// <summary>
    /// Sets the rotation degree around the Y-axis, i.e. in the X direction for 3D charts (between 0 and 360 degrees).
    /// The property matches with the 21.2.2.158 rotY (Y Rotation) item in ECMA-376 and with the "X Rotation" option in PowerPoint 2007+.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotationY(uint16_t value) = 0;
    /// <summary>
    /// Returns the perspective value (field of view angle) for 3D charts (between 0 and 100).
    /// Ignored if RightAngleAxes property value is true.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_Perspective() = 0;
    /// <summary>
    /// Sets the perspective value (field of view angle) for 3D charts (between 0 and 100).
    /// Ignored if RightAngleAxes property value is true.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Perspective(uint8_t value) = 0;
    /// <summary>
    /// Determines whether the chart axes are at right angles, rather than drawn in perspective.
    /// In other words it determines whether the chart angles of axes are independent from chart 
    /// rotation or elevation.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RightAngleAxes() = 0;
    /// <summary>
    /// Determines whether the chart axes are at right angles, rather than drawn in perspective.
    /// In other words it determines whether the chart angles of axes are independent from chart 
    /// rotation or elevation.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RightAngleAxes(bool value) = 0;
    /// <summary>
    /// Returns the depth of a 3D chart as a percentage of a chart width (between 20 and 2000 percent).
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_DepthPercents() = 0;
    /// <summary>
    /// Sets the depth of a 3D chart as a percentage of a chart width (between 20 and 2000 percent).
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DepthPercents(uint16_t value) = 0;
    /// <summary>
    /// Specifies the height of a 3-D chart as a percentage of the chart width (between 5 and 500 percent).
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_HeightPercents() = 0;
    /// <summary>
    /// Specifies the height of a 3-D chart as a percentage of the chart width (between 5 and 500 percent).
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HeightPercents(uint16_t value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


