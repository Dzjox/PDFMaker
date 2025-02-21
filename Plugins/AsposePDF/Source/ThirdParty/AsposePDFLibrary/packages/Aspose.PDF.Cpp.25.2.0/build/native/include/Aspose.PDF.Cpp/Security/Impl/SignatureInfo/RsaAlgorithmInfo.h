#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Security/KeyedSignatureAlgorithmInfo.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class DigestHashAlgorithm;
namespace Engine
{
namespace Security
{
namespace Impl
{
class PKCS1;
class PKCS7;
} // namespace Impl
} // namespace Security
} // namespace Engine
namespace Security
{
enum class CryptographicStandard;
} // namespace Security
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Represents a class for the information about the RSA signature algorithm.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RsaAlgorithmInfo final : public Aspose::Pdf::Security::KeyedSignatureAlgorithmInfo
{
    typedef RsaAlgorithmInfo ThisType;
    typedef Aspose::Pdf::Security::KeyedSignatureAlgorithmInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Security::Impl::PKCS1;
    friend class Aspose::Pdf::Engine::Security::Impl::PKCS7;
    
protected:

    /// <summary>
    /// Creates an instance of <see cref="RsaAlgorithmInfo"></see> class. 
    /// </summary>
    /// <param name="cryptographicStandard">The cryptographic standard.</param>
    /// <param name="digestHashAlgorithm">The digest algorithm.</param>
    /// <param name="keySize">The key size.</param>
    RsaAlgorithmInfo(Aspose::Pdf::Security::CryptographicStandard cryptographicStandard, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm, int32_t keySize);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RsaAlgorithmInfo, CODEPORTING_ARGS(Aspose::Pdf::Security::CryptographicStandard cryptographicStandard, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm, int32_t keySize));
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


