#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Indicates the format of the document that is to be loaded.
/// </summary>
enum class LoadFormat
{
    /// <summary>
    /// Instructs Aspose.Slides to recognize the format automatically.
    /// </summary>
    Auto = 0,
    /// <summary>
    /// Microsoft PowerPoint 97-2003 Presentation.
    /// </summary>
    Ppt = 1,
    /// <summary>
    /// Microsoft PowerPoint 97-2003 SlideShow.
    /// </summary>
    Pps = 2,
    /// <summary>
    /// Microsoft Office Open XML PresentationML Document.
    /// </summary>
    Pptx = 3,
    /// <summary>
    /// Microsoft Office Open XML PresentationML SlideShow.
    /// </summary>
    Ppsx = 4,
    /// <summary>
    /// OpenOffice ODF Presentation.
    /// </summary>
    Odp = 5,
    /// <summary>
    /// Microsoft Office Open XML PresentationML Template.
    /// </summary>
    Potx = 6,
    /// <summary>
    /// Microsoft Office Open XML PresentationML Macro-enabled Document.
    /// </summary>
    Pptm = 7,
    /// <summary>
    /// Microsoft Office Open XML PresentationML Macro-enabled SlideShow.
    /// </summary>
    Ppsm = 8,
    /// <summary>
    /// Microsoft Office Open XML PresentationML Macro-enabled Template.
    /// </summary>
    Potm = 9,
    /// <summary>
    /// OpenOffice OTP Presentation template.
    /// </summary>
    Otp = 10,
    /// <summary>
    /// Microsoft PowerPoint 95 Presentation.
    /// </summary>
    Ppt95 = 11,
    /// <summary>
    /// Microsoft PowerPoint 97-2003 Presentation Template.
    /// </summary>
    Pot = 12,
    /// <summary>
    /// Flat XML ODF Presentation.
    /// </summary>
    Fodp = 13,
    /// <summary>
    /// Unknown file format
    /// </summary>
    Unknown = 255
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LoadFormat>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LoadFormat, const char_t*>, 15>& values();
};
/// @endcond



