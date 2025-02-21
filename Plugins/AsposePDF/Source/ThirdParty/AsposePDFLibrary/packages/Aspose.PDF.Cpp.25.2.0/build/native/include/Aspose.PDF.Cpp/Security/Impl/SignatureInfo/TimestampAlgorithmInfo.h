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
/// Represents a class for the information about the timestamp signature algorithm.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TimestampAlgorithmInfo final : public Aspose::Pdf::Security::SignatureAlgorithmInfo
{
    typedef TimestampAlgorithmInfo ThisType;
    typedef Aspose::Pdf::Security::SignatureAlgorithmInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Security::Impl::PKCS7;
    
public:

    /// <summary>
    /// Gets the hash algorithm that hashed the content of the document and then signed it using <see cref="SignatureAlgorithmInfo::DigestHashAlgorithm"></see>.
    /// </summary>
    Aspose::Pdf::DigestHashAlgorithm ContentHashAlgorithm;
    
protected:

    /// <summary>
    /// Creates an instance of <see cref="TimestampAlgorithmInfo"></see> class. 
    /// </summary>
    /// <param name="digestHashAlgorithm">The digest algorithm.</param>
    /// <param name="contentHashAlgorithm">The hash algorithm that hashed the content.</param>
    TimestampAlgorithmInfo(Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm, Aspose::Pdf::DigestHashAlgorithm contentHashAlgorithm);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TimestampAlgorithmInfo, CODEPORTING_ARGS(Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm, Aspose::Pdf::DigestHashAlgorithm contentHashAlgorithm));
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Text::StringBuilder> FillText() override;
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


