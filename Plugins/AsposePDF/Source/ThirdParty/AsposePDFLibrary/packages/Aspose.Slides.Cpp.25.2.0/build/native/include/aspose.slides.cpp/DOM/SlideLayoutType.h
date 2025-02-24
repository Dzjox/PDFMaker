#pragma once
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the slide layout type.
/// </summary>
enum class SlideLayoutType : int8_t
{
    /// <summary>
    /// Custom 
    /// </summary>
    Custom = -1,
    /// <summary>
    /// Title 
    /// </summary>
    Title,
    /// <summary>
    /// Text 
    /// </summary>
    Text,
    /// <summary>
    /// Two Column Text 
    /// </summary>
    TwoColumnText,
    /// <summary>
    /// Table 
    /// </summary>
    Table,
    /// <summary>
    /// Text and Chart 
    /// </summary>
    TextAndChart,
    /// <summary>
    /// Chart and Text 
    /// </summary>
    ChartAndText,
    /// <summary>
    /// Diagram 
    /// </summary>
    Diagram,
    /// <summary>
    /// Chart
    /// </summary>
    Chart,
    /// <summary>
    /// Text and Clip Art
    /// </summary>
    TextAndClipArt,
    /// <summary>
    /// Clip Art and Text
    /// </summary>
    ClipArtAndText,
    /// <summary>
    /// Title Only 
    /// </summary>
    TitleOnly,
    /// <summary>
    /// Blank 
    /// </summary>
    Blank,
    /// <summary>
    /// Text and Object 
    /// </summary>
    TextAndObject,
    /// <summary>
    /// Object and Text 
    /// </summary>
    ObjectAndText,
    /// <summary>
    /// Object
    /// </summary>
    Object,
    /// <summary>
    /// Title and Object
    /// </summary>
    TitleAndObject,
    /// <summary>
    /// Text and Media 
    /// </summary>
    TextAndMedia,
    /// <summary>
    /// Media and Text 
    /// </summary>
    MediaAndText,
    /// <summary>
    /// Object over Text
    /// </summary>
    ObjectOverText,
    /// <summary>
    /// Text over Object
    /// </summary>
    TextOverObject,
    /// <summary>
    /// Text and Two Objects
    /// </summary>
    TextAndTwoObjects,
    /// <summary>
    /// Two Objects and Text
    /// </summary>
    TwoObjectsAndText,
    /// <summary>
    /// Two Objects over Text
    /// </summary>
    TwoObjectsOverText,
    /// <summary>
    /// Four Objects
    /// </summary>
    FourObjects,
    /// <summary>
    /// Vertical Text
    /// </summary>
    VerticalText,
    /// <summary>
    /// Clip Art and Vertical Text
    /// </summary>
    ClipArtAndVerticalText,
    /// <summary>
    /// Vertical Title and Text
    /// </summary>
    VerticalTitleAndText,
    /// <summary>
    /// Vertical Title and Text Over Chart
    /// </summary>
    VerticalTitleAndTextOverChart,
    /// <summary>
    /// Two Objects
    /// </summary>
    TwoObjects,
    /// <summary>
    /// Object and Two Object
    /// </summary>
    ObjectAndTwoObject,
    /// <summary>
    /// Two Objects and Object
    /// </summary>
    TwoObjectsAndObject,
    /// <summary>
    /// Section Header
    /// </summary>
    SectionHeader,
    /// <summary>
    /// Two Text and Two Objects
    /// </summary>
    TwoTextAndTwoObjects,
    /// <summary>
    /// Title, Object, and Caption
    /// </summary>
    TitleObjectAndCaption,
    /// <summary>
    /// Picture and Caption
    /// </summary>
    PictureAndCaption
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideLayoutType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideLayoutType, const char_t*>, 36>& values();
};
/// @endcond



