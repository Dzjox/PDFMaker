#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICommentAuthor;
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
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a comment on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IComment : public virtual System::Object
{
    typedef IComment ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the plain text of a slide comment.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Text() = 0;
    /// <summary>
    /// Sets the plain text of a slide comment.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Text(System::String value) = 0;
    /// <summary>
    /// Returns the time of a comment creation.
    /// Setting this property to <see cref="System::DateTime::MinValue">DateTime::MinValue</see> means no comment time is set.
    /// Read <see cref="System::DateTime"></see>. 
    /// </summary>
    /// <remarks>Comment time is an optional parameter.</remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::DateTime get_CreatedTime() = 0;
    /// <summary>
    /// Sets the time of a comment creation.
    /// Setting this property to <see cref="System::DateTime::MinValue">DateTime::MinValue</see> means no comment time is set.
    /// Write <see cref="System::DateTime"></see>. 
    /// </summary>
    /// <remarks>Comment time is an optional parameter.</remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CreatedTime(System::DateTime value) = 0;
    /// <summary>
    /// Returns the parent slide of a comment.
    /// Read-only <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlide> get_Slide() = 0;
    /// <summary>
    /// Returns the author of a comment.
    /// Read-only <see cref="Aspose::Slides::ICommentAuthor">ICommentAuthor</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICommentAuthor> get_Author() = 0;
    /// <summary>
    /// Returns the position of a comment on a slide.
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::PointF get_Position() = 0;
    /// <summary>
    /// Sets the position of a comment on a slide.
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(System::Drawing::PointF value) = 0;
    /// <summary>
    /// Gets parent comment.
    /// Read <see cref="Aspose::Slides::IComment">IComment</see>.
    /// </summary>
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if setting the value leads to a circular reference</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IComment> get_ParentComment() = 0;
    /// <summary>
    /// Sets parent comment.
    /// Write <see cref="Aspose::Slides::IComment">IComment</see>.
    /// </summary>
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if setting the value leads to a circular reference</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ParentComment(System::SharedPtr<IComment> value) = 0;
    
    /// <summary>
    /// Removes comment and all its replies from the parent collection.
    /// </summary>
    /// <exception cref="Aspose::Slides::PptxEditException">Thrown if comment is already removed</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove() = 0;
    
};

} // namespace Slides
} // namespace Aspose


