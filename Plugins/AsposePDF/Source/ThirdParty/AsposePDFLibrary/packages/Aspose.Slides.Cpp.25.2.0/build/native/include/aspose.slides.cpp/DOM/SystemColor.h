#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents predefined system colors.
/// </summary>
enum class SystemColor
{
    /// <summary>
    /// System color is not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    ScrollBar = 0,
    /// <summary>
    /// 
    /// </summary>
    Background = 1,
    /// <summary>
    /// 
    /// </summary>
    ActiveCaption = 2,
    /// <summary>
    /// 
    /// </summary>
    InactiveCaption = 3,
    /// <summary>
    /// 
    /// </summary>
    Menu = 4,
    /// <summary>
    /// 
    /// </summary>
    Window = 5,
    /// <summary>
    /// 
    /// </summary>
    WindowFrame = 6,
    /// <summary>
    /// 
    /// </summary>
    MenuText = 7,
    /// <summary>
    /// 
    /// </summary>
    WindowText = 8,
    /// <summary>
    /// 
    /// </summary>
    CaptionText = 9,
    /// <summary>
    /// 
    /// </summary>
    ActiveBorder = 10,
    /// <summary>
    /// 
    /// </summary>
    InactiveBorder = 11,
    /// <summary>
    /// 
    /// </summary>
    AppWorkspace = 12,
    /// <summary>
    /// 
    /// </summary>
    Highlight = 13,
    /// <summary>
    /// 
    /// </summary>
    HighlightText = 14,
    /// <summary>
    /// 
    /// </summary>
    BtnFace = 15,
    /// <summary>
    /// 
    /// </summary>
    BtnShadow = 16,
    /// <summary>
    /// 
    /// </summary>
    GrayText = 17,
    /// <summary>
    /// 
    /// </summary>
    BtnText = 18,
    /// <summary>
    /// 
    /// </summary>
    InactiveCaptionText = 19,
    /// <summary>
    /// 
    /// </summary>
    BtnHighlight = 20,
    /// <summary>
    /// 
    /// </summary>
    ThreeDDkShadow = 21,
    /// <summary>
    /// 
    /// </summary>
    ThreeDLight = 22,
    /// <summary>
    /// 
    /// </summary>
    InfoText = 23,
    /// <summary>
    /// 
    /// </summary>
    InfoBk = 24,
    /// <summary>
    /// 
    /// </summary>
    HotLight = 26,
    /// <summary>
    /// 
    /// </summary>
    GradientActiveCaption = 27,
    /// <summary>
    /// 
    /// </summary>
    GradientInactiveCaption = 28,
    /// <summary>
    /// 
    /// </summary>
    MenuHighlight = 29,
    /// <summary>
    /// 
    /// </summary>
    MenuBar = 30
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SystemColor>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SystemColor, const char_t*>, 31>& values();
};
/// @endcond



