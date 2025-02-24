#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/ICommentCollection.h>

#include "DOM/DomObject.h"
#include "DOM/CommentAuthor.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Comment;
class IComment;
class IModernComment;
class IShape;
class ISlide;
class ModernComment;
class Presentation;
class Shape;
class Slide;
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
class DateTime;
namespace Drawing
{
class PointF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of comments of one author.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CommentCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::CommentAuthor>>, public Aspose::Slides::ICommentCollection
{
    typedef CommentCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::CommentAuthor>> BaseType;
    typedef Aspose::Slides::ICommentCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Comment;
    friend class Aspose::Slides::CommentAuthor;
    friend class Aspose::Slides::Presentation;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IComment>>;
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
    /// Read-only <see cref="Aspose::Slides::Comment">Comment</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IComment> idx_get(int32_t index) override;
    
    /// <summary>
    /// Add new comment at the end of a collection.
    /// </summary>
    /// <param name="text">Plain text of a new comment.</param>
    /// <param name="slide">Slide in a presentation where to add a new comment.</param>
    /// <param name="position">Position on a slide where to add a new comment.</param>
    /// <param name="creationTime">Time of a comment creation.</param>
    /// <returns>Added comment.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IComment> AddComment(System::String text, System::SharedPtr<ISlide> slide, System::Drawing::PointF position, System::DateTime creationTime) override;
    /// <summary>
    /// Add new modern comment at the end of a collection.
    /// </summary>
    /// <param name="text">Plain text of a new modern comment.</param>
    /// <param name="slide">Slide in a presentation where to add a new modern comment.</param>
    /// <param name="shape">Shape on a slide to which a new modern comment is associated.</param>
    /// <param name="position">Position on a slide where to add a new modern comment.</param>
    /// <param name="creationTime">Time of a modern comment creation.</param>
    /// <returns>Added modern comment.</returns>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// 
    /// auto newAuthor = pres->get_CommentAuthors()->AddAuthor(u"Some Author", u"SA");
    /// newAuthor->get_Comments()->AddModernComment(u"This is modern comment", slide, nullptr, PointF(100.0f, 100.0f), DateTime::get_Now());
    /// 
    /// pres->Save(u"output.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IModernComment> AddModernComment(System::String text, System::SharedPtr<ISlide> slide, System::SharedPtr<IShape> shape, System::Drawing::PointF position, System::DateTime creationTime) override;
    /// <summary>
    /// Insert new comment to a collection at the specified index.
    /// </summary>
    /// <param name="index">Index of the element in a collection at which comment should be inserted.</param>
    /// <param name="text">Plain text of a new comment.</param>
    /// <param name="slide">Slide in a presentation where to add a new comment.</param>
    /// <param name="position">Position on a slide where to add a new comment.</param>
    /// <param name="creationTime">Time of a comment creation.</param>
    /// <returns>Inserted comment.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IComment> InsertComment(int32_t index, System::String text, System::SharedPtr<ISlide> slide, System::Drawing::PointF position, System::DateTime creationTime) override;
    /// <summary>
    /// Insert new modern comment to a collection at the specified index.
    /// </summary>
    /// <param name="index">Index of the element in a collection at which modern comment should be inserted.</param>
    /// <param name="text">Plain text of a new modern comment.</param>
    /// <param name="slide">Slide in a presentation where to add a new modern comment.</param>
    /// <param name="shape">Shape on a slide to which a new modern comment is associated.</param>
    /// <param name="position">Position on a slide where to add a new modern comment.</param>
    /// <param name="creationTime">Time of a modern comment creation.</param>
    /// <returns>Inserted modern comment.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IModernComment> InsertModernComment(int32_t index, System::String text, System::SharedPtr<ISlide> slide, System::SharedPtr<IShape> shape, System::Drawing::PointF position, System::DateTime creationTime) override;
    /// <summary>
    /// Creates and returns an array with all comments.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::Comment">Comment</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IComment>> ToArray() override;
    /// <summary>
    /// Creates and returns an array with all comments from the specified range.
    /// </summary>
    /// <param name="startIndex">An index of a first comment to return.</param>
    /// <param name="count">A number of comments to return.</param>
    /// <returns>Array of <see cref="Aspose::Slides::Comment">Comment</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IComment>> ToArray(int32_t startIndex, int32_t count) override;
    /// <summary>
    /// Removes the element at the specified index in a collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Index is less than 0 or index is equal or greater than Count</exception>
    /// <exception cref="PptxEditException">Thrown if comment is already removed.</exception>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes the first occurrence of the specified comment in a collection.
    /// </summary>
    /// <param name="comment">The comment to remove from a collection.</param>
    /// <exception cref="System::ArgumentNullException">If comment is <c>null</c></exception>
    /// <exception cref="PptxEditException">Thrown if comment is already removed.</exception>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IComment> comment) override;
    /// <summary>
    /// Removes all comments from a collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IComment>>> GetEnumerator() override;
    /// <summary>
    /// Finds a comment in the collection by index.
    /// </summary>
    /// <param name="idx">Unique index of a comment to find <see cref="int32_t"></see>.</param>
    /// <returns>Found comment or null <see cref="Aspose::Slides::IComment">IComment</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IComment> FindCommentByIdx(int32_t idx);
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IComment>> array, int32_t index) override;
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
    
    ASPOSE_SLIDES_LOCAL_API CommentCollection(System::SharedPtr<CommentAuthor> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CommentCollection, CODEPORTING_ARGS(System::SharedPtr<CommentAuthor> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void RemoveInternal(System::SharedPtr<Comment> comment);
    ASPOSE_SLIDES_LOCAL_API void SortByCreatedTime();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~CommentCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IComment>>> m_comments;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Comment> CreateComment(System::String text, System::SharedPtr<Slide> slide, System::Drawing::PointF position, System::DateTime creationTime);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ModernComment> CreateModernComment(System::String text, System::SharedPtr<Slide> slide, System::SharedPtr<Shape> shape, System::Drawing::PointF position, System::DateTime creationTime);
    static ASPOSE_SLIDES_LOCAL_API int32_t CompareByCreatedTime(System::SharedPtr<IComment> l, System::SharedPtr<IComment> r);
    
};

} // namespace Slides
} // namespace Aspose


