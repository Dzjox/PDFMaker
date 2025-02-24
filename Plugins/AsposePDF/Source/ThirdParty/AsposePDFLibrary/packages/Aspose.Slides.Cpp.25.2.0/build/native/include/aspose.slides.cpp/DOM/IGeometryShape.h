#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "DOM/IShape.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IAdjustValue;
class IAdjustValueCollection;
class IGeometryPath;
class IShapeElement;
class IShapeStyle;
enum class ShapeType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the parent class for all geometric shapes.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGeometryShape : public virtual Aspose::Slides::IShape
{
    typedef IGeometryShape ThisType;
    typedef Aspose::Slides::IShape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns shape's style object.
    /// Read-only <see cref="Aspose::Slides::IShapeStyle">IShapeStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeStyle> get_ShapeStyle() = 0;
    /// <summary>
    /// Returns the geometry preset type.
    /// Note: on value changing all adjustment values will reset to their default values.
    /// Read <see cref="Slides::ShapeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::ShapeType get_ShapeType() = 0;
    /// <summary>
    /// Sets the geometry preset type.
    /// Note: on value changing all adjustment values will reset to their default values.
    /// Write <see cref="Slides::ShapeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShapeType(Aspose::Slides::ShapeType value) = 0;
    /// <summary>
    /// Returns a collection of shape's adjustment values.
    /// Read-only <see cref="Aspose::Slides::IAdjustValueCollection">IAdjustValueCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAdjustValueCollection> get_Adjustments() = 0;
    
    /// <summary>
    /// Returns the copy of path of the geometry shape. Coordinates are relative to the left top corner of the shape.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::IGeometryPath">IGeometryPath</see></returns>
    /// <example>
    /// Example:
    /// <code>
    /// using namespace System;
    /// using namespace Aspose::Slides;
    /// 
    /// auto pres = MakeObject<Presentation>();
    /// 
    /// auto shape = AsCast<GeometryShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 100.0f, 100.0f, 200.0f, 100.0f));
    /// 
    /// auto geometryPath = shape->GetGeometryPaths()->idx_get(0);
    /// 
    /// geometryPath->LineTo(100.0f, 50.0f, 1);
    /// geometryPath->LineTo(100.0f, 50.0f, 4);
    /// 
    /// shape->SetGeometryPath(geometryPath);
    /// 
    /// pres->Save(u"output.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IGeometryPath>> GetGeometryPaths() = 0;
    /// <summary>
    /// Updates shape geometry from <see cref="Aspose::Slides::IGeometryPath">IGeometryPath</see> object. Coordinates must be relative to the left
    /// top corner of the shape.
    /// Changes the type of the shape (<see cref="ShapeType"></see>) to <see cref="ShapeType::Custom"></see>. 
    /// </summary>
    /// <param name="geometryPath">Geometry path</param>
    /// <exception cref="System::ArgumentException">No path found</exception>
    /// <exception cref="System::ArgumentException">Empty path found</exception>
    /// <example>
    /// Example:
    /// <code>
    /// using namespace System;
    /// using namespace Aspose::Slides;
    /// 
    /// auto pres = MakeObject<Presentation>();
    /// 
    /// auto shape = AsCast<GeometryShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 100.0f, 100.0f, 200.0f, 100.0f));
    /// 
    /// auto geometryPath0 = MakeObject<GeometryPath>();
    /// geometryPath0->MoveTo(0.0f, 0.0f);
    /// geometryPath0->LineTo(shape->get_Width(), 0.0f);
    /// geometryPath0->LineTo(shape->get_Width(), shape->get_Height() / 3);
    /// geometryPath0->LineTo(0.0f, shape->get_Height() / 3);
    /// geometryPath0->CloseFigure();
    /// 
    /// auto geometryPath1 = MakeObject<GeometryPath>();
    /// geometryPath1->MoveTo(0.0f, shape->get_Height() / 3 * 2);
    /// geometryPath1->LineTo(shape->get_Width(), shape->get_Height() / 3 * 2);
    /// geometryPath1->LineTo(shape->get_Width(), shape->get_Height());
    /// geometryPath1->LineTo(0.0f, shape->get_Height());
    /// geometryPath1->CloseFigure();
    /// 
    /// shape->SetGeometryPaths(StaticCastArray<SharedPtr<IGeometryPath>>(MakeArray<SharedPtr<GeometryPath>>({geometryPath0, geometryPath1})));
    /// 
    /// pres->Save(u"output.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetGeometryPath(System::SharedPtr<IGeometryPath> geometryPath) = 0;
    /// <summary>
    /// Updates shape geometry from array of <see cref="Aspose::Slides::IGeometryPath">IGeometryPath</see>. Coordinates must be relative to the left
    /// top corner of the shape.
    /// Changes the type of the shape (<see cref="ShapeType"></see>) to <see cref="ShapeType::Custom"></see>. 
    /// </summary>
    /// <param name="geometryPaths">Array geometry paths</param>
    /// <exception cref="System::ArgumentException">No path found</exception>
    /// <exception cref="System::ArgumentException">Empty path</exception>
    /// <example>
    /// Example:
    /// <code>
    /// using namespace System;
    /// using namespace Aspose::Slides;
    /// 
    /// auto pres = MakeObject<Presentation>();
    /// auto shape = AsCast<GeometryShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 100.0f, 100.0f, 200.0f, 100.0f));
    /// 
    /// auto geometryPath = shape->GetGeometryPaths()->idx_get(0);
    /// 
    /// geometryPath->LineTo(100.0f, 50.0f, 1);
    /// geometryPath->LineTo(100.0f, 50.0f, 4);
    /// 
    /// shape->SetGeometryPath(geometryPath);
    /// 
    /// pres->Save(u"output.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetGeometryPaths(System::ArrayPtr<System::SharedPtr<IGeometryPath>> geometryPaths) = 0;
    /// <summary>
    /// Creates and returns array of shape's elements.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::IShapeElement">IShapeElement</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IShapeElement>> CreateShapeElements() = 0;
    /// <summary>
    /// Returns a shape's adjustments value at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAdjustValue> get_Adjustment(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


