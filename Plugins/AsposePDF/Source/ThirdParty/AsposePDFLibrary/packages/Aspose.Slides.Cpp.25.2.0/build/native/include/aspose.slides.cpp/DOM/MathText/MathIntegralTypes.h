#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Mathematical integral types
/// </summary>
enum class MathIntegralTypes
{
    /// <summary>
    /// Integral: '∫'
    /// </summary>
    Simple,
    /// <summary>
    /// Double Integral: '∬'
    /// </summary>
    Double,
    /// <summary>
    /// Triple Integral: '∭'
    /// </summary>
    Triple,
    /// <summary>
    /// Contour Integral: '∮'
    /// </summary>
    Contour,
    /// <summary>
    /// Surface Integral: '∯'
    /// </summary>
    Surface,
    /// <summary>
    /// VolumeIntegral: '∰'
    /// </summary>
    Volume
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathIntegralTypes>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathIntegralTypes, const char_t*>, 6>& values();
};
/// @endcond



