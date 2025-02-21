#pragma once

namespace Aspose {

namespace Pdf {

/// <summary>
/// Specifies the behavior for bounds checking when adding items to a collection.
/// </summary>
enum class BoundsCheckMode
{
    /// <summary>
    /// Default behavior: Add items without bounds checking.
    /// </summary>
    Default = 0,
    /// <summary>
    /// Throw BoundsNotFitException if an item doesn't fit within the given container dimensions (inclusive).
    /// </summary>
    ThrowExceptionIfDoesNotFit = 1
};

} // namespace Pdf
} // namespace Aspose


