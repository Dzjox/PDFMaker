#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Determines how picture will fill area.
/// </summary>
enum class PictureFillMode
{
    /// <summary>
    /// 
    /// </summary>
    Tile,
    /// <summary>
    /// 
    /// </summary>
    Stretch
};

//SmartArts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PictureFillMode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PictureFillMode, const char_t*>, 2>& values();
};
/// @endcond



