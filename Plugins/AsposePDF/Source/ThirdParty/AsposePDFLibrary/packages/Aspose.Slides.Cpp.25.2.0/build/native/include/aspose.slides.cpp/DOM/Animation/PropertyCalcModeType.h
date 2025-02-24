﻿#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent calc mode for animation property.
/// </summary>
enum class PropertyCalcModeType
{
    /// <summary ></summary>
    NotDefined = -1,
    /// <summary ></summary>
    Discrete,
    /// <summary ></summary>
    Linear,
    /// <summary ></summary>
    Formula
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::PropertyCalcModeType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::PropertyCalcModeType, const char_t*>, 4>& values();
};
/// @endcond



