#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGeometryShape.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IConnectorLock;
class IShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a connector.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IConnector : public virtual Aspose::Slides::IGeometryShape
{
    typedef IConnector ThisType;
    typedef Aspose::Slides::IGeometryShape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns Connector's locks.
    /// Read-only <see cref="Aspose::Slides::IConnectorLock">IConnectorLock</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IConnectorLock> get_ConnectorLock() = 0;
    /// <summary>
    /// Returns the shape to attach the beginning of the connector to.
    /// Read <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when connected shape doesn't has any connection sites (IShape::get_ConnectionSiteCount equals zero)</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_StartShapeConnectedTo() = 0;
    /// <summary>
    /// Sets the shape to attach the beginning of the connector to.
    /// Write <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when connected shape doesn't has any connection sites (IShape::get_ConnectionSiteCount equals zero)</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StartShapeConnectedTo(System::SharedPtr<IShape> value) = 0;
    /// <summary>
    /// Returns the shape to attach the end of the connector to.
    /// Read <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when connected shape doesn't has any connection sites (IShape::get_ConnectionSiteCount equals zero)</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_EndShapeConnectedTo() = 0;
    /// <summary>
    /// Sets the shape to attach the end of the connector to.
    /// Write <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when connected shape doesn't has any connection sites (IShape::get_ConnectionSiteCount equals zero)</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndShapeConnectedTo(System::SharedPtr<IShape> value) = 0;
    /// <summary>
    /// Returns the index of connection site for start shape.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is less than get_StartShapeConnectedTo()->get_ConnectionSiteCount()</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_StartShapeConnectionSiteIndex() = 0;
    /// <summary>
    /// Sets the index of connection site for start shape.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is less than get_StartShapeConnectedTo()->get_ConnectionSiteCount()</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StartShapeConnectionSiteIndex(uint32_t value) = 0;
    /// <summary>
    /// Returns the index of connection site for end shape.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is less than get_EndShapeConnectedTo()->get_ConnectionSiteCount()</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_EndShapeConnectionSiteIndex() = 0;
    /// <summary>
    /// Sets the index of connection site for end shape.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentException">Thrown when value is less than get_EndShapeConnectedTo()->get_ConnectionSiteCount()</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndShapeConnectionSiteIndex(uint32_t value) = 0;
    
    /// <summary>
    /// Reroutes connector so that it take the shortest possible path between the shapes it connect.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Reroute() = 0;
    
};

} // namespace Slides
} // namespace Aspose


