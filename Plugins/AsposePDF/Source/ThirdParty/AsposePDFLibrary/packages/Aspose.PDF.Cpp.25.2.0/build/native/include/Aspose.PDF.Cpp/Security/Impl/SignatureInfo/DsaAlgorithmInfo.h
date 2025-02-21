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
/// Represents a class for the information about the DSA signature algorithm.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DsaAlgorithmInfo final : public Aspose::Pdf::Security::KeyedSignatureAlgorithmInfo
{
    typedef DsaAlgorithmInfo ThisType;
    typedef Aspose::Pdf::Security::KeyedSignatureAlgorithmInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Security::Impl::PKCS7;
    
protected:

    /// <summary>
    /// Creates an instance of <see cref="DsaAlgorithmInfo"></see> class.
    /// </summary>
    /// <param name="cryptographicStandard">The cryptographic standard.</param>
    /// <param name="digestHashAlgorithm">The digest algorithm.</param>
    /// <param name="keySize">The key size.</param>
    DsaAlgorithmInfo(Aspose::Pdf::Security::CryptographicStandard cryptographicStandard, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm, int32_t keySize);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DsaAlgorithmInfo, CODEPORTING_ARGS(Aspose::Pdf::Security::CryptographicStandard cryptographicStandard, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm, int32_t keySize));
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


