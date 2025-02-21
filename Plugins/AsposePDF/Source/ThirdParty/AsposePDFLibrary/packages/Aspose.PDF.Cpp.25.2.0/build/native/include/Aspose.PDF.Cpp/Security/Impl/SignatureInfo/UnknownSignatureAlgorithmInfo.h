#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Security/SignatureAlgorithmInfo.h"
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
/// Represents a class for the unknown signature algorithm information.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS UnknownSignatureAlgorithmInfo final : public Aspose::Pdf::Security::SignatureAlgorithmInfo
{
    typedef UnknownSignatureAlgorithmInfo ThisType;
    typedef Aspose::Pdf::Security::SignatureAlgorithmInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Security::Impl::PKCS7;
    
protected:

    /// <summary>
    /// Creates an instance of <see cref="UnknownSignatureAlgorithmInfo"></see> class. 
    /// </summary>
    /// <param name="cryptographicStandard">The cryptographic standard.</param>
    /// <param name="digestHashAlgorithm">The digest algorithm.</param>
    UnknownSignatureAlgorithmInfo(Aspose::Pdf::Security::CryptographicStandard cryptographicStandard, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(UnknownSignatureAlgorithmInfo, CODEPORTING_ARGS(Aspose::Pdf::Security::CryptographicStandard cryptographicStandard, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm));
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


