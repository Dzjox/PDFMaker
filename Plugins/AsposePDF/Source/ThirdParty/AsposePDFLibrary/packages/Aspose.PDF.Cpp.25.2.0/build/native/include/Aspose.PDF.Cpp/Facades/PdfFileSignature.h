#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Facades
{
class SignatureName;
} // namespace Facades
namespace Forms
{
enum class DocMDPAccessPermissions;
class DocMDPSignature;
class Signature;
class SignatureField;
} // namespace Forms
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
class Page;
class Rectangle;
namespace Security
{
class SignatureAlgorithmInfo;
class ValidationOptions;
class ValidationResult;
} // namespace Security
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
class DateTime;
namespace Drawing
{
class Rectangle;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to sign a pdf file with a certificate.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfFileSignature final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileSignature ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Sets or gets a graphic appearance for the signature. Property value represents image file name.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_SignatureAppearance() const;
    /// <summary>
    /// Sets or gets a graphic appearance for the signature. Property value represents image file name.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SignatureAppearance(System::String value);
    /// <summary>
    /// Gets the LTV enabled flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsLtvEnabled();
    /// <summary>
    /// Gets the flag determining whether a document is certified or not.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsCertified();
    /// <summary>
    /// Sets or gets a graphic appearance for the signature. Property value represents image stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_SignatureAppearanceStream() const;
    /// <summary>
    /// Sets or gets a graphic appearance for the signature. Property value represents image stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SignatureAppearanceStream(System::SharedPtr<System::IO::Stream> value);
    
    /// <summary>
    /// The constructor of PdfFileSignature class. 
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFileSignature();
    /// @deprecated Use another constructor for instance initialization.
    /// <summary>
    /// The constructor of PdfFileSignature class.
    /// </summary>
    /// <param name="inputFile">The input file for signature.</param>
    ASPOSE_PDF_SHARED_API PdfFileSignature(System::String inputFile);
    /// @deprecated Use another constructor for instance initialization.
    /// <summary>
    /// The constructor of PdfFileSignature class.
    /// </summary>
    /// <param name="inputFile">The input file for signature.</param>
    /// <param name="outputFile">The output file.</param>
    ASPOSE_PDF_SHARED_API PdfFileSignature(System::String inputFile, System::String outputFile);
    
