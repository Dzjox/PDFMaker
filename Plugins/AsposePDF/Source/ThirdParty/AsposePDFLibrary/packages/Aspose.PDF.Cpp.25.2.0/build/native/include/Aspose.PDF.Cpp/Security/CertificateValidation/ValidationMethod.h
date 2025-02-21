#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Represents an enum  defined the method used for certificate validation.
/// </summary>
enum class ValidationMethod
{
    /// <summary>
    /// Automatically determines the best method for certificate validation.
    /// </summary>
    Auto,
    /// <summary>
    /// Uses the Online Certificate Status Protocol (OCSP) for certificate validation.
    /// OCSP is a protocol that provides the validation status of a certificate by directly querying the issuing Certificate Authority (CA).
    /// </summary>
    Ocsp,
    /// <summary>
    /// Validates certificates using the Certificate Revocation List (CRL) method.
    /// </summary>
    Crl,
    /// <summary>
    /// Uses all available methods (OCSP and CRL) for certificate validation.
    /// </summary>
    All
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


