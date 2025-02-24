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
class IAdjustValue;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Reprasents a collection of shape's adjustments.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAdjustValueCollection : public virtual System::Object
{
    typedef IAdjustValueCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the number of behaviors in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Returns adjustment by index.
    /// </summary>
    /// <param name="index">adjustment's index.</param>
    /// <returns><see cref="Aspose::Slides::IAdjustValue">IAdjustValue</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAdjustValue> idx_get(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


