#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IFormat;
enum class MarkerStyleType;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents marker of a chert.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMarker : public virtual System::Object
{
    typedef IMarker ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents the marker style in a line chart, scatter chart, or radar chart.
    /// Read <see cref="MarkerStyleType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API MarkerStyleType get_Symbol() = 0;
    /// <summary>
    /// Represents the marker style in a line chart, scatter chart, or radar chart.
    /// Write <see cref="MarkerStyleType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Symbol(MarkerStyleType value) = 0;
    /// <summary>
    /// Gets the marker fill.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// Represents the marker size in a line chart, scatter chart, or radar chart.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Size() = 0;
    /// <summary>
    /// Represents the marker size in a line chart, scatter chart, or radar chart.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Size(int32_t value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


