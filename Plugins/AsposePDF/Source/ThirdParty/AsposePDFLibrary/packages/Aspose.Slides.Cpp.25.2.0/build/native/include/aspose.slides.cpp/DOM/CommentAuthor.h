#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/ICommentAuthor.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Comment;
class CommentAuthorCollection;
class CommentCollection;
namespace Export
{
class ExportNotesSlides;
} // namespace Export
class HandoutSlideView;
class IComment;
class ICommentCollection;
class IPresentationComponent;
namespace PptSerialization
{
class PptDeserializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AuthorListPartParser;
class CommentAuthorListPartParser;
class CommentListPartParser;
class ModernCommentListPartParser;
} // namespace PartParser
class PptxDeserializationContext;
} // namespace PptxSerialization
class SlideCollection;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class AuthorPPTXUnsupportedProps;
class CommentAuthorPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an author of comments.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CommentAuthor final : public Aspose::Slides::ICommentAuthor, public Aspose::Slides::IDOMObject
{
    typedef CommentAuthor ThisType;
    typedef Aspose::Slides::ICommentAuthor BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::HandoutSlideView;
    friend class Aspose::Slides::Comment;
    friend class Aspose::Slides::PptxSerialization::PartParser::AuthorListPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::ModernCommentListPartParser;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::CommentAuthorCollection;
    friend class Aspose::Slides::CommentCollection;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::CommentAuthorListPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::CommentListPartParser;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializationContext;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the author's name.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Sets the author's name.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    /// <summary>
    /// Returns the authors initials.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Initials() override;
    /// <summary>
    /// Sets the authors initials.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Initials(System::String value) override;
    /// <summary>
    /// Returns the collection of comments made by this author.
    /// Read-only <see cref="Aspose::Slides::ICommentCollection">ICommentCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICommentCollection> get_Comments() override;
    
    /// <summary>
    /// Removes the author from the parent collection.
    /// </summary>
    /// <exception cref="PptxEditException">Thrown if author is already removed.</exception>
    ASPOSE_SLIDES_SHARED_API void Remove() override;
    /// <summary>
    /// Returns comment made by this author at the specified index.
    /// Read-only <see cref="Aspose::Slides::IComment"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IComment> get_Comment(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API int32_t get_ClassicCommentsCount();
    ASPOSE_SLIDES_LOCAL_API int32_t get_ModernCommentsCount();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::CommentAuthorPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AuthorPPTXUnsupportedProps> get_ModernPPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Id();
    ASPOSE_SLIDES_LOCAL_API void set_Id(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    
    ASPOSE_SLIDES_LOCAL_API CommentAuthor(System::SharedPtr<CommentAuthorCollection> parentImmediate, uint32_t id, System::String name, System::String initials);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CommentAuthor, CODEPORTING_ARGS(System::SharedPtr<CommentAuthorCollection> parentImmediate, uint32_t id, System::String name, System::String initials));
    
    virtual ASPOSE_SLIDES_SHARED_API ~CommentAuthor();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<CommentAuthorCollection> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::String m_name;
    System::String m_initials;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::CommentAuthorPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AuthorPPTXUnsupportedProps> m_modernPptxUnsupportedProps;
    System::SharedPtr<CommentCollection> m_comments;
    
};

} // namespace Slides
} // namespace Aspose


