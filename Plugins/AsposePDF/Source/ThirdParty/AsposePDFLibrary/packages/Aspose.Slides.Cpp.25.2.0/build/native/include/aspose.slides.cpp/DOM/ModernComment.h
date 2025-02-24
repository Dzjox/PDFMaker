#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/guid.h>
#include <DOM/IModernComment.h>
#include <cstdint>

#include "DOM/Comment.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class CommentAuthor;
class CommentCollection;
class IDOMObject;
class IShape;
enum class ModernCommentStatus : int8_t;
namespace PptxSerialization
{
namespace PartParser
{
class ModernCommentListPartParser;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class Shape;
class Slide;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class ModernCommentPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
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
class ASPOSE_SLIDES_SHARED_CLASS ModernComment final : public Aspose::Slides::Comment, public Aspose::Slides::IModernComment
{
    typedef ModernComment ThisType;
    typedef Aspose::Slides::Comment BaseType;
    typedef Aspose::Slides::IModernComment BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::ModernCommentListPartParser;
    friend class Aspose::Slides::CommentCollection;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a shape associated with the comment.
    /// Read-only <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_Shape() override;
    /// <summary>
    /// Gets starting position of text selection in text frame if the comment associated with AutoShape.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_TextSelectionStart() override;
    /// <summary>
    /// Sets starting position of text selection in text frame if the comment associated with AutoShape.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TextSelectionStart(int32_t value) override;
    /// <summary>
    /// Gets text selection length in text frame if the comment associated with AutoShape.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_TextSelectionLength() override;
    /// <summary>
    /// Sets text selection length in text frame if the comment associated with AutoShape.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TextSelectionLength(int32_t value) override;
    /// <summary>
    /// Gets the status of the comment.
    /// Read <see cref="ModernCommentStatus"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ModernCommentStatus get_Status() override;
    /// <summary>
    /// Sets the status of the comment.
    /// Write <see cref="ModernCommentStatus"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Status(ModernCommentStatus value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::Guid get_ModernCommentId();
    ASPOSE_SLIDES_LOCAL_API void set_ModernCommentId(System::Guid value);
    ASPOSE_SLIDES_LOCAL_API int32_t get_TimeZoneBias() const;
    ASPOSE_SLIDES_LOCAL_API void set_TimeZoneBias(int32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ModernCommentPPTXUnsupportedProps> get_ModernPPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API ModernComment(System::SharedPtr<CommentCollection> parentImmediate, System::SharedPtr<CommentAuthor> author, System::String text, System::SharedPtr<Aspose::Slides::Slide> slide, System::SharedPtr<Aspose::Slides::Shape> shape, System::Drawing::PointF position, System::DateTime dateTime);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ModernComment, CODEPORTING_ARGS(System::SharedPtr<CommentCollection> parentImmediate, System::SharedPtr<CommentAuthor> author, System::String text, System::SharedPtr<Aspose::Slides::Slide> slide, System::SharedPtr<Aspose::Slides::Shape> shape, System::Drawing::PointF position, System::DateTime dateTime));
    
private:

    int32_t pr_TimeZoneBias;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<CommentCollection> m_parentImmediate;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ModernCommentPPTXUnsupportedProps> m_modernPptxUnsupportedProps;
    System::SharedPtr<Aspose::Slides::Shape> m_shape;
    int32_t m_textSelectionStart;
    int32_t m_textSelectionLength;
    ModernCommentStatus m_status;
    System::Guid m_modernCommentId;
    
};

} // namespace Slides
} // namespace Aspose


