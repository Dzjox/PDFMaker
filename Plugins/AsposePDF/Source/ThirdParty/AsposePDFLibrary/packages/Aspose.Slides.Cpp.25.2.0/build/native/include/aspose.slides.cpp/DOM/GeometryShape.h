#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IGeometryShape.h>
#include <cstdint>

#include "DOM/Shape.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AdjustValueCollection;
class AutoShape;
class AutoShapeLayout;
namespace Charts
{
class Chart;
class DataLabel;
} // namespace Charts
class Connector;
namespace DOM
{
namespace Util
{
class SvgToShapesConverter;
} // namespace Util
} // namespace DOM
namespace Drawing
{
namespace ThreeD
{
class BaseRenderer;
class Drawing3DHelper;
class FlatShapeRenderer;
class OneSceneGroupShapeRenderer;
class ShapeRenderer;
} // namespace ThreeD
} // namespace Drawing
namespace Export
{
class DrawingMLExporter;
} // namespace Export
class FillFormatEffectiveData;
class GeometryShapeLayout;
class IAdjustValue;
class IAdjustValueCollection;
class IBaseShapeLock;
class IDOMObject;
class IEffectFormatEffectiveData;
class IFillFormatEffectiveData;
class IGeometryPath;
class ILineFormatEffectiveData;
class IShapeElement;
class IShapeStyle;
namespace Layout
{
class TextFrameLayoutHelper;
} // namespace Layout
class MasterHandoutSlideManager;
class MasterNotesSlideManager;
class MasterSlideTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class CustomShapeOdpDeserialization;
class GeometryShapeDeserialization;
class GeometryShapeSerialization;
class ShapeOdpDeserialization;
class ShapeOdpSerialization;
class TextFrameOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
enum class PathCommandType : uint8_t;
class PictureFrame;
class PictureFrameLayout;
namespace PptSerialization
{
class AutoShapePPTSerialization;
class ConnectorPPTSerialization;
class GeometryShapePPTSerialization;
class LineFormatPPTSerialization;
class PictureFramePPTSerialization;
class PptGroupShapeSerializationContext;
class ShapeCollectionPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class DrsShapePartParser;
class Geometry2DPPTXSerialization;
class GeometryVmlSerialization;
class ShapeStylePPTXSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
namespace PresentationML
{
class Geometry2D;
} // namespace PresentationML
class ShapeCollection;
class ShapeLayout;
class ShapeStyle;
enum class ShapeType;
namespace SmartArt
{
class PyramidAlgorithm;
class SmartArtShape;
class SmartArtShapeContainer;
} // namespace SmartArt
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class GeometryShapePPTXUnsupportedProps;
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
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class PointF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the parent class for all geometric shapes.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GeometryShape : public Aspose::Slides::Shape, public virtual Aspose::Slides::IGeometryShape
{
    typedef GeometryShape ThisType;
    typedef Aspose::Slides::Shape BaseType;
    typedef Aspose::Slides::IGeometryShape BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::Layout::TextFrameLayoutHelper;
    friend class Aspose::Slides::Drawing::ThreeD::BaseRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::Drawing3DHelper;
    friend class Aspose::Slides::Drawing::ThreeD::FlatShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::OneSceneGroupShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::ShapeRenderer;
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::PictureFrameLayout;
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::GeometryVmlSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::CustomShapeOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::GeometryShapeSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::GeometryShapeDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpSerialization;
    friend class Aspose::Slides::DOM::Util::SvgToShapesConverter;
    friend class Aspose::Slides::AdjustValueCollection;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::Connector;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::PresentationML::Geometry2D;
    friend class Aspose::Slides::SmartArt::PyramidAlgorithm;
    friend class Aspose::Slides::SmartArt::SmartArtShapeContainer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Geometry2DPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ShapeStylePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::PictureFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::AutoShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::GeometryShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::ConnectorPPTSerialization;
    friend class Aspose::Slides::PptSerialization::LineFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::ShapeCollectionPPTSerialization;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::MasterSlideTemplate;
    /// @endcond
    
public:

    /// <summary>
    /// Returns shape's style object.
    /// Read-only <see cref="Aspose::Slides::IShapeStyle">IShapeStyle</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeStyle> get_ShapeStyle() override;
    /// <summary>
    /// Returns the geometry preset type.
    /// Note: on value changing all adjustment values will reset to their default values.
    /// Read <see cref="Slides::ShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::ShapeType get_ShapeType() override;
    /// <summary>
    /// Sets the geometry preset type.
    /// Note: on value changing all adjustment values will reset to their default values.
    /// Write <see cref="Slides::ShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShapeType(Aspose::Slides::ShapeType value) override;
    /// <summary>
    /// Returns a collection of shape's adjustment values.
    /// Read-only <see cref="Aspose::Slides::IAdjustValueCollection">IAdjustValueCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAdjustValueCollection> get_Adjustments() override;
    
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
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IGeometryPath>> GetGeometryPaths() override;
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
    ASPOSE_SLIDES_SHARED_API void SetGeometryPath(System::SharedPtr<IGeometryPath> geometryPath) override;
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
    ASPOSE_SLIDES_SHARED_API void SetGeometryPaths(System::ArrayPtr<System::SharedPtr<IGeometryPath>> geometryPaths) override;
    /// <summary>
    /// Creates and returns array of shape's elements.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::ShapeElement">ShapeElement</see></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IShapeElement>> CreateShapeElements() override;
    /// <summary>
    /// Returns a shape's adjustments value at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAdjustValue> get_Adjustment(int32_t index) override;
    
protected:

    /// @cond
    System::SharedPtr<Aspose::Slides::ShapeStyle> m_style;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentationML::Geometry2D> get_Geometry();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GeometryShapeLayout> get_GeometryLayout();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::GeometryShapePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    static const ASPOSE_SLIDES_LOCAL_API int32_t ShapeElementFillSourceNumber;
    
    ASPOSE_SLIDES_LOCAL_API GeometryShape(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::GeometryShapePPTXUnsupportedProps> pptxUnsupportedProps, System::SharedPtr<IBaseShapeLock> shapeLock);
    
    ASPOSE_SLIDES_LOCAL_API void InitializeShapeStyle();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentationML::Geometry2D> GetEffectiveGeometry();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<Aspose::Slides::ShapeType, Aspose::Slides::ShapeType>> CreateAutoShapeTypeSet(const System::ArrayPtr<Aspose::Slides::ShapeType>& types);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormatEffectiveData> CreateLineFormatEffectiveImpl() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormatEffectiveData> CreateFillFormatEffectiveImpl() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IEffectFormatEffectiveData> CreateEffectFormatEffectiveImpl();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<Aspose::Slides::ShapeType, Aspose::Slides::ShapeType>> CreateAutoShapeTypeSet(bool inverse, const System::ArrayPtr<Aspose::Slides::ShapeType>& types);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::Drawing::PointF> CreateConnectionPoints() override;
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> CreateConnectionDirections() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void ClearShapeStyle();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~GeometryShape();
    
private:

    System::SharedPtr<PresentationML::Geometry2D> m_geometry;
    System::SharedPtr<AdjustValueCollection> m_adjustments;
    
    ASPOSE_SLIDES_LOCAL_API void GraphicPathToPath(System::ArrayPtr<System::Drawing::PointF> gpPoints, PathCommandType command, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::Path> resultPath);
    
};

} // namespace Slides
} // namespace Aspose


