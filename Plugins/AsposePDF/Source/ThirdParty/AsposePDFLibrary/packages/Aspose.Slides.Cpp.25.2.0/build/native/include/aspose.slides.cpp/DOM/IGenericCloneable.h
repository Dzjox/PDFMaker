#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/icloneable.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents generic version of ICloneable
/// </summary>
/// <typeparam name="T">The type of object to clone</typeparam>
template<typename T>
class ASPOSE_SLIDES_API_LOCAL_API IGenericCloneable : public System::ICloneable
{
    typedef IGenericCloneable<T> ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
public:

    /// <summary>
    /// Creates a new object that is a copy of the current instance.
    /// </summary>
    /// <returns>A new object that is a copy of this instance.</returns>
    virtual T CloneT() = 0;
    
};

} // namespace Slides
} // namespace Aspose


