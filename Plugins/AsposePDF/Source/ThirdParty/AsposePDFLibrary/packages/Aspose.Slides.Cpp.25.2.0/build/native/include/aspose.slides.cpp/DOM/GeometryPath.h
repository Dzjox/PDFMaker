#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IGeometryPath.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPathSegment;
enum class PathCommandType : uint8_t;
enum class PathFillModeType : uint8_t;
class PathSegment;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class Path;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class PointF;
class RectangleF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents geometry path of GeometryShape
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GeometryPath final : public Aspose::Slides::IGeometryPath
{
    typedef GeometryPath ThisType;
    typedef Aspose::Slides::IGeometryPath BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Path;
    /// @endcond
    
public:

    /// <summary>
    /// Returns geometry path of GeometryShape as an array of path segments. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IPathSegment>> get_PathData() override;
    /// <summary>
    /// Sets fill mode
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PathFillModeType get_FillMode() override;
    /// <summary>
    /// Sets fill mode
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FillMode(PathFillModeType value) override;
    /// <summary>
    /// Sets stroke appearance
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Stroke() override;
    /// <summary>
    /// Sets stroke appearance
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Stroke(bool value) override;
    
    /// <summary>
    /// Creates instance of GeometryPath
    /// </summary>
    ASPOSE_SLIDES_SHARED_API GeometryPath();
    
    /// <summary>
    /// Removes segment at the specified index of the geometry path. 
    /// </summary>
    /// <param name="index"></param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Adds line to the end of the path
    /// </summary>
    /// <param name="point">End point of the line</param>
    ASPOSE_SLIDES_SHARED_API void LineTo(System::Drawing::PointF point) override;
    /// <summary>
    /// Adds line to the end of the path
    /// </summary>
    /// <param name="x">X coordinate of the end point of the line</param>
    /// <param name="y">Y coordinate of the end point of the line</param>
    ASPOSE_SLIDES_SHARED_API void LineTo(float x, float y) override;
    /// <summary>
    /// Adds line to the specified place of the path
    /// </summary>
    /// <param name="point">End point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    ASPOSE_SLIDES_SHARED_API void LineTo(System::Drawing::PointF point, uint32_t index) override;
    /// <summary>
    /// Adds line to the specified place of the path
    /// </summary>
    /// <param name="x">X coordinate of the point</param>
    /// <param name="y">Y coordinate of the point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    ASPOSE_SLIDES_SHARED_API void LineTo(float x, float y, uint32_t index) override;
    /// <summary>
    /// Adds cubic Bezier curve at the end the path
    /// </summary>
    /// <param name="point1">First direction point</param>
    /// <param name="point2">Second direction point</param>
    /// <param name="point3">End point</param>
    ASPOSE_SLIDES_SHARED_API void CubicBezierTo(System::Drawing::PointF point1, System::Drawing::PointF point2, System::Drawing::PointF point3) override;
    /// <summary>
    /// Adds cubic Bezier curve at the end the path
    /// </summary>
    /// <param name="x1">X coordinate of first direction point</param>
    /// <param name="y1">Y coordinate of first direction point</param>
    /// <param name="x2">X coordinate of second direction point</param>
    /// <param name="y2">Y coordinate of second direction point</param>
    /// <param name="x3">X coordinate of end point</param>
    /// <param name="y3">Y coordinate of end point</param>
    ASPOSE_SLIDES_SHARED_API void CubicBezierTo(float x1, float y1, float x2, float y2, float x3, float y3) override;
    /// <summary>
    /// Adds cubic Bezier curve to the specified place of the path
    /// </summary>
    /// <param name="point1">First direction point</param>
    /// <param name="point2">Second direction point</param>
    /// <param name="point3">End point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    ASPOSE_SLIDES_SHARED_API void CubicBezierTo(System::Drawing::PointF point1, System::Drawing::PointF point2, System::Drawing::PointF point3, uint32_t index) override;
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
    ASPOSE_SLIDES_SHARED_API void CubicBezierTo(float x1, float y1, float x2, float y2, float x3, float y3, uint32_t index) override;
    /// <summary>
    /// Adds quadratic Bezier curve at the end the path
    /// </summary>
    /// <param name="point1">Direction point</param>
    /// <param name="point2">End point</param>
    ASPOSE_SLIDES_SHARED_API void QuadraticBezierTo(System::Drawing::PointF point1, System::Drawing::PointF point2) override;
    /// <summary>
    /// Adds quadratic Bezier curve at the end the path
    /// </summary>
    /// <param name="x1">X coordinate of direction point</param>
    /// <param name="y1">Y coordinate of direction point</param>
    /// <param name="x2">X coordinate of end point</param>
    /// <param name="y2">Y coordinate of end point</param>
    ASPOSE_SLIDES_SHARED_API void QuadraticBezierTo(float x1, float y1, float x2, float y2) override;
    /// <summary>
    ///  Adds quadratic Bezier curve to the specified place of the path
    /// </summary>
    /// <param name="point1">Direction point</param>
    /// <param name="point2">End point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    ASPOSE_SLIDES_SHARED_API void QuadraticBezierTo(System::Drawing::PointF point1, System::Drawing::PointF point2, uint32_t index) override;
    /// <summary>
    /// Adds quadratic Bezier curve to the specified place of the path
    /// </summary>
    /// <param name="x1">X coordinate of direction point</param>
    /// <param name="y1">Y coordinate of direction point</param>
    /// <param name="x2">X coordinate of end point</param>
    /// <param name="y2">Y coordinate of end point</param>
    /// <param name="index">Index of segment in PathData</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Segment index is out of PathData range</exception>
    ASPOSE_SLIDES_SHARED_API void QuadraticBezierTo(float x1, float y1, float x2, float y2, uint32_t index) override;
    /// <summary>
    /// Closes the current figure of this path
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void CloseFigure() override;
    /// <summary>
    /// Sets next point position.
    /// </summary>
    /// <param name="point">Point position</param>
    ASPOSE_SLIDES_SHARED_API void MoveTo(System::Drawing::PointF point) override;
    /// <summary>
    /// Sets next point position.
    /// </summary>
    /// <param name="x">X coordinate of the point</param>
    /// <param name="y">Y Coordinate of the point</param>
    ASPOSE_SLIDES_SHARED_API void MoveTo(float x, float y) override;
    /// <summary>
    /// Appends the specified arc to the path.
    /// </summary>
    /// <param name="width">Width of the rectangle</param>
    /// <param name="heigth">Height of the rectangle</param>
    /// <param name="startAngle">Start angle.</param>
    /// <param name="sweepAngle"> Sweep angle/</param>
    ASPOSE_SLIDES_SHARED_API void ArcTo(float width, float heigth, float startAngle, float sweepAngle) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::Drawing::RectangleF GetBounds();
    
    ASPOSE_SLIDES_LOCAL_API GeometryPath(PathFillModeType fillMode, bool stroke);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GeometryPath, CODEPORTING_ARGS(PathFillModeType fillMode, bool stroke));
    
private:

    PathFillModeType m_fillMode;
    bool m_stroke;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PathSegment>>> m_pathData;
    
    ASPOSE_SLIDES_LOCAL_API void ValidatePoints(System::ArrayPtr<float> pathData);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PathSegment> AddSegment(PathCommandType pathType, System::ArrayPtr<float> pathData);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PathSegment> AddSegment(PathCommandType pathType, System::ArrayPtr<float> pathData, uint32_t index);
    
};

} // namespace Slides
} // namespace Aspose


