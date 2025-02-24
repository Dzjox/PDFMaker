#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IProtectionManager.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace CompoundFile
{
class MSCDFileSystem;
} // namespace CompoundFile
namespace PptBinaryFile
{
namespace MsPpt
{
class OnlyLoadDocumentPropertiesModeContext;
} // namespace MsPpt
} // namespace PptBinaryFile
namespace PptSerialization
{
class PptDeserializator;
class PptSerializator;
} // namespace PptSerialization
class Presentation;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Presentation password protection management.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ProtectionManager final : public Aspose::Slides::IProtectionManager
{
    typedef ProtectionManager ThisType;
    typedef Aspose::Slides::IProtectionManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    /// @endcond
    
public:

    /// <summary>
    /// This property makes sense, if presentation is password protected.
    /// If true then document properties is encrypted in presentation file.
    /// If false then document properties is public while presentation is encrypted.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_EncryptDocumentProperties() override;
    /// <summary>
    /// This property makes sense, if presentation is password protected.
    /// If true then document properties is encrypted in presentation file.
    /// If false then document properties is public while presentation is encrypted.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EncryptDocumentProperties(bool value) override;
    /// <summary>
    /// Gets a value indicating whether this instance is encrypted.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <value>
    /// <c>true</c> if presentation was loaded from encrypted file or <see cref="Aspose::Slides::IProtectionManager::Encrypt(System::String)">Encrypt(String)</see> 
    /// method was called ; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_SLIDES_SHARED_API bool get_IsEncrypted() override;
    /// <summary>
    /// This property makes sense, if presentation file is password protected and document 
    /// properties of this file are public.
    /// Value of true means that only document properties are loaded from an encrypted 
    /// presentation file without use of password.
    /// Value of false means that entire encrypted presentation is loaded with use of right 
    /// password, not only document properties are loaded.
    /// If presentation isn't encrypted then property value is always false.
    /// If document properties of an encrypted file aren't public then property value is always false.
    /// If Presentation.EncryptDocumentProperties is true than IsOnlyDocumentPropertiesLoaded 
    /// property value is always false.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsOnlyDocumentPropertiesLoaded() override;
    /// <summary>
    /// Gets a value indicating whether this presentation is write protected.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsWriteProtected() override;
    /// <summary>
    /// Gets the password which is used for presentation encryption.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_EncryptionPassword() override;
    /// <summary>
    /// Gets read-only recommendation.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows you how to set a PowerPoint Presentation to Read-Only in C# using Aspose.Slides.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// pres->get_ProtectionManager()->set_ReadOnlyRecommended(true);
    /// pres->Save(u"ReadOnlyPresentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_ReadOnlyRecommended() override;
    /// <summary>
    /// Sets read-only recommendation.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows you how to set a PowerPoint Presentation to Read-Only in C# using Aspose.Slides.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// pres->get_ProtectionManager()->set_ReadOnlyRecommended(true);
    /// pres->Save(u"ReadOnlyPresentation.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_ReadOnlyRecommended(bool value) override;
    
    /// <summary>
    /// Encrypts Presentation with specified password.
    /// </summary>
    /// <param name="encryptionPassword">The password.</param>
    /// <example>
    /// The following sample code shows you how to encrypt a PowerPoint Presentation.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"pres.pptx");
    /// presentation->get_ProtectionManager()->Encrypt(u"123123");
    /// presentation->Save(u"encrypted-pres.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void Encrypt(System::String encryptionPassword) override;
    /// <summary>
    /// Removes the encryption.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveEncryption() override;
    /// <summary>
    /// Set write protection for this presentation with specified password.
    /// </summary>
    /// <param name="password">The password.</param>
    /// <example>
    /// The following sample code shows you how to set a write protection to a presentation.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"pres.pptx");
    /// presentation->get_ProtectionManager()->SetWriteProtection(u"123123");
    /// presentation->Save(u"write-protected-pres.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void SetWriteProtection(System::String password) override;
    /// <summary>
    /// Removes write protection for this presentation.
    /// </summary>
    /// <example>
    /// This sample code shows you how to remove the write protection from a PowerPoint Presentation.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"pres.pptx");
    /// presentation->get_ProtectionManager()->RemoveWriteProtection();
    /// presentation->Save(u"write-protection-removed.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void RemoveWriteProtection() override;
    /// <summary>
    /// Determines whether a presentation is a password protected to modify.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(presentationFilePath);
    /// bool isWriteProtected = presentation->get_ProtectionManager()->CheckWriteProtection(u"my_password");
    /// </code>
    /// </example>
    /// <param name="password">The password for checking.</param>
    /// <returns>True if the password is valid; otherwise, false.</returns>
    /// <remarks>
    /// 1. You should check the <see cref="ProtectionManager::get_IsWriteProtected"></see> property before calling this method.
    /// 2. When the password is null or empty, this method returns false.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool CheckWriteProtection(System::String password) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API ProtectionManager(System::SharedPtr<Presentation> parentPresentation);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ProtectionManager, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentPresentation));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void ReadUnencryptedDocumentPropertiesIfItExists(System::SharedPtr<System::IO::Stream> stream);
    ASPOSE_SLIDES_LOCAL_API void ReadPptxDocumentPropertiesOnly(System::SharedPtr<CompoundFile::MSCDFileSystem> fs);
    ASPOSE_SLIDES_LOCAL_API void EnsureEncryptionPasswordSet();
    /// @endcond
    
private:

    System::WeakPtr<Presentation> m_parentPresentation;
    bool m_isEncrypted;
    System::String m_encryptionPassword;
    bool m_encryptDocumentProperties;
    bool m_readOnlyRecommended;
    System::SharedPtr<PptBinaryFile::MsPpt::OnlyLoadDocumentPropertiesModeContext> m_onlyLoadDocumentPropertiesModeContext;
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CompoundFile::MSCDFileSystem> TryToReadMSCDFileSystem(System::SharedPtr<System::IO::Stream> inputStream);
    
};

} // namespace Slides
} // namespace Aspose


