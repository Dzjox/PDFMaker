#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents builtin table styles.
/// </summary>
enum class TableStylePreset
{
    /// <summary>
    /// Table has a custom style.
    /// This is return-only value.
    /// </summary>
    Custom = -1,
    /// <summary>
    /// No style.
    /// </summary>
    None = 0,
    /// <summary>
    /// Medium Style 2 - Accent 1.
    /// </summary>
    MediumStyle2Accent1,
    /// <summary>
    /// Medium Style 2.
    /// </summary>
    MediumStyle2,
    /// <summary>
    /// No Style, No Grid.
    /// </summary>
    NoStyleNoGrid,
    /// <summary>
    /// Themed Style 1 - Accent 1.
    /// </summary>
    ThemedStyle1Accent1,
    /// <summary>
    /// Themed Style 1 - Accent 2.
    /// </summary>
    ThemedStyle1Accent2,
    /// <summary>
    /// Themed Style 1 - Accent 3.
    /// </summary>
    ThemedStyle1Accent3,
    /// <summary>
    /// Themed Style 1 - Accent 4.
    /// </summary>
    ThemedStyle1Accent4,
    /// <summary>
    /// Themed Style 1 - Accent 5.
    /// </summary>
    ThemedStyle1Accent5,
    /// <summary>
    /// Themed Style 1 - Accent 6.
    /// </summary>
    ThemedStyle1Accent6,
    /// <summary>
    /// No Style, Table Grid.
    /// </summary>
    NoStyleTableGrid,
    /// <summary>
    /// Themed Style 2 - Accent 1.
    /// </summary>
    ThemedStyle2Accent1,
    /// <summary>
    /// Themed Style 2 - Accent 2.
    /// </summary>
    ThemedStyle2Accent2,
    /// <summary>
    /// Themed Style 2 - Accent 3.
    /// </summary>
    ThemedStyle2Accent3,
    /// <summary>
    /// Themed Style 2 - Accent 4.
    /// </summary>
    ThemedStyle2Accent4,
    /// <summary>
    /// Themed Style 2 - Accent 5.
    /// </summary>
    ThemedStyle2Accent5,
    /// <summary>
    /// Themed Style 2 - Accent 6.
    /// </summary>
    ThemedStyle2Accent6,
    /// <summary>
    /// Light Style 1
    /// </summary>
    LightStyle1,
    /// <summary>
    /// Light Style 1 - Accent 1.
    /// </summary>
    LightStyle1Accent1,
    /// <summary>
    /// Light Style 1 - Accent 2.
    /// </summary>
    LightStyle1Accent2,
    /// <summary>
    /// Light Style 1 - Accent 3.
    /// </summary>
    LightStyle1Accent3,
    /// <summary>
    /// Light Style 1 - Accent 4.
    /// </summary>
    LightStyle1Accent4,
    /// <summary>
    /// Light Style 2 - Accent 5.
    /// </summary>
    LightStyle2Accent5,
    /// <summary>
    /// Light Style 1 - Accent 6.
    /// </summary>
    LightStyle1Accent6,
    /// <summary>
    /// Light Style 2.
    /// </summary>
    LightStyle2,
    /// <summary>
    /// Light Style 2 - Accent 1.
    /// </summary>
    LightStyle2Accent1,
    /// <summary>
    /// Light Style 2 - Accent 2.
    /// </summary>
    LightStyle2Accent2,
    /// <summary>
    /// Light Style 2 - Accent 3.
    /// </summary>
    LightStyle2Accent3,
    /// <summary>
    /// Medium Style 2 - Accent 3.
    /// </summary>
    MediumStyle2Accent3,
    /// <summary>
    /// Medium Style 2 - Accent 4.
    /// </summary>
    MediumStyle2Accent4,
    /// <summary>
    /// Medium Style 2 - Accent 5.
    /// </summary>
    MediumStyle2Accent5,
    /// <summary>
    /// Light Style 2 - Accent 6.
    /// </summary>
    LightStyle2Accent6,
    /// <summary>
    /// Light Style 2 - Accent 4.
    /// </summary>
    LightStyle2Accent4,
    /// <summary>
    /// Light Style 3.
    /// </summary>
    LightStyle3,
    /// <summary>
    /// Light Style 3 - Accent 1.
    /// </summary>
    LightStyle3Accent1,
    /// <summary>
    /// Medium Style 2 - Accent 2.
    /// </summary>
    MediumStyle2Accent2,
    /// <summary>
    /// Light Style 3 - Accent 2.
    /// </summary>
    LightStyle3Accent2,
    /// <summary>
    /// Light Style 3 - Accent 3.
    /// </summary>
    LightStyle3Accent3,
    /// <summary>
    /// Light Style 3 - Accent 4.
    /// </summary>
    LightStyle3Accent4,
    /// <summary>
    /// Light Style 3 - Accent 5.
    /// </summary>
    LightStyle3Accent5,
    /// <summary>
    /// Light Style 3 - Accent 6.
    /// </summary>
    LightStyle3Accent6,
    /// <summary>
    /// Medium Style 1.
    /// </summary>
    MediumStyle1,
    /// <summary>
    /// Medium Style 1 - Accent 1.
    /// </summary>
    MediumStyle1Accent1,
    /// <summary>
    /// Medium Style 1 - Accent 2.
    /// </summary>
    MediumStyle1Accent2,
    /// <summary>
    /// Medium Style 1 - Accent 3.
    /// </summary>
    MediumStyle1Accent3,
    /// <summary>
    /// Medium Style 1 - Accent 4.
    /// </summary>
    MediumStyle1Accent4,
    /// <summary>
    /// Medium Style 1 - Accent 5.
    /// </summary>
    MediumStyle1Accent5,
    /// <summary>
    /// Medium Style 1 - Accent 6.
    /// </summary>
    MediumStyle1Accent6,
    /// <summary>
    /// Medium Style 2 - Accent 6.
    /// </summary>
    MediumStyle2Accent6,
    /// <summary>
    /// Medium Style 3.
    /// </summary>
    MediumStyle3,
    /// <summary>
    /// Medium Style 3 - Accent 1.
    /// </summary>
    MediumStyle3Accent1,
    /// <summary>
    /// Medium Style 3 - Accent 2.
    /// </summary>
    MediumStyle3Accent2,
    /// <summary>
    /// Medium Style 3 - Accent 3.
    /// </summary>
    MediumStyle3Accent3,
    /// <summary>
    /// Medium Style 3 - Accent 4.
    /// </summary>
    MediumStyle3Accent4,
    /// <summary>
    /// Medium Style 3 - Accent 5.
    /// </summary>
    MediumStyle3Accent5,
    /// <summary>
    /// Medium Style 3 - Accent 6.
    /// </summary>
    MediumStyle3Accent6,
    /// <summary>
    /// Medium Style 4.
    /// </summary>
    MediumStyle4,
    /// <summary>
    /// Medium Style 4 - Accent 1.
    /// </summary>
    MediumStyle4Accent1,
    /// <summary>
    /// Medium Style 4 - Accent 2.
    /// </summary>
    MediumStyle4Accent2,
    /// <summary>
    /// Medium Style 4 - Accent 3.
    /// </summary>
    MediumStyle4Accent3,
    /// <summary>
    /// Medium Style 4 - Accent 4.
    /// </summary>
    MediumStyle4Accent4,
    /// <summary>
    /// Medium Style 4 - Accent 5.
    /// </summary>
    MediumStyle4Accent5,
    /// <summary>
    /// Medium Style 4 - Accent 6.
    /// </summary>
    MediumStyle4Accent6,
    /// <summary>
    /// Dark Style 1.
    /// </summary>
    DarkStyle1,
    /// <summary>
    /// Dark Style 1 - Accent 1.
    /// </summary>
    DarkStyle1Accent1,
    /// <summary>
    /// Dark Style 1 - Accent 2.
    /// </summary>
    DarkStyle1Accent2,
    /// <summary>
    /// Dark Style 1 - Accent 3.
    /// </summary>
    DarkStyle1Accent3,
    /// <summary>
    /// Dark Style 1 - Accent 4.
    /// </summary>
    DarkStyle1Accent4,
    /// <summary>
    /// Dark Style 1 - Accent 5.
    /// </summary>
    DarkStyle1Accent5,
    /// <summary>
    /// Dark Style 1 - Accent 6.
    /// </summary>
    DarkStyle1Accent6,
    /// <summary>
    /// Dark Style 2.
    /// </summary>
    DarkStyle2,
    /// <summary>
    /// Dark Style 2 - Accent 1/Accent 2.
    /// </summary>
    DarkStyle2Accent1Accent2,
    /// <summary>
    /// Dark Style 2 - Accent 3/Accent 4.
    /// </summary>
    DarkStyle2Accent3Accent4,
    /// <summary>
    /// Dark Style 2 - Accent 5/Accent 6.
    /// </summary>
    DarkStyle2Accent5Accent6,
    /// <summary>
    /// Light Style 1 - Accent 5.
    /// </summary>
    LightStyle1Accent5
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::TableStylePreset>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::TableStylePreset, const char_t*>, 76>& values();
};
/// @endcond



