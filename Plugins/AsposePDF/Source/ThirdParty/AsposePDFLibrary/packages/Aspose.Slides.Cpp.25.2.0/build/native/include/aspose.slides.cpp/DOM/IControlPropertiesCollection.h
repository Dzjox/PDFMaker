#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class ICollection;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// A collection of ActiveX controls.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IControlPropertiesCollection : public System::Collections::Generic::IEnumerable<System::Collections::Generic::KeyValuePair<System::String, System::String>>
{
    typedef IControlPropertiesCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::Collections::Generic::KeyValuePair<System::String, System::String>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a number of properties in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    /// <summary>
    /// Returns a number of properties in the collection.
    /// Read-only <see cref="ICollection<string>"/>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_NamesOfProperties() = 0;
    
    /// <summary>
    /// Adds a property to the collection.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The alue of the property.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::String name, System::String value) = 0;
    /// <summary>
    /// Removes a property with the specified name.
    /// </summary>
    /// <param name="name">The name of property to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::String name) = 0;
    
    /// <summary>
    /// Returns property.
    /// </summary>
    /// <param name="name">Name of property.</param>
    /// <returns></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String idx_get(System::String name) = 0;
    /// <summary>
    /// Sets property.
    /// </summary>
    /// <param name="name">Name of property.</param>
    /// <param name="value"></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void idx_set(System::String name, System::String value) = 0;
    
    /// <summary>
    /// Removes all properties.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


