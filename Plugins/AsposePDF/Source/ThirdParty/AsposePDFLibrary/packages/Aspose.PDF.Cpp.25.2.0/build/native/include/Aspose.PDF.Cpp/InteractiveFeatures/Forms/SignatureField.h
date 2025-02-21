#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using ImageFormat = Aspose.Pdf.Drawing.ImageFormat;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Field.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Facades
{
class Form;
class PdfFileSignature;
} // namespace Facades
namespace Forms
{
class Signature;
} // namespace Forms
class Page;
class Rectangle;
namespace Text
{
class Font;
} // namespace Text
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
namespace Imaging
{
class ImageFormat;
} // namespace Imaging
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
namespace Security
{
namespace Cryptography
{
namespace X509Certificates
{
class X509Certificate;
} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Represents signature form field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SignatureField final : public Aspose::Pdf::Forms::Field
{
    typedef SignatureField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Forms::Field;
    
public:

    /// <summary>
    /// Gets signature object.
    /// This object contains signature data regarding public-key cryptographic standards.
    /// Classes <see cref="PKCS1"></see>, <see cref="PKCS7"></see> and <see cref="PKCS7Detached"></see> 
    /// represent all supported types of signature objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Forms::Signature> get_Signature();
    
    /// <summary>
    /// Signs the document using this signature field.
    /// </summary>
    /// <param name="signature">
    /// Signature object, see <see cref="PKCS1"></see>, <see cref="PKCS7"></see>, <see cref="PKCS7Detached"></see>.
    /// </param>
    /// <param name="pfx">
    /// Stream with certificate.
    /// </param>
    /// <param name="pass">
    /// Password to access private in the <paramref name="pfx"></paramref>.
    /// </param>
    ASPOSE_PDF_SHARED_API void Sign(System::SharedPtr<Aspose::Pdf::Forms::Signature> signature, System::SharedPtr<System::IO::Stream> pfx, System::String pass);
    
    /// <summary>
    /// Initializes new instance of the <see cref="SignatureField"></see> class.
    /// </summary>
    /// <param name="page">Page where signature field should be placed.</param>
    /// <param name="rect">Position and size of signature field.</param>
    ASPOSE_PDF_SHARED_API SignatureField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes new instance of the <see cref="SignatureField"></see> class.
    /// </summary>
    /// <param name="doc">Page where signature field should be placed.</param>
    /// <param name="rect">Position and size of signature field.</param>
    ASPOSE_PDF_SHARED_API SignatureField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Sign the document using this signature field.
    /// </summary>
    /// <param name="signature">Signature object, see <see cref="PKCS1"></see>, <see cref="PKCS7"></see> and <see cref="PKCS7Detached"></see>.</param>
    ASPOSE_PDF_SHARED_API void Sign(System::SharedPtr<Aspose::Pdf::Forms::Signature> signature);
    /// <summary>
    /// Extracts signature's image as jpeg encoded stream.
    /// </summary>
    /// <returns>If image was successfully found than returns jpeg encoded stream object; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ExtractImage();
    /// <summary>
    /// Extracts signature's image as encoded stream.
    /// </summary>
    /// <param name="format">Image format for encoding.</param>
    /// <returns>If image was successfully found than returns encodedstream object; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ExtractImage(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Extracts the single X.509 certificate in DER format as a stream.  
    /// </summary>
    /// <returns>If certificate was found returns X.509 single certificate; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ExtractCertificate();
    
protected:

    /// <summary>
    /// Initializes new instance of the <see cref="SignatureField"></see> on reading pdf document.
    /// </summary>
    /// <param name="annotation">
    /// Signature field annotation.
    /// </param>
    /// <param name="document">
    /// The document. This info is necessary for signing blank signature fields.
    /// </param>
    SignatureField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SignatureField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    /// <summary>
    /// Removes signature object from field.
    /// </summary>
    void Clear() override;
    void AddImage(System::SharedPtr<System::IO::Stream> image);
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    
    virtual ASPOSE_PDF_SHARED_API ~SignatureField();
    
private:

    System::SharedPtr<Aspose::Pdf::Forms::Signature> _signature;
    
    /// <summary>
    /// Gets signature object.
    /// This object contains signature data regarding public-key cryptographic standards.
    /// Classes <see cref="PKCS1"></see>, <see cref="PKCS7"></see> and <see cref="PKCS7Detached"></see> 
    /// represent all supported types of signature objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Signature(System::SharedPtr<Aspose::Pdf::Forms::Signature> value);
    
    /// <summary>
    /// Initializes the <see cref="Signature"></see> object associated with the signature field.
    /// </summary>
    /// <remarks>
    /// This method retrieves and processes the signature data from the underlying PDF dictionary.
    /// It handles various signature subfilters and extracts metadata such as the authority, reason,
    /// contact information, and location of the signature.
    /// </remarks>
    /// <returns>
    /// A <see cref="Signature"></see> object representing the signature data, or <see langword="null"></see> if no valid signature data is found.
    /// </returns>
    /// <exception cref="SanitizationException">
    /// Thrown when the signature data cannot be sanitized.
    /// </exception>
    System::SharedPtr<Aspose::Pdf::Forms::Signature> InitSignature();
    /// <summary>
    /// Populates the specified <see cref="Signature"></see> object with data from the provided
    /// PDF dictionary.
    /// </summary>
    /// <param name="signature">The <see cref="Signature"></see> object to be populated.</param>
    /// <param name="signatureDictionary">
    /// The <see cref="IPdfDictionary"></see> containing signature-related data.
    /// </param>
    /// <remarks>
    /// This method extracts various signature properties such as authority, reason, contact
    /// information, location, date, reference, and byte range from the PDF dictionary and
    /// assigns them to the corresponding properties of the <see cref="Signature"></see> object.
    /// </remarks>
    void FillSignature(System::SharedPtr<Aspose::Pdf::Forms::Signature> signature, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signatureDictionary);
    /// <summary>
    /// Creates a <see cref="Signature"></see> instance from the provided PDF dictionary and sub-filter.
    /// </summary>
    /// <param name="subFilter">
    /// The sub-filter string that specifies the type of the signature. 
    /// </param>
    /// <param name="signatureDictionary">
    /// The PDF dictionary containing the signature data.
    /// </param>
    /// <returns>
    /// A <see cref="Signature"></see> instance representing the signature data.
    /// </returns>
    /// <exception cref="SanitizationException">
    /// Thrown if the signature data fails sanitization.
    /// </exception>
    System::SharedPtr<Aspose::Pdf::Forms::Signature> CreateSignatureFromDictionary(System::String subFilter, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signatureDictionary);
    static System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate> GetX509Certficate(System::ArrayPtr<uint8_t> certificateRawData);
    void AddImageToAppearance(System::SharedPtr<XForm> appearance, System::SharedPtr<System::IO::Stream> image, System::ArrayPtr<double> position);
    System::ArrayPtr<double> CalculateImagePosition(double width, double height);
    System::SharedPtr<Text::Font> GetAppropriateFont(System::SharedPtr<Aspose::Pdf::Forms::Signature> signature);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


