#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/date_time.h>
#include <drawing/point_f.h>
#include <DOM/IComment.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class CommentAuthor;
class CommentCollection;
namespace Export
{
class ExportNotesSlides;
} // namespace Export
class HandoutSlideView;
class HandoutsView;
class ICommentAuthor;
class ISlide;
class ModernComment;
namespace PptxSerialization
{
namespace PartParser
{
class CommentListPartParser;
} // namespace PartParser
} // namespace PptxSerialization
class Slide;
class SlideCollection;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class CommentPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a comment on a slide.
/// </summary>
/// <example>
/// This example shows you how to add a comment to a slide in a PowerPoint presentation.
/// <code>
/// // Instantiates the Presentation class
/// auto presentation = System::MakeObject<Presentation>();
/// 
/// // Adds an empty slide
/// presentation->get_Slides()->AddEmptySlide(presentation->get_LayoutSlides()->idx_get(0));
/// // Adds an author
/// auto author = presentation->get_CommentAuthors()->AddAuthor(u"Jawad", u"MF");
/// // Sets the position for comments
/// System::Drawing::PointF point(0.2f, 0.2f);
/// // Adds slide comment for an author on slide 1
/// author->get_Comments()->AddComment(u"Hello Jawad, this is slide comment", presentation->get_Slides()->idx_get(0), point, System::DateTime::get_Now());
/// // Adds slide comment for an author on slide 2
/// author->get_Comments()->AddComment(u"Hello Jawad, this is second slide comment", presentation->get_Slides()->idx_get(1), point, System::DateTime::get_Now());
/// // Save the PowerPoint Presentation file
/// presentation->Save(u"Comments_out.pptx", SaveFormat::Pptx);
/// </code>
/// This example shows you how to access an existing comment on a slide in a PowerPoint presentation.
/// <code>
/// // Instantiates the Presentation class
/// auto presentation = System::MakeObject<Presentation>(u"Comments1.pptx");
/// 
/// // Iterate CommentAuthors
/// for (CommentAuthor&& commentAuthor : presentation->get_CommentAuthors())
/// {
///     // Iterate Comments
///     for (Comment&& comment : commentAuthor->get_Comments())
///     {
///         System::Console::WriteLine(System::String(u"ISlide :") + comment->get_Slide()->get_SlideNumber() +
///                                    u" has comment: " + comment->get_Text() +
///                                    u" with Author: " + comment->get_Author()->get_Name() +
///                                    u" posted on time :" + comment->get_CreatedTime() + u"\n");
///     }
/// }
/// </code>
/// This example shows you how to add comments and get replies to them.
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// auto slide = pres->get_Slides()->idx_get(0);
/// System::Drawing::PointF pos(10.0f, 10.0f);
/// 
/// // Adds a comment
/// System::SharedPtr<ICommentAuthor> author1 = pres->get_CommentAuthors()->AddAuthor(u"Author_1", u"A.A.");
/// System::SharedPtr<IComment> comment1 = author1->get_Comments()->AddComment(u"comment1", slide, pos, System::DateTime::get_Now());
/// // Adds a reply to comment1
/// System::SharedPtr<ICommentAuthor> author2 = pres->get_CommentAuthors()->AddAuthor(u"Autror_2", u"B.B.");
/// System::SharedPtr<IComment> reply1 = author2->get_Comments()->AddComment(u"reply 1 for comment 1", slide, pos, System::DateTime::get_Now());
/// reply1->set_ParentComment(comment1);
/// // Adds another reply to comment1
/// System::SharedPtr<IComment> reply2 = author2->get_Comments()->AddComment(u"reply 2 for comment 1", slide, pos, System::DateTime::get_Now());
/// reply2->set_ParentComment(comment1);
/// // Adds a reply to existing reply
/// System::SharedPtr<IComment> subReply = author1->get_Comments()->AddComment(u"subreply 3 for reply 2", slide, pos, System::DateTime::get_Now());
/// subReply->set_ParentComment(reply2);
/// System::SharedPtr<IComment> comment2 = author2->get_Comments()->AddComment(u"comment 2", slide, pos, System::DateTime::get_Now());
/// System::SharedPtr<IComment> comment3 = author2->get_Comments()->AddComment(u"comment 3", slide, pos, System::DateTime::get_Now());
/// System::SharedPtr<IComment> reply3 = author1->get_Comments()->AddComment(u"reply 4 for comment 3", pres->get_Slides()->idx_get(0), pos, System::DateTime::get_Now());
/// reply3->set_ParentComment(comment3);
/// 
/// // Displays the comments hierarchy on console
/// auto comments = slide->GetSlideComments(nullptr);
/// for (int32_t i = 0; i < comments->get_Length(); i++)
/// {
///     System::SharedPtr<IComment> comment = comments[i];
///     while (comment->get_ParentComment() != nullptr)
///     {
///         System::Console::Write(u"\t");
///         comment = comment->get_ParentComment();
///     }
///     
///     System::Console::Write(u"{0} : {1}", comments[i]->get_Author()->get_Name(), comments[i]->get_Text());
///     System::Console::WriteLine();
/// }
/// 
/// pres->Save(u"parent_comment.pptx", SaveFormat::Pptx);
/// // Removes comment1 and all replies to it
/// comment1->Remove();
/// pres->Save(u"remove_comment.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS Comment : public virtual Aspose::Slides::IComment, public Aspose::Slides::IDOMObject
{
    typedef Comment ThisType;
    typedef Aspose::Slides::IComment BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HandoutSlideView;
    friend class Aspose::Slides::HandoutsView;
    friend class Aspose::Slides::ModernComment;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::CommentCollection;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::CommentListPartParser;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the plain text of a slide comment.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Text() override;
    /// <summary>
    /// Sets the plain text of a slide comment.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Text(System::String value) override;
    /// <summary>
    /// Returns the time of a comment creation.
    /// Setting this property to <see cref="System::DateTime::MinValue">DateTime::MinValue</see> means no comment time is set.
    /// Read <see cref="System::DateTime"></see>.
    /// </summary>
    /// <remarks>Comment time is an optional parameter.</remarks>
    ASPOSE_SLIDES_SHARED_API System::DateTime get_CreatedTime() override;
    /// <summary>
    /// Sets the time of a comment creation.
    /// Setting this property to <see cref="System::DateTime::MinValue">DateTime::MinValue</see> means no comment time is set.
    /// Write <see cref="System::DateTime"></see>.
    /// </summary>
    /// <remarks>Comment time is an optional parameter.</remarks>
    ASPOSE_SLIDES_SHARED_API void set_CreatedTime(System::DateTime value) override;
    /// <summary>
    /// Returns the parent slide of a comment.
    /// Read-only <see cref="Aspose::Slides::ISlide">ISlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlide> get_Slide() override;
    /// <summary>
    /// Returns the author of a comment.
    /// Read-only <see cref="Aspose::Slides::ICommentAuthor">ICommentAuthor</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommentAuthor> get_Author() override;
    /// <summary>
    /// Returns the position of a comment on a slide.
    /// Read <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::PointF get_Position() override;
    /// <summary>
    /// Sets the position of a comment on a slide.
    /// Write <see cref="System::Drawing::PointF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Position(System::Drawing::PointF value) override;
    /// <summary>
    /// Gets parent comment.
    /// Read <see cref="Aspose::Slides::IComment">IComment</see>.
    /// </summary>
    /// <exception cref="PptxEditException">Thrown when setting the value leads to a circular reference</exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IComment> get_ParentComment() override;
    /// <summary>
    /// Sets parent comment.
    /// Write <see cref="Aspose::Slides::IComment">IComment</see>.
    /// </summary>
    /// <exception cref="PptxEditException">Thrown when setting the value leads to a circular reference</exception>
    ASPOSE_SLIDES_SHARED_API void set_ParentComment(System::SharedPtr<IComment> value) override;
    
    /// <summary>
    /// Removes comment and all its replies from the parent collection.
    /// </summary>
    /// <exception cref="PptxEditException">Thrown if comment is already removed</exception>
    ASPOSE_SLIDES_SHARED_API void Remove() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API int32_t get_TimeZoneBias() const;
    ASPOSE_SLIDES_LOCAL_API void set_TimeZoneBias(int32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::CommentPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API Comment(System::SharedPtr<CommentCollection> parentImmediate, System::SharedPtr<CommentAuthor> author, System::String text, System::SharedPtr<Aspose::Slides::Slide> slide, System::Drawing::PointF position, System::DateTime dateTime);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Comment, CODEPORTING_ARGS(System::SharedPtr<CommentCollection> parentImmediate, System::SharedPtr<CommentAuthor> author, System::String text, System::SharedPtr<Aspose::Slides::Slide> slide, System::Drawing::PointF position, System::DateTime dateTime));
    
    virtual ASPOSE_SLIDES_SHARED_API ~Comment();
    
private:

    int32_t pr_TimeZoneBias;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<CommentCollection> m_parentImmediate;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::CommentPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::String m_text;
    System::DateTime m_time;
    System::Drawing::PointF m_position;
    System::WeakPtr<Aspose::Slides::Slide> m_slide;
    System::WeakPtr<CommentAuthor> m_author;
    System::SharedPtr<IComment> m_parentComment;
    
};

} // namespace Slides
} // namespace Aspose


