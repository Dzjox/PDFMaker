#pragma once

#include <system/scope_guard.h>
#include <system/object_ext.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/collections/ienumerator.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Generator/BoundsCheckableList/IBoundsCheckableItem.h"
#include "Aspose.PDF.Cpp/Generator/BoundsCheckableList/Exceptions/BoundsOutOfRangeException.h"
#include "Aspose.PDF.Cpp/Generator/BoundsCheckableList/BoundsCheckMode.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents BoundsCheckableList - wrapper around System.Collections.Generic.List.
/// </summary>
template<typename T>
class BoundsCheckableList : public System::Collections::Generic::IList<T>
{
    typedef IBoundsCheckableItem BaseT_IBoundsCheckableItem;
    assert_is_base_of(BaseT_IBoundsCheckableItem, T);
    
    typedef BoundsCheckableList<T> ThisType;
    typedef System::Collections::Generic::IList<T> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
    template<typename FT0> friend class Aspose::Pdf::BoundsCheckableList;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<T>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>Gets the number of elements contained in the System.Collections.Generic.List.</summary>
    /// <returns>The number of elements contained in the System.Collections.Generic.List.</returns>
    int32_t get_Count() const override
    {
        return Items->get_Count();
    }
    
    /// <summary>
    /// Gets the value indicating if collection is readonly.
    /// </summary>
    bool get_IsReadOnly() const override
    {
        return false;
    }
    
    /// <summary>
    /// Initializes a new instance of the BoundsCheckableList class.
    /// </summary>
    BoundsCheckableList() : Items(System::MakeObject<System::Collections::Generic::List<T>>())
        , _boundsCheckMode(Aspose::Pdf::BoundsCheckMode::Default), _containerHeight(0), _containerWidth(0)
    {
    }
    
    /// <summary>
    /// Initializes a new instance of the BoundsCheckableList class.
    /// </summary>
    /// <param name="boundsCheckMode">The bounds cCheck mode.</param>
    /// <param name="containerWidth">The container width.</param>
    /// <param name="containerHeight">The container height.</param>
    BoundsCheckableList(BoundsCheckMode boundsCheckMode, double containerWidth, double containerHeight)
        : Items(System::MakeObject<System::Collections::Generic::List<T>>())
        , _boundsCheckMode(Aspose::Pdf::BoundsCheckMode::Default), _containerHeight(0), _containerWidth(0)
    {
        //Self Reference+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        System::Details::ThisProtector __local_self_ref(this);
        //---------------------------------------------------------Self Reference
        
        _containerWidth = containerWidth;
        _containerHeight = containerHeight;
        UpdateBoundsCheckModeInternal(boundsCheckMode);
    }
    
    /// <summary>Adds an object to the end of the System.Collections.Generic.List depending on "boundsCheckMode" parameter.</summary>
    /// <param name="item">The object to be added to the end of the System.Collections.Generic.List. The value can be "null" for reference types.</param>
    void Add(const T& item) override
    {
        if (_boundsCheckMode == Aspose::Pdf::BoundsCheckMode::Default)
        {
            Items->Add(item);
        }
        else if (_boundsCheckMode == Aspose::Pdf::BoundsCheckMode::ThrowExceptionIfDoesNotFit)
        {
            if (System::ObjectExt::UnknownIsNull(item) || item->CheckBounds(_containerWidth, _containerHeight))
            {
                Items->Add(item);
            }
            else
            {
                throw BoundsOutOfRangeException(u"Bounds not fit.", _containerWidth, _containerHeight);
            }
        }
        else
        {
            throw System::NotSupportedException();
        }
    }
    
    /// <summary>Returns an enumerator that iterates through the System.Collections.Generic.List.</summary>
    /// <returns>A Enumerator for the System.Collections.Generic.List.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<T>> GetEnumerator() override
    {
        return Items->GetEnumerator();
    }
    
    /// <summary>Removes all elements from the System.Collections.Generic.List.</summary>
    void Clear() override
    {
        Items->Clear();
    }
    
    /// <summary>Determines whether an element is in the System.Collections.Generic.List.</summary>
    /// <param name="item">The object to locate in the System.Collections.Generic.List. The value can be null for reference types.</param>
    /// <returns>true if <paramref name="item">item</paramref> is found in the System.Collections.Generic.List; otherwise, false.</returns>
    bool Contains(const T& item) const override
    {
        return Items->Contains(item);
    }
    
    /// <summary>Copies the entire System.Collections.Generic.List to a compatible one-dimensional array, starting at the specified index of the target array.</summary>
    /// <param name="array">The one-dimensional System.Array that is the destination of the elements copied from System.Collections.Generic.List. The System.Array must have zero-based indexing.</param>
    /// <param name="arrayIndex">The zero-based index in array at which copying begins.</param>
    /// <exception cref="T:System::ArgumentNullException"><paramref name="array">array</paramref> is null.</exception>
    /// <exception cref="T:System::ArgumentOutOfRangeException"><paramref name="arrayIndex">arrayIndex</paramref> is less than 0.</exception>
    /// <exception cref="T:System::ArgumentException">The number of elements in the source System.Collections.Generic.List is greater than the available space from <paramref name="arrayIndex">arrayIndex</paramref> to the end of the destination <paramref name="array">array</paramref>.</exception>
    void CopyTo(System::ArrayPtr<T> array, int32_t arrayIndex) override
    {
        Items->CopyTo(array, arrayIndex);
    }
    