    /// <summary> 
    /// Binds a Pdf file for editing.
    /// </summary>
    /// <param name="inputFile">The pdf file to be edited.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String inputFile) override;
    /// <summary> 
    /// Binds a Pdf stream for editing.
    /// </summary>
    /// <param name="inputStream">The pdf stream to be edited.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> inputStream) override;
    /// <summary>
    /// Saves the result PDF to file.
    /// </summary>
    /// <param name="outputFile">Output pdf file.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String outputFile) override;
    /// <summary>
    /// Saves the result PDF to stream.
    /// </summary>
    /// <param name="outputStream">Output pdf stream.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> outputStream) override;
    /// <summary>
    /// Make a signature on the pdf document.
    /// </summary>
    /// <param name="page">The page number on which signature is made.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Sign(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect);
    /// <summary>
    /// Sign the document with the given type signature.
    /// </summary>
    /// <param name="page">The page number on which signature is made.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <param name="sig">The type of the signature, could be PKCS1, PKCS7 and PKCS7Detached. </param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Sign(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::Forms::Signature> sig);
    /// <summary>
    /// Sign the document with the given type signature.
    /// </summary>
    /// <param name="page">The page number on which signature is made.</param>
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <param name="sig">
    /// The type of the signature, could be PKCS1, PKCS7 and PKCS7Detached.
    /// Such data as signature reason, contact and location must be already present in this object (see corresponding properties).
    /// </param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Sign(int32_t page, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::Forms::Signature> sig);
    /// <summary>
    /// Sign the document with the given type signature which is placed in already presented signature field.
    /// Before signing signature field must be empty, i.e. field must not contain signature dictionary.
    /// Thus pdf document already has signature field, you should not supply the place to stamp the signature,
    /// corresponding page and rectangle are taken from signature field which is found by signature name (see SigName parameter).
    /// </summary>
    /// <param name="SigName">The name of the signature field.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>
    /// <param name="sig">The type of the signature, could be PKCS1, PKCS7 and PKCS7Detached.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Sign(System::String SigName, System::String SigReason, System::String SigContact, System::String SigLocation, System::SharedPtr<Aspose::Pdf::Forms::Signature> sig);
    /// <summary>
    /// Sign the document with the given type signature which is placed in already presented signature field.
    /// Before signing pdf document should already has signature field, corresponding page and rectangle are taken from 
    /// signature field which is found by signature name (see SigName parameter).
    /// </summary>
    /// <param name="page">The page number on which signature is made.</param>        
    /// <param name="SigName">The name of the signature field.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>        
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <param name="sig">The type of the signature, could be PKCS1, PKCS7 and PKCS7Detached.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Sign(int32_t page, System::String SigName, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::Forms::Signature> sig);
    /// <summary>
    /// Sign the document with the given type signature which is placed in already presented signature field.
    /// Before signing signature field must be empty, i.e. field must not contain signature dictionary.
    /// Thus pdf document already has signature field, you should not supply the place to stamp the signature,
    /// corresponding page and rectangle are taken from signature field which is found by signature name (see SigName parameter).
    /// Such data as signature reason, contact and location must be provided by corresponding properties of the Signature object sig.
    /// </summary>
    /// <param name="SigName">The name of the signature field.</param>
    /// <param name="sig">The type of the signature, could be PKCS1 (Pkcs1Signature object), PKCS7 and PKCS7 detached (Pkcs7Signature object) </param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Sign(System::String SigName, System::SharedPtr<Aspose::Pdf::Forms::Signature> sig);
    /// <summary>
    /// Returns the access permissions value of certified document by the MDP signature type.
    /// </summary>
    /// <returns>If the document is being certified, than returns access permissions value; otherwise,
    /// <exception cref="PdfException"></exception> is thrown.</returns>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Forms::DocMDPAccessPermissions GetAccessPermissions();
    /// <summary>
    /// Certify the document with the MDP signature.
    /// Such data as signature reason, contact and location must be provided by corresponding properties of the Signature object sig.
    /// </summary>
    /// <param name="page">The page on which signature is made.</param>
    /// <param name="SigReason">The reason of signature.</param>
    /// <param name="SigContact">The contact of signature.</param>
    /// <param name="SigLocation">The location of signature.</param>
    /// <param name="visible">The visiblity of signature.</param>
    /// <param name="annotRect">The rect of signature.</param>
    /// <param name="docMdpSignature">The document MDP type of the signature.</param>
    ASPOSE_PDF_SHARED_API void Certify(int32_t page, System::String SigReason, System::String SigContact, System::String SigLocation, bool visible, System::Drawing::Rectangle annotRect, System::SharedPtr<Aspose::Pdf::Forms::DocMDPSignature> docMdpSignature);
    /// <summary>
    /// Certify the document with the MDP signature which is placed in already presented signature field.
    /// Before signing signature field must be empty, i.e. field must not contain signature dictionary.
    /// Thus pdf document already has signature field, you should not supply the place to stamp the signature,
    /// corresponding page and rectangle are taken from signature field which is found by signature name (see sigName parameter).
    /// </summary>
    /// <param name="sigName">The name of the signature field.</param>
    /// <param name="docMdpSignature">The type of the signature, could be
    /// <see cref="Aspose::Pdf::Forms::PKCS1"></see>, <see cref="Aspose::Pdf::Forms::PKCS7"></see> and  <see cref="Aspose::Pdf::Forms::PKCS7Detached"></see></param>
    ASPOSE_PDF_SHARED_API void Certify(System::String sigName, System::SharedPtr<Aspose::Pdf::Forms::DocMDPSignature> docMdpSignature);
    /// @deprecated The method can produce the same signature names, which cannot be distinguished during verification. Use GetSignatureNames(bool onlyActive) instead.
    /// <summary>
    /// Gets the names of all not empty signatures.
    /// </summary>
    /// <param name="onlyActive">if true, return only active signatures; otherwise, return all signatures.</param>
    /// <returns>Return an IList&lt;string&gt;.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::String>> GetSignNames(bool onlyActive = true);
    /// <summary>
    /// Gets the names of all not empty signatures.
    /// </summary>
    /// <param name="onlyActive">if true, return only active signatures; otherwise, return all signatures.</param>
    /// <returns>Return an IList&lt;SignatureName&gt;.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<SignatureName>>> GetSignatureNames(bool onlyActive = true);
    /// @deprecated Use GetBlankSignatureNames() instead.
    /// <summary>
    /// Gets the names of all empty signature fields.
    /// </summary>
    /// <returns>Return an IList.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::String>> GetBlankSignNames();
    /// <summary>
    /// Gets the names of all empty signature fields.
    /// </summary>
    /// <returns>Return an IList.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<SignatureName>>> GetBlankSignatureNames();
    /// @deprecated ContainsSignature should be used instead of IsContainSignature.
    /// <summary>
    /// Checks if the pdf  has a digital signature or not.
    /// </summary>
    /// <returns>Return a  result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool IsContainSignature();
    /// <summary>
    /// Checks if the pdf  has a digital signature or not.
    /// </summary>
    /// <returns>Return a  result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool ContainsSignature();
    /// <summary>
    /// Checks if the pdf has a usage rights or not.
    /// </summary>
    /// <returns>Returns a result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool ContainsUsageRights();
    /// @deprecated CoversWholeDocument should be used instead of IsCoversWholeDocument.
    /// <summary>
    /// Checks if the signature covers the whole document.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a  result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool IsCoversWholeDocument(System::String signName);
    /// @deprecated CoversWholeDocument(SignatureName) should be used instead.
    /// <summary>
    /// Checks if the signature covers the whole document.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a  result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool CoversWholeDocument(System::String signName);
    /// <summary>
    /// Checks if the signature covers the whole document.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool CoversWholeDocument(System::SharedPtr<SignatureName> signName);
    /// @deprecated GetRevision(SignatureName) should be used instead of GetRevision(string).
    /// <summary>
    /// Gets the revision of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return the number of signature revision.</returns>
    ASPOSE_PDF_SHARED_API int32_t GetRevision(System::String signName);
    /// <summary>
    /// Gets the revision of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return the number of signature revision.</returns>
    ASPOSE_PDF_SHARED_API int32_t GetRevision(System::SharedPtr<SignatureName> signName);
    /// <summary>
    /// Gets the toltal revision.
    /// </summary>
    /// <returns>Return the total number of signature revision.</returns>
    ASPOSE_PDF_SHARED_API int32_t GetTotalRevision();
    /// <summary>
    /// Removes the usage rights entry.
    /// </summary>
    ASPOSE_PDF_SHARED_API void RemoveUsageRights();
    /// @deprecated Use RemoveSignature(SignatureName) instead.
    /// <summary>
    /// Remove the signature according to the name of the signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RemoveSignature(System::String signName);
    /// <summary>
    /// Remove the signature according to the name of the signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RemoveSignature(System::SharedPtr<SignatureName> signName);
    /// @deprecated Use RemoveSignature(SignatureName, bool) instead.
    /// <summary>
    /// Removes the signature according to the name of the signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <param name="removeField">If set to true, than removes both of signature and field from document; otherwise, signature only.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RemoveSignature(System::String signName, bool removeField);
    /// <summary>
    /// Removes the signature according to the name of the signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <param name="removeField">If set to true, than removes both of signature and field from document; otherwise, signature only.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RemoveSignature(System::SharedPtr<SignatureName> signName, bool removeField);
    /// <summary>
    /// Removes all signatures.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RemoveSignatures();
    /// @deprecated The method is deprecated and will be deleted in 25.1 version. Use VerifySignature method instead.
    /// <summary>
    /// Checks the validity of a signature.
    /// The method is deprecated and will be deleted in 25.1 version.
    /// Use VerifySignature method instead.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool VerifySigned(System::String signName);
    /// @deprecated Use GetSignerName(SignatureName) instead.
    /// <summary>
    /// Gets the name of person or organization who signing the pdf document.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns the result of the signer's name.</returns>
    ASPOSE_PDF_SHARED_API System::String GetSignerName(System::String signName);
    /// <summary>
    /// Gets the name of person or organization who signing the pdf document.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns the result of the signer's name.</returns>
    ASPOSE_PDF_SHARED_API System::String GetSignerName(System::SharedPtr<SignatureName> signName);
    /// @deprecated Use GetDateTime(SignatureName) instead.
    /// <summary>
    /// Gets the signature's datetime.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return the result of DateTime type.</returns>
    ASPOSE_PDF_SHARED_API System::DateTime GetDateTime(System::String signName);
    /// <summary>
    /// Gets the signature's datetime.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return the result of DateTime type.</returns>
    ASPOSE_PDF_SHARED_API System::DateTime GetDateTime(System::SharedPtr<SignatureName> signName);
    /// @deprecated Use GetReason(SignatureName) instead.
    /// <summary>
    /// Gets the reason of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    ASPOSE_PDF_SHARED_API System::String GetReason(System::String signName);
    /// <summary>
    /// Gets the reason of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    ASPOSE_PDF_SHARED_API System::String GetReason(System::SharedPtr<SignatureName> signName);
    /// @deprecated Use GetLocation(SignatureName) instead.
    /// <summary>
    /// Gets the location of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    ASPOSE_PDF_SHARED_API System::String GetLocation(System::String signName);
    /// <summary>
    /// Gets the location of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    ASPOSE_PDF_SHARED_API System::String GetLocation(System::SharedPtr<SignatureName> signName);
    /// @deprecated Use GetContactInfo(SignatureName) instead.
    /// <summary>
    /// Gets the contact information of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    ASPOSE_PDF_SHARED_API System::String GetContactInfo(System::String signName);
    /// <summary>
    /// Gets the contact information of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Returns a result of string type.</returns>
    ASPOSE_PDF_SHARED_API System::String GetContactInfo(System::SharedPtr<SignatureName> signName);
    /// @deprecated Use VerifySignature(SignatureName) method instead.
    /// <summary>
    /// Checks the validity of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool VerifySignature(System::String signName);
    /// <summary>
    /// Checks the validity of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>Return a result of bool type.</returns>
    ASPOSE_PDF_SHARED_API bool VerifySignature(System::SharedPtr<SignatureName> signName);
    /// @deprecated Use VerifySignature(SignatureName, ValidationOptions, out ValidationResult) method instead.
    /// <summary>
    /// Checks the validity of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <param name="options">The verification options.</param>
    /// <param name="validationResult">The certificate validation result.</param>
    /// <returns>Return a result of bool type.</returns>
    /// <remarks>
    /// This method allows you to check the signing certificate using OCSP and/or CRL (certificate revocation list) for revocation.
    /// This method does not check the certificate chain and its validity, but it does check whether the end certificate has been revoked.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool VerifySignature(System::String signName, System::SharedPtr<Aspose::Pdf::Security::ValidationOptions> options, System::SharedPtr<Aspose::Pdf::Security::ValidationResult>& validationResult);
    /// <summary>
    /// Checks the validity of a signature.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <param name="options">The verification options.</param>
    /// <param name="validationResult">The certificate validation result.</param>
    /// <returns>Return a result of bool type.</returns>
    /// <remarks>
    /// This method allows you to check the signing certificate using OCSP and/or CRL (certificate revocation list) for revocation.
    /// This method does not check the certificate chain and its validity, but it does check whether the end certificate has been revoked.
    /// </remarks>
    ASPOSE_PDF_SHARED_API bool VerifySignature(System::SharedPtr<SignatureName> signName, System::SharedPtr<Aspose::Pdf::Security::ValidationOptions> options, System::SharedPtr<Aspose::Pdf::Security::ValidationResult>& validationResult);
    /// <summary>
    /// Retrieves information about all signatures algorithm present in the PDF document.
    /// </summary>
    /// <returns>A list of <see cref="SignatureAlgorithmInfo"></see> instances containing information about each signature.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Security::SignatureAlgorithmInfo>>> GetSignaturesInfo();
    /// @deprecated Use ExtractImage(SignatureName) method instead.
    /// <summary>
    /// Extracts signature's image.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>If image was successfully found than returns stream object; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ExtractImage(System::String signName);
    /// <summary>
    /// Extracts signature's image.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>If image was successfully found than returns stream object; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ExtractImage(System::SharedPtr<SignatureName> signName);
    /// @deprecated Use ExtractCertificate(SignatureName) method instead.
    /// <summary>
    /// Extracts signature's single X.509 certificate as a stream.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>If certificate was found returns X.509 single certificate; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ExtractCertificate(System::String signName);
    /// <summary>
    /// Extracts signature's single X.509 certificate as a stream.
    /// </summary>
    /// <param name="signName">The name of signature.</param>
    /// <returns>If certificate was found returns X.509 single certificate; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ExtractCertificate(System::SharedPtr<SignatureName> signName);
    /// @deprecated Please, use Save method with parameter.
    /// <summary> 
    /// Save signed pdf file. Output filename must be provided before with the help of coresponding PdfFileSignature constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Save();
    
