#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Specifies variant for determining the location of the element on the page.
/// </summary>
enum class ParagraphPositioningMode
{
    /// <summary>
    /// The location is determined by the previously placed elements. 
    /// Adding an element is taken into account when determining the location of subsequent elements.
    /// </summary>
    Default,
    /// <summary>
    /// The location is specified by the Left and Top values, 
    /// does not depend on previous elements and does not affect the location of subsequent ones.
    /// </summary>
    Absolute
};

} // namespace Pdf
} // namespace Aspose


