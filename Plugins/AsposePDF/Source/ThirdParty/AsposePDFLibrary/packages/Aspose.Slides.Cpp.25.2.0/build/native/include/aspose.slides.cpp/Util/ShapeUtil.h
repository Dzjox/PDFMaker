#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IGeometryPath;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
namespace Drawing2D
{
class GraphicsPath;
} // namespace Drawing2D
} // namespace Drawing
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Util {

/// <summary>
/// Offer methods which helps to process shapes objects.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ShapeUtil
{
    typedef ShapeUtil ThisType;
    
public:

    /// @deprecated This method will be removed after release of version 24.7.
    /// <summary>
    /// Converts a <see cref="System::Drawing::Drawing2D::GraphicsPath"></see> to the <see cref="IGeometryPath"></see>
    /// <remarks>
    /// Return value of the method call can be used to change the geometry of a IGeometryShape object with
    /// IGeometryShape::SetGeometryPaths method.
    /// </remarks>
    /// </summary>
    /// <param name="graphicsPath">Graphics path</param>
    /// <returns>Geometry path</returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGeometryPath> GraphicsPathToGeometryPath(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> graphicsPath);
    /// @deprecated This method will be removed after release of version 24.7.
    /// <summary>
    /// Converts <see cref="IGeometryPath"></see> to <see cref="System::Drawing::Drawing2D::GraphicsPath"></see>.
    /// <remarks>
    /// </remarks>
    /// GraphicsPath can be transformed in a different ways using its convenient methods and then transformed back into
    /// the <see cref="IGeometryPath"></see> to use in <see cref="GeometryShape"></see> via <see cref="ShapeUtil::GraphicsPathToGeometryPath"></see> method.
    /// </summary>
    /// <param name="geometryPath"></param>
    /// <returns>Graphics path</returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> GeometryPathToGraphicsPath(System::SharedPtr<IGeometryPath> geometryPath);
    
public:
    ShapeUtil() = delete;
};

} // namespace Util
} // namespace Slides
} // namespace Aspose


