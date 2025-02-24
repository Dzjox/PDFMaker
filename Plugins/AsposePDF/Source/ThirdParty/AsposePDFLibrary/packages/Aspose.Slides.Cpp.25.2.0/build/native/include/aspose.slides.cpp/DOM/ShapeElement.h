#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IShapeElement.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
namespace ThreeD
{
class FlatShapeRenderer;
class ShapeRenderer;
} // namespace ThreeD
} // namespace Drawing
namespace Export
{
class DrawingMLExporter;
} // namespace Export
class GeometryShapeLayout;
namespace PresentationML
{
class Geometry2D;
} // namespace PresentationML
class Shape;
enum class ShapeElementFillSource : uint8_t;
class ShapeElementStroke;
enum class ShapeElementStrokeSource : uint8_t;
enum class ShapeElementType;
class ShapeFrame;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
namespace Drawing2D
{
class GraphicsPath;
class Matrix;
} // namespace Drawing2D
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a part of shape with same outline and fill properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ShapeElement : public Aspose::Slides::IShapeElement
{
    typedef ShapeElement ThisType;
    typedef Aspose::Slides::IShapeElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::ThreeD::FlatShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::ShapeRenderer;
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::PresentationML::Geometry2D;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a Shape_PPT for which element was created.
    /// Read-only <see cref="Aspose::Slides::Shape">Shape</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Shape> get_ParentShape();
    /// @deprecated This property will be removed after release of version 24.7.
    /// <summary>
    /// Returns an element's path.
    /// Read-only <see cref="System::Drawing::Drawing2D::GraphicsPath"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> get_GraphicsPath();
    /// <summary>
    /// Returns information about how to fill an element.
    /// Read-only <see cref="ShapeElementFillSource"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ShapeElementFillSource get_FillSource();
    /// <summary>
    /// Returns information about how to stroke an element.
    /// Read-only <see cref="ShapeElementStrokeSource"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ShapeElementStrokeSource get_StrokeSource();
    
protected:

    /// @cond
    System::WeakPtr<Shape> m_parent;
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> m_path;
    bool m_invisibleForDecoration;
    ShapeElementType m_type;
    ShapeElementFillSource m_fillSource;
    ShapeElementStrokeSource m_strokeSource;
    System::SharedPtr<ShapeElementStroke> m_stroke;
    System::SharedPtr<ShapeFrame> m_frame;
    
    ASPOSE_SLIDES_LOCAL_API ShapeElementType get_ElementType();
    
    ASPOSE_SLIDES_LOCAL_API void Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> m);
    
    ASPOSE_SLIDES_LOCAL_API ShapeElement(System::SharedPtr<Shape> shape, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path, ShapeElementType type, bool invisibleForDecoration, ShapeElementFillSource fillSource, ShapeElementStrokeSource strokeSource, System::SharedPtr<ShapeElementStroke> stroke);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShapeElement, CODEPORTING_ARGS(System::SharedPtr<Shape> shape, System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path, ShapeElementType type, bool invisibleForDecoration, ShapeElementFillSource fillSource, ShapeElementStrokeSource strokeSource, System::SharedPtr<ShapeElementStroke> stroke));
    
};

} // namespace Slides
} // namespace Aspose


