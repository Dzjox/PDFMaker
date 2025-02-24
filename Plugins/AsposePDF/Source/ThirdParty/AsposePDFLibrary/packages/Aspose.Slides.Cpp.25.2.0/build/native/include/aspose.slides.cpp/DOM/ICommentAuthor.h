#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IComment;
class ICommentCollection;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an author of comments.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICommentAuthor : public virtual System::Object
{
    typedef ICommentAuthor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the author's name.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Sets the author's name.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Name(System::String value) = 0;
    /// <summary>
    /// Returns the authors initials.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Initials() = 0;
    /// <summary>
    /// Sets the authors initials.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Initials(System::String value) = 0;
    /// <summary>
    /// Returns the collection of comments made by this author.
    /// Read-only <see cref="Aspose::Slides::ICommentCollection">ICommentCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommentCollection> get_Comments() = 0;
    
    /// <summary>
    /// Removes the author from the parent collection.
    /// </summary> 
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if author is already removed.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove() = 0;
    /// <summary>
    /// Returns comment made by this author at the specified index.
    /// Read-only <see cref="Aspose::Slides::IComment"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IComment> get_Comment(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


