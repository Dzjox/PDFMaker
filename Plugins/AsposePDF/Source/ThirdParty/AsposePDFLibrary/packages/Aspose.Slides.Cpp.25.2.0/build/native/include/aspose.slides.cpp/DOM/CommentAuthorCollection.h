#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/ICommentAuthorCollection.h>

#include "DOM/Presentation.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class CommentAuthor;
class ICommentAuthor;
namespace PptxSerialization
{
namespace PartParser
{
class CommentListPartParser;
class ModernCommentListPartParser;
} // namespace PartParser
class PptxSerializator;
} // namespace PptxSerialization
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
class Guid;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of comment authors.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CommentAuthorCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>>, public Aspose::Slides::ICommentAuthorCollection
{
    typedef CommentAuthorCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>> BaseType;
    typedef Aspose::Slides::ICommentAuthorCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::ModernCommentListPartParser;
    friend class Aspose::Slides::CommentAuthor;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptxSerialization::PartParser::CommentListPartParser;
    friend class Aspose::Slides::PptxSerialization::PptxSerializator;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<ICommentAuthor>>;
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
    /// Gets the number of elements actually contained in the collection.
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
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::ICommentAuthor">ICommentAuthor</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommentAuthor> idx_get(int32_t index) override;
    
    /// <summary>
    /// Add new author at the end of a collection.
    /// </summary>
    /// <param name="name">Name of a new author.</param>
    /// <param name="initials">Initials of a new author.</param>
    /// <returns>New <see cref="Aspose::Slides::ICommentAuthor">ICommentAuthor</see> object.</returns>
    /// <exception cref="PptxEditException">Thrown if author with the same name and initials is already added.</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommentAuthor> AddAuthor(System::String name, System::String initials) override;
    /// <summary>
    /// Creates and returns an array with all authors.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::ICommentAuthor">ICommentAuthor</see></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ICommentAuthor>> ToArray() override;
    /// <summary>
    /// Find author in a collection by name.
    /// </summary>
    /// <param name="name">Name of an author to find.</param>
    /// <returns>Author or null.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ICommentAuthor>> FindByName(System::String name) override;
    /// <summary>
    /// Find author in a collection by name and initials.
    /// </summary>
    /// <param name="name">Name of an author to find.</param>
    /// <param name="initials">Initials of an author to find.</param>
    /// <returns>Author or null.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ICommentAuthor>> FindByNameAndInitials(System::String name, System::String initials) override;
    /// <summary>
    /// Removes the author at the specified index of the collection.
    /// </summary>
    /// <param name="index"> The zero-based index of the element to remove.</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Index is less than 0 or index is equal or greater than Count</exception>
    /// <exception cref="PptxEditException">Thrown if author is already removed.</exception>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes the first occurrence of the specified author in a collection.
    /// </summary>
    /// <param name="author">The author to remove from a collection.</param>
    /// <exception cref="System::ArgumentNullException">Author is <c>null</c></exception>
    /// <exception cref="PptxEditException">Thrown if author is already removed.</exception>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<ICommentAuthor> author) override;
    /// <summary>
    /// Removes all authors from a collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ICommentAuthor>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ICommentAuthor>> array, int32_t index) override;
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
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Presentation> get_Presentation();
    ASPOSE_SLIDES_LOCAL_API int32_t get_ClassicAuthorsCount();
    ASPOSE_SLIDES_LOCAL_API int32_t get_ModernAuthorsCount();
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ICommentAuthor>>> m_commentAuthors;
    System::SharedPtr<CommentAuthor> m_unknownAuthor;
    
    ASPOSE_SLIDES_LOCAL_API CommentAuthorCollection(System::SharedPtr<Aspose::Slides::Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CommentAuthorCollection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Presentation> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool RemoveInternal(System::SharedPtr<ICommentAuthor> author);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CommentAuthor> FindByIndex(int32_t idx);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CommentAuthor> FindByModernId(System::Guid id);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~CommentAuthorCollection();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CommentAuthor> get_UnknownAuthor();
    
    uint32_t m_nextId;
    
};

} // namespace Slides
} // namespace Aspose


