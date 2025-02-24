#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICommentAuthor;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of comment authors.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICommentAuthorCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ICommentAuthor>>
{
    typedef ICommentAuthorCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ICommentAuthor>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::ICommentAuthor">ICommentAuthor</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommentAuthor> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Add new author at the end of a collection.
    /// </summary>
    /// <param name="name">Name of a new author.</param>
    /// <param name="initials">Initials of a new author.</param>
    /// <returns>New <see cref="Aspose::Slides::ICommentAuthor">ICommentAuthor</see> object.</returns>
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if author with the same name and initials is already added.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommentAuthor> AddAuthor(System::String name, System::String initials) = 0;
    /// <summary>
    /// Creates and returns an array with all authors.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::ICommentAuthor">ICommentAuthor</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ICommentAuthor>> ToArray() = 0;
    /// <summary>
    /// Find author in a collection by name.
    /// </summary>
    /// <param name="name">Name of an author to find.</param>
    /// <returns>Author or null.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ICommentAuthor>> FindByName(System::String name) = 0;
    /// <summary>
    /// Find author in a collection by name and initials.
    /// </summary>
    /// <param name="name">Name of an author to find.</param>
    /// <param name="initials">Initials of an author to find.</param>
    /// <returns>Author or null.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ICommentAuthor>> FindByNameAndInitials(System::String name, System::String initials) = 0;
    /// <summary>
    /// Removes the author at the specified index of the collection.
    /// </summary>
    /// <param name="index"> The zero-based index of the element to remove.</param>
    /// <exception cref="System::ArgumentOutOfRangeException">Index is less than 0 or index is equal or greater than Count</exception>
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if author is already removed.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes the first occurrence of the specified author in a collection.
    /// </summary>
    /// <param name="author">The author to remove from a collection.</param>
    /// <exception cref="System::ArgumentNullException">Author is <c>null</c></exception>
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if author is already removed.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<ICommentAuthor> author) = 0;
    /// <summary>
    /// Removes all authors from a collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


