#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents text autofit mode.
/// </summary>
enum class TextAutofitType : int8_t
{
    /// <summary>
    /// Not defined.
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// No autofit.
    /// </summary>
    None,
    /// <summary>
    /// Normal autofit. Font size and line spacing will be reduced to fit the shape.
    /// </summary>
    Normal,
    /// <summary>
    /// Shape autofit. Shape size will be changed to fit the text.
    /// </summary>
    Shape
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TextAutofitType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TextAutofitType, const char_t*>, 4>& values();
};
/// @endcond



