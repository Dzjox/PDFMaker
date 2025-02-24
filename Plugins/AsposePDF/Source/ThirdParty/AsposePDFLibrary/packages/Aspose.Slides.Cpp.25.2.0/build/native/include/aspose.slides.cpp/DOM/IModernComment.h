#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IComment.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IShape;
enum class ModernCommentStatus : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a comment on a slide.
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// auto slide = pres->get_Slides()->idx_get(0);
///     
/// auto newAuthor = pres->get_CommentAuthors()->AddAuthor(u"Some Author", u"SA");
/// auto modernComment = newAuthor->get_Comments()->AddModernComment(u"This is modern comment", slide, nullptr, PointF(100.0f, 100.0f), DateTime::get_Now());
/// 
/// pres->Save(u"output.pptx", SaveFormat::Pptx);
/// </code>
/// </example>    
class ASPOSE_SLIDES_API_SHARED_CLASS IModernComment : public virtual Aspose::Slides::IComment
{
    typedef IModernComment ThisType;
    typedef Aspose::Slides::IComment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a shape associated with the comment.
    /// Read-only <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_Shape() = 0;
    /// <summary>
    /// Returns starting position of text selection in text frame if the comment associated with AutoShape.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_TextSelectionStart() = 0;
    /// <summary>
    /// Sets starting position of text selection in text frame if the comment associated with AutoShape.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TextSelectionStart(int32_t value) = 0;
    /// <summary>
    /// Returns text selection length in text frame if the comment associated with AutoShape.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_TextSelectionLength() = 0;
    /// <summary>
    /// Sets text selection length in text frame if the comment associated with AutoShape.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TextSelectionLength(int32_t value) = 0;
    /// <summary>
    /// Returns the status of the comment.
    /// Read <see cref="ModernCommentStatus"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API ModernCommentStatus get_Status() = 0;
    /// <summary>
    /// Sets the status of the comment.
    /// Write <see cref="ModernCommentStatus"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Status(ModernCommentStatus value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


