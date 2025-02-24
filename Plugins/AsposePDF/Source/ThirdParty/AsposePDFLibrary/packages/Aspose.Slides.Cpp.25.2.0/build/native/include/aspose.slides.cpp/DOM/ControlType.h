#pragma once
//Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Defines a control type which should be embedded by <see cref="Aspose::Slides::IControlCollection::AddControl(ControlType, float, float, float, float)">IControlCollection::AddControl(ControlType, float, float, float, float)</see>.
/// </summary>
enum class ControlType
{
    /// <summary>
    /// Windows Media Player control.
    /// </summary>
    WindowsMediaPlayer
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ControlType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ControlType, const char_t*>, 1>& values();
};
/// @endcond



