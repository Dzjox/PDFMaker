#pragma once
//Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents options for SVG text portion ("tspan").
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISvgTSpan : public virtual System::Object
{
    typedef ISvgTSpan ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets id for the "tspan" element
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Id() = 0;
    /// <summary>
    /// Sets id for the "tspan" element
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Id(System::String value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


