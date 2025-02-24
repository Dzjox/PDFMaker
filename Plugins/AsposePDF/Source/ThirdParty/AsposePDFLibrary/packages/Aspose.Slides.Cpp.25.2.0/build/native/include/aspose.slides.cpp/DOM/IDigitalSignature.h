#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class DateTime;
namespace Security
{
namespace Cryptography
{
namespace X509Certificates
{
class X509Certificate2;
} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Digital signature in signed file.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDigitalSignature : public virtual System::Object
{
    typedef IDigitalSignature ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Certificate object that was used to sign the document.
    /// Read-only <see cref="System::Security::Cryptography::X509Certificates::X509Certificate2">X509Certificate2</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> get_Certificate() = 0;
    /// <summary>
    /// If this digital signature is valid and the document has not been tampered with, this value will be true.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"SomePresentationSigned.pptx");
    /// for (int i = 0; i < pres->get_DigitalSignatures()->get_Count(); ++i)
    /// {
    ///     auto signature = pres->get_DigitalSignatures()->idx_get(i);
    ///     System::Console::WriteLine(System::String(u"Signature check: ") + (signature->get_IsValid() ? u"VALID" : u"INVALID"));
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsValid() = 0;
    /// <summary>
    /// The time when the document was signed.
    /// Read-only <see cref="System::DateTime"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"SomePresentationSigned.pptx");
    /// for (int i = 0; i < pres->get_DigitalSignatures()->get_Count(); ++i)
    /// {
    ///     auto signature = pres->get_DigitalSignatures()->idx_get(i);
    ///     System::Console::WriteLine(System::String(u"Signature check: ") + (signature->get_IsValid() ? u"VALID" : u"INVALID") + u", Signing time: " + signature->get_SignTime());
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::DateTime get_SignTime() = 0;
    /// <summary>
    /// The purpose of signature.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Comments() = 0;
    /// <summary>
    /// The purpose of signature.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Comments(System::String value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


