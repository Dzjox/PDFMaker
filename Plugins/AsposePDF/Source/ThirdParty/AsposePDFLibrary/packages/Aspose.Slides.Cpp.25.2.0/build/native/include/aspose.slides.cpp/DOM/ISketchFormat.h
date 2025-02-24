#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class LineSketchType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents properties for lines sketch format.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISketchFormat : public virtual System::Object
{
    typedef ISketchFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the sketch type.
    /// Read <see cref="Slides::LineSketchType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineSketchType get_SketchType() = 0;
    /// <summary>
    /// Sets the sketch type.
    /// Write <see cref="Slides::LineSketchType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SketchType(LineSketchType value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


