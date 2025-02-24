#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class ISvgShape;
} // namespace Export
class IShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Controls SVG shape generation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISvgShapeFormattingController : public virtual System::Object
{
    typedef ISvgShapeFormattingController ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// This function is called before rendering of shape to SVG to allow user to control resulting SVG.
    /// </summary>
    /// <param name="svgShape">Object to control SVG shape generation.</param>
    /// <param name="shape">Source shape.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void FormatShape(System::SharedPtr<ISvgShape> svgShape, System::SharedPtr<IShape> shape) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


