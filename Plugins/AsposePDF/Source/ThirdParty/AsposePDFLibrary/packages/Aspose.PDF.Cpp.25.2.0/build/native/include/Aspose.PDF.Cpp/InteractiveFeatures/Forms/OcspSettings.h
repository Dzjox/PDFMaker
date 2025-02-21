#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the ocsp settings using during signing process.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OcspSettings : public System::Object
{
    typedef OcspSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the request timeout duration in milliseconds for the OCSP request.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_RequestTimeout() const;
    /// <summary>
    /// Sets the request timeout duration in milliseconds for the OCSP request.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RequestTimeout(int32_t value);
    /// <summary>
    /// Gets and sets the ocsp server url.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ServerUrl() const;
    /// <summary>
    /// Gets and sets the ocsp server url.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ServerUrl(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="OcspSettings"></see> class.
    /// </summary>
    /// <param name="serverUrl">The ocsp server url.</param>
    ASPOSE_PDF_SHARED_API OcspSettings(System::String serverUrl);
    
private:

    static const int32_t DefaultRequestTimeout;
    int32_t pr_RequestTimeout;
    System::String pr_ServerUrl;
    
};

} // namespace Pdf
} // namespace Aspose


