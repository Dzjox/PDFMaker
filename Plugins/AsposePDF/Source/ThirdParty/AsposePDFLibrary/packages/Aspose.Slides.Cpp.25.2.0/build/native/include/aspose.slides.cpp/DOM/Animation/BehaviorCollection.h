#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Animation/IBehaviorCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class Effect;
class IBehavior;
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
/// Represents collection of behavior effects.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BehaviorCollection : public Aspose::Slides::Animation::IBehaviorCollection
{
    typedef BehaviorCollection ThisType;
    typedef Aspose::Slides::Animation::IBehaviorCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Animation::Effect;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IBehavior>>;
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
    /// Returns the number of behaviors in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Gets a value indicating whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <returns>
    /// true if the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only; otherwise, false.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool get_IsReadOnly();
    
    /// <summary>
    /// Add new behavior to a collection.
    /// </summary>
    /// <param name="item">Behavior to add.</param>
    ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<IBehavior> item) override;
    /// <summary>
    /// Determines the index of a specific item in the <see cref="System::Collections::Generic::IList">IList</see>.
    /// </summary>
    /// <returns>
    /// The index of <paramref name="item"></paramref> if found in the list; otherwise, -1.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::IList">IList</see>.</param>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IBehavior> item) override;
    /// <summary>
    /// Inserts new behavior to a collection at the specified index.
    /// </summary>
    /// <param name="index">Index where new behavior should be inserted.</param>
    /// <param name="item">Behavior to insert.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, System::SharedPtr<IBehavior> item) override;
    /// <summary>
    /// Copies the elements of the <see cref="System::Collections::Generic::ICollection">ICollection</see> to an <see cref="System::Array"></see>, starting at a particular <see cref="System::Array"></see> index.
    /// </summary>
    /// <param name="array">The one-dimensional <see cref="System::Array"></see> that is the destination of the elements copied from <see cref="System::Collections::Generic::ICollection">ICollection</see>. The <see cref="System::Array"></see> must have zero-based indexing.</param><param name="arrayIndex">The zero-based index in <paramref name="array"></paramref> at which copying begins.</param><exception cref="System::ArgumentNullException"><paramref name="array"></paramref> is null.</exception><exception cref="System::ArgumentOutOfRangeException"><paramref name="arrayIndex"></paramref> is less than 0.</exception><exception cref="System::ArgumentException">The number of elements in the source <see cref="System::Collections::Generic::ICollection">ICollection</see> is greater than the available space from <paramref name="arrayIndex"></paramref> to the end of the destination <paramref name="array"></paramref>.</exception>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IBehavior>> array, int32_t arrayIndex);
    /// <summary>
    /// Removes specified behavior from a collection.
    /// </summary>
    /// <param name="item">Behavior to remove.</param>
    ASPOSE_SLIDES_SHARED_API bool Remove(System::SharedPtr<IBehavior> item) override;
    /// <summary>
    /// Removes behavior from a collection at the specified index.
    /// </summary>
    /// <param name="index">Index of a behavior to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all behaviors from a collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    ASPOSE_SLIDES_SHARED_API bool Contains(System::SharedPtr<IBehavior> item) override;
    
    /// <summary>
    /// Retirns a behavior at the specified index.
    /// </summary>
    /// <param name="index">Index of a behavior to return.</param>
    /// <returns>Animation begavior.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBehavior> idx_get(int32_t index) override;
    /// <summary>
    /// Retirns a behavior at the specified index.
    /// </summary>
    /// <param name="index">Index of a behavior to return.</param>
    /// <param name="value">Animation begavior.</param>
    ASPOSE_SLIDES_SHARED_API void idx_set(int32_t index, System::SharedPtr<IBehavior> value) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IBehavior>>> GetEnumerator() override;
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
    System::WeakPtr<Effect> m_parent;
    
    ASPOSE_SLIDES_LOCAL_API BehaviorCollection();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BehaviorCollection, CODEPORTING_ARGS());
    
    virtual ASPOSE_SLIDES_SHARED_API ~BehaviorCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IBehavior>>> m_items;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


