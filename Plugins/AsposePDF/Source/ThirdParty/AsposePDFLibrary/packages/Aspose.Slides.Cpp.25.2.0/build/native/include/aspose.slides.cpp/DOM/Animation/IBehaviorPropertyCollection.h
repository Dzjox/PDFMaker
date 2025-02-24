#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ilist.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class IBehaviorProperty;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents timing properties for the effect behavior.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBehaviorPropertyCollection : public System::Collections::Generic::IList<System::SharedPtr<Aspose::Slides::Animation::IBehaviorProperty>>
{
    typedef IBehaviorPropertyCollection ThisType;
    typedef System::Collections::Generic::IList<System::SharedPtr<Aspose::Slides::Animation::IBehaviorProperty>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Adds a new property to the collection.
    /// </summary>
    /// <param name="propertyValue">Value of the property to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(const System::String& propertyValue) = 0;
    /// <summary>
    /// Determines the index of a specific item by property value in the <see cref="System::Collections::Generic::IList">IList</see>.
    /// </summary>
    /// <param name="propertyValue">value of the property</param>
    /// <returns>The index of the property with the specified value</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(const System::String& propertyValue) const = 0;
    /// <summary>
    /// Inserts a new property (with the specified property value) to the collection at the specified index.
    /// </summary>
    /// <param name="index">Index where a new property should be inserted.</param>
    /// <param name="propertyValue">Value of the property to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, System::String propertyValue) = 0;
    /// <summary>
    /// Removes specified property from the collection.
    /// </summary>
    /// <param name="propertyValue">Value of the property to remove.</param>
    /// <returns>True if a property removed successfully <see cref="bool"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Remove(const System::String& propertyValue) = 0;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="propertyValue"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="propertyValue">Value of the property to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Contains(const System::String& propertyValue) const = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


