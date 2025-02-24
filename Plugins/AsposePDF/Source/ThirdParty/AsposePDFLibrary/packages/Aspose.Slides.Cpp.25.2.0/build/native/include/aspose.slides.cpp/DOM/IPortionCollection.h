#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPortion;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of a portions.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPortionCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::IPortion>>
{
    typedef IPortionCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::IPortion>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortion> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds a Portion to the end of collection.
    /// </summary>
    /// <param name="value">The Portion to be added to the end of the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IPortion> value) = 0;
    /// <summary>
    /// Determines the index of a specific portion in collection.
    /// </summary>
    /// <returns>
    /// The index of <paramref name="item"></paramref> if found in the collection; otherwise, -1.
    /// </returns>
    /// <param name="item">The portion to locate in the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<IPortion> item) = 0;
    /// <summary>
    /// Inserts a Portion into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which Portion should be inserted.</param>
    /// <param name="value">The Portion to insert.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, System::SharedPtr<IPortion> value) = 0;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Contains(System::SharedPtr<IPortion> item) = 0;
    /// <summary>
    /// Removes the first occurrence of a specific object from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> was successfully removed from the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false. This method also returns false if <paramref name="item"></paramref> is not found in the original <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </returns>
    /// <param name="item">The object to remove from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param><exception cref="T:System::NotSupportedException">The <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Remove(System::SharedPtr<IPortion> item) = 0;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


