#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Presentation view types
/// </summary>
enum class ViewType
{
    /// <summary>
    /// Value is not defined
    /// </summary>
    NotDefined,
    /// <summary>
    /// Normal Slide View
    /// </summary>
    SlideView,
    /// <summary>
    /// Slide Master View
    /// </summary>
    SlideMasterView,
    /// <summary>
    /// Notes View
    /// </summary>
    NotesView,
    /// <summary>
    /// Handout View
    /// </summary>
    HandoutView,
    /// <summary>
    /// Notes Master View
    /// </summary>
    NotesMasterView,
    /// <summary>
    /// Outline View
    /// </summary>
    OutlineView,
    /// <summary>
    /// Slide Sorter View
    /// </summary>
    SlideSorterView,
    /// <summary>
    /// Slide Thumbnail View
    /// </summary>
    SlideThumbnailView
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ViewType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ViewType, const char_t*>, 9>& values();
};
/// @endcond



