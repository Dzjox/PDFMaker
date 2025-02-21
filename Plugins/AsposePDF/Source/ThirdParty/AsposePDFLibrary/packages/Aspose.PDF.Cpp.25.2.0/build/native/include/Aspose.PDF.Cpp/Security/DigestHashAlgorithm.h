#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represent type of algorithm that maps data to a "hash"
/// </summary>
enum class DigestHashAlgorithm
{
    /// <summary>
    /// Automatic setting of the hashing algorithm at the discretion of the signature algorithm.
    /// For EDCSA, the default value is determined by the key size.
    /// The default value for a not detached PKCS7 is Sha1. 
    /// </summary>
    Auto,
    /// <summary>
    /// SHA-1. Secure Hash Algorithm 1
    /// It is a default value for a not detached PKCS7. 
    /// </summary>
    Sha1,
    /// <summary>
    /// SHA-256. Secure Hash Algorithm 2
    /// It is a default value for a detached PKCS7. 
    /// </summary>
    /// <remarks>For EDCSA, the default value is determined by the key size.</remarks>
    Sha256,
    /// <summary>
    /// SHA-384. Secure Hash Algorithm 2
    /// </summary>
    Sha384,
    /// <summary>
    /// SHA-512. Secure Hash Algorithm 2
    /// </summary>
    Sha512,
    /// <summary>
    /// SHA3-256. Secure Hash Algorithm 3
    /// </summary>
    Sha3_256,
    /// <summary>
    /// SHA3-384. Secure Hash Algorithm 3
    /// </summary>
    Sha3_384,
    /// <summary>
    /// SHA3-512. Secure Hash Algorithm 3
    /// </summary>
    Sha3_512
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::DigestHashAlgorithm>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::DigestHashAlgorithm, const char_t*>, 8>& values();
};



