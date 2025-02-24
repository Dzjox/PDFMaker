#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/ICustomXmlPartCollection.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class CustomData;
class CustomXmlPart;
class ICustomXmlPart;
class Presentation;
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
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents collection of custom xml parts.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CustomXmlPartCollection : public Aspose::Slides::ICustomXmlPartCollection, public Aspose::Slides::IDOMObject
{
    typedef CustomXmlPartCollection ThisType;
    typedef Aspose::Slides::ICustomXmlPartCollection BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::CustomXmlPart;
    friend class Aspose::Slides::CustomData;
    friend class Aspose::Slides::Presentation;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<ICustomXmlPart>>;
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
    /// Returns count of custom xml parts in the collection.
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
    /// Returns the element at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of the element to get.</param>
    /// <returns>The element at the specified index.</returns>
    /// <exception cref="System::ArgumentOutOfRangeException">index is less than 0.-or-index is equal to or greater than Count</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomXmlPart> idx_get(int32_t index) override;
    
    /// <summary>
    /// Adds new custom xml part.
    /// </summary>
    /// <param name="xmlString">The xml string of new part to be added.</param>
    /// <returns>Created custom xml part.</returns>
    /// <exception cref="System::ArgumentNullException">xmlString is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">xmlString is empty or xml-data is invalid.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomXmlPart> Add(System::String xmlString) override;
    /// <summary>
    /// Adds new custom xml part.
    /// </summary>
    /// <param name="xmlData">The xml data of new part to be added.</param>
    /// <returns>Created custom xml part.</returns>
    /// <exception cref="System::ArgumentNullException">xmlData is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">xmlData is empty or invalid.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomXmlPart> Add(System::ArrayPtr<uint8_t> xmlData) override;
    /// <summary>
    /// Adds new custom xml part.
    /// </summary>
    /// <param name="inputStream">The inputStream with xml data of new part to be added.</param>
    /// <returns>Created custom xml part.</returns>
    /// <exception cref="System::ArgumentNullException">inputStream is <c>null</c>.</exception>
    /// <exception cref="System::ArgumentException">Data in inputStream is empty or invalid.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomXmlPart> Add(System::SharedPtr<System::IO::Stream> inputStream) override;
    /// <summary>
    /// Removes custom xml part at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="System::ArgumentOutOfRangeException">index is less than 0.-or-index is equal to or greater than Count</exception>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <param name="item">The custom xml part to remove.</param>
    /// <exception cref="System::ArgumentNullException">item is <c>null</c>.</exception>
    /// <returns><c>true</c> if item is successfully removed; otherwise, <c>false</c>.</returns>
    ASPOSE_SLIDES_SHARED_API bool Remove(System::SharedPtr<ICustomXmlPart> item) override;
    /// <summary>
    /// Removes all items from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Copy to specified array.
    /// </summary>
    /// <param name="array">Array to copy to.</param>
    /// <param name="index">Index to begin copying.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ICustomXmlPart>> array, int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ICustomXmlPart>>> GetEnumerator() override;
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
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ICustomXmlPart>>> get_InternalList();
    
    ASPOSE_SLIDES_LOCAL_API CustomXmlPartCollection(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CustomXmlPartCollection, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~CustomXmlPartCollection();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ICustomXmlPart>>> m_items;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Presentation> GetParentPresentation();
    
};

} // namespace Slides
} // namespace Aspose


