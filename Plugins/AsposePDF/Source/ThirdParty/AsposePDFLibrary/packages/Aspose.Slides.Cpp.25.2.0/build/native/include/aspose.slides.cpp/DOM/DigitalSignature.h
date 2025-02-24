#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/nullable.h>
#include <system/date_time.h>
#include <DOM/IDigitalSignature.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace PptSerialization
{
class PptDeserializator;
class PptSerializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class DigitalSignaturePPTXSerialization;
} // namespace PartParser
class PptxDeserializator;
class PptxSerializator;
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
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
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Digital signature in signed file.
/// </summary>
/// <example>
/// The following example demonstrates how to add digital signature from a PFX certificate in PowerPoint Presentation.
/// <code>
/// // Initialize Presentation instance
/// auto pres = System::MakeObject<Presentation>();
/// 
/// // Create DigitalSignature object with PFX file and PFX password
/// System::SharedPtr<DigitalSignature> signature = System::MakeObject<DigitalSignature>(u"testsignature1.pfx", u"testpass1");
/// // Comment new digital signature
/// signature->set_Comments(u"Aspose.Slides digital signing test.");
/// // Add digital signature to presentation
/// pres->get_DigitalSignatures()->Add(signature);
/// // Save presentation
/// pres->Save(u"SomePresentationSigned.pptx", SaveFormat::Pptx);
/// </code>
/// The following sample code demonstrates how to validate digital signature of PowerPoint Presentation.
/// <code>
/// // Initialize Presentation instance
/// auto pres = System::MakeObject<Presentation>(u"SomePresentationSigned.pptx");
/// 
/// if (pres->get_DigitalSignatures()->get_Count() > 0)
/// {
///     bool allSignaturesAreValid = true;
///     System::Console::WriteLine(u"Signatures used to sign the presentation: ");
///     // Check if all digital signatures are valid
///     for (auto&& signature : System::IterateOver(pres->get_DigitalSignatures()))
///     {
///         System::Console::WriteLine(signature->get_Certificate()->get_SubjectName()->get_Name() + u", " +
///                                    signature->get_SignTime().ToString(u"yyyy-MM-dd HH:mm") + u" -- " +
///                                    (signature->get_IsValid() ? System::String(u"VALID") : System::String(u"INVALID")));
///         allSignaturesAreValid &= signature->get_IsValid();
///     }
///     
///     if (allSignaturesAreValid)
///     {
///         System::Console::WriteLine(u"Presentation is genuine, all signatures are valid.");
///     }
///     else
///     {
///         System::Console::WriteLine(u"Presentation has been modified since signing.");
///     }
/// }
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS DigitalSignature : public Aspose::Slides::IDigitalSignature
{
    typedef DigitalSignature ThisType;
    typedef Aspose::Slides::IDigitalSignature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptxSerialization::PartParser::DigitalSignaturePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PptxSerialization::PptxSerializator;
    /// @endcond
    
public:

    /// <summary>
    /// Certificate object that was used to sign the document.
    /// Read-only <see cref="System::Security::Cryptography::X509Certificates::X509Certificate2">X509Certificate2</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> get_Certificate() override;
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
    ASPOSE_SLIDES_SHARED_API bool get_IsValid() override;
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
    ///     System::Console::WriteLine(u"Signature check: {0}, Signing time: {1}",
    ///         (signature->get_IsValid() ? u"VALID" : u"INVALID"),
    ///         signature->get_SignTime()
    ///     );
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::DateTime get_SignTime() override;
    /// <summary>
    /// The purpose of signature.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Comments() override;
    /// <summary>
    /// The purpose of signature.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Comments(System::String value) override;
    
    /// <summary>
    /// Creates a new DigitalSignature object with the specified certificate.
    /// </summary>
    /// <param name="certificate">Certificate that will be used to sign the presentation.</param>
    ASPOSE_SLIDES_SHARED_API DigitalSignature(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> certificate);
    /// <summary>
    /// Creates a new DigitalSignature object with the specified certificate file path and password.
    /// </summary>
    /// <param name="filePath">Path to the file with certificate.</param>
    /// <param name="password">Password required to access certificate.</param>
    ASPOSE_SLIDES_SHARED_API DigitalSignature(System::String filePath, System::String password);
    
protected:

    /// @cond
    /// <summary>
    /// Certificate object that was used to sign the document.
    /// Read-only <see cref="System::Security::Cryptography::X509Certificates::X509Certificate2">X509Certificate2</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Certificate(System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> value);
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
    ASPOSE_SLIDES_SHARED_API void set_IsValid(bool value);
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
    ///     System::Console::WriteLine(u"Signature check: {0}, Signing time: {1}",
    ///         (signature->get_IsValid() ? u"VALID" : u"INVALID"),
    ///         signature->get_SignTime()
    ///     );
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_SignTime(System::DateTime value);
    
    ASPOSE_SLIDES_LOCAL_API DigitalSignature();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DigitalSignature, CODEPORTING_ARGS());
    
private:

    System::SharedPtr<System::Security::Cryptography::X509Certificates::X509Certificate2> m_certificate;
    System::String m_comments;
    System::DateTime m_signTime;
    System::Nullable<bool> m_isValidHardset;
    
};

} // namespace Slides
} // namespace Aspose


