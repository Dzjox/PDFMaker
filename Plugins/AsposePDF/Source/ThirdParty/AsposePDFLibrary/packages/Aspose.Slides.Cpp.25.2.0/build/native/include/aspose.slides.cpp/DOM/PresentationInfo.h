#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IPresentationInfo.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace PptxPackage
{
class BasePackage;
} // namespace PptxPackage
namespace Slides
{
namespace CompoundFile
{
class MSCDFileSystem;
} // namespace CompoundFile
class DocumentProperties;
class DocumentProperties_PPT;
class IDocumentProperties;
enum class LoadFormat;
enum class NullableBool : int8_t;
namespace PptxSerialization
{
class PresentationInfoSerializationContext;
} // namespace PptxSerialization
class PresentationFactory;
} // namespace Slides
namespace Zip
{
class ZipFile;
} // namespace Zip
} // namespace Aspose
namespace System
{
namespace IO
{
class FileInfo;
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Information about presentation file
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PresentationInfo final : public Aspose::Slides::IPresentationInfo
{
    typedef PresentationInfo ThisType;
    typedef Aspose::Slides::IPresentationInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PresentationFactory;
    /// @endcond
    
public:

    /// <summary>
    /// Gets True if binded presentation is encrypted, otherwise False.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsEncrypted() override;
    /// <summary>
    /// Gets a value that indicates whether a binded presentation is protected by a password to open.
    /// </summary>
    /// <example>
    /// <code>
    /// auto info = PresentationFactory::get_Instance()->GetPresentationInfo(presentationFilePath);
    /// if (info->get_IsPasswordProtected())
    /// {
    ///     System::Console::WriteLine(System::String(u"The presentation '") + presentationFilePath + u"' is protected by password to open.");
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_IsPasswordProtected() override;
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
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API NullableBool get_IsWriteProtected() override;
    /// <summary>
    /// Gets format of the binded presentation.
    /// Read-only <see cref="Slides::LoadFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::LoadFormat get_LoadFormat() override;
    
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
    /// <exception cref="System::InvalidOperationException"></exception>
    /// <exception cref="System::NotSupportedException"></exception>
    ASPOSE_SLIDES_SHARED_API bool CheckPassword(System::String password) override;
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
    /// 1. You should check the <see cref="PresentationInfo::get_IsWriteProtected"></see> property before calling this method.
    /// 2. When password is null or empty, this method returns false.
    /// </remarks>
    /// <exception cref="System::InvalidOperationException"></exception>
    ASPOSE_SLIDES_SHARED_API bool CheckWriteProtection(System::String password) override;
    /// <summary>
    /// Gets document properties of binded presentation.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDocumentProperties> ReadDocumentProperties() override;
    /// <summary>
    /// Updates properties of binded presentation.
    /// </summary>
    /// <example>
    /// This sample shows how to call the <see cref="PresentationInfo::UpdateDocumentProperties"></see> method to
    /// update the document properties returned by call of the <see cref="PresentationInfo::ReadDocumentProperties"></see> method.
    /// <code>
    /// auto info = PresentationFactory::get_Instance()->GetPresentationInfo(u"pres.pptx");
    /// auto props = info->ReadDocumentProperties();
    /// props->set_Subject(u"New subject");
    /// props->set_LastSavedTime(System::DateTime::get_UtcNow());
    /// info->UpdateDocumentProperties(props);
    /// info->WriteBindedPresentation(u"new_pres.pptx");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void UpdateDocumentProperties(System::SharedPtr<IDocumentProperties> documentProperties) override;
    /// <summary>
    /// Writes binded presentation to stream.
    /// </summary>
    /// <param name="stream">The stream must be seekable and writable.</param>
    ASPOSE_SLIDES_SHARED_API void WriteBindedPresentation(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Writes binded presentation to file.
    /// </summary>
    /// <param name="file">Presentation file.</param>
    ASPOSE_SLIDES_SHARED_API void WriteBindedPresentation(System::String file) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API PresentationInfo(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::IO::FileInfo> fileInfo);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PresentationInfo, CODEPORTING_ARGS(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::IO::FileInfo> fileInfo));
    
private:

    Aspose::Slides::LoadFormat m_loadFormat;
    bool m_isEncrypted;
    bool m_isPasswordProtected;
    NullableBool m_isWriteProtected;
    System::SharedPtr<System::IO::FileInfo> m_fileInfo;
    System::SharedPtr<System::IO::Stream> m_stream;
    System::SharedPtr<Aspose::PptxPackage::BasePackage> m_package;
    System::SharedPtr<CompoundFile::MSCDFileSystem> m_fileSystem;
    System::SharedPtr<DocumentProperties> m_documentProperties;
    static const ASPOSE_SLIDES_LOCAL_API System::String EntrySummaryInformation;
    static const ASPOSE_SLIDES_LOCAL_API System::String EntryDocumentSummaryInformation;
    
    ASPOSE_SLIDES_LOCAL_API void WriteDocumentProperties(System::SharedPtr<System::IO::Stream> stream);
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::LoadFormat ReadEncryptedPptxLoadFormat(System::SharedPtr<System::IO::Stream> stream);
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::LoadFormat ReadPptxLoadFormat();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DocumentProperties> ReadPptxDocumentProperties();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DocumentProperties> ReadOdpDocumentProperties();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DocumentProperties> ReadPptDocumentProperties();
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::LoadFormat ReadPptLoadFormat();
    ASPOSE_SLIDES_LOCAL_API void WritePptxDocumentProperties(System::SharedPtr<System::IO::Stream> stream);
    ASPOSE_SLIDES_LOCAL_API void WritePptxCustomDocumentProperties(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<PptxSerialization::PresentationInfoSerializationContext> serializationContext);
    ASPOSE_SLIDES_LOCAL_API void WritePptDocumentProperties(System::SharedPtr<System::IO::Stream> stream);
    ASPOSE_SLIDES_LOCAL_API void ReplaceZipEntry(System::SharedPtr<Zip::ZipFile> zipFile, System::String name, System::ArrayPtr<uint8_t> data);
    ASPOSE_SLIDES_LOCAL_API void WriteOdpDocumentProperties(System::SharedPtr<System::IO::Stream> stream);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DocumentProperties_PPT> GetPptDocumentProps();
    ASPOSE_SLIDES_LOCAL_API void SeekBegin(System::SharedPtr<System::IO::Stream> stream);
    
};

} // namespace Slides
} // namespace Aspose


