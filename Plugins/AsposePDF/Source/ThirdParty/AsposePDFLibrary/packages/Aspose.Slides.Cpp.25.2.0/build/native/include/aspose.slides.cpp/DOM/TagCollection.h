#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/ITagCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class CustomData;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
template <typename, typename> class KeyValuePair;
template <typename, typename> class SortedList;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the collection of tags (user defined pairs of strings)
/// </summary>
/// <example>
/// The following example shows how to add a tag to a PowerPoint Presentation.
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
/// auto tags = pres->get_CustomData()->get_Tags();
/// pres->get_CustomData()->get_Tags()->idx_set(u"MyTag", u"My Tag Value");
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS TagCollection final : public Aspose::Slides::ITagCollection
{
    typedef TagCollection ThisType;
    typedef Aspose::Slides::ITagCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::CustomData;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a number of tags in the collectoin.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Adds a new tag to collection.
    /// </summary>
    /// <param name="name">The name of the tag.</param>
    /// <param name="value">The value of the tag.</param>
    /// <returns>The index of the added tag.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t Add(System::String name, System::String value) override;
    /// <summary>
    /// Removes the tag with a specified name from the collection.
    /// </summary>
    /// <param name="name">The name of tag to remove.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::String name) override;
    /// <summary>
    /// Returns the zero-based index of the specified key in the collection.
    /// </summary>
    /// <param name="name">The name to locate in the collection.</param>
    /// <returns>The zero-based index of key, if key is found in the collection; otherwise, -1.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOfName(System::String name) override;
    /// <summary>
    /// Determines whether the collection contains a specific name.
    /// </summary>
    /// <param name="name">The key to locate.</param>
    /// <returns>True if the collection contains an tag with the specified key; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Contains(System::String name) override;
    /// <summary>
    /// Removes the tag at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of the tag to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all tags from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns value of a tag at the specified index.
    /// </summary>
    /// <param name="index">Index of a tag to return.</param>
    /// <returns>Value of a tag.</returns>
    ASPOSE_SLIDES_SHARED_API System::String GetValueByIndex(int32_t index) override;
    /// <summary>
    /// Returns key of a tag at the specified index.
    /// </summary>
    /// <param name="index">Index of a tag to return.</param>
    /// <returns>Key of a tag.</returns>
    ASPOSE_SLIDES_SHARED_API System::String GetNameByIndex(int32_t index) override;
    /// <summary>
    /// Returns names of tags.
    /// </summary>
    /// <returns>Names of tags.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::String> GetNamesOfTags() override;
    
    /// <summary>
    /// Returns a key and a value pair of a tag.
    /// </summary>
    /// <param name="name">Key of a tag.</param>
    /// <returns>Value of a tag.</returns>
    ASPOSE_SLIDES_SHARED_API System::String idx_get(System::String name) override;
    /// <summary>
    /// Sets a key and a value pair of a tag.
    /// </summary>
    /// <param name="name">Key of a tag.</param>
    /// <param name="value">Value of a tag.</param>
    ASPOSE_SLIDES_SHARED_API void idx_set(System::String name, System::String value) override;
    
    /// <summary>
    /// Copies all elements from the collection into the specified array.
    /// </summary>
    /// <param name="array">Array to fill.</param>
    /// <param name="index">Starting position in target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::String>> array, int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::String>>> GetEnumerator() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::SortedList<System::String, System::String>> get_Items();
    
    ASPOSE_SLIDES_LOCAL_API TagCollection();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TagCollection, CODEPORTING_ARGS());
    
    virtual ASPOSE_SLIDES_SHARED_API ~TagCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::SortedList<System::String, System::String>> m_items;
    
};

} // namespace Slides
} // namespace Aspose


