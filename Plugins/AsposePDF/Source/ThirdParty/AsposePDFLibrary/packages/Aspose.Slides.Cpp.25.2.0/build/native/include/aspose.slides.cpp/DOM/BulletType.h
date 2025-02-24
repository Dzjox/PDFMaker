#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the type of the extended bullets.
/// </summary>
enum class BulletType : int8_t
{
    /// <summary>
    /// 
    /// </summary>
    NotDefined = -1,
    /// <summary>
    /// 
    /// </summary>
    None = 0,
    /// <summary>
    /// Sysmbol bullets.
    /// </summary>
    Symbol = 1,
    /// <summary>
    /// Numbered bullets.
    /// </summary>
    Numbered = 2,
    /// <summary>
    /// Picture bullets.
    /// </summary>
    Picture = 3
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::BulletType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::BulletType, const char_t*>, 5>& values();
};
/// @endcond



