#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace SlideShow {

/// <summary>
/// Represent slide show transition type.
/// </summary>
enum class TransitionType
{
    /// <summary ></summary>
    None = 0,
    /// <summary ></summary>
    Blinds,
    /// <summary ></summary>
    Checker,
    /// <summary>
    /// Relates to transition Shape (with option Circle) in PowerPoint 2010.
    /// </summary>
    Circle,
    /// <summary ></summary>
    Comb,
    /// <summary ></summary>
    Cover,
    /// <summary ></summary>
    Cut,
    /// <summary>
    /// Relates to transition Shape (with option Diamond) in PowerPoint 2010.
    /// </summary>
    Diamond,
    /// <summary ></summary>
    Dissolve,
    /// <summary ></summary>
    Fade,
    /// <summary ></summary>
    Newsflash,
    /// <summary>
    /// Relates to transition Shape (with option Plus) in PowerPoint 2010.
    /// </summary>
    Plus,
    /// <summary ></summary>
    Pull,
    /// <summary ></summary>
    Push,
    /// <summary ></summary>
    Random,
    /// <summary ></summary>
    RandomBar,
    /// <summary>
    /// Equivalent to transition Wipe in PowerPoint 2010.
    /// </summary>
    Split,
    /// <summary ></summary>
    Strips,
    /// <summary>
    /// Relates to transition Clock (with option Wedge) in PowerPoint 2010.
    /// </summary> 
    Wedge,
    /// <summary>
    /// Relates to transition Clock (with option Clockwise) in PowerPoint 2010.
    /// </summary> 
    Wheel,
    /// <summary ></summary>
    Wipe,
    /// <summary>
    /// Relates to transition Shape (with options In/Out) in PowerPoint 2010.
    /// See also <see cref="TransitionType::Warp"></see> that relates to transition Zoom in PowerPoint 2010.
    /// </summary> 
    Zoom,
    /// <summary>Available in PowerPoint 2010.</summary>
    Vortex,
    /// <summary>Available in PowerPoint 2010.</summary>
    Switch,
    /// <summary>Available in PowerPoint 2010.</summary>
    Flip,
    /// <summary>Available in PowerPoint 2010.</summary>
    Ripple,
    /// <summary>Available in PowerPoint 2010.</summary>
    Honeycomb,
    /// <summary>Available in PowerPoint 2010.</summary>
    Cube,
    /// <summary>Available in PowerPoint 2010.</summary>
    Box,
    /// <summary>Available in PowerPoint 2010.</summary>
    Rotate,
    /// <summary>Available in PowerPoint 2010.</summary>
    Orbit,
    /// <summary>Available in PowerPoint 2010.</summary>
    Doors,
    /// <summary>Available in PowerPoint 2010.</summary>
    Window,
    /// <summary>Available in PowerPoint 2010.</summary>
    Ferris,
    /// <summary>Available in PowerPoint 2010.</summary>
    Gallery,
    /// <summary>Available in PowerPoint 2010.</summary>
    Conveyor,
    /// <summary>Available in PowerPoint 2010.</summary>
    Pan,
    /// <summary>Available in PowerPoint 2010.</summary>
    Glitter,
    /// <summary>
    /// Relates to transition Zoom in PowerPoint 2010.
    /// Available in PowerPoint 2010.
    /// </summary>
    Warp,
    /// <summary>Available in PowerPoint 2010.</summary>
    Flythrough,
    /// <summary>Available in PowerPoint 2010.</summary>
    Flash,
    /// <summary>Available in PowerPoint 2010.</summary>
    Shred,
    /// <summary>Available in PowerPoint 2010.</summary>
    Reveal,
    /// <summary>
    /// Relates to transition Clock (with option Counterclockwise) in PowerPoint 2010.
    /// Available in PowerPoint 2010.
    /// </summary> 
    WheelReverse,
    /// <summary>Available in PowerPoint 2013.</summary>
    FallOver,
    /// <summary>Available in PowerPoint 2013.</summary>
    Drape,
    /// <summary>Available in PowerPoint 2013.</summary>
    Curtains,
    /// <summary>Available in PowerPoint 2013.</summary>
    Wind,
    /// <summary>Available in PowerPoint 2013.</summary>
    Prestige,
    /// <summary>Available in PowerPoint 2013.</summary>
    Fracture,
    /// <summary>Available in PowerPoint 2013.</summary>
    Crush,
    /// <summary>Available in PowerPoint 2013.</summary>
    PeelOff,
    /// <summary>Available in PowerPoint 2013.</summary>
    PageCurlDouble,
    /// <summary>Available in PowerPoint 2013.</summary>
    PageCurlSingle,
    /// <summary>Available in PowerPoint 2013.</summary>
    Airplane,
    /// <summary>Available in PowerPoint 2013.</summary>
    Origami,
    /// <summary>Relates to transition Morph (with option Type) in PowerPoint 2019.</summary>
    Morph
};

} // namespace SlideShow
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::SlideShow::TransitionType>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::SlideShow::TransitionType, const char_t*>, 57>& values();
};
/// @endcond



