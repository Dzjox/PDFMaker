#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// immutable object which represents a gradient stop.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGradientStopEffectiveData : public virtual System::Object
{
    typedef IGradientStopEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the position (0..1) of a gradient stop.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Position() = 0;
    /// <summary>
    /// Returns the color of a gradient stop.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_Color() = 0;
    
};

} // namespace Slides
} // namespace Aspose


