#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/Security/DigestHashAlgorithm.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the ocsp settings using during signing process.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TimestampSettings : public System::Object
{
    typedef TimestampSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets/sets the timestamp server url.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ServerUrl() const;
    /// <summary>
    /// Gets/sets the timestamp server url.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ServerUrl(System::String value);
    /// <summary>
    /// Gets/sets the basic authentication credentials, Username and password are combined into a string "username:password".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_BasicAuthCredentials() const;
    /// <summary>
    /// Gets/sets the basic authentication credentials, Username and password are combined into a string "username:password".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BasicAuthCredentials(System::String value);
    /// <summary>
    /// Gets/sets the digest algorithm for internal hash functions.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::DigestHashAlgorithm get_DigestHashAlgorithm() const;
    /// <summary>
    /// Gets/sets the digest algorithm for internal hash functions.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DigestHashAlgorithm(Aspose::Pdf::DigestHashAlgorithm value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TimestampSettings"></see> class.
    /// </summary>
    /// <param name="serverUrl">The timestamp server url.</param>
    /// <param name="basicAuthCredentials">The basic authentication credentials, username and password are combined into a string "username:password".</param>
    /// <param name="digestHashAlgorithm">The hash algorithm name, if it is omitted then sha1 is used. The default value is <c>SHA256</c>.</param>
    ASPOSE_PDF_SHARED_API TimestampSettings(System::String serverUrl, System::String basicAuthCredentials, Aspose::Pdf::DigestHashAlgorithm digestHashAlgorithm = Aspose::Pdf::DigestHashAlgorithm::Sha256);
    
private:

    System::String _serverUrl;
    System::String _basicAuthCredentials;
    Aspose::Pdf::DigestHashAlgorithm _digestHashAlgorithm;
    
};

} // namespace Pdf
} // namespace Aspose


