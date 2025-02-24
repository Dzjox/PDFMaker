#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/point_f.h>
#include <DOM/IConnector.h>
#include <cstdint>

#include "DOM/GeometryShape.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShapeLayout;
class IConnectorLock;
class IDOMObject;
class IShape;
namespace PptSerialization
{
class BaseSlidePPTSerialization;
class ConnectorPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class BaseSlidePPTXSerialization;
class ConnectorPPTXSerialization;
class GroupVmlSerialization;
class LegacyDiagramPPTXSeriazation;
} // namespace PartParser
} // namespace PptxSerialization
namespace PresentationML
{
class Transform2D;
} // namespace PresentationML
class Shape;
class ShapeCollection;
enum class ShapeType;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class ConnectorPPTXUnsupportedProps;
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
namespace Drawing2D
{
class Matrix;
} // namespace Drawing2D
class RectangleF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a connector.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Connector : public Aspose::Slides::GeometryShape, public Aspose::Slides::IConnector
{
    typedef Connector ThisType;
    typedef Aspose::Slides::GeometryShape BaseType;
    typedef Aspose::Slides::IConnector BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::PptxSerialization::PartParser::LegacyDiagramPPTXSeriazation;
    friend class Aspose::Slides::PptxSerialization::PartParser::GroupVmlSerialization;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseSlidePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ConnectorPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::ConnectorPPTSerialization;
    /// @endcond
    
private:

    class ASPOSE_SLIDES_LOCAL_API Flip : public System::Object, public System::Details::BoxableObjectBase
    {
        typedef Flip ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        bool Horizontal;
        bool Vertical;
        
        Flip();
        
    };
    
    class ASPOSE_SLIDES_LOCAL_API TwoPointsRectangle : public System::Object, public System::Details::BoxableObjectBase
    {
        typedef TwoPointsRectangle ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        float get_StartX();
        float get_StartY();
        float get_EndX();
        float get_EndY();
        float get_X();
        float get_Y();
        float get_Width();
        float get_Height();
        System::Drawing::PointF get_Center();
        System::Drawing::PointF get_Start();
        System::Drawing::PointF get_End();
        float get_NormalizedWidth();
        float get_NormalizedHeight();
        double get_RatioWidth();
        double get_RatioHeight();
        
        TwoPointsRectangle(System::Drawing::PointF start, System::Drawing::PointF end);
        
        Connector::TwoPointsRectangle Transform(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform);
        
        TwoPointsRectangle();
        
    private:
    
        float m_startX;
        float m_startY;
        float m_endX;
        float m_endY;
        
    };
    
    
public:

    /// <summary>
    /// Returns connector's locks.
    /// Read-only <see cref="Aspose::Slides::IConnectorLock">IConnectorLock</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IConnectorLock> get_ConnectorLock() override;
    /// <summary>
    /// Returns the AutoShape type.
    /// Read <see cref="Slides::ShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::ShapeType get_ShapeType() override;
    /// <summary>
    /// Sets the AutoShape type.
    /// Write <see cref="Slides::ShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShapeType(Aspose::Slides::ShapeType value) override;
    /// <summary>
    /// Returns the shape to attach the beginning of the connector to.
    /// Read <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when connected shape doesn't has any connection sites (IShape::get_ConnectionSiteCount equals zero)</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_StartShapeConnectedTo() override;
    /// <summary>
    /// Sets the shape to attach the beginning of the connector to.
    /// Write <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when connected shape doesn't has any connection sites (IShape::get_ConnectionSiteCount equals zero)</exception>
    ASPOSE_SLIDES_SHARED_API void set_StartShapeConnectedTo(System::SharedPtr<IShape> value) override;
    /// <summary>
    /// Returns the shape to attach the end of the connector to.
    /// Read <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when connected shape doesn't has any connection sites (IShape::get_ConnectionSiteCount equals zero)</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_EndShapeConnectedTo() override;
    /// <summary>
    /// Sets the shape to attach the end of the connector to.
    /// Write <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when connected shape doesn't has any connection sites (IShape::get_ConnectionSiteCount equals zero)</exception>
    ASPOSE_SLIDES_SHARED_API void set_EndShapeConnectedTo(System::SharedPtr<IShape> value) override;
    /// <summary>
    /// Returns the index of connection site for start shape.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is less than get_StartShapeConnectedTo()->get_ConnectionSiteCount()</exception>
    ASPOSE_SLIDES_SHARED_API uint32_t get_StartShapeConnectionSiteIndex() override;
    /// <summary>
    /// Sets the index of connection site for start shape.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is less than get_StartShapeConnectedTo()->get_ConnectionSiteCount()</exception>
    ASPOSE_SLIDES_SHARED_API void set_StartShapeConnectionSiteIndex(uint32_t value) override;
    /// <summary>
    /// Returns the index of connection site for end shape.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is less than get_EndShapeConnectedTo()->get_ConnectionSiteCount()</exception>
    ASPOSE_SLIDES_SHARED_API uint32_t get_EndShapeConnectionSiteIndex() override;
    /// <summary>
    /// Sets the index of connection site for end shape.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is less than get_EndShapeConnectedTo()->get_ConnectionSiteCount()</exception>
    ASPOSE_SLIDES_SHARED_API void set_EndShapeConnectionSiteIndex(uint32_t value) override;
    
