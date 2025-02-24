#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/keyvalue_pair.h>

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the collection of tags (user defined pairs of strings)
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITagCollection : public Aspose::Slides::IGenericCollection<System::Collections::Generic::KeyValuePair<System::String, System::String>>
{
    typedef ITagCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::Collections::Generic::KeyValuePair<System::String, System::String>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Adds a new tag to collection.
    /// </summary>
    /// <param name="name">The name of the tag.</param>
    /// <param name="value">The value of the tag.</param>
    /// <returns>The index of the added tag.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t Add(System::String name, System::String value) = 0;
    /// <summary>
    /// Removes the tag with a specified name from the collection.
    /// </summary>
    /// <param name="name">The name of tag to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::String name) = 0;
    /// <summary>
    /// Returns the zero-based index of the specified key in the collection.
    /// </summary>
    /// <param name="name">The name to locate in the collection.</param>
    /// <returns>The zero-based index of key, if key is found in the collection; otherwise, -1.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOfName(System::String name) = 0;
    /// <summary>
    /// Determines whether the collection contains a specific name.
    /// </summary>
    /// <param name="name">The key to locate.</param>
    /// <returns>True if the collection contains an tag with the specified key; otherwise, false.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Contains(System::String name) = 0;
    /// <summary>
    /// Removes the tag at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of the tag to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all tags from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Returns value of a tag at the specified index.
    /// </summary>
    /// <param name="index">Index of a tag to return.</param>
    /// <returns>Value of a tag.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetValueByIndex(int32_t index) = 0;
    /// <summary>
    /// Returns key of a tag at the specified index.
    /// </summary>
    /// <param name="index">Index of a tag to return.</param>
    /// <returns>Key of a tag.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetNameByIndex(int32_t index) = 0;
    /// <summary>
    /// Returns names of tags.
    /// </summary>
    /// <returns>Names of tags.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::String> GetNamesOfTags() = 0;
    
    /// <summary>
    /// Returns a key and a value pair of a tag.
    /// </summary>
    /// <param name="name">Key of a tag.</param>
    /// <returns>Value of a tag.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String idx_get(System::String name) = 0;
    /// <summary>
    /// Sets a key and a value pair of a tag.
    /// </summary>
    /// <param name="name">Key of a tag.</param>
    /// <param name="value">Value of a tag.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void idx_set(System::String name, System::String value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


