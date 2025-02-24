#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents the type of an animation effect.
/// </summary>
enum class EffectType
{
    /// <summary>
    /// <p>Appear effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Appear = 0,
    /// <summary>
    /// <p>CurveUpDown effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    CurveUpDown,
    /// <summary>
    /// <p>Ascend effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Ascend,
    /// <summary>
    /// <p>Float effect with direction Up. This is the alias for Ascend type.
    /// Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    FloatUp = static_cast<int32_t>(Ascend),
    /// <summary>
    /// <p>Blast effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Blast,
    /// <summary>
    /// <p>Blinds effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Horizontal</li>
    /// <li>EffectSubtype::Vertical</li></ul>
    /// </summary>
    Blinds,
    /// <summary>
    /// <p>Blink effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Blink,
    /// <summary>
    /// <p>BoldFlash effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    BoldFlash,
    /// <summary>
    /// <p>BoldReveal effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    BoldReveal,
    /// <summary>
    /// <p>Boomerang effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Boomerang,
    /// <summary>
    /// <p>Bounce effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Bounce,
    /// <summary>
    /// <p>Box effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::In</li>
    /// <li>EffectSubtype::Out</li></ul>
    /// </summary>
    Box,
    /// <summary>
    /// <p>BrushOnColor effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    BrushOnColor,
    /// <summary>
    /// <p>BrushOnUnderline effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    BrushOnUnderline,
    /// <summary>
    /// <p>CenterRevolve effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    CenterRevolve,
    /// <summary>
    /// <p>ChangeFillColor effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Instant</li>
    /// <li>EffectSubtype::Gradual</li>
    /// <li>EffectSubtype::GradualAndCycleClockwise</li>
    /// <li>EffectSubtype::GradualAndCycleCounterClockwise</li></ul>
    /// </summary>
    ChangeFillColor,
    /// <summary>
    /// <p>ChangeFont effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Instant</li>
    /// <li>EffectSubtype::Gradual</li></ul>
    /// </summary>
    ChangeFont,
    /// <summary>
    /// <p>ChangeFontColor effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Instant</li>
    /// <li>EffectSubtype::Gradual</li>
    /// <li>EffectSubtype::GradualAndCycleClockwise</li>
    /// <li>EffectSubtype::GradualAndCycleCounterClockwise</li></ul>
    /// </summary>
    ChangeFontColor,
    /// <summary>
    /// <p>ChangeFontSize effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Instant</li>
    /// <li>EffectSubtype::Gradual</li></ul>
    /// </summary>
    ChangeFontSize,
    /// <summary>
    /// <p>ChangeFontSize effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::FontBold</li>
    /// <li>EffectSubtype::FontItalic</li>
    /// <li>EffectSubtype::FontUnderline</li></ul>
    /// </summary>
    ChangeFontStyle,
    /// <summary>
    /// <p>ChangeLineColor effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Instant</li>
    /// <li>EffectSubtype::Gradual</li>
    /// <li>EffectSubtype::GradualAndCycleClockwise</li>
    /// <li>EffectSubtype::GradualAndCycleCounterClockwise</li></ul>
    /// </summary>
    ChangeLineColor,
    /// <summary>
    /// <p>Checkerboard effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Vertical</li>
    /// <li>EffectSubtype::Across</li></ul>
    /// </summary>
    Checkerboard,
    /// <summary>
    /// <p>ColorBlend effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::In</li>
    /// <li>EffectSubtype::Out</li></ul>
    /// </summary>
    Circle,
    /// <summary>
    /// <p>BrushOnUnderline effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    ColorBlend,
    /// <summary>
    /// <p>Checkerboard effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    ColorTypewriter,
    /// <summary>
    /// <p>ColorWave effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    ColorWave,
    /// <summary>
    /// <p>ComplementaryColor effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    ComplementaryColor,
    /// <summary>
    /// <p>ComplementaryColor2 effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    ComplementaryColor2,
    /// <summary>
    /// <p>Compress effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Compress,
    /// <summary>
    /// <p>ContrastingColor effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    ContrastingColor,
    /// <summary>
    /// <p>Crawl effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Right</li>
    /// <li>EffectSubtype::Left</li>
    /// <li>EffectSubtype::Top</li>
    /// <li>EffectSubtype::Bottom</li></ul>
    /// </summary>
    Crawl,
    /// <summary>
    /// <p>Credits effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Credits,
    /// <summary>
    /// <p>Custom effect.</p>
    /// </summary>
    Custom,
    /// <summary>
    /// <p>Darken effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Darken,
    /// <summary>
    /// <p>Desaturate effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Desaturate,
    /// <summary>
    /// <p>Descend effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Descend,
    /// <summary>
    /// <p>Float effect with direction Down. This is the alias for Descend type.
    /// Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    FloatDown = static_cast<int32_t>(Descend),
    /// <summary>
    /// <p>Diamond effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::In</li>
    /// <li>EffectSubtype::Out</li></ul>
    /// </summary>
    Diamond,
    /// <summary>
    /// <p>Dissolve effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Dissolve,
    /// <summary>
    /// <p>Dissolve effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    EaseInOut,
    /// <summary>
    /// <p>Expand effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Expand,
    /// <summary>
    /// <p>Fade effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Fade,
    /// <summary>
    /// <p>FadedSwivel effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    FadedSwivel,
    /// <summary>
    /// <p>FadedZoom effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    FadedZoom,
    /// <summary>
    /// <p>FlashBulb effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    FlashBulb,
    /// <summary>
    /// <p>FlashOnce effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    FlashOnce,
    /// <summary>
    /// <p>Flicker effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Flicker,
    /// <summary>
    /// <p>Flip effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Flip,
    /// <summary>
    /// <p>Float effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Float,
    /// <summary>
    /// <p>Fly effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Right</li>
    /// <li>EffectSubtype::Left</li>
    /// <li>EffectSubtype::Top</li>
    /// <li>EffectSubtype::Bottom</li>
    /// <li>EffectSubtype::TopLeft</li>
    /// <li>EffectSubtype::TopRight</li>
    /// <li>EffectSubtype::BottomLeft</li>
    /// <li>EffectSubtype::BottomRight</li></ul>
    /// </summary>
    Fly,
    /// <summary>
    /// <p>Fold effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Fold,
    /// <summary>
    /// <p>Glide effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Glide,
    /// <summary>
    /// <p>GrowAndTurn effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    GrowAndTurn,
    /// <summary>
    /// <p>GrowShrink effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    GrowShrink,
    /// <summary>
    /// <p>GrowWithColor effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    GrowWithColor,
    /// <summary>
    /// <p>Lighten effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Lighten,
    /// <summary>
    /// <p>LightSpeed effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    LightSpeed,
    /// <summary>
    /// <p>MediaPause effect. Class <b>Media</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    MediaPause,
    /// <summary>
    /// <p>MediaPlay effect. Class <b>Media</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    MediaPlay,
    /// <summary>
    /// <p>MediaStop effect. Class <b>Media</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    MediaStop,
    /// <summary>
    /// <p>Path4PointStar effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Path4PointStar,
    /// <summary>
    /// <p>Path5PointStar effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Path5PointStar,
    /// <summary>
    /// <p>Path6PointStar effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Path6PointStar,
    /// <summary>
    /// <p>Path8PointStar effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Path8PointStar,
    /// <summary>
    /// <p>PathArcDown effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathArcDown,
    /// <summary>
    /// <p>PathArcLeft effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathArcLeft,
    /// <summary>
    /// <p>PathArcRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathArcRight,
    /// <summary>
    /// <p>PathArcUp effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathArcUp,
    /// <summary>
    /// <p>PathBean effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathBean,
    /// <summary>
    /// <p>PathBounceLeft effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathBounceLeft,
    /// <summary>
    /// <p>PathBounceRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathBounceRight,
    /// <summary>
    /// <p>PathBuzzsaw effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathBuzzsaw,
    /// <summary>
    /// <p>PathCircle effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathCircle,
    /// <summary>
    /// <p>PathCrescentMoon effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathCrescentMoon,
    /// <summary>
    /// <p>PathCurvedSquare effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathCurvedSquare,
    /// <summary>
    /// <p>PathCurvedX effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathCurvedX,
    /// <summary>
    /// <p>PathCurvyLeft effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathCurvyLeft,
    /// <summary>
    /// <p>PathCurvyRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathCurvyRight,
    /// <summary>
    /// <p>PathCurvyStar effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathCurvyStar,
    /// <summary>
    /// <p>PathDecayingWave effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathDecayingWave,
    /// <summary>
    /// <p>PathDiagonalDownRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathDiagonalDownRight,
    /// <summary>
    /// <p>PathDiagonalUpRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathDiagonalUpRight,
    /// <summary>
    /// <p>PathDiamond effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathDiamond,
    /// <summary>
    /// <p>PathDown effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathDown,
    /// <summary>
    /// <p>PathEqualTriangle effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathEqualTriangle,
    /// <summary>
    /// <p>PathFigure8Four effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathFigure8Four,
    /// <summary>
    /// <p>PathFootball effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathFootball,
    /// <summary>
    /// <p>PathFunnel effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathFunnel,
    /// <summary>
    /// <p>PathHeart effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathHeart,
    /// <summary>
    /// <p>PathHeartbeat effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathHeartbeat,
    /// <summary>
    /// <p>PathHexagon effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathHexagon,
    /// <summary>
    /// <p>PathHorizontalFigure8 effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathHorizontalFigure8,
    /// <summary>
    /// <p>PathInvertedSquare effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathInvertedSquare,
    /// <summary>
    /// <p>PathInvertedTriangle effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathInvertedTriangle,
    /// <summary>
    /// <p>PathLeft effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathLeft,
    /// <summary>
    /// <p>PathLoopdeLoop effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathLoopdeLoop,
    /// <summary>
    /// <p>PathNeutron effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathNeutron,
    /// <summary>
    /// <p>PathOctagon effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathOctagon,
    /// <summary>
    /// <p>PathParallelogram effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathParallelogram,
    /// <summary>
    /// <p>PathPeanut effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathPeanut,
    /// <summary>
    /// <p>PathPentagon effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathPentagon,
    /// <summary>
    /// <p>PathPlus effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathPlus,
    /// <summary>
    /// <p>PathPointyStar effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathPointyStar,
    /// <summary>
    /// <p>PathRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathRight,
    /// <summary>
    /// <p>PathRightTriangle effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathRightTriangle,
    /// <summary>
    /// <p>PathSCurve1 effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathSCurve1,
    /// <summary>
    /// <p>PathSCurve2 effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathSCurve2,
    /// <summary>
    /// <p>PathSineWave effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathSineWave,
    /// <summary>
    /// <p>PathSpiralLeft effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathSpiralLeft,
    /// <summary>
    /// <p>PathSpiralRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathSpiralRight,
    /// <summary>
    /// <p>PathSpring effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathSpring,
    /// <summary>
    /// <p>PathSquare effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathSquare,
    /// <summary>
    /// <p>PathStairsDown effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathStairsDown,
    /// <summary>
    /// <p>PathSwoosh effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathSwoosh,
    /// <summary>
    /// <p>PathTeardrop effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathTeardrop,
    /// <summary>
    /// <p>PathTrapezoid effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathTrapezoid,
    /// <summary>
    /// <p>PathTurnDown effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathTurnDown,
    /// <summary>
    /// <p>PathTurnRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathTurnRight,
    /// <summary>
    /// <p>PathTurnUp effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathTurnUp,
    /// <summary>
    /// <p>PathTurnUpRight effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathTurnUpRight,
    /// <summary>
    /// <p>PathUp effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathUp,
    /// <summary>
    /// <p>PathUser effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathUser,
    /// <summary>
    /// <p>PathVerticalFigure8 effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathVerticalFigure8,
    /// <summary>
    /// <p>PathWave effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathWave,
    /// <summary>
    /// <p>PathZigzag effect. Class <b>Path</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    PathZigzag,
    /// <summary>
    /// <p>Peek effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Peek,
    /// <summary>
    /// <p>Pinwheel effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Pinwheel,
    /// <summary>
    /// <p>Plus effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::In</li>
    /// <li>EffectSubtype::Out</li></ul>
    /// </summary>
    Plus,
    /// <summary>
    /// <p>RandomBars effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Horizontal</li>
    /// <li>EffectSubtype::Vertical</li></ul>
    /// </summary>
    RandomBars,
    /// <summary>
    /// <p>RandomEffects effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    RandomEffects,
    /// <summary>
    /// <p>RandomEffects effect. Class <b>Entrance</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    RiseUp,
    /// <summary>
    /// <p>Shimmer effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Shimmer,
    /// <summary>
    /// <p>RandomEffects effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Sling,
    /// <summary>
    /// <p>Spin effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Spin,
    /// <summary>
    /// <p>Spinner effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Spinner,
    /// <summary>
    /// <p>Spiral effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Spiral,
    /// <summary>
    /// <p>Split effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::HorizontalIn</li>
    /// <li>EffectSubtype::HorizontalOut</li>
    /// <li>EffectSubtype::VerticalIn</li>
    /// <li>EffectSubtype::VerticalOut</li></ul>
    /// </summary>
    Split,
    /// <summary>
    /// <p>Stretch effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Right</li>
    /// <li>EffectSubtype::Left</li>
    /// <li>EffectSubtype::Top</li>
    /// <li>EffectSubtype::Bottom</li>
    /// <li>EffectSubtype::Across</li></ul>
    /// </summary>
    Stretch,
    /// <summary>
    /// <p>Stretch effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::UpLeft</li>
    /// <li>EffectSubtype::UpRight</li>
    /// <li>EffectSubtype::DownLeft</li>
    /// <li>EffectSubtype::DownRight</li></ul>
    /// </summary>
    Strips,
    /// <summary>
    /// <p>StyleEmphasis effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    StyleEmphasis,
    /// <summary>
    /// <p>Swish effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Swish,
    /// <summary>
    /// <p>Swivel effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Horizontal</li>
    /// <li>EffectSubtype::Vertical</li></ul>
    /// </summary>
    Swivel,
    /// <summary>
    /// <p>Teeter effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Teeter,
    /// <summary>
    /// <p>Thread effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Thread,
    /// <summary>
    /// <p>Transparency effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Transparency,
    /// <summary>
    /// <p>Unfold effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Unfold,
    /// <summary>
    /// <p>VerticalGrow effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    VerticalGrow,
    /// <summary>
    /// <p>Wave effect. Class <b>Emphasis</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Wave,
    /// <summary>
    /// <p>Wedge effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Wedge,
    /// <summary>
    /// <p>Wedge effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Wheel1</li>
    /// <li>EffectSubtype::Wheel2</li>
    /// <li>EffectSubtype::Wheel3</li>
    /// <li>EffectSubtype::Wheel4</li>
    /// <li>EffectSubtype::Wheel8</li></ul>
    /// </summary>
    Wheel,
    /// <summary>
    /// <p>Whip effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Whip,
    /// <summary>
    /// <p>Wedge effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::Top</li>
    /// <li>EffectSubtype::Right</li>
    /// <li>EffectSubtype::Bottom</li>
    /// <li>EffectSubtype::Left</li></ul>
    /// </summary>
    Wipe,
    /// <summary>
    /// <p>Magnify effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    Magnify,
    /// <summary>
    /// <p>Zoom effect. Class <b>Entrance</b> or <b>Exit</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::In</li>
    /// <li>EffectSubtype::Out</li>
    /// <li>EffectSubtype::InCenter - only for Entrance class</li>
    /// <li>EffectSubtype::OutBottom - only for Entrance class</li>
    /// <li>EffectSubtype::OutSlightly</li>
    /// <li>EffectSubtype::InSlightly</li>
    /// <li>EffectSubtype::OutCenter - only for Exit class</li>
    /// <li>EffectSubtype::InBottom - only for Exit class</li></ul>
    /// </summary>
    Zoom,
    /// <summary>
    /// <p>OLEObjectShow effect. Class <b>OLEActionVerbs</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    OLEObjectShow,
    /// <summary>
    /// <p>OLEObjectEdit effect. Class <b>OLEActionVerbs</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    OLEObjectEdit,
    /// <summary>
    /// <p>OLEObjectOpen effect. Class <b>OLEActionVerbs</b>.</p>
    /// <p>Valid subtypes:</p>
    /// <ul><li>EffectSubtype::None</li></ul>
    /// </summary>
    OLEObjectOpen
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Animation::EffectType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Animation::EffectType, const char_t*>, 157>& values();
};
/// @endcond



