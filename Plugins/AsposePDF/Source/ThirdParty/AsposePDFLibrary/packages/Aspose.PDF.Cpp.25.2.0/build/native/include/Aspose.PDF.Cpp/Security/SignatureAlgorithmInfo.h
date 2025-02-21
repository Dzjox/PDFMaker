#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class DigestHashAlgorithm;
namespace Facades
{
class PdfFileSignature;
} // namespace Facades
namespace Security
{
enum class CryptographicStandard;
class KeyedSignatureAlgorithmInfo;
enum class SignatureAlgorithmType;
class TimestampAlgorithmInfo;
class UnknownSignatureAlgorithmInfo;
} // namespace Security
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Text
{
class StringBuilder;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Represents a class for information about a signature algorithm, including its type,
/// cryptographic standard, and digest hash algorithm.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SignatureAlgorithmInfo : public System::Object
{
    typedef SignatureAlgorithmInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Security::KeyedSignatureAlgorithmInfo;
    friend class Aspose::Pdf::Security::TimestampAlgorithmInfo;
    friend class Aspose::Pdf::Security::UnknownSignatureAlgorithmInfo;
    
public:

    /// <summary>
    /// Gets the name of the signature field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_SignatureName() const;
    
    /// <summary>
    /// Gets the type of the signature algorithm used for signing the PDF document.
    /// </summary>
    SignatureAlgorithmType AlgorithmType;
    /// <summary>
    /// Gets the cryptographic standard used for signing the PDF document.
    /// </summary>
    Aspose::Pdf::Security::CryptographicStandard CryptographicStandard;
    /// <summary>
    /// Gets the digest hash algorithm used for the signature.
    /// For a timestamp, this is the digest hash algorithm with which the hash of the document content is signed. 
    /// </summary>
    Aspose::Pdf::DigestHashAlgorithm DigestHashAlgorithm;
    
    /// <summary>
    /// Converts the current information object to its string representation.
    /// </summary>
    /// <returns>A string that represents the current information object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Gets the name of the signature field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SignatureName(System::String value);
    
    /// <summary>
    /// Creates an instance of <see cref="SignatureAlgorithmInfo"></see> 
    /// </summary>
    /// <param name="cryptographicStandard">The cryptographic standard.</param>
    /// <param name="digestHashAlgorithm">The digest algorithm.</param>
    /// <param name="algorithmType">The signature algorithm.</param>
    ASPOSE_PDF_SHARED_API SignatureAlgorithmInfo(Aspose::Pdf::Security::CryptographicStandard cryptographicStandard, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm, SignatureAlgorithmType algorithmType);
    
    /// <summary>
    /// Fills string builder instance.
    /// </summary>
    /// <returns>The string builder instance.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<System::Text::StringBuilder> FillText();
    
private:

    System::String pr_SignatureName;
    
    System::String ToString_NonConst();
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


