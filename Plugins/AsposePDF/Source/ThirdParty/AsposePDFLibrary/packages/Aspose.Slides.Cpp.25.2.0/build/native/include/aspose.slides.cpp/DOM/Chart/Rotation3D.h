#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IRotation3D.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class Rotation3DPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class Rotation3DPPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents 3D rotation of a chart.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Rotation3D : public Aspose::Slides::Charts::IRotation3D, public Aspose::Slides::IDOMObject
{
    typedef Rotation3D ThisType;
    typedef Aspose::Slides::Charts::IRotation3D BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::Rotation3DPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the rotation degree around the X-axis, i.e. in the Y direction for 3D charts (between -90 and 90 degrees).
    /// The property matches with the 21.2.2.157 rotX (X Rotation) item in ECMA-376 and with the "Y Rotation" option in PowerPoint 2007+.
    /// Read <see cref="int8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int8_t get_RotationX() override;
    /// <summary>
    /// Sets the rotation degree around the X-axis, i.e. in the Y direction for 3D charts (between -90 and 90 degrees).
    /// The property matches with the 21.2.2.157 rotX (X Rotation) item in ECMA-376 and with the "Y Rotation" option in PowerPoint 2007+.
    /// Write <see cref="int8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotationX(int8_t value) override;
    /// <summary>
    /// Returns the rotation degree around the Y-axis, i.e. in the X direction for 3D charts (between 0 and 360 degrees).
    /// The property matches with the 21.2.2.158 rotY (Y Rotation) item in ECMA-376 and with the "X Rotation" option in PowerPoint 2007+.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_RotationY() override;
    /// <summary>
    /// Sets the rotation degree around the Y-axis, i.e. in the X direction for 3D charts (between 0 and 360 degrees).
    /// The property matches with the 21.2.2.158 rotY (Y Rotation) item in ECMA-376 and with the "X Rotation" option in PowerPoint 2007+.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RotationY(uint16_t value) override;
    /// <summary>
    /// Returns the perspective value (field of view angle) for 3D charts (between 0 and 240).
    /// Ignored if RightAngleAxes property value is true.
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint8_t get_Perspective() override;
    /// <summary>
    /// Sets the perspective value (field of view angle) for 3D charts (between 0 and 240).
    /// Ignored if RightAngleAxes property value is true.
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Perspective(uint8_t value) override;
    /// <summary>
    /// Determines whether the chart axes are at right angles, rather than drawn in perspective.
    /// In other words it determines whether the chart angles of axes are independent from chart 
    /// rotation or elevation.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_RightAngleAxes() override;
    /// <summary>
    /// Determines whether the chart axes are at right angles, rather than drawn in perspective.
    /// In other words it determines whether the chart angles of axes are independent from chart 
    /// rotation or elevation.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RightAngleAxes(bool value) override;
    /// <summary>
    /// Returns the depth of a 3D chart as a percentage of a chart width (between 20 and 2000 percent).
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_DepthPercents() override;
    /// <summary>
    /// Sets the depth of a 3D chart as a percentage of a chart width (between 20 and 2000 percent).
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DepthPercents(uint16_t value) override;
    /// <summary>
    /// Specifies the height of a 3-D chart as a percentage of the chart width (between 5 and 500 percent).
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_HeightPercents() override;
    /// <summary>
    /// Specifies the height of a 3-D chart as a percentage of the chart width (between 5 and 500 percent).
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HeightPercents(uint16_t value) override;
    
protected:

    /// @cond
    int8_t m_rotX;
    uint16_t m_rotY;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::Rotation3DPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API Rotation3D(System::SharedPtr<Chart> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Rotation3D, CODEPORTING_ARGS(System::SharedPtr<Chart> parentImmediate));
    
private:

    System::WeakPtr<IDOMObject> m_parentImmediate;
    uint8_t m_perspective;
    bool m_rAngAxes;
    uint16_t m_depthPercentsIn3D;
    uint16_t m_heightPercents;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::Rotation3DPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


