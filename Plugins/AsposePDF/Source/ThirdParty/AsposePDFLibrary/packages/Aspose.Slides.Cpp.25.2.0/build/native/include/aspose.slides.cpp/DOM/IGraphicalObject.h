#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IShape.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IGraphicalObjectLock;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents abstract graphical object.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGraphicalObject : public virtual Aspose::Slides::IShape
{
    typedef IGraphicalObject ThisType;
    typedef Aspose::Slides::IShape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns shape's locks.
    /// Read-only <see cref="Aspose::Slides::IGraphicalObjectLock">IGraphicalObjectLock</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGraphicalObjectLock> get_GraphicalObjectLock() = 0;
    
};

} // namespace Slides
} // namespace Aspose


