#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IShapeFrame.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Layout
{
class TableLayout;
} // namespace Layout
enum class NullableBool : int8_t;
namespace PptSerialization
{
class AutoShapePPTSerialization;
class OleObjectPptSerialization;
} // namespace PptSerialization
class Shape;
class ShapeCollection;
class ShapeElement;
class ShapeLayout;
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
class ASPOSE_SLIDES_SHARED_CLASS ShapeFrame : public Aspose::Slides::IShapeFrame
{
    typedef ShapeFrame ThisType;
    typedef Aspose::Slides::IShapeFrame BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::ShapeElement;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptSerialization::AutoShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::OleObjectPptSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the X coordinate of the upper-left corner of a frame.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_X() override;
    /// <summary>
    /// Returns the Y coordinate of the upper-left corner of a frame.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Y() override;
    /// <summary>
    /// Returns the width of a frame.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Width() override;
    /// <summary>
    /// Returns the height of a frame.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Height() override;
    /// <summary>
    /// Returns the number of degrees a frame is rotated around the z-axis.
    /// A positive value indicates clockwise rotation; a negative value
    /// indicates counterclockwise rotation.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Rotation() override;
    /// <summary>
    /// Returns the X coordinate of a frame's center.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_CenterX() override;
    /// <summary>
    /// Returns the Y coordinate of a frame's center.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_CenterY() override;
    /// <summary>
    /// Determines whether a frame is flipped horizontally.
    /// Read-only <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_FlipH() override;
    /// <summary>
    /// Determines whether a frame is flipped vertically.
    /// Read-only <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_FlipV() override;
    /// <summary>
    /// Returns the coordinates of a frame.
    /// Read-only <see cref="System::Drawing::RectangleF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::RectangleF get_Rectangle() override;
    
    /// <summary>
    /// Creates new shape frame's properties.
    /// </summary>
    /// <param name="x">X coordinate of a frame.</param>
    /// <param name="y">Y coordinate of a frame.</param>
    /// <param name="width">Width of a frame.</param>
    /// <param name="height">Height of a frame.</param>
    /// <param name="flipH">True if a frame flipped horizontally.</param>
    /// <param name="flipV">True if a frame flipped vertivally.</param>
    /// <param name="rotationAngle">Number of degrees a frame is rotated.</param>
    ASPOSE_SLIDES_SHARED_API ShapeFrame(float x, float y, float width, float height, NullableBool flipH, NullableBool flipV, float rotationAngle);
    
    /// <summary>
    /// Clones
    /// </summary>
    /// <returns>Cloned shape frame.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> Clone() override;
    /// <summary>
    /// Clones.
    /// </summary>
    /// <returns>Cloned shape frame.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeFrame> CloneT() override;
    /// <summary>
    /// Returns a value indicating whether this instance is equal to a specified object.
    /// </summary>
    /// <param name="obj">The object to compare with this instance.</param>
    /// <returns><b>True</b> if obj is a ShapeFrame that has the same value as this instance; otherwise, <b>false</b>.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns a value indicating whether this instance is equal to a specified object.
    /// </summary>
    /// <param name="value">The ShapeFRameEx to compare with this instance.</param>
    /// <returns><b>True</b> if value is a ShapeFrame that has the same value as this instance; otherwise, <b>false</b>.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<ShapeFrame> value);
    /// <summary>
    /// Returns a hash code for this object.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API ShapeFrame();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShapeFrame, CODEPORTING_ARGS());
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API float NormalizeRotation(double rotation);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ShapeFrame();
    
private:

    float m_x;
    float m_y;
    float m_w;
    float m_h;
    float m_a;
    NullableBool m_fh;
    NullableBool m_fv;
    
    ASPOSE_SLIDES_LOCAL_API void Init(float x, float y, float width, float height, NullableBool flipH, NullableBool flipV, float rotationAngle);
    
};

} // namespace Slides
} // namespace Aspose


