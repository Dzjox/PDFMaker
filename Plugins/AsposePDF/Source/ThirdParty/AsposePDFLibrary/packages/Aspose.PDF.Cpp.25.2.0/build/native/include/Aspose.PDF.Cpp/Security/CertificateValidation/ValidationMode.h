#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Specifies the validation mode for PDF signature validation processes.
/// </summary>
enum class ValidationMode
{
    /// <summary>
    /// Represents a mode where validation is not performed.
    /// </summary>
    None,
    /// <summary>
    /// Represents the mode in which the validation is made, but its result does not affect the validation of the digital signature.
    /// You can check the result of the validation yourself.
    /// </summary>
    OnlyCheck,
    /// <summary>
    /// Represents the mode in which the validation is made and its result affects the validation of the digital signature.
    /// If the certificate could not be verified, then the digital signature will be considered invalid.
    /// You can check the result of the validation yourself.
    /// </summary>
    Strict
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


