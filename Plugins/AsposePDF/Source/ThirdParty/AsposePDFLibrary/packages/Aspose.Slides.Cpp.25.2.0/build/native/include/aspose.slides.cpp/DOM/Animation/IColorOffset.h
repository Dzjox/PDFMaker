#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent color offset.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorOffset : public virtual System::Object
{
    typedef IColorOffset ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Defines first value of offset.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Value0() = 0;
    /// <summary>
    /// Defines first value of offset.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Value0(float value) = 0;
    /// <summary>
    /// Defines second value of offset.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Value1() = 0;
    /// <summary>
    /// Defines second value of offset.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Value1(float value) = 0;
    /// <summary>
    /// Defines third value of offset.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Value2() = 0;
    /// <summary>
    /// Defines third value of offset.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Value2(float value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