    /// <summary>
    /// Initializes new <see cref="PdfFileSignature"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileSignature(System::SharedPtr<Aspose::Pdf::Document> document);
    /// @deprecated Use another constructor for instance initialization.
    /// <summary>
    /// Initializes new <see cref="PdfFileSignature"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputFile">
    /// The output file.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileSignature(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    
    /// <summary>
    /// Set certificate file and password for signing routine.
    /// </summary>
    /// <param name="pfx">
    /// PKCS #12 certificate file.
    /// </param>
    /// <param name="pass">
    /// Password to get access for the certificate private key.
    /// </param>
    ASPOSE_PDF_SHARED_API void SetCertificate(System::String pfx, System::String pass);
    /// <summary>
    /// Closes the facade.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    
protected:

    static System::String GetNextSignatureName(System::SharedPtr<Aspose::Pdf::Document> document);
    static System::SharedPtr<Aspose::Pdf::Forms::SignatureField> CreateSignatureField(System::SharedPtr<Page> page, bool visible, System::SharedPtr<Rectangle> rect);
    
private:

    System::String _outputFile;
    System::String _signatureAppearance;
    System::SharedPtr<System::IO::Stream> _signatureAppearanceStream;
    System::SharedPtr<Aspose::Pdf::Forms::Signature> _sig;
    int32_t _page;
    System::String _sigName;
    bool _visible;
    System::SharedPtr<Rectangle> _rect;
    System::String _pfx;
    System::String _pass;
    int32_t _length;
    
    void AssertSignature(System::SharedPtr<SignatureName> sigName);
    void AssertSignature(System::String sigName);
    void AssertSignatureObjectIsNull(System::String sigName);
    void AssertCanSign(System::SharedPtr<Aspose::Pdf::Forms::Signature> sig);
    System::String GetNextSignatureName();
    System::SharedPtr<System::IO::Stream> RemoveXrefGaps(System::SharedPtr<System::IO::Stream> inputStream, System::String password, System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> ventureLicense);
    void FlushChanges(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::String password);
    void RemoveSignatureInternal(System::SharedPtr<SignatureName> signName);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


