#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the status of a modern comment.
/// </summary>
enum class ModernCommentStatus : int8_t
{
    /// <summary>
    /// Not Defined.
    /// </summary>
    NotDefined,
    /// <summary>
    /// Active.
    /// </summary>
    Active,
    /// <summary>
    /// Resolved.
    /// </summary>
    Resolved,
    /// <summary>
    /// Closed.
    /// </summary>
    Closed
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::ModernCommentStatus>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::ModernCommentStatus, const char_t*>, 4>& values();
};
/// @endcond



