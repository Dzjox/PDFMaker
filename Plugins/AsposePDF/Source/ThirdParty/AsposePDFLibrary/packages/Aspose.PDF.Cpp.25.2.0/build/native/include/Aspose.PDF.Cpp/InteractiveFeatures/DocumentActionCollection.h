#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PdfAction;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
class IPdfDocument;
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes actions performed on some actions with document
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocumentActionCollection final : public System::Object
{
    typedef DocumentActionCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets action performed before document saving.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_BeforeSaving() const;
    /// <summary>
    /// Sets action performed before document saving.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BeforeSaving(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets action that will be performed before documetn closing.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_BeforeClosing() const;
    /// <summary>
    /// Sets action that will be performed before documetn closing.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BeforeClosing(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets action that will be performed after document saving.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_AfterSaving() const;
    /// <summary>
    /// Sets action that will be performed after document saving.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AfterSaving(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Action that will be performed before document printing.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_BeforePrinting() const;
    /// <summary>
    /// Action that will be performed before document printing.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BeforePrinting(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Action that will be performed after document printing.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_AfterPrinting() const;
    /// <summary>
    /// Action that will be performed after document printing.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AfterPrinting(System::SharedPtr<PdfAction> value);
    
    /// <summary>
    /// Constructor for DocumentActionCollection. Constructs DocumentActionCollection objects from Pdf.Kit.Engine Document object.
    /// </summary>
    /// <param name="document">Document for which action colleciton is created.</param>
    ASPOSE_PDF_SHARED_API DocumentActionCollection(System::SharedPtr<Document> document);
    
protected:

    /// <summary>
    /// Document interface from Pdf.Kit.Engine.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document;
    
private:

    System::SharedPtr<PdfAction> beforeSaving;
    System::SharedPtr<PdfAction> beforeClosing;
    System::SharedPtr<PdfAction> afterSaving;
    System::SharedPtr<PdfAction> beforePrinting;
    System::SharedPtr<PdfAction> afterPrinting;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> provideAAEntry();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


