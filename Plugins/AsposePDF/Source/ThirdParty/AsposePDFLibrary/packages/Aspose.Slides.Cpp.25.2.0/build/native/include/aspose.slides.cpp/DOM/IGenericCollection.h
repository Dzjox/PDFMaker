#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Auxiliary generic collection interface.
/// </summary>
/// <typeparam name="T"></typeparam>
template<typename T>
class ASPOSE_SLIDES_API_LOCAL_API IGenericCollection : public System::Collections::Generic::IEnumerable<T>
{
    typedef IGenericCollection<T> ThisType;
    typedef System::Collections::Generic::IEnumerable<T> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
public:

    /// <summary>
    /// Returns the number of behaviors in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual int32_t get_Count() = 0;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    virtual System::SharedPtr<System::Object> get_SyncRoot() = 0;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual bool get_IsSynchronized() = 0;
    
    /// <summary>
    /// Copies all elements from the collection into the specified array.
    /// </summary>
    /// <param name="array">Array to fill.</param>
    /// <param name="index">Starting position in target array.</param>
    virtual void CopyTo(System::ArrayPtr<T> array, int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