    /// <summary>
    /// Reroutes connector so that it take the shortest possible path between the shapes it connect.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Reroute() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ConnectorPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<Aspose::Slides::ShapeType, Aspose::Slides::ShapeType>> ShapeTypes;
    
    ASPOSE_SLIDES_LOCAL_API Connector(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Connector, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<PresentationML::Transform2D> GetRawFrameImpl() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool SetStartShapeConnectedToWithoutRearrange(System::SharedPtr<IShape> value);
    ASPOSE_SLIDES_LOCAL_API bool SetStartShapeConnectionSiteIndexWithoutRearrange(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API bool SetEndShapeConnectedToWithoutRearrange(System::SharedPtr<IShape> value);
    ASPOSE_SLIDES_LOCAL_API bool SetEndShapeConnectionSiteIndexWithoutRearrange(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API void SaveConnectionPoints();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::Drawing::PointF> CreateConnectionPoints() override;
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<float> CreateConnectionDirections() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~Connector();
    
private:

    ASPOSE_SLIDES_LOCAL_API bool get_IsStraight();
    ASPOSE_SLIDES_LOCAL_API bool get_IsBent();
    ASPOSE_SLIDES_LOCAL_API bool get_IsCurved();
    
    System::SharedPtr<Shape> m_startConnectedTo;
    System::SharedPtr<Shape> m_endConnectedTo;
    uint32_t m_startConnectionSiteIndex;
    uint32_t m_endConnectionSiteIndex;
    System::Drawing::PointF m_lastStart;
    System::Drawing::PointF m_lastEnd;
    uint32_t m_lastStartShapeVersion;
    uint32_t m_lastEndShapeVersion;
    int32_t m_lastStartSiteIndex;
    int32_t m_lastEndSiteIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t s_margin;
    static const ASPOSE_SLIDES_LOCAL_API int64_t HUNDRED;
    
    ASPOSE_SLIDES_LOCAL_API void Rearrange();
    ASPOSE_SLIDES_LOCAL_API void SaveCurrentState();
    static ASPOSE_SLIDES_LOCAL_API uint32_t GetShapeVersion(System::SharedPtr<Shape> shape);
    ASPOSE_SLIDES_LOCAL_API Connector::TwoPointsRectangle GetTargets(bool& hasStart, bool& hasEnd);
    ASPOSE_SLIDES_LOCAL_API void ArrangeStraightConnector(Connector::TwoPointsRectangle targets);
    ASPOSE_SLIDES_LOCAL_API void ArrangeBentConnector(Connector::TwoPointsRectangle targets, float startAngle, float endAngle);
    ASPOSE_SLIDES_LOCAL_API Connector::Flip UpdateOpposite(System::Drawing::RectangleF startBounds, System::Drawing::RectangleF endBounds, Connector::TwoPointsRectangle targets);
    ASPOSE_SLIDES_LOCAL_API Connector::Flip UpdateUnidirectional(System::Drawing::RectangleF startBounds, System::Drawing::RectangleF endBounds, Connector::TwoPointsRectangle targets);
    ASPOSE_SLIDES_LOCAL_API Connector::Flip UpdateLeft(System::Drawing::RectangleF startBounds, System::Drawing::RectangleF endBounds, Connector::TwoPointsRectangle targets);
    ASPOSE_SLIDES_LOCAL_API Connector::Flip UpdateRight(System::Drawing::RectangleF startBounds, System::Drawing::RectangleF endBounds, Connector::TwoPointsRectangle targets);
    ASPOSE_SLIDES_LOCAL_API void ChangeConnectorComplexity(int32_t value);
    ASPOSE_SLIDES_LOCAL_API void OnStartConnectedShapeRemoved(System::SharedPtr<Shape> which);
    ASPOSE_SLIDES_LOCAL_API void OnEndConnectedShapeRemoved(System::SharedPtr<Shape> which);
    static ASPOSE_SLIDES_LOCAL_API System::Drawing::PointF GetConnectionPoint(System::SharedPtr<Shape> shape, uint32_t siteIndex);
    static ASPOSE_SLIDES_LOCAL_API int32_t GetDiscreteShapeRotation(System::SharedPtr<Shape> shape);
    static ASPOSE_SLIDES_LOCAL_API System::Drawing::RectangleF GetShapeBounds(System::SharedPtr<System::Drawing::Drawing2D::Matrix> transform, System::SharedPtr<Shape> shape);
    static ASPOSE_SLIDES_LOCAL_API double GetDistance(System::Drawing::PointF p1, System::Drawing::PointF p2);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


