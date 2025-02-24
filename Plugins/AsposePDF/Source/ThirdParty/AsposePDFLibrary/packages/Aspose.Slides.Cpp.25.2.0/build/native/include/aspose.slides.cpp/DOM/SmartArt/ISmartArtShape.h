#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGeometryShape.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITextFrame;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace SmartArt {

/// <summary>
/// Represents a shape inside SmartArt diagram
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISmartArtShape : public virtual Aspose::Slides::IGeometryShape
{
    typedef ISmartArtShape ThisType;
    typedef Aspose::Slides::IGeometryShape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns text of the SmartArt shape.
    /// Read-only <see cref="ITextFrame"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrame> get_TextFrame() = 0;
    
};

} // namespace SmartArt
} // namespace Slides
} // namespace Aspose


