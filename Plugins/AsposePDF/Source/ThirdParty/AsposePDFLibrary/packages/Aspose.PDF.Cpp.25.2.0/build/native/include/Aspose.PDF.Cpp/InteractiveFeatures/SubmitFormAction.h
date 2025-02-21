#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/PdfAction.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class FileSpecification;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class which describes submit-form action.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SubmitFormAction final : public Aspose::Pdf::Annotations::PdfAction
{
    typedef SubmitFormAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// Gets flagas of submit action
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Flags();
    /// <summary>
    /// Sets flagas of submit action
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Flags(int32_t value);
    /// <summary>
    /// Destination URL.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileSpecification> get_Url();
    /// <summary>
    /// Destination URL.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Url(System::SharedPtr<FileSpecification> value);
    
    /// <summary>
    /// Initializes SubmitFormAction object.
    /// </summary>
    ASPOSE_PDF_SHARED_API SubmitFormAction();
    
protected:

    SubmitFormAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SubmitFormAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    
private:

    int32_t flags;
    System::SharedPtr<FileSpecification> url;
    
public:

    /// <summary>
    /// If clear, the Fields array specifies which fields to include in the submission. 
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t Exclude = 1;
    /// <summary>
    /// If set, all fields designated by the Fields array and the Include/Exclude flag shall be submitted.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t IncludeNoValueFields = static_cast<int32_t>(1 << 1);
    /// <summary>
    /// If set, field names and values shall be submitted in HTML Form format.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t ExportFormat = static_cast<int32_t>(1 << 2);
    /// <summary>
    /// If set, field names and values shall be submitted using an HTTP GET request.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t GetMethod = static_cast<int32_t>(1 << 3);
    /// <summary>
    /// If set, the coordinates of the mouse click that caused the submit-form action shall be transmitted as part of the form data.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t SubmitCoordinates = static_cast<int32_t>(1 << 4);
    /// <summary>
    /// If set, field names and values shall be submitted as XFDF.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t Xfdf = static_cast<int32_t>(1 << 5);
    /// <summary>
    /// If set, the submitted FDF file shall include the contents of all incremental updates.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t IncludeAppendSaves = static_cast<int32_t>(1 << 6);
    /// <summary>
    /// If set, the submitted FDF file shall include includes all markup annotations in the underlying PDF document.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t IncludeAnnotations = static_cast<int32_t>(1 << 7);
    /// <summary>
    /// If set, the document shall be submitted as PDF, using the MIME content type application/pdf.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t SubmitPdf = static_cast<int32_t>(1 << 8);
    /// <summary>
    /// If set, any submitted field values representing dates shall be converted to the standard format.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CanonicalFormat = static_cast<int32_t>(1 << 9);
    /// <summary>
    /// If set, it shall include only those markup annotations whose T entry matches the name of the current user.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t ExclNonUserAnnots = static_cast<int32_t>(1 << 10);
    /// <summary>
    /// If set, the submitted FDF shall exclude the F entry.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t ExclFKey = static_cast<int32_t>(1 << 11);
    /// <summary>
    /// If set, the F entry of the submitted FDF shall be a file specification containing an 
    /// embedded file stream representing the PDF file from which the FDF is being submitted.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t EmbedForm = static_cast<int32_t>(1 << 13);
    
};

/*
        /// <summary>
        /// If clear, the Fields array specifies which fields to include in the submission. 
        /// </summary>
        public const int Exclude = 1;
        /// <summary>
        /// If set, all fields designated by the Fields array and the Include/Exclude flag shall be submitted.
        /// </summary>
        public const int IncludeNoValueFields = 1 << 1;
        /// <summary>
        /// If set, field names and values shall be submitted in HTML Form format.
        /// </summary>
        public const int ExportFormat = 1 << 2;
        /// <summary>
        /// If set, field names and values shall be submitted using an HTTP GET request.
        /// </summary>
        public const int GetMethod = 1 << 3;
        /// <summary>
        /// If set, the coordinates of the mouse click that caused the submit-form action shall be transmitted as part of the form data.
        /// </summary>
        public const int SubmitCoordinates = 1 << 4;
        /// <summary>
        /// If set, field names and values shall be submitted as XFDF.
        /// </summary>
        public const int Xfdf = 1 << 5;
        /// <summary>
        /// If set, the submitted FDF file shall include the contents of all incremental updates.
        /// </summary>
        public const int IncludeAppendSaves = 1 << 6;
        /// <summary>
        /// If set, the submitted FDF file shall include includes all markup annotations in the underlying PDF document.
        /// </summary>
        public const int IncludeAnnotations = 1 << 7;
        /// <summary>
        /// If set, the document shall be submitted as PDF, using the MIME content type application/pdf.
        /// </summary>
        public const int SubmitPdf = 1 << 8;
        /// <summary>
        /// If set, any submitted field values representing dates shall be converted to the standard format.
        /// </summary>
        public const int CanonicalFormat = 1 << 9;
        /// <summary>
        /// If set, it shall include only those markup annotations whose T entry matches the name of the current user.
        /// </summary>
        public const int ExclNonUserAnnots = 1 << 10;
        /// <summary>
        /// If set, the submitted FDF shall exclude the F entry.
        /// </summary>
        public const int ExclFKey = 1 << 11;
        /// <summary>
        /// If set, the F entry of the submitted FDF shall be a file specification containing an 
        /// embedded file stream representing the PDF file from which the FDF is being submitted.
        /// </summary>
        public const int EmbedForm = 1 << 13;
    */
} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


