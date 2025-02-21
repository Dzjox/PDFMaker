#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.PDF.Cpp/Security/SignatureAlgorithmInfo.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class DigestHashAlgorithm;
namespace Security
{
enum class CryptographicStandard;
class DsaAlgorithmInfo;
class EcdsaAlgorithmInfo;
class RsaAlgorithmInfo;
enum class SignatureAlgorithmType;
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
/// Represents a class for information about a keyed signature algorithm.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS KeyedSignatureAlgorithmInfo : public Aspose::Pdf::Security::SignatureAlgorithmInfo
{
    typedef KeyedSignatureAlgorithmInfo ThisType;
    typedef Aspose::Pdf::Security::SignatureAlgorithmInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Security::EcdsaAlgorithmInfo;
    friend class Aspose::Pdf::Security::DsaAlgorithmInfo;
    friend class Aspose::Pdf::Security::RsaAlgorithmInfo;
    
public:

    /// <summary>
    /// Gets the size of the cryptographic key used by the signature algorithm.
    /// </summary>
    int32_t KeySize;
    
protected:

    /// <summary>
    /// Creates an instance of <see cref="DsaAlgorithmInfo"></see> class.
    /// </summary>
    /// <param name="cryptographicStandard">The cryptographic standard.</param>
    /// <param name="digestHashAlgorithm">The digest algorithm.</param>
    /// <param name="algorithmType">The signature algorithm.</param>
    /// <param name="keySize">The key size.</param>
    ASPOSE_PDF_SHARED_API KeyedSignatureAlgorithmInfo(Aspose::Pdf::Security::CryptographicStandard cryptographicStandard, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm, SignatureAlgorithmType algorithmType, int32_t keySize);
    
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Text::StringBuilder> FillText() override;
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


