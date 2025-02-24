#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Nary operator IMathNaryOperator types (excluding integrals)
/// For integrals <see cref="Aspose::Slides::MathText::MathIntegralTypes">MathIntegralTypes</see>
/// </summary>
enum class MathNaryOperatorTypes
{
    /// <summary>
    /// Summation: '∑'
    /// </summary>
    Summation,
    /// <summary>
    /// Product: '∏'
    /// </summary>
    Product,
    /// <summary>
    /// Coproduct: '∐'
    /// </summary>
    CoProduct,
    /// <summary>
    /// Intersection: '∩'
    /// </summary>
    Intersection,
    /// <summary>
    /// Union: '∪'
    /// </summary>
    Union,
    /// <summary>
    /// Logical And: '∧'
    /// </summary>
    LogicalAnd,
    /// <summary>
    /// Logical Or: '∨'
    /// </summary>
    LogicalOr
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::MathText::MathNaryOperatorTypes>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::MathText::MathNaryOperatorTypes, const char_t*>, 7>& values();
};
/// @endcond



