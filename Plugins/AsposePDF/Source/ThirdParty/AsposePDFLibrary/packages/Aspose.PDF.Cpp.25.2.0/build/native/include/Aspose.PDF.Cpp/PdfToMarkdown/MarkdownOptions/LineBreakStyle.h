#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the possible line break styles for a file.
/// </summary>
enum class LineBreakStyle
{
    /// <summary>
    /// Selects the Windows string wrap style(CRLF).
    /// </summary>
    Windows,
    /// <summary>
    /// Select the Unix string wrap style(LF). Also used for OSX.
    /// </summary>
    Unix,
    /// <summary>
    /// Automatically select the type of string wrapping based on the operating system.
    /// </summary>
    Auto
};

} // namespace Pdf
} // namespace Aspose


