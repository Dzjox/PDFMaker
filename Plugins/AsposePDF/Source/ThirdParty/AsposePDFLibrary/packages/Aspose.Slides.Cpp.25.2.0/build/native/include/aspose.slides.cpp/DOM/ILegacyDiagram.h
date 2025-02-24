#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGraphicalObject.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IGroupShape;
namespace SmartArt
{
class ISmartArt;
} // namespace SmartArt
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a legacy diagram object 
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILegacyDiagram : public virtual Aspose::Slides::IGraphicalObject
{
    typedef ILegacyDiagram ThisType;
    typedef Aspose::Slides::IGraphicalObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Converts legacy digram to editable SmartArt object. 
    /// Created SmartArt object adds to parent group shape at the same position.
    /// </summary>
    /// <returns>Created SmartArt object.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<SmartArt::ISmartArt> ConvertToSmartArt() = 0;
    /// <summary>
    /// Converts legacy digram to editable group shape. 
    /// Created GroupShape object adds to parent group shape at the same position.
    /// </summary>
    /// <returns>Created GroupShape object.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGroupShape> ConvertToGroupShape() = 0;
    
};

} // namespace Slides
} // namespace Aspose


