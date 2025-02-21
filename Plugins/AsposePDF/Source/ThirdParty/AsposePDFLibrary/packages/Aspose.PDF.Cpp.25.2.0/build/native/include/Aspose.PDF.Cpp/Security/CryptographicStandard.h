#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

namespace Aspose {

namespace Pdf {

namespace Security {

/// <summary>
/// Represents the available cryptographic standards for securing PDF documents.
/// </summary>
enum class CryptographicStandard
{
    /// <summary>
    /// Public-Key Cryptography Standards (PKCS) #1
    /// </summary>
    Pkcs1,
    /// <summary>
    /// Public-Key Cryptography Standards (PKCS) #7
    /// </summary>
    Pkcs7,
    /// <summary>
    /// Public Key Infrastructure Time-Stamp Protocol (TSP, rfc3161).
    /// </summary>
    Rfc3161
};


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Security</b> namespace contains classes used for encryption and digital signing.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

} // namespace Security
} // namespace Pdf
} // namespace Aspose


