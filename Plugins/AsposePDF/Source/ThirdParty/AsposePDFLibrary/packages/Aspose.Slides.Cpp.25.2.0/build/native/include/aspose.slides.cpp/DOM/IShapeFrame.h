#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGenericCloneable.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class NullableBool : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class RectangleF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents shape frame's properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IShapeFrame : public Aspose::Slides::IGenericCloneable<System::SharedPtr<Aspose::Slides::IShapeFrame>>
{
    typedef IShapeFrame ThisType;
    typedef Aspose::Slides::IGenericCloneable<System::SharedPtr<Aspose::Slides::IShapeFrame>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the X coordinate of the upper-left corner of a frame.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_X() = 0;
    /// <summary>
    /// Returns the Y coordinate of the upper-left corner of a frame.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Y() = 0;
    /// <summary>
    /// Returns the width of a frame.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Width() = 0;
    /// <summary>
    /// Returns the height of a frame.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Height() = 0;
    /// <summary>
    /// Returns the number of degrees a frame is rotated around the z-axis.
    /// A positive value indicates clockwise rotation; a negative value
    /// indicates counterclockwise rotation.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Rotation() = 0;
    /// <summary>
    /// Returns the X coordinate of a frame's center.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CenterX() = 0;
    /// <summary>
    /// Returns the Y coordinate of a frame's center.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_CenterY() = 0;
    /// <summary>
    /// Determines whether a frame is flipped horizontally.
    /// Read-only <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_FlipH() = 0;
    /// <summary>
    /// Determines whether a frame is flipped vertically.
    /// Read-only <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_FlipV() = 0;
    /// <summary>
    /// Returns the coordinates of a frame.
    /// Read-only <see cref="System::Drawing::RectangleF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::RectangleF get_Rectangle() = 0;
    
};

} // namespace Slides
} // namespace Aspose