    /// <summary>Removes the first occurrence of a specific object from the System.Collections.Generic.List.</summary>
    /// <param name="item">The object to remove from the System.Collections.Generic.List. The value can be null for reference types.</param>
    /// <returns>true if <paramref name="item">item</paramref> is successfully removed; otherwise, false.  This method also returns false if <paramref name="item">item</paramref> was not found in the System.Collections.Generic.List.</returns>
    bool Remove(const T& item) override
    {
        return Items->Remove(item);
    }
    
    /// <summary>Searches for the specified object and returns the zero-based index of the first occurrence within the entire System.Collections.Generic.List.</summary>
    /// <param name="item">The object to locate in the System.Collections.Generic.List. The value can be null for reference types.</param>
    /// <returns>The zero-based index of the first occurrence of <paramref name="item">item</paramref> within the entire System.Collections.Generic.List, if found; otherwise, –1.</returns>
    int32_t IndexOf(const T& item) const override
    {
        return Items->IndexOf(item);
    }
    
    /// <summary>Inserts an element into the System.Collections.Generic.List at the specified index.</summary>
    /// <param name="index">The zero-based index at which item should be inserted.</param>
    /// <param name="item">The object to insert. The value can be null for reference types.</param>
    /// <exception cref="T:System::ArgumentOutOfRangeException"><paramref name="index">index</paramref> is less than 0.   -or-  <paramref name="index">index</paramref> is greater than Count.</exception>
    void Insert(int32_t index, const T& item) override
    {
        Items->Insert(index, item);
    }
    
    /// <summary>Removes the element at the specified index of the System.Collections.Generic.List.</summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="T:System::ArgumentOutOfRangeException"><paramref name="index">index</paramref> is less than 0.   -or-  <paramref name="index">index</paramref> is equal to or greater than Count.</exception>
    void RemoveAt(int32_t index) override
    {
        Items->RemoveAt(index);
    }
    
    /// <summary>
    ///     Gets paragraph from or to collection.
    /// </summary>
    /// <param name="index">The paragraph index.</param>
    /// <returns></returns>
    T idx_get(int32_t index) const override
    {
        return Items->idx_get(index);
    }
    
    /// <summary>
    ///     Sets paragraph from or to collection.
    /// </summary>
    /// <param name="index">The paragraph index.</param>
    /// <param name="value"></param>
    void idx_set(int32_t index, T value) override
    {
        Items->idx_set(index, value);
    }
    
    /// <summary>
    /// Updates boundsCheckMode parameter for initialized collection.
    /// </summary>
    /// <param name="boundsCheckMode">The bounds check mode.</param>
    /// <param name="containerWidth">The container width.</param>
    /// <param name="containerHeight">The container height.</param>
    void UpdateBoundsCheckMode(BoundsCheckMode boundsCheckMode, double containerWidth, double containerHeight)
    {
        _containerWidth = containerWidth;
        _containerHeight = containerHeight;
        UpdateBoundsCheckModeInternal(boundsCheckMode);
    }
    
    /// <summary>
    /// Updates boundsCheckMode parameter for initialized collection.
    /// </summary>
    /// <param name="boundsCheckMode">The bounds check mode.</param>
    void UpdateBoundsCheckMode(BoundsCheckMode boundsCheckMode)
    {
        UpdateBoundsCheckModeInternal(boundsCheckMode);
    }
    
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    iterator begin() noexcept
    {
        return Items->begin();
    }
    
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    iterator end() noexcept
    {
        return Items->end();
    }
    
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    const_iterator begin() const noexcept
    {
        return Items->cbegin();
    }
    
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    const_iterator end() const noexcept
    {
        return Items->cend();
    }
    
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    const_iterator cbegin() const noexcept
    {
        return Items->cbegin();
    }
    
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    const_iterator cend() const noexcept
    {
        return Items->cend();
    }
    
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    virtualized_iterator* virtualizeBeginIterator() override
    {
        return Items->virtualizeBeginIterator();
    }
    
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    virtualized_iterator* virtualizeEndIterator() override
    {
        return Items->virtualizeEndIterator();
    }
    
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    virtualized_iterator* virtualizeBeginConstIterator() const override
    {
        return Items->virtualizeBeginConstIterator();
    }
    
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    virtualized_iterator* virtualizeEndConstIterator() const override
    {
        return Items->virtualizeEndConstIterator();
    }
    
    void SetTemplateWeakPtr(uint32_t argument) override
    {
        switch (argument)
        {
            case 0:
                System::Details::CollectionHelpers::SetWeakPointer(0, Items);
                break;
                
        }
    }
    
protected:

    System::SharedPtr<System::Collections::Generic::List<T>> Items;
    
    virtual ~BoundsCheckableList()
    {
    }
    
    
private:

    BoundsCheckMode _boundsCheckMode;
    double _containerHeight;
    double _containerWidth;
    
    void UpdateBoundsCheckModeInternal(BoundsCheckMode boundsCheckMode)
    {
        _boundsCheckMode = boundsCheckMode;
        
        if (_boundsCheckMode != Aspose::Pdf::BoundsCheckMode::Default)
        {
            if (_containerWidth <= 0)
            {
                throw System::ArgumentOutOfRangeException(u"containerWidth", u"containerWidth must be > 0");
            }
            
            if (_containerHeight <= 0)
            {
                throw System::ArgumentOutOfRangeException(u"containerHeight", u"containerHeight must be > 0");
            }
        }
    }
    
    
};

} // namespace Pdf
} // namespace Aspose


