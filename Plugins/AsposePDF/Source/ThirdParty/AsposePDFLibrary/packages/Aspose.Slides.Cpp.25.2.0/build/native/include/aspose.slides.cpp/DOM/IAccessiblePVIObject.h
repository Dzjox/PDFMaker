#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/constraints.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a type that can return corresponding effective data with the inheritance applied.
/// </summary>
/// <typeparam name="T">Type of effective data.</typeparam>
template<typename T>
class ASPOSE_SLIDES_API_LOCAL_API IAccessiblePVIObject : public virtual System::Object
{
    typedef IAccessiblePVIObject<T> ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
public:

    /// <summary>
    /// Gets effective data with the inheritance applied.
    /// </summary>
    /// <returns>An effective data object.</returns>
    virtual T GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


