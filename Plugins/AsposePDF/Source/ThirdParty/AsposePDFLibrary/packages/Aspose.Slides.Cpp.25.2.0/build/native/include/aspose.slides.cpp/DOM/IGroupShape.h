#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IShape.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IGroupShapeLock;
class IShapeCollection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a group of shapes on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGroupShape : public virtual Aspose::Slides::IShape
{
    typedef IGroupShape ThisType;
    typedef Aspose::Slides::IShape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns shape's locks.
    /// Read-only <see cref="Aspose::Slides::IGroupShapeLock">IGroupShapeLock</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGroupShapeLock> get_GroupShapeLock() = 0;
    /// <summary>
    /// Returns the collection of shapes inside the group.
    /// Read-only <see cref="Aspose::Slides::IShapeCollection">IShapeCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeCollection> get_Shapes() = 0;
    
    /// <summary>
    /// Returns a shape inside group at the specified index.
    /// Read-only <see cref="Aspose::Slides::IShape"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_Shape(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


