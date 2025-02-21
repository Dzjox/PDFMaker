#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// This enum represents an type of Fixup.
/// </summary>
enum class Fixup
{
    /// <summary>
    /// Not supported.
    /// </summary>
    ConvertAllPagesIntoCMYKImagesAndPreserveTextInformation,
    /// <summary>
    /// Not supported.
    /// </summary>
    ConvertFontsToOutlines,
    /// <summary>
    /// Not supported.
    /// </summary>
    DerivePageGeometryBoxesFromCropMarks,
    /// <summary>
    /// Not supported.
    /// </summary>
    EmbedMissingFonts,
    /// <summary>
    /// Rotate all pages to landscape if portrait by 90 degrees.
    /// </summary>
    RotatePagesToLandscape,
    /// <summary>
    /// Rotate all pages to portrait if landscape by 90 degrees.
    /// </summary>
    RotatePagesToPortrait
};

} // namespace Pdf
} // namespace Aspose


