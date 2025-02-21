#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.JavaAttributes;


// To compile metered for your product, make sure your product is mentioned here and add a conditional 
// compilation constant to your project properties (both to Debug and Release configurations).

// C# preprocessor directive: #if ASPOSE_WORDS

// C# INACTIVE CODE:
// namespace Aspose.Words

// C# preprocessor directive: #elif ASPOSE_WORDS_REPORTING_SERVICES

// C# INACTIVE CODE:
// namespace Aspose.Words.ReportingServices

// C# preprocessor directive: #elif ASPOSE_WORDS_SHAREPOINT

// C# INACTIVE CODE:
// namespace Aspose.Words.SharePoint

// C# preprocessor directive: #elif ASPOSE_CELLS

// C# INACTIVE CODE:
// namespace Aspose.Cells

// C# preprocessor directive: #elif ASPOSE_SLIDES

// C# INACTIVE CODE:
// namespace Aspose.Slides

// C# preprocessor directive: #elif ASPOSE_TASKS

// C# INACTIVE CODE:
// namespace Aspose.Tasks

// C# preprocessor directive: #elif ASPOSE_PDF


#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
class Decimal;
class String;
} // namespace System

namespace Aspose {

namespace Pdf {


// C# preprocessor directive: #elif ASPOSE_PDF_FORM

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Form

// C# preprocessor directive: #elif ASPOSE_PDF_KIT

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Kit

// C# preprocessor directive: #elif ASPOSE_PDF_FO

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Fo

// C# preprocessor directive: #elif ASPOSE_CHART

// C# INACTIVE CODE:
// namespace Aspose.Chart

// C# preprocessor directive: #elif ASPOSE_SPELL

// C# INACTIVE CODE:
// namespace Aspose.Spell

// C# preprocessor directive: #elif ASPOSE_EMAIL

// C# INACTIVE CODE:
// namespace Aspose.Email

// C# preprocessor directive: #elif ASPOSE_MIME

// C# INACTIVE CODE:
// namespace Aspose.Mime

// C# preprocessor directive: #elif ASPOSE_ADHOC

// C# INACTIVE CODE:
// namespace Aspose.AdHoc

// C# preprocessor directive: #elif ASPOSE_ASPXPAND

// C# INACTIVE CODE:
// namespace Aspose.ASPXPand

// C# preprocessor directive: #elif ASPOSE_GRID

// C# INACTIVE CODE:
// namespace Aspose.Grid

// C# preprocessor directive: #elif ASPOSE_RECURRENCE

// C# INACTIVE CODE:
// namespace Aspose.Recurrence

// C# preprocessor directive: #elif ASPOSE_ICALENDAR

// C# INACTIVE CODE:
// namespace Aspose.iCalendar

// C# preprocessor directive: #elif ASPOSE_RECOGNITION

// C# INACTIVE CODE:
// namespace Aspose.Recognition

// C# preprocessor directive: #elif ASPOSE_OCR

// C# INACTIVE CODE:
// namespace Aspose.OCR

// C# preprocessor directive: #elif ASPOSE_IMAGING

// C# INACTIVE CODE:
// namespace Aspose.Imaging

// C# preprocessor directive: #elif ASPOSE_BARCODE && REPORT

// C# INACTIVE CODE:
// namespace Aspose.BarCode.ReportingServices

// C# preprocessor directive: #elif ASPOSE_BARCODE && WPF

// C# INACTIVE CODE:
// namespace Aspose.BarCode.WPF

// C# preprocessor directive: #elif ASPOSE_BARCODE && RECOGNITION

// C# INACTIVE CODE:
// namespace Aspose.BarCodeRecognition

// C# preprocessor directive: #elif ASPOSE_BARCODE

// C# INACTIVE CODE:
// namespace Aspose.BarCode

// C# preprocessor directive: #elif ASPOSE_3D

// C# INACTIVE CODE:
// namespace Aspose.ThreeD

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// namespace Dynabic.Metered

// C# preprocessor directive: #endif

/// <summary>
/// Provides methods to set metered key.
/// </summary>
/// <example>
/// </example>
/// <example>
/// </example>
//[JavaManual]
class ASPOSE_PDF_SHARED_CLASS Metered : public System::Object
{
    typedef Metered ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of this class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Metered();
    
    /// <summary>
    /// Sets metered public and private key.
    /// If you purchase metered license, when start application, this API should be called, normally, this is enough. 
    /// However, if always fail to upload consumption data and exceed 24 hours, the license will be set to evaluation status, 
    /// to avoid such case, you should regularly check the license status, if it is evaluation status, call this API again.
    /// </summary>
    /// <param name="publicKey">public key</param>
    /// <param name="privateKey">private key</param>
    ASPOSE_PDF_SHARED_API void SetMeteredKey(System::String publicKey, System::String privateKey);
    /// <summary>
    /// Gets consumption file size.
    /// </summary>
    /// <returns>Consumption quantity.</returns>
    static ASPOSE_PDF_SHARED_API System::Decimal GetConsumptionQuantity();
    /// <summary>
    /// Gets consumption credit.
    /// </summary>
    /// <returns>Consumption quantity.</returns>
    static ASPOSE_PDF_SHARED_API System::Decimal GetConsumptionCredit();
    /// <summary>
    /// Get the Product Name.
    /// </summary>
    /// <returns>Product Name</returns>
    ASPOSE_PDF_SHARED_API System::String GetProductName();
    /// <summary>
    /// Check whether metered is licensed.
    /// </summary>
    /// <returns>True or false</returns>
    static ASPOSE_PDF_SHARED_API bool IsMeteredLicensed();
    
};

} // namespace Pdf
} // namespace Aspose


