#pragma once
//Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/SmartArt/ISmartArtShape.h>

#include "DOM/GeometryShape.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShape;
namespace Drawing
{
class FlipRotation;
namespace ThreeD
{
class CameraSettingsManager;
class Shape3DBaseSettingsManager;
class ShapeRenderer;
} // namespace ThreeD
class Vector2d64d;
} // namespace Drawing
class FillFormatEffectiveData;
class IDOMObject;
class ITextFrame;
class LineFormatEffectiveData;
namespace PresentationML
{
class Transform2D;
} // namespace PresentationML
enum class ShapeType;
namespace SmartArt
{
class ConnectorAlgorithm;
class DataTreeNodeBase;
class DiagramPoint;
class GeometryBuilder;
class LayoutTree;
class PresentationTreeNode;
class SmartArt;
class SmartArtNode;
class SmartArtShapeContainer;
class SmartArtShapeLayout;
class TextAlgorithm;
} // namespace SmartArt
class TextFrame;
class TextFrameFormatEffectiveData;
class TextStyleEffectiveData;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class AutoShapePPTXUnsupportedProps;
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
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents SmartArt shape
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SmartArtShape : public Aspose::Slides::GeometryShape, public Aspose::Slides::SmartArt::ISmartArtShape
{
    typedef SmartArtShape ThisType;
    typedef Aspose::Slides::GeometryShape BaseType;
    typedef Aspose::Slides::SmartArt::ISmartArtShape BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::ThreeD::CameraSettingsManager;
    friend class Aspose::Slides::Drawing::ThreeD::ShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::Shape3DBaseSettingsManager;
    friend class Aspose::Slides::SmartArt::SmartArtShapeLayout;
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::LineFormatEffectiveData;
    friend class Aspose::Slides::TextFrameFormatEffectiveData;
    friend class Aspose::Slides::TextStyleEffectiveData;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::SmartArtNode;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::SmartArt::GeometryBuilder;
    friend class Aspose::Slides::SmartArt::ConnectorAlgorithm;
    friend class Aspose::Slides::SmartArt::TextAlgorithm;
    friend class Aspose::Slides::SmartArt::LayoutTree;
    friend class Aspose::Slides::SmartArt::SmartArtShapeContainer;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the geometry preset type.
    /// Note: on value changing all adjustment values will reset to their default values.
    /// Read <see cref="Slides::ShapeType"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is ShapeType::NotDefined or ShapeType::Custom</exception>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::ShapeType get_ShapeType() override;
    /// <summary>
    /// Sets the geometry preset type.
    /// Note: on value changing all adjustment values will reset to their default values.
    /// Write <see cref="Slides::ShapeType"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is ShapeType::NotDefined or ShapeType::Custom</exception>
    ASPOSE_SLIDES_SHARED_API void set_ShapeType(Aspose::Slides::ShapeType value) override;
    /// <summary>
    /// Returns text of the SmartArt shape.
    /// Read-only <see cref="ITextFrame"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrame> get_TextFrame() override;
    
protected:

    ASPOSE_SLIDES_SHARED_API uint32_t get_Version_OldMode() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::TextFrame> get_TextFrameCompounded();
    ASPOSE_SLIDES_LOCAL_API void set_TextFrameCompounded(System::SharedPtr<Aspose::Slides::TextFrame> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::AutoShapePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentationTreeNode> get_PresentationPoint();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DiagramPoint> get_UserData();
    
    ASPOSE_SLIDES_LOCAL_API SmartArtShape(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<SmartArtShapeContainer> container);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SmartArtShape, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<SmartArtShapeContainer> container));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyFromDrawingShape(System::SharedPtr<AutoShape> shape);
    ASPOSE_SLIDES_LOCAL_API void UpdateDataNodes();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<PresentationML::Transform2D> GetRawFrameImpl() override;
    ASPOSE_SLIDES_SHARED_API void SetRawFrameImpl(Aspose::Slides::Drawing::Vector2d64d pos, Aspose::Slides::Drawing::Vector2d64d size, Aspose::Slides::Drawing::FlipRotation flipRotation) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetShapeRotation(double angle);
    ASPOSE_SLIDES_LOCAL_API void SetShapeTypeInternal(Aspose::Slides::ShapeType type);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::Drawing::PointF> CreateConnectionPoints() override;
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> CreateConnectionDirections() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~SmartArtShape();
    
private:

    System::WeakPtr<PresentationTreeNode> m_presentationPoint;
    System::SharedPtr<Aspose::Slides::TextFrame> m_textFrameCompounded;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DataTreeNodeBase>>> GetAllAssociatedNodes();
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


