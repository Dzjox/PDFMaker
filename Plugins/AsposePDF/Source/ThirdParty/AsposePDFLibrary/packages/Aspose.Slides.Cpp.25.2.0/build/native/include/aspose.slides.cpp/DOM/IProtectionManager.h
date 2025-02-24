#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Presentation password protection management.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IProtectionManager : public virtual System::Object
{
    typedef IProtectionManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// This property makes sense, if presentation is password protected.
    /// If true then document properties is encrypted in presentation file.
    /// If false then document properties is public while presentation is encrypted.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_EncryptDocumentProperties() = 0;
    /// <summary>
    /// This property makes sense, if presentation is password protected.
    /// If true then document properties is encrypted in presentation file.
    /// If false then document properties is public while presentation is encrypted.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EncryptDocumentProperties(bool value) = 0;
    /// <summary>
    /// Gets a value indicating whether this instance is encrypted.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <value>
    /// <c>true</c> if presentation was loaded from encrypted file or <see cref="Aspose::Slides::IProtectionManager::Encrypt(System::String)">Encrypt(String)</see> 
    /// method was called ; otherwise, <c>false</c>.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsEncrypted() = 0;
    /// <summary>
    /// This property makes sense, if presentation file is password protected and document 
    /// properties of this file are public.
    /// Value of true means that only document properties are loaded from an encrypted 
    /// presentation file without use of password.
    /// Value of false means that entire encrypted presentation is loaded with use of right 
    /// password, not only document properties are loaded.
    /// If presentation isn't encrypted then property value is always false.
    /// If document properties of an encrypted file aren't public then property value is always false.
    /// If PresentationEx.EncryptDocumentProperties is true than IsOnlyDocumentPropertiesLoaded 
    /// property value is always false.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsOnlyDocumentPropertiesLoaded() = 0;
    /// <summary>
    /// Gets a value indicating whether this presentation is write protected.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsWriteProtected() = 0;
    /// <summary>
    /// Returns encryption password.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_EncryptionPassword() = 0;
    /// <summary>
    /// Gets read-only recommendation.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// pres->get_ProtectionManager()->set_ReadOnlyRecommended(true);
    /// pres->Save(u"ReadOnlyPresentation.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ReadOnlyRecommended() = 0;
    /// <summary>
    /// Sets read-only recommendation.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// pres->get_ProtectionManager()->set_ReadOnlyRecommended(true);
    /// pres->Save(u"ReadOnlyPresentation.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ReadOnlyRecommended(bool value) = 0;
    
    /// <summary>
    /// Encrypts Presentation with specified password.
    /// </summary>
    /// <param name="encryptionPassword">The password.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Encrypt(System::String encryptionPassword) = 0;
    /// <summary>
    /// Removes the encryption.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveEncryption() = 0;
    /// <summary>
    /// Set write protection for this presentation with specified password.
    /// </summary>
    /// <param name="password">The password.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetWriteProtection(System::String password) = 0;
    /// <summary>
    /// Removes write protection for this presentation.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveWriteProtection() = 0;
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
    /// 1. You should check the <see cref="IProtectionManager::get_IsWriteProtected"></see> property before calling this method.
    /// 2. When the password is null or empty, this method returns false.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool CheckWriteProtection(System::String password) = 0;
    
};

} // namespace Slides
} // namespace Aspose


