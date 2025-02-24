#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IComment;
class IModernComment;
class IShape;
class ISlide;
} // namespace Slides
} // namespace Aspose
namespace System
{
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
class ASPOSE_SLIDES_API_SHARED_CLASS ICommentCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IComment>>
{
    typedef ICommentCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IComment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::IComment">IComment</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IComment> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Add new comment at the end of a collection.
    /// </summary>
    /// <param name="text">Plain text of a new comment.</param>
    /// <param name="slide">Slide in a presentation where to add a new comment.</param>
    /// <param name="position">Position on a slide where to add a new comment.</param>
    /// <param name="creationTime">Time of a comment creation.</param>
    /// <returns>Added comment.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IComment> AddComment(System::String text, System::SharedPtr<ISlide> slide, System::Drawing::PointF position, System::DateTime creationTime) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IModernComment> AddModernComment(System::String text, System::SharedPtr<ISlide> slide, System::SharedPtr<IShape> shape, System::Drawing::PointF position, System::DateTime creationTime) = 0;
    /// <summary>
    /// Insert new comment to a collection at the specified index.
    /// </summary>
    /// <param name="index">Index of the element in a collection at which comment should be inserted.</param>
    /// <param name="text">Plain text of a new comment.</param>
    /// <param name="slide">Slide in a presentation where to add a new comment.</param>
    /// <param name="position">Position on a slide where to add a new comment.</param>
    /// <param name="creationTime">Time of a comment creation.</param>
    /// <returns>Inserted comment.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IComment> InsertComment(int32_t index, System::String text, System::SharedPtr<ISlide> slide, System::Drawing::PointF position, System::DateTime creationTime) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IModernComment> InsertModernComment(int32_t index, System::String text, System::SharedPtr<ISlide> slide, System::SharedPtr<IShape> shape, System::Drawing::PointF position, System::DateTime creationTime) = 0;
    /// <summary>
    /// Creates and returns an array with all comments.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::IComment">IComment</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IComment>> ToArray() = 0;
    /// <summary>
    /// Creates and returns an array with all comments from the specified range.
    /// </summary>
    /// <param name="startIndex">An index of a first comment to return.</param>
    /// <param name="count">A number of comments to return.</param>
    /// <returns>Array of <see cref="Aspose::Slides::IComment">IComment</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IComment>> ToArray(int32_t startIndex, int32_t count) = 0;
    /// <summary>
    /// Removes the element at the specified index in a collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Index is less than 0 or index is equal or greater than Count</exception>
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if comment is already removed.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes the first occurrence of the specified comment in a collection.
    /// </summary>
    /// <param name="comment">The comment to remove from a collection.</param>
    /// <exception cref="System::ArgumentNullException">If comment is <c>null</c></exception>
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if comment is already removed.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IComment> comment) = 0;
    /// <summary>
    /// Removes all comments from a collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


