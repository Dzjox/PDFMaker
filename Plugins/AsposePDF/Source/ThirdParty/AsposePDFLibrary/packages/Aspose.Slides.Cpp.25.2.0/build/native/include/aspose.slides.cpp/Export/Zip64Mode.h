#pragma once
//Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Specifies when to use ZIP64 format extensions for OpenXML file.
/// </summary>
/// <remarks>
/// OpenXML file is a ZIP-archive that has a 4 GB (2^32 bytes) limit on uncompressed size of a file, 
/// compressed size of a file, and total size of the archive, as well as a limit of 65,535 (2^16-1) files in archive. 
/// ZIP64 format extensions increase the limits to 2^64.
/// </remarks>
enum class Zip64Mode
{
    /// <summary>
    /// Do not use ZIP64 format extensions.
    /// </summary>
    Never = 0,
    /// <summary>
    /// Use ZIP64 format extensions if necessary.
    /// </summary>
    IfNecessary = 1,
    /// <summary>
    /// Always use ZIP64 format extensions.
    /// </summary>
    Always
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::Zip64Mode>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::Zip64Mode, const char_t*>, 3>& values();
};
/// @endcond



