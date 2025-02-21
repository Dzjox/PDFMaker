#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Signature.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class DigestHashAlgorithm;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
class IPdfDocument;
} // namespace Engine
namespace Forms
{
class SignatureField;
} // namespace Forms
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Represents the PKCS#7 object that conform to the PKCS#7 specification in Internet RFC 2315, 
/// PKCS #7: Cryptographic Message Syntax, Version 1.5.
/// The original signed message digest over the document's byte range is incorporated as the normal PKCS#7 SignedData field. 
/// No data shall is encapsulated in the PKCS#7 SignedData field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PKCS7Detached final : public Aspose::Pdf::Forms::Signature
{
    typedef PKCS7Detached ThisType;
    typedef Aspose::Pdf::Forms::Signature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::SignatureField;
    
public:

    /// <summary>
    /// Initializes new instance of the <see cref="PKCS7Detached"></see> class.
    /// </summary>
    /// <param name="image">
    /// This image will define signature appearance on the page.
    /// </param>
    ASPOSE_PDF_SHARED_API PKCS7Detached(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Initializes new instance of the <see cref="PKCS7Detached"></see> class.
    /// </summary>
    /// <param name="image">
    /// This image will define signature appearance on the page.
    /// </param>
    /// <param name="digestHashAlgorithm">The digest algorithm to sign a document.</param>
    ASPOSE_PDF_SHARED_API PKCS7Detached(System::SharedPtr<System::IO::Stream> image, DigestHashAlgorithm digestHashAlgorithm);
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7Detached"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API PKCS7Detached();
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7Detached"></see> class.
    /// </summary>
    /// <param name="digestHashAlgorithm">The digest algorithm to sign a document.</param>
    ASPOSE_PDF_SHARED_API PKCS7Detached(DigestHashAlgorithm digestHashAlgorithm);
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7Detached"></see> class.
    /// </summary>
    /// <param name="pfx">
    /// Pfx file which contains certificate for signing.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    ASPOSE_PDF_SHARED_API PKCS7Detached(System::String pfx, System::String password);
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7Detached"></see> class.
    /// </summary>
    /// <param name="pfx">
    /// Pfx file which contains certificate for signing.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    /// <param name="digestHashAlgorithm">The digest algorithm to sign a document.</param>
    ASPOSE_PDF_SHARED_API PKCS7Detached(System::String pfx, System::String password, DigestHashAlgorithm digestHashAlgorithm);
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7Detached"></see> class.
    /// </summary>
    /// <param name="pfx">
    /// Stream with certificate data organized as pfx.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    ASPOSE_PDF_SHARED_API PKCS7Detached(System::SharedPtr<System::IO::Stream> pfx, System::String password);
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS7Detached"></see> class.
    /// </summary>
    /// <param name="pfx">
    /// Stream with certificate data organized as pfx.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    /// <param name="digestHashAlgorithm">The digest algorithm to sign a document.</param>
    ASPOSE_PDF_SHARED_API PKCS7Detached(System::SharedPtr<System::IO::Stream> pfx, System::String password, DigestHashAlgorithm digestHashAlgorithm);
    
protected:

    /// <summary>
    /// Initialize signature object from signature dictionary. Then this object will be used for verifying the document.
    /// </summary>
    /// <param name="signature">
    /// Signature dictionary.
    /// </param>
    /// <param name="document">
    /// The document, it is used then to get file data in order to verify signature.
    /// </param>
    PKCS7Detached(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PKCS7Detached, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document));
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


