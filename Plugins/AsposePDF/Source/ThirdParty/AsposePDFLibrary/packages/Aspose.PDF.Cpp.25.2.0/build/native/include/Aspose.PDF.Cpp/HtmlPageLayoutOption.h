#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

namespace Aspose {

namespace Pdf {

/// <summary>
/// Specifies flags that together other options determine sizes and layouts of pages.
/// </summary>
enum class HtmlPageLayoutOption
{
    /// <summary>
    /// Default value which indicates that the HtmlPageLayoutOption will not affect the sizes and layouts of pages.
    /// </summary>
    None,
    /// <summary>
    /// Indicates that the width of the page is determinated from the content size itself, not from the specified page width.
    /// </summary>
    FitToWidestContentWidth = static_cast<int32_t>(2 | 1),
    /// <summary>
    /// Indicates the content of the document will be scaled to fit the page.
    /// </summary>
    ScaleToPageWidth = 256
};

} // namespace Pdf
} // namespace Aspose


