#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a type of hyperlink action.
/// </summary>
enum class HyperlinkActionType
{
    /// <summary>
    /// Unrecognized action type.
    /// </summary>
    Unknown = -1,
    /// <summary>
    /// No action.
    /// </summary>
    NoAction,
    /// <summary>
    /// Usual hyperlink.
    /// </summary>
    Hyperlink,
    /// <summary>
    /// Jump to the first slide of the presentation.
    /// </summary>
    JumpFirstSlide,
    /// <summary>
    /// Jump to the previous slide.
    /// </summary>
    JumpPreviousSlide,
    /// <summary>
    /// Jump to the next slide.
    /// </summary>
    JumpNextSlide,
    /// <summary>
    /// Jump to the last slide of the presentation.
    /// </summary>
    JumpLastSlide,
    /// <summary>
    /// Jump to the end of slideshow.
    /// </summary>
    JumpEndShow,
    /// <summary>
    /// Jump to the last viewed slide.
    /// </summary>
    JumpLastViewedSlide,
    /// <summary>
    /// Jump to the specific slide, referred by <see cref="IHyperlink::get_TargetSlide"></see> value.
    /// </summary>
    JumpSpecificSlide,
    /// <summary>
    /// Start custom slideshow.
    /// </summary>
    StartCustomSlideShow,
    /// <summary>
    /// Open referenced file.
    /// </summary>
    OpenFile,
    /// <summary>
    /// Open referenced presentation.
    /// </summary>
    OpenPresentation,
    /// <summary>
    /// Start/stop playing mediafile.
    /// </summary>
    StartStopMedia,
    /// <summary>
    /// Start executing macro script.
    /// </summary>
    StartMacro,
    /// <summary>
    /// Start program.
    /// </summary>
    StartProgram
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::HyperlinkActionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::HyperlinkActionType, const char_t*>, 16>& values();
};
/// @endcond



