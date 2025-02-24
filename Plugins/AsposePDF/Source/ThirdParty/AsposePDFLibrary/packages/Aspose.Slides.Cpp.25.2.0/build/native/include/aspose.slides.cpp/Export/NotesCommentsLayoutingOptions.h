#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <Export/INotesCommentsLayoutingOptions.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class CommentsPositions;
class ExportNotesSlides;
enum class NotesPositions;
} // namespace Export
namespace LowCode
{
class Convert;
} // namespace LowCode
class Presentation;
namespace View
{
class SlideView;
} // namespace View
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control the look of layouting of notes and comments in exported document.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS NotesCommentsLayoutingOptions : public Aspose::Slides::Export::INotesCommentsLayoutingOptions
{
    typedef NotesCommentsLayoutingOptions ThisType;
    typedef Aspose::Slides::Export::INotesCommentsLayoutingOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::LowCode::Convert;
    friend class Aspose::Slides::View::SlideView;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::Presentation;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the visibility of comments that do not have an author. If true then comments 
    /// will be displayed.
    /// (Applies only if comments are displayed).
    /// </summary>
    /// <remarks>
    /// Default value is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_ShowCommentsByNoAuthor() override;
    /// <summary>
    /// Sets the visibility of comments that do not have an author. If true then comments 
    /// will be displayed.
    /// (Applies only if comments are displayed).
    /// </summary>
    /// <remarks>
    /// Default value is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_ShowCommentsByNoAuthor(bool value) override;
    /// <summary>
    /// Gets the position of the notes on the page.
    /// </summary>
    /// <remarks>
    /// Default is <b>NotesPositions::None</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API NotesPositions get_NotesPosition() override;
    /// <summary>
    /// Sets the position of the notes on the page.
    /// </summary>
    /// <remarks>
    /// Default is <b>NotesPositions::None</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_NotesPosition(NotesPositions value) override;
    /// <summary>
    /// Gets the position of the comments on the page.
    /// </summary>
    /// <remarks>
    /// Default is <b>CommentsPositions::None</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API CommentsPositions get_CommentsPosition() override;
    /// <summary>
    /// Sets the position of the comments on the page.
    /// </summary>
    /// <remarks>
    /// Default is <b>CommentsPositions::None</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_CommentsPosition(CommentsPositions value) override;
    /// <summary>
    /// Gets the color of comments area
    /// (Applies only if comments are displayed on the right).
    /// </summary>
    /// <remarks>
    /// Default is <b>Color::get_SkyBlue</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Color get_CommentsAreaColor() override;
    /// <summary>
    /// Sets the color of comments area
    /// (Applies only if comments are displayed on the right).
    /// </summary>
    /// <remarks>
    /// Default is <b>Color::get_SkyBlue</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_CommentsAreaColor(System::Drawing::Color value) override;
    /// <summary>
    /// Gets the width of the comment output area in pixels
    /// (Applies only if comments are displayed on the right).
    /// </summary>
    /// <remarks>
    /// Minimal and default value is <b>150</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API int32_t get_CommentsAreaWidth() override;
    /// <summary>
    /// Sets the width of the comment output area in pixels
    /// (Applies only if comments are displayed on the right).
    /// </summary>
    /// <remarks>
    /// Minimal and default value is <b>150</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_CommentsAreaWidth(int32_t value) override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NotesCommentsLayoutingOptions();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_NotesCommentsPresent();
    ASPOSE_SLIDES_LOCAL_API bool get_AllowModification() const;
    ASPOSE_SLIDES_LOCAL_API void set_AllowModification(bool value);
    
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<INotesCommentsLayoutingOptions> source);
    /// @endcond
    
private:

    NotesPositions m_notesPosition;
    CommentsPositions m_commentPosition;
    int32_t m_commentsSize;
    System::Drawing::Color m_commentsAreaColor;
    bool m_showCommentsByNoAuthor;
    bool pr_AllowModification;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


