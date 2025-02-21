#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <system/date_time.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class WidgetAnnotation;
} // namespace Annotations
enum class DigestHashAlgorithm;
namespace Engine
{
namespace Data
{
class IPdfArray;
class IPdfDictionary;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class VersionConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
class IPdfDocument;
namespace Security
{
namespace Impl
{
namespace Signatures
{
class FieldLockDictionary;
namespace Sanitization
{
class ISignatureCompromiseDetector;
} // namespace Sanitization
class SignatureReference;
} // namespace Signatures
} // namespace Impl
class ISignature;
} // namespace Security
} // namespace Engine
namespace Facades
{
class PdfFileSignature;
} // namespace Facades
namespace Forms
{
class DocMDPSignature;
class PKCS1;
class PKCS7;
class PKCS7Detached;
class SignatureCustomAppearance;
class SignatureField;
} // namespace Forms
class OcspSettings;
namespace Security
{
class SignatureAlgorithmInfo;
class ValidationOptions;
class ValidationResult;
} // namespace Security
namespace Tests
{
class RegressionTests_v24_12;
} // namespace Tests
class TimestampSettings;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

using SignHash = System::MulticastDelegate<System::ArrayPtr<uint8_t>(System::ArrayPtr<uint8_t>, DigestHashAlgorithm)>;

/// <summary>
/// An abstract class which represents signature object in the pdf document. 
/// Signatures are fields with values of signature objects, the last contain data which is used to
/// verify the document validity.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Signature : public System::Object
{
    typedef Signature ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::DocMDPSignature;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::VersionConvertStrategy;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::PKCS1;
    friend class Aspose::Pdf::Forms::PKCS7;
    friend class Aspose::Pdf::Forms::PKCS7Detached;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_12;
    
public:

    /// <summary>
    /// Gets/sets the custom appearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<SignatureCustomAppearance> get_CustomAppearance() const;
    /// <summary>
    /// Gets/sets the custom appearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CustomAppearance(System::SharedPtr<SignatureCustomAppearance> value);
    /// <summary>
    /// The name of the person or authority signing the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Authority() const;
    /// <summary>
    /// The name of the person or authority signing the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Authority(System::String value);
    /// <summary>
    /// The time of signing.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_Date() const;
    /// <summary>
    /// The time of signing.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Date(System::DateTime value);
    /// <summary>
    /// The CPU host name or physical location of the signing.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Location() const;
    /// <summary>
    /// The CPU host name or physical location of the signing.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Location(System::String value);
    /// <summary>
    /// The reason for the signing, such as (I agree, Pip B.).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Reason() const;
    /// <summary>
    /// The reason for the signing, such as (I agree, Pip B.).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Reason(System::String value);
    /// <summary>
    /// Information provided by the signer to enable a recipient to contact the signer 
    /// to verify the signature, e.g. a phone number.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ContactInfo() const;
    /// <summary>
    /// Information provided by the signer to enable a recipient to contact the signer 
    /// to verify the signature, e.g. a phone number.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ContactInfo(System::String value);
    /// <summary>
    /// An array of pairs of integers (starting byte offset, length in bytes) 
    /// that shall describe the exact byte range for the digest calculation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_ByteRange() const;
    /// <summary>
    /// Gets/sets timestamp settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::TimestampSettings> get_TimestampSettings() const;
    /// <summary>
    /// Gets/sets timestamp settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TimestampSettings(System::SharedPtr<Aspose::Pdf::TimestampSettings> value);
    /// <summary>
    /// Gets/sets ocsp settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::OcspSettings> get_OcspSettings() const;
    /// <summary>
    /// Gets/sets ocsp settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OcspSettings(System::SharedPtr<Aspose::Pdf::OcspSettings> value);
    /// <summary>
    /// Gets/sets ltv validation flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseLtv() const;
    /// <summary>
    /// Gets/sets ltv validation flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseLtv(bool value);
    /// <summary>
    /// Gets and sets an option means whether to avoid estimating the length of a signature.
    /// </summary>
    /// <remarks>
    /// Avoids to estimate signature length before a signing document.
    /// Used for signing via <see cref="CustomSignHash"></see> an via <see cref="ExternalSignature"></see>.
    /// If <see cref="CustomSignHash"></see> returns a signature longer than <see cref="DefaultSignatureLength"></see>, then <see cref="Aspose::Pdf::Security::SignatureLengthMismatchException"></see> will be thrown.
    /// The default value is <c>false</c>.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool get_AvoidEstimatingSignatureLength() const;
    /// <summary>
    /// Gets and sets an option means whether to avoid estimating the length of a signature.
    /// </summary>
    /// <remarks>
    /// Avoids to estimate signature length before a signing document.
    /// Used for signing via <see cref="CustomSignHash"></see> an via <see cref="ExternalSignature"></see>.
    /// If <see cref="CustomSignHash"></see> returns a signature longer than <see cref="DefaultSignatureLength"></see>, then <see cref="Aspose::Pdf::Security::SignatureLengthMismatchException"></see> will be thrown.
    /// The default value is <c>false</c>.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_AvoidEstimatingSignatureLength(bool value);
    /// <summary>
    /// Gets the default length for the signature data in bytes.
    /// </summary>
    /// <remarks>
    /// This is an estimation of the length of the signature in bytes.
    /// Used for signing via <see cref="CustomSignHash"></see> if the <see cref="AvoidEstimatingSignatureLength"></see> parameter is set.
    /// The default value is 3000.
    /// </remarks>
    ASPOSE_PDF_SHARED_API int32_t get_DefaultSignatureLength() const;
    /// <summary>
    /// Sets the default length for the signature data in bytes.
    /// </summary>
    /// <remarks>
    /// This is an estimation of the length of the signature in bytes.
    /// Used for signing via <see cref="CustomSignHash"></see> if the <see cref="AvoidEstimatingSignatureLength"></see> parameter is set.
    /// The default value is 3000.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_DefaultSignatureLength(int32_t value);
    /// <summary>
    /// The delegate for custom sign the document hash.
    /// </summary>
    /// <remarks>
    /// <c>The algorithm with which you sign the hash in the delegate must match the type of the certificate's private key.</c>
    /// </remarks>
    ASPOSE_PDF_SHARED_API SignHash get_CustomSignHash() const;
    /// <summary>
    /// The delegate for custom sign the document hash.
    /// </summary>
    /// <remarks>
    /// <c>The algorithm with which you sign the hash in the delegate must match the type of the certificate's private key.</c>
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_CustomSignHash(SignHash value);
    /// <summary>
    /// Force to show/hide signature properties.
    /// In case ShowProperties is true signature field has predefined format of appearance (strings to represent):
    /// -------------------------------------------
    /// Digitally signed by {certificate subject}
    /// Date: {signature.Date}
    /// Reason: {signature.Reason}
    /// Location: {signature.Location}
    /// -------------------------------------------
    /// where {X} is placeholder for X value. Also signature can have image, in this case listed strings are placed over image.
    /// ShowProperties is true by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ShowProperties() const;
    /// <summary>
    /// Force to show/hide signature properties.
    /// In case ShowProperties is true signature field has predefined format of appearance (strings to represent):
    /// -------------------------------------------
    /// Digitally signed by {certificate subject}
    /// Date: {signature.Date}
    /// Reason: {signature.Reason}
    /// Location: {signature.Location}
    /// -------------------------------------------
    /// where {X} is placeholder for X value. Also signature can have image, in this case listed strings are placed over image.
    /// ShowProperties is true by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ShowProperties(bool value);
    
    /// <summary>
    /// Retrieves information about the signature algorithm used in the signature.
    /// </summary>
    /// <returns>An instance of <see cref="SignatureAlgorithmInfo"></see> that contains details
    /// about the signature algorithm.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Security::SignatureAlgorithmInfo> GetSignatureAlgorithmInfo();
    /// <summary>
    /// Verify the document regarding this signature and return true if document is valid 
    /// or otherwise false.
    /// </summary>
    /// <returns>true if document is valid.</returns>
    ASPOSE_PDF_SHARED_API bool Verify();
    /// <summary>
    /// Verify the document regarding this signature and return true if document is valid 
    /// or otherwise false.
    /// </summary>
    /// <param name="options">The verification options.</param>
    /// <param name="validationResult">The certificate validation result.</param>
    /// <returns>true if document is valid.</returns>
    ASPOSE_PDF_SHARED_API bool Verify(System::SharedPtr<Aspose::Pdf::Security::ValidationOptions> options, System::SharedPtr<Aspose::Pdf::Security::ValidationResult>& validationResult);
    
    /// <summary>
    /// Inititalizes new instance of the <see cref="Signature"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Signature();
    /// <summary>
    /// Inititalizes new instance of the <see cref="Signature"></see> class.
    /// </summary>
    /// <param name="pfx">
    /// Pfx file which contains certificate for signing.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    ASPOSE_PDF_SHARED_API Signature(System::String pfx, System::String password);
    /// <summary>
    /// Inititalizes new instance of the <see cref="Signature"></see> class.
    /// </summary>
    /// <param name="pfx">
    /// Stream with certificate data organized as pfx.
    /// </param>
    /// <param name="password">
    /// Password to get access to the private key in the certificate.
    /// </param>
    ASPOSE_PDF_SHARED_API Signature(System::SharedPtr<System::IO::Stream> pfx, System::String password);
    
protected:

    System::SharedPtr<System::IO::Stream> _pfx;
    System::String _password;
    System::SharedPtr<System::IO::Stream> _image;
    System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> _document;
    System::SharedPtr<Aspose::Pdf::Engine::Security::ISignature> _signature;
    
    System::String get_Name() const;
    void set_Name(System::String value);
    
    System::ArrayPtr<int32_t> _byteRange;
    
    /// <summary>
    /// Gets image stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Image() const;
    /// <summary>
    /// Gets image stream.
    /// </summary>
    void set_Image(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets the pfx container value.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Pfx() const;
    /// <summary>
    /// Gets the signature value.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Security::ISignature> get_Value() const;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_Reference() const;
    void set_Reference(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> value);
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> get_SignatureReferences() const;
    void set_SignatureReferences(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> value);
    System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> get_FieldsLock() const;
    void set_FieldsLock(System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> value);
    
    /// <summary>
    /// Sign the document using data in this sugnature object.
    /// </summary>
    /// <param name="sigName">
    /// Represents the name of the signature field which will contain this signature object.
    /// </param>
    /// <param name="pfx">
    /// Stream with certificate data organized as pfx.
    /// </param>
    /// <param name="pass">
    /// Password to get access to the private key in the certificate.
    /// </param>
    void Sign(System::String sigName, System::SharedPtr<System::IO::Stream> pfx, System::String pass);
    /// <summary>
    /// Removes signature value, but keeps the field from document.
    /// </summary>
    void Clear();
    
    /// <summary>
    /// Initializes signature object with image.
    /// </summary>
    /// <param name="image">
    /// Image data.
    /// </param>
    Signature(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Initialize signature object from signature dictionary. Then this object will be used for verifying the document.
    /// </summary>
    /// <param name="signature">
    /// Signature dictionary.
    /// </param>
    /// <param name="document">
    /// The document, it is used then to get file data in order to verify signature.
    /// </param>
    Signature(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document);
    
    virtual ASPOSE_PDF_SHARED_API ~Signature();
    
private:

    System::String _authority;
    System::DateTime _date;
    System::String _location;
    System::String _reason;
    System::String _contactInfo;
    bool mustClose;
    bool _showProperties;
    System::String pr_Name;
    System::SharedPtr<Aspose::Pdf::TimestampSettings> _timestampSettings;
    System::SharedPtr<Aspose::Pdf::OcspSettings> _ocspSettings;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _reference;
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> _signatureReferences;
    System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> _fieldLockDictionary;
    System::SharedPtr<SignatureCustomAppearance> _signatureCustomAppearance;
    SignHash _customSignHash;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _signatureDict;
    bool _useLtv;
    bool pr_AvoidEstimatingSignatureLength;
    int32_t pr_DefaultSignatureLength;
    
    void CheckSignatureForCompromising(System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::Sanitization::ISignatureCompromiseDetector> compromiseDetector, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signatureDictionary);
    bool TryGetByteRange(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray>& byteRange);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


