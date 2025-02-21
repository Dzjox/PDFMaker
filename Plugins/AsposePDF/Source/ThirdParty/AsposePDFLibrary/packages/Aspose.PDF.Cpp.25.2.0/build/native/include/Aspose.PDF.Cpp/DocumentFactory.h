#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/License/IVentureLicenseTarget.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
class LoadOptions;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class which allows to create/load documents of different types.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocumentFactory : public Aspose::Pdf::LicenseManagement::IVentureLicenseTarget
{
    typedef DocumentFactory ThisType;
    typedef Aspose::Pdf::LicenseManagement::IVentureLicenseTarget BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create document.
    /// </summary>
    /// <param name="input">Input stream.</param>
    /// <param name="options">Document load options.</param>
    /// <returns>Created document.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> CreateDocument(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    /// <summary>
    /// Create empty document.
    /// </summary>
    /// <returns>Created document.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> CreateDocument();
    /// <summary>
    /// Load document from a stream.
    /// </summary>
    /// <param name="input">Input stream.</param>
    /// <returns>Created document.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> CreateDocument(System::SharedPtr<System::IO::Stream> input);
    /// <summary>
    /// Load password protected document from a stream.
    /// </summary>
    /// <param name="input">Source stream.</param>
    /// <param name="password">Passowrd for access to document.</param>
    /// <returns>Created document.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> CreateDocument(System::SharedPtr<System::IO::Stream> input, System::String password);
    /// <summary>
    /// Load document from a file. 
    /// </summary>
    /// <param name="fileName">Name of PDF file.</param>
    /// <returns>Created document.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Document> CreateDocument(System::String fileName);
    
    ASPOSE_PDF_SHARED_API DocumentFactory();
    
private:

    System::SharedPtr<LicenseManagement::VentureLicense> _license;
    
    void Initialize(System::SharedPtr<Document> doc, System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    void SetVentureLicense(System::SharedPtr<LicenseManagement::VentureLicense> license) override;
    System::SharedPtr<LicenseManagement::VentureLicense> GetVentureLicense() override;
    
};

} // namespace Pdf
} // namespace Aspose


