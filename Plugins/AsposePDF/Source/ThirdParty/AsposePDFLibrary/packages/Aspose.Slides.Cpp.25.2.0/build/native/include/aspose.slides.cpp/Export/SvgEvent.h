#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents options for SVG shape.
/// </summary>
enum class SvgEvent
{
    /// <summary>
    /// Occurs when an element receives focus, such as when a text becomes selected.
    /// </summary>
    OnFocusIn,
    /// <summary>
    /// Occurs when an element loses focus, such as when a text becomes unselected.
    /// </summary>
    OnFocusOut,
    /// <summary>
    /// Occurs when an element is activated, for instance, through a mouse click or a keypress. 
    /// </summary>
    OnActivate,
    /// <summary>
    /// Occurs when the pointing device button is clicked over an element.
    /// </summary>
    OnClick,
    /// <summary>
    /// Occurs when the pointing device button is pressed over an element.
    /// </summary>
    OnMouseDown,
    /// <summary>
    /// Occurs when the pointing device button is released over an element.
    /// </summary>
    OnMouseUp,
    /// <summary>
    /// Occurs when the pointing device is moved onto an element.
    /// </summary>
    OnMouseOver,
    /// <summary>
    /// Occurs when the pointing device is moved while it is over an element.
    /// </summary>
    OnMouseMove,
    /// <summary>
    /// Occurs when the pointing device is moved away from an element.
    /// </summary>
    OnMouseOut,
    /// <summary>
    /// Occurs when the user agent has fully parsed the element and its descendants and all referrenced resurces, required to render it.
    /// </summary>
    OnLoad,
    /// <summary>
    /// Occurs when the DOM implementation removes a document from a window or frame. Only applicable to outermost svg elements.
    /// </summary>
    OnUnload,
    /// <summary>
    /// Occurs when page loading is stopped before an element has been allowed to load completely.
    /// </summary>
    OnAbort,
    /// <summary>
    /// Occurs when an element does not load properly or when an error occurs during script execution.
    /// </summary>
    OnError,
    /// <summary>
    /// Occurs when a document view is being resized. Only applicable to outermost svg elements.
    /// </summary>
    OnResize,
    /// <summary>
    /// Occurs when a document view is being shifted along the X or Y or both axis. Only applicable to outermost svg elements.
    /// </summary>
    OnScroll,
    /// <summary>
    /// Occurs when the zoom level of a document view is being changed. Only applicable to outermost svg elements.
    /// </summary>
    OnZoom,
    /// <summary>
    /// Occurs when an animation element begins.
    /// </summary>
    OnBegin,
    /// <summary>
    /// Occurs when an animation element ends.
    /// </summary>
    OnEnd,
    /// <summary>
    /// Occurs when an animation element repeats.
    /// </summary>
    OnRepeat
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::SvgEvent>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::SvgEvent, const char_t*>, 19>& values();
};
/// @endcond



