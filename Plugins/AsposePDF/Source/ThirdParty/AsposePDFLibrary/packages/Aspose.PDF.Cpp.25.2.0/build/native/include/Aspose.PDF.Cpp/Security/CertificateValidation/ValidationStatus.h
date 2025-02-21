#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Represents the validation status of a certificate validation.
/// </summary>
/// <remarks>
/// This enumeration defines the possible outcomes of certificate validation:
/// - Valid: Indicates that the certificate has been successfully validated.
/// - Invalid: Indicates that the certificate validation failed.
/// - Undefined: Indicates that the validation process was inconclusive or not performed.
/// </remarks>
enum class ValidationStatus
{
    /// <summary>
    /// Indicates that the certificate has been successfully validated.
    /// </summary>
    Valid,
    /// <summary>
    /// Indicates that the certificate validation failed.
    /// </summary>
    Invalid,
    /// <summary>
    /// Indicates that the validation process was inconclusive or not performed.
    /// </summary>
    Undefined
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


