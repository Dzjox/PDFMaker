#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Signature.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
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
/// Represents signature object regarding PKCS#1 standard.
/// RSA encryption algorithm and SHA-1 digest method are used for signing.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PKCS1 final : public Aspose::Pdf::Forms::Signature
{
    typedef PKCS1 ThisType;
    typedef Aspose::Pdf::Forms::Signature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::SignatureField;
    
public:

    /// <summary>
    /// Initializes new instance of the <see cref="PKCS1"></see> class.
    /// </summary>
    /// <param name="image">
    /// This image will define signature appearance on the page.
    /// </param>
    ASPOSE_PDF_SHARED_API PKCS1(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS1"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API PKCS1();
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS1"></see> class.
    /// </summary>
    /// <param name="pfx">
    /// Pfx file which contains certificate for signing.
    /// </param>
    /// <param name="password">
    /// Password for certificate.
    /// </param>
    /// Password to get access to the private key in the certificate.
    ASPOSE_PDF_SHARED_API PKCS1(System::String pfx, System::String password);
    /// <summary>
    /// Inititalizes new instance of the <see cref="PKCS1"></see> class.
    /// </summary>
    /// <param name="pfx">
    /// Stream with certificate data organized as pfx.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    ASPOSE_PDF_SHARED_API PKCS1(System::SharedPtr<System::IO::Stream> pfx, System::String password);
    
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
    PKCS1(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PKCS1, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document));
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


