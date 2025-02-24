#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Warnings {

/// <summary>
/// Represents a type of warning.
/// </summary>
enum class WarningType
{
    /// <summary>
    /// An issue has been detected in the source document which makes it very likely the document will be not be able to be opened if saved in it's original format.
    /// </summary>
    SourceFileCorruption = 0,
    /// <summary>
    /// Text/chart/image or other data will be completely missing from either the documet tree following load, or the created document following save.
    /// </summary>
    DataLoss = 1,
    /// <summary>
    /// Major formatting loss.
    /// </summary>
    MajorFormattingLoss = 2,
    /// <summary>
    /// Minor formatting loss.
    /// </summary>
    MinorFormattingLoss = 3,
    /// <summary>
    /// This is known issue that will prevent the document being opened by certain user agents, or previous versions of user agents.
    /// </summary>
    CompatibilityIssue = 4,
    /// <summary>
    /// Some content in the source document could not be recognised (i.e. is unsupported), this may or may not cause issues or result in data/formatting loss. 
    /// </summary>
    UnexpectedContent = 99
};

} // namespace Warnings
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Warnings::WarningType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Warnings::WarningType, const char_t*>, 6>& values();
};
/// @endcond



