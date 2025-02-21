#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Enumerates the types of signature algorithms used for digital signatures.
/// </summary>
enum class SignatureAlgorithmType
{
    /// <summary>
    /// The Elliptic Curve Digital Signature Algorithm (ECDSA) used for digital signatures.
    /// </summary>
    Ecdsa,
    /// <summary>
    /// The Rivest–Shamir–Adleman (RSA) algorithm used for digital signatures.
    /// </summary>
    Rsa,
    /// <summary>
    /// The Digital Signature Algorithm (DSA) used for digital signatures.
    /// </summary>
    Dsa,
    /// <summary>
    /// The Timestamp used as a signature algorithm to ensure the digital signatures.
    /// </summary>
    Timestamp,
    /// <summary>
    /// Indicates that the signature algorithm type is unknown.
    /// </summary>
    Unknown
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


