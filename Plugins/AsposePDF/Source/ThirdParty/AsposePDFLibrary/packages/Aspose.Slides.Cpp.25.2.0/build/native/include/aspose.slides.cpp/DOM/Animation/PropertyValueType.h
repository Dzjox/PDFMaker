#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent property value types.
/// </summary>
enum class PropertyValueType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    String,
    /// <summary ></summary>
    Number,
    /// <summary ></summary>
    Color
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::PropertyValueType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::PropertyValueType, const char_t*>, 4>& values();
};
/// @endcond



