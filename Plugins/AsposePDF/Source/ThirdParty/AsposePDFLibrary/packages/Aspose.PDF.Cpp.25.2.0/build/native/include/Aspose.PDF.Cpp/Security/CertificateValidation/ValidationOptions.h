#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Security
{
enum class ValidationMethod;
enum class ValidationMode;
} // namespace Security
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Represents options for validating a digital signature in a PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ValidationOptions final : public System::Object
{
    typedef ValidationOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the mode of validation for digital signatures in a PDF document.
    /// The ValidationMode property determines the strictness of the validation process.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Security::ValidationMode get_ValidationMode() const;
    /// <summary>
    /// Sets the mode of validation for digital signatures in a PDF document.
    /// The ValidationMode property determines the strictness of the validation process.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ValidationMode(Aspose::Pdf::Security::ValidationMode value);
    /// <summary>
    /// Gets the method used to validate a certificate.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Security::ValidationMethod get_ValidationMethod() const;
    /// <summary>
    /// Sets the method used to validate a certificate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ValidationMethod(Aspose::Pdf::Security::ValidationMethod value);
    /// <summary>
    /// Gets the timeout duration, in milliseconds, for network-related operations during the validation process.
    /// The RequestTimeout property defines the maximum time the system should wait for a network response
    /// when accessing online resources, such as revocation status or OCSP servers.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_RequestTimeout() const;
    /// <summary>
    /// Sets the timeout duration, in milliseconds, for network-related operations during the validation process.
    /// The RequestTimeout property defines the maximum time the system should wait for a network response
    /// when accessing online resources, such as revocation status or OCSP servers.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RequestTimeout(int32_t value);
    
    /// <summary>
    /// Creates an instance of <see cref="ValidationOptions"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API ValidationOptions();
    
private:

    static const int32_t DefaultRequestTimeout;
    Aspose::Pdf::Security::ValidationMode pr_ValidationMode;
    Aspose::Pdf::Security::ValidationMethod pr_ValidationMethod;
    int32_t pr_RequestTimeout;
    
};

} // namespace Security
} // namespace Pdf
} // namespace Aspose


