#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represent a type of morph transition.
/// </summary>
enum class TransitionMorphType
{
    /// <summary>
    /// Morph transition will be performed considering shapes as indivisible objects.
    /// </summary>
    ByObject = 0,
    /// <summary>
    /// Morph transition will be performed with transferring text by words where possible.
    /// </summary>
    ByWord,
    /// <summary>
    /// Morph transition will be performed with transferring text by characters where possible.
    /// </summary>
    ByChar
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionMorphType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionMorphType, const char_t*>, 3>& values();
};
/// @endcond



