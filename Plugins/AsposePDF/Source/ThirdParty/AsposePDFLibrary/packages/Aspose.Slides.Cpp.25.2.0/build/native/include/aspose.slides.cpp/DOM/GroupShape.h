#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IGroupShape.h>

#include "Drawing/Vector2d64d.h"
#include "DOM/Shape.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
namespace Charts
{
class Chart;
class ChartLayout;
} // namespace Charts
namespace Drawing
{
class FlipRotation;
class Vector2d32f;
} // namespace Drawing
class GroupShapeLayout;
class IDOMObject;
class IGroupShapeLock;
class ILineFormat;
class IShape;
class IShapeCollection;
class LayoutTemplatesContext;
class LegacyDiagram;
class MasterNotesSlideManager;
class MasterSlideTemplate;
class NotesTemplate;
namespace PptSerialization
{
class GroupShapePPTSerialization;
class LegacyDiagramPPTSerialization;
class PptGroupShapeDeserializationContext;
class PptGroupShapeSerializationContext;
class PptLegacyDiagramSerializationContext;
class PptSlideDeserializationContext;
class TransformPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class GroupShapePPTXSerialization;
class GroupTransform2DPPTXSerialization;
class LegacyDiagramPPTXSeriazation;
class SmartArtPPTXSerialization;
class Transform2DPPTXSerialization;
class UserShapesPartParser;
class VmlDrawingPartParser;
} // namespace PartParser
} // namespace PptxSerialization
namespace PresentationML
{
class Transform2D;
} // namespace PresentationML
class ShapeCollection;
class ShapeLayout;
class SlideTemplateCreator;
namespace SmartArt
{
class LayoutTree;
class SmartArt;
class SmartArtLayout;
} // namespace SmartArt
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class GroupShapePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
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
/// Represents a group of shapes on a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GroupShape : public Aspose::Slides::Shape, public Aspose::Slides::IGroupShape
{
    typedef GroupShape ThisType;
    typedef Aspose::Slides::Shape BaseType;
    typedef Aspose::Slides::IGroupShape BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartLayout;
    friend class Aspose::Slides::ShapeLayout;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::GroupShapeLayout;
    friend class Aspose::Slides::SmartArt::SmartArtLayout;
    friend class Aspose::Slides::LegacyDiagram;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeDeserializationContext;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptLegacyDiagramSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::PptSerialization::LegacyDiagramPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::LegacyDiagramPPTXSeriazation;
    friend class Aspose::Slides::PptSerialization::TransformPPTSerialization;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::LayoutTree;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupShapePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupTransform2DPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SmartArtPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Transform2DPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::UserShapesPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::VmlDrawingPartParser;
    friend class Aspose::Slides::PptSerialization::GroupShapePPTSerialization;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::SlideTemplateCreator;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the LineFormat object that contains line formatting properties for a shape.
    /// Note: Returns null for GroupShape objects because they don't have line properties.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_LineFormat() override;
    /// <summary>
    /// Returns shape's locks.
    /// Read-only <see cref="Aspose::Slides::IGroupShapeLock">IGroupShapeLock</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGroupShapeLock> get_GroupShapeLock() override;
    /// <summary>
    /// Returns the collection of shapes inside the group.
    /// Read-only <see cref="Aspose::Slides::IShapeCollection">IShapeCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeCollection> get_Shapes() override;
    
    /// <summary>
    /// Returns a shape inside group at the specified index.
    /// Read-only <see cref="Aspose::Slides::IShape"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_Shape(int32_t index) override;
    
protected:

    /// @cond
    System::SharedPtr<ShapeCollection> m_shapes;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::GroupShapePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d64d get_ChildPos();
    ASPOSE_SLIDES_LOCAL_API void set_ChildPos(Drawing::Vector2d64d value);
    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d64d get_ChildSize();
    ASPOSE_SLIDES_LOCAL_API void set_ChildSize(Drawing::Vector2d64d value);
    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d64d get_Scale();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentationML::Transform2D> get_RawFrameImpl();
    
    ASPOSE_SLIDES_LOCAL_API GroupShape(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GroupShape, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::Drawing::RectangleF GetContentRect();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void SetSize(Drawing::Vector2d64d size) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetRawFrame(Drawing::Vector2d64d pos, Drawing::Vector2d64d size, Drawing::FlipRotation flipRotation, Drawing::Vector2d64d childSize);
    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d64d ContentToOuter(Drawing::Vector2d32f point, Drawing::Vector2d32f lastRef);
    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d64d ContentToOuter(Drawing::Vector2d32f point, Drawing::Vector2d32f lastRef, bool ignoreRotation);
    ASPOSE_SLIDES_LOCAL_API Drawing::Vector2d64d GetCummulativeScale();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef) override;
    ASPOSE_SLIDES_SHARED_API void LocateGeometry(float locatingCoefX, float locatingCoefY) override;
    ASPOSE_SLIDES_SHARED_API void BeforeRemove() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void NormalizeGroup();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::Drawing::PointF> CreateConnectionPoints() override;
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> CreateConnectionDirections() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~GroupShape();
    
private:

    Drawing::Vector2d64d m_childPos;
    Drawing::Vector2d64d m_childSize;
    Drawing::Vector2d64d m_scale;
    
    ASPOSE_SLIDES_LOCAL_API void UpdateScale(Drawing::Vector2d64d childSize, Drawing::Vector2d64d size);
    ASPOSE_SLIDES_LOCAL_API void NormalizeGroupImpl(Drawing::Vector2d64d pos, Drawing::Vector2d64d size);
    
};

} // namespace Slides
} // namespace Aspose


