#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents types of header recognition strategies.
/// </summary>
enum class HeadingRecognitionStrategy
{
    /// <summary>
    /// Represents the header recognition strategy by means of outlines.
    /// </summary>
    Outlines,
    /// <summary>
    /// Represents the header recognition strategy by means of heuristics rules and font size statistic.
    /// </summary>
    Heuristic,
    /// <summary>
    /// Provides an automatic header recognition strategy selection.
    /// This is the default option.
    /// If the document contains bookmarks, the <see cref="Outlines"></see> strategy will be selected, otherwise <see cref="Heuristic"></see>
    /// </summary>
    Auto,
    /// <summary>
    /// Do not recognize headers.
    /// This option can be useful in complexly formatted documents.
    /// </summary>
    None
};

} // namespace Pdf
} // namespace Aspose


