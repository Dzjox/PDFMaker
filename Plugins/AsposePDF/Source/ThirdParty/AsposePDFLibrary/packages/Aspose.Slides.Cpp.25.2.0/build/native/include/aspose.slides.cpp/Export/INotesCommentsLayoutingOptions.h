#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Export/ISlidesLayoutOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class CommentsPositions;
enum class NotesPositions;
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control the look of layouting of notes and comments in exported document.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS INotesCommentsLayoutingOptions : public Aspose::Slides::Export::ISlidesLayoutOptions
{
    typedef INotesCommentsLayoutingOptions ThisType;
    typedef Aspose::Slides::Export::ISlidesLayoutOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the position of the notes on the page.
    /// </summary>
    /// <remarks>
    /// Default is <b>NotesPositions::None</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API NotesPositions get_NotesPosition() = 0;
    /// <summary>
    /// Sets the position of the notes on the page.
    /// </summary>
    /// <remarks>
    /// Default is <b>NotesPositions::None</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NotesPosition(NotesPositions value) = 0;
    /// <summary>
    /// Gets the position of the comments on the page.
    /// </summary>
    /// <remarks>
    /// Default is <b>CommentsPositions::None</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API CommentsPositions get_CommentsPosition() = 0;
    /// <summary>
    /// Sets the position of the comments on the page.
    /// </summary>
    /// <remarks>
    /// Default is <b>CommentsPositions::None</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CommentsPosition(CommentsPositions value) = 0;
    /// <summary>
    /// Gets the color of comments area
    /// (Applies only if comments are displayed on the right).
    /// </summary>
    /// <remarks>
    /// Default is <b>Color::get_SkyBlue</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_CommentsAreaColor() = 0;
    /// <summary>
    /// Sets the color of comments area
    /// (Applies only if comments are displayed on the right).
    /// </summary>
    /// <remarks>
    /// Default is <b>Color::get_SkyBlue</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CommentsAreaColor(System::Drawing::Color value) = 0;
    /// <summary>
    /// Gets the width of the comment output area in pixels
    /// (Applies only if comments are displayed on the right).
    /// </summary>
    /// <remarks>
    /// Minimal and default value is <b>150</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_CommentsAreaWidth() = 0;
    /// <summary>
    /// Sets the width of the comment output area in pixels
    /// (Applies only if comments are displayed on the right).
    /// </summary>
    /// <remarks>
    /// Minimal and default value is <b>150</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CommentsAreaWidth(int32_t value) = 0;
    /// <summary>
    /// Gets the visibility of comments that do not have an author. If true then comments 
    /// will be displayed.
    /// (Applies only if comments are displayed).
    /// </summary>
    /// <remarks>
    /// Default value is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowCommentsByNoAuthor() = 0;
    /// <summary>
    /// Sets the visibility of comments that do not have an author. If true then comments 
    /// will be displayed.
    /// (Applies only if comments are displayed).
    /// </summary>
    /// <remarks>
    /// Default value is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowCommentsByNoAuthor(bool value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


