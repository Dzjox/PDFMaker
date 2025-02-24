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
namespace Animation
{
class IBehavior;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents collection of behavior effects.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBehaviorCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::IBehavior>>
{
    typedef IBehaviorCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Animation::IBehavior>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the number of behaviors in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Returns a behavior at the specified index.
    /// </summary>
    /// <param name="index">Index of a behavior to return.</param>
    /// <returns>Animation begavior.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBehavior> idx_get(int32_t index) = 0;
    /// <summary>
    /// Returns a behavior at the specified index.
    /// </summary>
    /// <param name="index">Index of a behavior to return.</param>
    /// <param name="value">Animation begavior.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void idx_set(int32_t index, System::SharedPtr<IBehavior> value) = 0;
    
    /// <summary>
    /// Add new behavior to a collection.
    /// </summary>
    /// <param name="item">Behavior to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IBehavior> item) = 0;
    /// <summary>
    /// Determines the index of a specific item in the <see cref="System::Collections::Generic::IList">IList</see>.
    /// </summary>
    /// <returns>
    /// The index of <paramref name="item"></paramref> if found in the list; otherwise, -1.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::IList">IList</see>.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<IBehavior> item) = 0;
    /// <summary>
    /// Inserts new behavior to a collection at the specified index.
    /// </summary>
    /// <param name="index">Index where new behavior should be inserted.</param>
    /// <param name="item">Behavior to insert.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, System::SharedPtr<IBehavior> item) = 0;
    /// <summary>
    /// Removes specified behavior from a collection.
    /// </summary>
    /// <param name="item">Behavior to remove.</param>
    /// <returns>True if a behavior removed successfully <see cref="bool"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Remove(System::SharedPtr<IBehavior> item) = 0;
    /// <summary>
    /// Removes behavior from a collection at the specified index.
    /// </summary>
    /// <param name="index">Index of a behavior to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all behaviors from a collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Contains(System::SharedPtr<IBehavior> item) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


