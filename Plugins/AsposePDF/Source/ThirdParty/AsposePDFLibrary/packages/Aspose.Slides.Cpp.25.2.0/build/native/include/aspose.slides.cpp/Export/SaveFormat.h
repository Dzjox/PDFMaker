#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Constants which define the format of a saved presentation.
/// </summary>
enum class SaveFormat
{
    /// <summary>
    /// Save presentation in PPT format.
    /// </summary>
    Ppt = 0,
    /// <summary>
    /// Save presentation in PDF format.
    /// </summary>
    Pdf = 1,
    /// <summary>
    /// Save presentation in XPS format.
    /// </summary>
    Xps = 2,
    /// <summary>
    /// Save presentation in PPTX format.
    /// </summary>
    Pptx = 3,
    /// <summary>
    /// Save presentation in PPSX (slideshow) format.
    /// </summary>
    Ppsx = 4,
    /// <summary>
    /// Save presentation as multi-page TIFF image.
    /// </summary>
    Tiff = 5,
    /// <summary>
    /// Save presentation in ODP format.
    /// </summary>
    Odp = 6,
    /// <summary>
    /// Save presentation in PPTM (macro-enabled presentation) format.
    /// </summary>
    Pptm = 7,
    /// <summary>
    /// Save presentation in PPSM (macro-enabled slideshow) format.
    /// </summary>
    Ppsm = 9,
    /// <summary>
    /// Save presentation in POTX (template) format.
    /// </summary>
    Potx = 10,
    /// <summary>
    /// Save presentation in POTM (macro-enabled template) format.
    /// </summary>
    Potm = 11,
    /// <summary>
    /// Save presentation in HTML format.
    /// </summary>
    Html = 13,
    /// <summary>
    /// Save presentation in SWF format.
    /// </summary>
    Swf = 15,
    /// <summary>
    /// Save presentation in OTP (presentation template) format.
    /// </summary>
    Otp = 17,
    /// <summary>
    /// Save presentation in PPS format.
    /// </summary>
    Pps = 19,
    /// <summary>
    /// Save presentation in POT format.
    /// </summary>
    Pot = 20,
    /// <summary>
    /// Save presentation in FODP format.
    /// </summary>
    Fodp = 21,
    /// <summary>
    /// Save presentation in GIF format.
    /// </summary>
    Gif = 22,
    /// <summary>
    /// Save presentation in HTML format using new HTML5 templating system.
    /// </summary>
    Html5 = 23,
    /// <summary>
    /// Save presentation in Markdown format
    /// </summary>
    Md = 24,
    /// <summary>
    /// Save presentation in PowerPoint XML Presentation format.
    /// </summary>
    Xml = 25
};

/*
     * Description of known PowerPoint formats and supported by PowerPoint formats
     * can be found here:
     * http://office.microsoft.com/en-us/help/file-formats-that-are-supported-in-powerpoint-2007-HP001226171.aspx
     * https://kb.wisc.edu/page.php?id=13355
     * */
} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::SaveFormat>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::SaveFormat, const char_t*>, 21>& values();
};
/// @endcond



