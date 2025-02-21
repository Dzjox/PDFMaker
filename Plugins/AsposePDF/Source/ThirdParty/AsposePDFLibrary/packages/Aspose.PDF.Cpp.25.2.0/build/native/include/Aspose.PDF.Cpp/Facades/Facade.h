#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/License/IVentureLicenseTarget.h"
#include "Aspose.PDF.Cpp/Facades/IFacade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Facades
{
class Form;
class FormEditor;
class PdfAnnotationEditor;
class PdfBookmarkEditor;
class PdfContentEditor;
class PdfConverter;
class PdfExtractor;
class PdfFileInfo;
class PdfFileMend;
class PdfFileSecurity;
class PdfFileSignature;
class PdfFileStamp;
class PdfPageEditor;
class PdfXmpMetadata;
class SaveableFacade;
} // namespace Facades
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
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

namespace Facades {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Facades</b> namespace provides classes originaly came from Aspose.Pdf.Kit. These classes are used for manipulating documents
/// perfoming operations like concatenating, stamping, signing, annotating etc. but on the high level without access to a document's inner structure.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Base facade class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Facade : public virtual Aspose::Pdf::Facades::IFacade, public Aspose::Pdf::LicenseManagement::IVentureLicenseTarget
{
    typedef Facade ThisType;
    typedef Aspose::Pdf::Facades::IFacade BaseType;
    typedef Aspose::Pdf::LicenseManagement::IVentureLicenseTarget BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::SaveableFacade;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    
public:

    /// <summary>
    /// Gets the document facade is working on.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Document> get_Document() const;
    
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String srcFile) override;
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> srcStream) override;
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<Aspose::Pdf::Document> srcDoc) override;
    /// <summary>
    /// Disposes Aspose.Pdf.Document bound with a facade.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    /// <summary>
    /// Disposes the facade.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
protected:

    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    bool get__IsObjectLicensed();
    
    /// <summary>
    /// The constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API Facade();
    /// <summary>
    /// The constructor.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    ASPOSE_PDF_SHARED_API Facade(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    virtual ASPOSE_PDF_SHARED_API void BindPdf(System::String srcFile, System::String password);
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    virtual ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password);
    /// <summary>
    /// Asserts if the facade is initialized.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void AssertDocument() const;
    
    virtual ASPOSE_PDF_SHARED_API ~Facade();
    
private:

    System::SharedPtr<Aspose::Pdf::Document> _document;
    System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> _ventureLicense;
    
    void SetVentureLicense(System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> license) override;
    System::SharedPtr<Aspose::Pdf::LicenseManagement::VentureLicense> GetVentureLicense() override;
    void AssignVentureLicense();
    
};

/// <summary>
/// Base class for all saveable facades.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SaveableFacade : public Aspose::Pdf::Facades::Facade, public Aspose::Pdf::Facades::ISaveableFacade
{
    typedef SaveableFacade ThisType;
    typedef Aspose::Pdf::Facades::Facade BaseType;
    typedef Aspose::Pdf::Facades::ISaveableFacade BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfAnnotationEditor;
    friend class Aspose::Pdf::Facades::PdfBookmarkEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Facades::PdfFileSecurity;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Facades::PdfFileStamp;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::Facades::PdfXmpMetadata;
    
public:

    /// <summary>
    /// Saves the PDF document to the specified file.
    /// </summary>
    /// <param name="destFile">The destination file.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String destFile) override;
    /// <summary>
    /// Saves the PDF document to the specified stream.
    /// </summary>
    /// <param name="destStream">The destination stream.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> destStream) override;
    
protected:

    /// <summary>
    /// The constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API SaveableFacade();
    /// <summary>
    /// The constructor.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    ASPOSE_PDF_SHARED_API SaveableFacade(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


