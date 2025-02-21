#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Signature.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class DigestHashAlgorithm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Security
{
namespace Cryptography
{
namespace X509Certificates
{
class X509Certificate2;
} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Creates a detached PKCS#7 signature using a X509Certificate2. It supports usb smartcards, tokens without exportable private keys.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ExternalSignature : public Aspose::Pdf::Forms::Signature
{
    typedef ExternalSignature ThisType;
    typedef Aspose::Pdf::Forms::Signature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The certificate with the private key.
    /// </summary>
    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> Certificate;
    
    /// <summary>
    /// Creates a detached PKCS#7 <c>(detached)</c> signature using a X509Certificate2. It supports usb smartcards, tokens without exportable private keys.
    /// </summary>
    /// <param name="certificate">The certificate with the private key.</param>
    /// <remarks>The digest algorithm will be automatically selected based on the certificate key data.</remarks>
    ASPOSE_PDF_SHARED_API ExternalSignature(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> certificate);
    /// <summary>
    /// Creates a detached PKCS#7 <c>(detached)</c> signature using a X509Certificate2. It supports usb smartcards, tokens without exportable private keys.
    /// </summary>
    /// <param name="certificate">The certificate with the private key.</param>
    /// <param name="digestHashAlgorithm">The digest algorithm to sign a document.</param>
    ASPOSE_PDF_SHARED_API ExternalSignature(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> certificate, DigestHashAlgorithm digestHashAlgorithm);
    /// <summary>
    /// Creates a detached PKCS#7 signature using a X509Certificate2. It supports usb smartcards, tokens without exportable private keys.
    /// </summary>
    /// <param name="certificate">The certificate with the private key.</param>
    /// <param name="detached">True if the signature should be detached, otherwise false.</param>
    /// <remarks>
    /// For detached set to false the digest algorithm will always be <c>SHA1</c>.
    /// Otherwise, the digest algorithm will be automatically selected based on the certificate key data( see <see cref="DigestHashAlgorithm::Auto"></see> ).
    /// </remarks>
    ASPOSE_PDF_SHARED_API ExternalSignature(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> certificate, bool detached);
    /// <summary>
    /// Creates a PKCS#7 signature using a X509Certificate2 as base64 string.
    /// </summary>
    /// <param name="base64">X509Certificate2 as base64 string.</param>
    /// <param name="detached">True if the signature should be detached, otherwise false.</param>
    /// <remarks>
    /// For detached set to false the digest algorithm will always be <c>SHA1</c>.
    /// Otherwise, the digest algorithm will be automatically selected based on the certificate key data( see <see cref="DigestHashAlgorithm::Auto"></see> ).
    /// </remarks>
    ASPOSE_PDF_SHARED_API ExternalSignature(System::String base64, bool detached);
    /// <summary>
    /// Creates a PKCS#7 <c>(detached)</c> signature using a X509Certificate2 as base64 string.
    /// </summary>
    /// <param name="base64">X509Certificate2 as base64 string.</param>
    /// <param name="digestHashAlgorithm">The digest algorithm to sign a document.</param>
    ASPOSE_PDF_SHARED_API ExternalSignature(System::String base64, DigestHashAlgorithm digestHashAlgorithm);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


