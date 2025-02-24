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
/// Immutable object which contains effective line sketch properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ISketchFormatEffectiveData : public virtual System::Object
{
    typedef ISketchFormatEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the sketch type.
    /// Read only <see cref="Slides::LineSketchType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineSketchType get_SketchType() = 0;
    
};

} // namespace Slides
} // namespace Aspose


