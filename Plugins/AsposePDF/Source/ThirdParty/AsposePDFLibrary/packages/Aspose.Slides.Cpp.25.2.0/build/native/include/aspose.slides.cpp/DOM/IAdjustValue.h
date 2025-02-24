#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a geometry shape's adjustment value.
/// These values affect shape's form.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAdjustValue : public virtual System::Object
{
    typedef IAdjustValue ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns ajustment value "as is".
    /// Read <see cref="int64_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int64_t get_RawValue() = 0;
    /// <summary>
    /// Sets ajustment value "as is".
    /// Write <see cref="int64_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RawValue(int64_t value) = 0;
    /// <summary>
    /// Returns value, interpreting it as angle in degrees.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_AngleValue() = 0;
    /// <summary>
    /// Sets value, interpreting it as angle in degrees.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AngleValue(float value) = 0;
    /// <summary>
    /// Returns a name of this adjustment value.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    
};

} // namespace Slides
} // namespace Aspose


