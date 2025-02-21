#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
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
class CertificateValidator;
enum class ValidationStatus;
} // namespace Security
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Represents the result of a validation process for a certificate.
/// </summary>
/// <remarks>
/// The ValidationResult class provides information about the outcome of validating a certificate,
/// including its status and a message describing any issues encountered during the validation.
/// </remarks>
class ASPOSE_PDF_SHARED_CLASS ValidationResult final : public System::Object
{
    typedef ValidationResult ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Security::Impl::PKCS1;
    friend class Aspose::Pdf::Engine::Security::Impl::PKCS7;
    friend class Aspose::Pdf::Security::CertificateValidator;
    
public:

    /// <summary>
    /// Gets the status of the validation process for a certificate.
    /// </summary>
    /// <remarks>
    /// The Status property indicates the outcome of the certificate validation.
    /// Possible values are defined in the <see cref="ValidationStatus"></see> enumeration,
    /// such as Valid, Invalid, or Undefined. It provides an insight into whether
    /// the certificate passed the validation checks or not.
    /// </remarks>
    ASPOSE_PDF_SHARED_API ValidationStatus get_Status() const;
    /// <summary>
    /// Represents the message associated with the validation result.
    /// </summary>
    /// <remarks>
    /// The Message property provides additional context or information about
    /// the state of the validation result.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::String get_Message() const;
    
protected:

    /// <summary>
    /// Gets the status of the validation process for a certificate.
    /// </summary>
    /// <remarks>
    /// The Status property indicates the outcome of the certificate validation.
    /// Possible values are defined in the <see cref="ValidationStatus"></see> enumeration,
    /// such as Valid, Invalid, or Undefined. It provides an insight into whether
    /// the certificate passed the validation checks or not.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_Status(ValidationStatus value);
    /// <summary>
    /// Represents the message associated with the validation result.
    /// </summary>
    /// <remarks>
    /// The Message property provides additional context or information about
    /// the state of the validation result.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_Message(System::String value);
    
    /// <summary>
    /// Creates an instance of <see cref="ValidationResult"></see> class.
    /// </summary>
    ValidationResult();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ValidationResult, CODEPORTING_ARGS());
    
private:

    ValidationStatus pr_Status;
    System::String pr_Message;
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


