#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDocumentProperties;
enum class LoadFormat;
enum class NullableBool : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Information about presentation file
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPresentationInfo : public virtual System::Object
{
    typedef IPresentationInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets True if binded presentation is encrypted, otherwise False.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsEncrypted() = 0;
    /// <summary>
    /// Gets a value that indicates whether a binded presentation is protected by a password to open.
    /// </summary>
    /// <example>
    /// <code>
    /// auto info = PresentationFactory::get_Instance()->GetPresentationInfo(presentationFilePath);
    /// if (info->get_IsPasswordProtected())
    /// {
    ///     System::Console::WriteLine(System::String(u"The presentation '") + presentationFilePath + u"' is protected by a password to open.");
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsPasswordProtected() = 0;
    /// <summary>
    /// Gets a value that indicates whether a binded presentation is write protected.
    /// </summary>
    /// <example>
    /// <code>
    /// auto info = PresentationFactory::get_Instance()->GetPresentationInfo(presentationFilePath);
    /// if (info->get_IsWriteProtected() == Aspose::Slides::NullableBool::True)
    /// {
    ///     System::Console::WriteLine(System::String(u"The presentation '") + presentationFilePath + u"' is write protected by a password.");
    /// }
    /// </code>
    /// </example>
    /// <remarks>
    /// If the presentation is protected by a password to open, the property value equals NotDefined.
    /// See <see cref="NullableBool"></see> enumeration.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_IsWriteProtected() = 0;
    /// <summary>
    /// Gets format of the binded presentation.
    /// Read-only <see cref="Slides::LoadFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::LoadFormat get_LoadFormat() = 0;
    
    /// <summary>
    /// Checks whether a password is correct for a presentation protected with open password.
    /// </summary>
    /// <example>
    /// <code>
    /// auto info = PresentationFactory::get_Instance()->GetPresentationInfo(u"pres.pptx");
    /// bool isPasswordCorrect = info->CheckPassword(u"my_password");
    /// </code>
    /// </example>
    /// <param name="password">The password to check.</param>
    /// <returns>
    /// True if the presentation is protected with open password and the password is correct and false otherwise.
    /// </returns>
    /// <remarks>
    /// When the password is null or empty, this method returns false.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool CheckPassword(System::String password) = 0;
    /// <summary>
    /// Checks whether a password to modify is correct for a write protected presentation.
    /// </summary>
    /// <example>
    /// <code>
    /// auto info = PresentationFactory::get_Instance()->GetPresentationInfo(presentationFilePath);
    /// if (info->get_IsWriteProtected() == Aspose::Slides::NullableBool::True)
    /// {
    ///     bool isWriteProtectedByPassword = info->CheckWriteProtection(u"my_password");
    /// }
    /// </code>
    /// </example>
    /// <param name="password">The password to check.</param>
    /// <returns>
    /// True if the presentation is write protected and the password is correct. False otherwise.
    /// </returns>
    /// <remarks>
    /// 1. You should check the <see cref="IPresentationInfo::get_IsWriteProtected"></see> property before calling this method.
    /// 2. When password is null or empty, this method returns false.
    /// </remarks>
    /// <exception cref="System::InvalidOperationException"></exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool CheckWriteProtection(System::String password) = 0;
    /// <summary>
    /// Gets document properties of binded presentation.
    /// </summary>
    /// <returns>Document properties <see cref="Aspose::Slides::IDocumentProperties">IDocumentProperties</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDocumentProperties> ReadDocumentProperties() = 0;
    /// <summary>
    /// Updates properties of binded presentation.
    /// </summary>
    /// <param name="documentProperties">Document properties <see cref="Aspose::Slides::IDocumentProperties">IDocumentProperties</see></param>
    /// <example>
    /// This sample shows how to call the <see cref="IPresentationInfo::UpdateDocumentProperties"></see> method to
    /// update the document properties returned by call of the <see cref="IPresentationInfo::ReadDocumentProperties"></see> method.
    /// <code>
    /// auto info = PresentationFactory::get_Instance()->GetPresentationInfo(u"pres.pptx");
    /// auto props = info->ReadDocumentProperties();
    /// props->set_Subject(u"New subject");
    /// props->set_LastSavedTime(System::DateTime::get_UtcNow());
    /// info->UpdateDocumentProperties(props);
    /// info->WriteBindedPresentation(u"new_pres.pptx");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void UpdateDocumentProperties(System::SharedPtr<IDocumentProperties> documentProperties) = 0;
    /// <summary>
    /// Writes binded presentation to stream.
    /// </summary>
    /// <param name="stream">The stream must be seekable and writable.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteBindedPresentation(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Writes binded presentation to file.
    /// </summary>
    /// <param name="file">Presentation file.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteBindedPresentation(System::String file) = 0;
    
};

} // namespace Slides
} // namespace Aspose


