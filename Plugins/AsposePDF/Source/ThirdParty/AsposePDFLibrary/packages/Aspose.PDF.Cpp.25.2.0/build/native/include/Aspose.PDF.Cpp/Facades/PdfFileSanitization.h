#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Sanitization/IRecovery.h"
#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents sanitization and recovery API.
/// Use it if you can't create/open documents in any other way.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfFileSanitization final : public Aspose::Pdf::Facades::SaveableFacade, public Aspose::Pdf::Sanitization::IRecovery
{
    typedef PdfFileSanitization ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    typedef Aspose::Pdf::Sanitization::IRecovery BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// After file has Saved you can check what was done with file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::String>> get_Log() override;
    /// <summary>
    /// Allows to remove data before pdf data.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseTrimTop() const;
    /// <summary>
    /// Allows to remove data before pdf data.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseTrimTop(bool value);
    /// <summary>
    /// Allows to remove data after pdf data
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseTrimBottom() const;
    /// <summary>
    /// Allows to remove data after pdf data
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseTrimBottom(bool value);
    /// <summary>
    /// Allows to generate new xref and trailer for document.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseRebuildXrefAndTrailer() const;
    /// <summary>
    /// Allows to generate new xref and trailer for document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseRebuildXrefAndTrailer(bool value);
    
    /// <summary>
    /// Initializes a new instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFileSanitization();
    
    /// <summary>
    /// Saves the result PDF to file.
    /// </summary>
    /// <param name="outputFile">output pdf file</param>
    ASPOSE_PDF_SHARED_API void Save(System::String outputFile) override;
    /// <summary>
    /// Saves the result PDF to stream.
    /// </summary>
    /// <param name="outputStream">output pdf stream</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> outputStream) override;
    /// <summary> 
    /// Binds a Pdf file for Sanitize.
    /// </summary>
    /// <param name="inputFile">The pdf file to be edited.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String inputFile) override;
    /// <summary> 
    /// Binds a Pdf stream for Sanitize.
    /// </summary>
    /// <param name="inputStream">The pdf stream to be edited.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> inputStream) override;
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<Aspose::Pdf::Document> srcDoc) override;
    /// <summary>
    /// Recovers document.
    /// Use properties to customize.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Recover() override;
    /// <summary>
    /// Removes data before %PDF.
    /// </summary>
    ASPOSE_PDF_SHARED_API void TrimTop() override;
    /// <summary>
    /// Removes data after last %%EOF.
    /// </summary>
    ASPOSE_PDF_SHARED_API void TrimBottom() override;
    /// <summary>
    /// Removes old xref with trailer and creates a new xref with trailer.
    /// </summary>
    ASPOSE_PDF_SHARED_API void RebuildXrefAndTrailer();
    /// <summary>
    /// Closes the facade.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    
private:

    System::SharedPtr<System::IO::Stream> workingStream;
    System::SharedPtr<System::IO::Stream> resultStream;
    System::SharedPtr<System::Collections::Generic::List<System::String>> log;
    static const int32_t IndexNotFound;
    bool pr_UseTrimTop;
    bool pr_UseTrimBottom;
    bool pr_UseRebuildXrefAndTrailer;
    
    void MovePositionToStart(System::SharedPtr<System::IO::Stream> stream);
    static int32_t IndexOf(System::ArrayPtr<uint8_t> array, System::String search);
    static int32_t LastIndexOf(System::ArrayPtr<uint8_t> array, System::String search);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


