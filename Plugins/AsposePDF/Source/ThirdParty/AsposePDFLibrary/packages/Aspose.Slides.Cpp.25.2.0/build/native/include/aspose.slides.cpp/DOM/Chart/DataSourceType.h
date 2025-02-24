#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Data source types.
/// </summary>
enum class DataSourceType
{
    /// <summary>
    /// Use CellXls objects for storing XValue, YValue, Value or BubbleSize of data point in worksheet.
    /// </summary>
    Worksheet,
    /// <summary>
    /// Use fast-access string variable for storing XValue, YValue, Value or BubbleSize of 
    /// data point. Worksheet is NOT used for storing values.
    /// </summary>
    StringLiterals,
    /// <summary>
    /// Use fast-access double variable for storing XValue, YValue, Value or BubbleSize of 
    /// data point. Worksheet is NOT used for storing values.
    /// </summary>
    DoubleLiterals
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Charts::DataSourceType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Charts::DataSourceType, const char_t*>, 3>& values();
};
/// @endcond



