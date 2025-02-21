#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines the available serialization styles for headings.
/// For specification see CommonMark - ATX headings,
/// respectively CommonMark - Setext headings.
/// </summary>
enum class HeadingStyle
{
    /// <summary>
    /// Prefix headings with '#'
    /// </summary>
    Atx = 0,
    /// <summary>
    /// Underscore level 1 and 2 headings with "======" respectively "------"
    /// </summary>
    /// <remarks>
    /// Setext heading are only available for level 1 and 2 headings.
    /// Even with the heading style set to Setext, Atx style will be used
    /// for level 3 and above headings.
    /// </remarks>
    Setext = 1
};

} // namespace Pdf
} // namespace Aspose


