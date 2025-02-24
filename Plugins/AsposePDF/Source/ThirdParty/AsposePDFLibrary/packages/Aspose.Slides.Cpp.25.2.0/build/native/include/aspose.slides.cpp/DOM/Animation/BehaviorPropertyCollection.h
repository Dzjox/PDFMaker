#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Animation/IBehaviorPropertyCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class Behavior;
class IBehaviorProperty;
} // namespace Animation
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents timing properties for the effect behavior.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BehaviorPropertyCollection : public Aspose::Slides::Animation::IBehaviorPropertyCollection
{
    typedef BehaviorPropertyCollection ThisType;
    typedef Aspose::Slides::Animation::IBehaviorPropertyCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Animation::Behavior;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IBehaviorProperty>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Returns the number of properties stored in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets a value indicating whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <returns>
    /// true if the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only; otherwise, false.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Adds a new property to the collection.
    /// </summary>
    /// <param name="item">Property to add.</param>
    ASPOSE_SLIDES_SHARED_API void Add(const System::SharedPtr<IBehaviorProperty>& item) override;
    /// <summary>
    /// Adds a new property to the collection.
    /// </summary>
    /// <param name="propertyValue">Value of the property to add.</param>
    ASPOSE_SLIDES_SHARED_API void Add(const System::String& propertyValue) override;
    /// <summary>
    /// Determines the index of a specific item in the <see cref="System::Collections::Generic::IList">IList</see>.
    /// </summary>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::IList">IList</see>.</param>
    /// <returns>The index of <paramref name="item"></paramref> if found in the list; otherwise, -1.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(const System::SharedPtr<IBehaviorProperty>& item) const override;
    /// <summary>
    /// Determines the index of a specific item by property value in the <see cref="System::Collections::Generic::IList">IList</see>.
    /// </summary>
    /// <param name="propertyValue">value of the property</param>
    /// <returns>The index of the property with the specified value</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(const System::String& propertyValue) const override;
    /// <summary>
    /// Inserts a new property to the collection at the specified index.
    /// </summary>
    /// <param name="index">Index where a new property should be inserted.</param>
    /// <param name="item">Property to add.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, const System::SharedPtr<IBehaviorProperty>& item) override;
    /// <summary>
    /// Inserts a new property (with the specified property value) to the collection at the specified index.
    /// </summary>
    /// <param name="index">Index where a new property should be inserted.</param>
    /// <param name="propertyValue">Value of the property to add.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, System::String propertyValue) override;
    /// <summary>
    /// Copies the elements of the <see cref="System::Collections::Generic::ICollection">ICollection</see> to an <see cref="System::Array"></see>, starting at a particular <see cref="System::Array"></see> index.
    /// </summary>
    /// <param name="array">The one-dimensional <see cref="System::Array"></see> that is the destination of the elements copied from <see cref="System::Collections::Generic::ICollection">ICollection</see>. The <see cref="System::Array"></see> must have zero-based indexing.</param>
    /// <param name="arrayIndex">The zero-based index in <paramref name="array"></paramref> at which copying begins.</param>
    /// <exception cref="System::ArgumentNullException"><paramref name="array"></paramref> is null.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException"><paramref name="arrayIndex"></paramref> is less than 0.</exception>
    /// <exception cref="System::ArgumentException">The number of elements in the source <see cref="System::Collections::Generic::ICollection">ICollection</see> is greater than the available space from <paramref name="arrayIndex"></paramref> to the end of the destination <paramref name="array"></paramref>.</exception>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IBehaviorProperty>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Removes specified property from the collection.
    /// </summary>
    /// <param name="item">Property to remove.</param>
    ASPOSE_SLIDES_SHARED_API bool Remove(const System::SharedPtr<IBehaviorProperty>& item) override;
    /// <summary>
    /// Removes specified property from the collection.
    /// </summary>
    /// <param name="propertyValue">Value of the property to remove.</param>
    ASPOSE_SLIDES_SHARED_API bool Remove(const System::String& propertyValue) override;
    /// <summary>
    /// Removes property at the specified index.
    /// </summary>
    /// <param name="index">Index of the property which should be deleted.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all properties from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="item">The property to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    ASPOSE_SLIDES_SHARED_API bool Contains(const System::SharedPtr<IBehaviorProperty>& item) const override;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="propertyValue"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="propertyValue">Value of the property to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    ASPOSE_SLIDES_SHARED_API bool Contains(const System::String& propertyValue) const override;
    
    /// <summary>
    /// Returns a property at the specified index.
    /// </summary>
    /// <param name="index">Index of a property to return.</param>
    /// <returns>Animation behavior property.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBehaviorProperty> idx_get(int32_t index) const override;
    /// <summary>
    /// Returns a property at the specified index.
    /// </summary>
    /// <param name="index">Index of a property to return.</param>
    /// <param name="value">Animation behavior property.</param>
    ASPOSE_SLIDES_SHARED_API void idx_set(int32_t index, System::SharedPtr<IBehaviorProperty> value) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IBehaviorProperty>>> GetEnumerator() override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API BehaviorPropertyCollection();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BehaviorPropertyCollection, CODEPORTING_ARGS());
    
    virtual ASPOSE_SLIDES_SHARED_API ~BehaviorPropertyCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IBehaviorProperty>>> m_items;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


