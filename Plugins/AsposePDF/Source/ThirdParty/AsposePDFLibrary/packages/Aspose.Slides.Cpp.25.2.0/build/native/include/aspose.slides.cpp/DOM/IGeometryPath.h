#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPathSegment;
enum class PathFillModeType : uint8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents geometry path of GeometryShape
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGeometryPath : public virtual System::Object
{
    typedef IGeometryPath ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns geometry path of GeometryShape as an array of path segments. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IPathSegment>> get_PathData() = 0;
    /// <summary>
    /// Sets fill mode
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API PathFillModeType get_FillMode() = 0;
    /// <summary>
    /// Sets fill mode
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FillMode(PathFillModeType value) = 0;
    /// <summary>
    /// Sets stroke appearance
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Stroke() = 0;
    /// <summary>
    /// Sets stroke appearance
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Stroke(bool value) = 0;
    
    /// <summary>
    /// Removes segment at the specified index of the geometry path. 
    /// </summary>
    /// <param name="index"></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Adds line to the end of the path
    /// </summary>
    /// <param name="point">End point of the line</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void LineTo(System::Drawing::PointF point) = 0;
    /// <summary>
    /// Adds line to the end of the path
    /// </summary>
    /// <param name="x">X coordinate of the end point of the line</param>
    /// <param name="y">Y coordinate of the end point of the line</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void LineTo(float x, float y) = 0;
    /// <summary>
    /// Adds line to the specified place of the path
    /// </summary>
    /// <param name="point">End point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void LineTo(System::Drawing::PointF point, uint32_t index) = 0;
    /// <summary>
    /// Adds line to the specified place of the path
    /// </summary>
    /// <param name="x">X coordinate of the point</param>
    /// <param name="y">Y coordinate of the point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void LineTo(float x, float y, uint32_t index) = 0;
    /// <summary>
    /// Adds cubic Bezier curve at the end the path
    /// </summary>
    /// <param name="point1">First direction point</param>
    /// <param name="point2">Second direction point</param>
    /// <param name="point3">End point</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CubicBezierTo(System::Drawing::PointF point1, System::Drawing::PointF point2, System::Drawing::PointF point3) = 0;
    /// <summary>
    /// Adds cubic Bezier curve at the end the path
    /// </summary>
    /// <param name="x1">X coordinate of first direction point</param>
    /// <param name="y1">Y coordinate of first direction point</param>
    /// <param name="x2">X coordinate of second direction point</param>
    /// <param name="y2">Y coordinate of second direction point</param>
    /// <param name="x3">X coordinate of end point</param>
    /// <param name="y3">Y coordinate of end point</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CubicBezierTo(float x1, float y1, float x2, float y2, float x3, float y3) = 0;
    /// <summary>
    /// Adds cubic Bezier curve to the specified place of the path
    /// </summary>
    /// <param name="point1">First direction point</param>
    /// <param name="point2">Second direction point</param>
    /// <param name="point3">End point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CubicBezierTo(System::Drawing::PointF point1, System::Drawing::PointF point2, System::Drawing::PointF point3, uint32_t index) = 0;
    /// <summary>
    /// Adds cubic Bezier curve to the specified place of the path
    /// </summary>
    /// <param name="x1">X coordinate of first direction point</param>
    /// <param name="y1">Y coordinate of first direction point</param>
    /// <param name="x2">X coordinate of second direction point</param>
    /// <param name="y2">Y coordinate of second direction point</param>
    /// <param name="x3">X coordinate of end point</param>
    /// <param name="y3">Y coordinate of end point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CubicBezierTo(float x1, float y1, float x2, float y2, float x3, float y3, uint32_t index) = 0;
    /// <summary>
    /// Adds quadratic Bezier curve at the end the path
    /// </summary>
    /// <param name="point1">Direction point</param>
    /// <param name="point2">End point</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void QuadraticBezierTo(System::Drawing::PointF point1, System::Drawing::PointF point2) = 0;
    /// <summary>
    /// Adds quadratic Bezier curve at the end the path
    /// </summary>
    /// <param name="x1">X coordinate of direction point</param>
    /// <param name="y1">Y coordinate of direction point</param>
    /// <param name="x2">X coordinate of end point</param>
    /// <param name="y2">Y coordinate of end point</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void QuadraticBezierTo(float x1, float y1, float x2, float y2) = 0;
    /// <summary>
    ///  Adds quadratic Bezier curve to the specified place of the path
    /// </summary>
    /// <param name="point1">Direction point</param>
    /// <param name="point2">End point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void QuadraticBezierTo(System::Drawing::PointF point1, System::Drawing::PointF point2, uint32_t index) = 0;
    /// <summary>
    /// Adds quadratic Bezier curve to the specified place of the path
    /// </summary>
    /// <param name="x1">X coordinate of direction point</param>
    /// <param name="y1">Y coordinate of direction point</param>
    /// <param name="x2">X coordinate of end point</param>
    /// <param name="y2">Y coordinate of end point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void QuadraticBezierTo(float x1, float y1, float x2, float y2, uint32_t index) = 0;
    /// <summary>
    /// Closes the current figure of this path
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CloseFigure() = 0;
    /// <summary>
    /// Sets next point position.
    /// </summary>
    /// <param name="point">Point position</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void MoveTo(System::Drawing::PointF point) = 0;
    /// <summary>
    /// Sets next point position.
    /// </summary>
    /// <param name="x">X coordinate of the point</param>
    /// <param name="y">Y Coordinate of the point</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void MoveTo(float x, float y) = 0;
    /// <summary>
    /// Appends the specified arc to the path.
    /// </summary>
    /// <param name="width">Width of the rectangle</param>
    /// <param name="heigth">Height of the rectangle</param>
    /// <param name="startAngle">Start angle.</param>
    /// <param name="sweepAngle"> Sweep angle/</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ArcTo(float width, float heigth, float startAngle, float sweepAngle) = 0;
    
};

} // namespace Slides
} // namespace Aspose


