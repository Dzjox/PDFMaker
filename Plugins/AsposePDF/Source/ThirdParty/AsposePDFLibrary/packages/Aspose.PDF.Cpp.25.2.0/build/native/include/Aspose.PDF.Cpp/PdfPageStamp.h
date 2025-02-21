#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Stamp.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationCollection;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfDataStream;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
class OperatorCollection;
class Page;
class Rectangle;
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents stamp which uses PDF page as stamp.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfPageStamp final : public Aspose::Pdf::Stamp
{
    typedef PdfPageStamp ThisType;
    typedef Aspose::Pdf::Stamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets page which will be used as stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Page> get_PdfPage() const;
    /// <summary>
    /// Sets page which will be used as stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PdfPage(System::SharedPtr<Page> value);
    
    /// <summary>
    /// Constructor of PdfPageStamp.
    /// </summary>
    /// <param name="pdfPage">Page which is used for stamping.</param>
    ASPOSE_PDF_SHARED_API PdfPageStamp(System::SharedPtr<Page> pdfPage);
    
    /// <summary>
    /// Put stamp on the specified page.
    /// </summary>
    /// <param name="page">Page where stamp will be placed.</param>
    ASPOSE_PDF_SHARED_API void Put(System::SharedPtr<Page> page) override;
    
    /// <summary>
    /// Creates Pdf page stamp from specifed page of the document in specified file.
    /// </summary>
    /// <param name="fileName">Name and page of PDF file.</param>
    /// <param name="pageIndex">Index of the page.</param>
    ASPOSE_PDF_SHARED_API PdfPageStamp(System::String fileName, int32_t pageIndex);
    /// <summary>
    /// Creates Pdf page stamp from specifed page in the document from the stream.
    /// </summary>
    /// <param name="stream">Stream which contains PDF </param>
    /// <param name="pageIndex">Index of the page.</param>
    ASPOSE_PDF_SHARED_API PdfPageStamp(System::SharedPtr<System::IO::Stream> stream, int32_t pageIndex);
    
protected:

    ASPOSE_PDF_SHARED_API void ClearCache() override;
    /// <summary>
    /// Returns rectangle of stamp.
    /// </summary>
    /// <returns>Rectangle of PDF page stamp.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> getRect() override;
    
private:

    System::SharedPtr<Page> page;
    System::SharedPtr<XForm> form;
    
    void ValidateOperators(System::SharedPtr<OperatorCollection> operators);
    System::ArrayPtr<uint8_t> GetStreamData(System::SharedPtr<Engine::Data::IPdfDataStream> stream);
    bool HasInvalidCharacter(System::SharedPtr<Engine::Data::IPdfDataStream> stream);
    bool HasInvalidCharacter(System::SharedPtr<Engine::Data::IPdfPrimitive> value);
    void ValidateOperators(System::SharedPtr<XForm> form);
    void RenameFont(System::SharedPtr<XForm> form, System::String name, System::String newName);
    /// <summary>
    /// Moves font resources from XForm object into Page resources.
    /// If XForm fonts are in XForm resources then it causes "font not found" error:
    /// see PDFNEWNET-30912 Font error in Adobe Reader when stamping PDF on PDF using Stream object
    /// </summary>
    /// <param name="page"></param>
    /// <param name="form"></param>
    void MoveFontsToPage(System::SharedPtr<Page> page, System::SharedPtr<XForm> form);
    void CopyLinkAnnotationsToPage(System::SharedPtr<Annotations::AnnotationCollection> annotations, System::SharedPtr<Page> page);
    
};

} // namespace Pdf
} // namespace Aspose


