#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/exceptions.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Details_PdfException; using PdfException = System::ExceptionWrapper<Details_PdfException>;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Options for crash report generating.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CrashReportOptions : public System::Object
{
    typedef CrashReportOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Details_PdfException;
    
public:

    /// <summary>
    /// Name of library where exception occured.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ApplicationTitle() const;
    /// <summary>
    /// Version of library used.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_LibraryVersion() const;
    /// <summary>
    /// Output directory for crash report. By default is set to current directory.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CrashReportDirectory() const;
    /// <summary>
    /// Output directory for crash report. By default is set to current directory.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CrashReportDirectory(System::String value);
    /// <summary>
    /// Filename for crash report. By default is auto-generated in format 
    /// CrashReport_&lt;date&gt;_&lt;ticks&gt;.html"
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CrashReportFilename() const;
    /// <summary>
    /// Filename for crash report. By default is auto-generated in format 
    /// CrashReport_&lt;date&gt;_&lt;ticks&gt;.html"
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CrashReportFilename(System::String value);
    /// <summary>
    /// Full path of crash report file
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CrashReportPath();
    /// <summary>
    /// Custom message to include into the report. It can be something like
    ///  value of variables or other details you want to send.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CustomMessage() const;
    /// <summary>
    /// Custom message to include into the report. It can be something like
    ///  value of variables or other details you want to send.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CustomMessage(System::String value);
    /// <summary>
    /// Exception that crash report will be based on
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Exception get_Exception() const;
    
    /// <summary>
    /// Creates CrashReportOptions with default parameters.
    /// </summary>
    /// <param name="exception">Exception that report is based on</param>
    /// <exception cref="ArgumentNullException">Generates ArgumentNullException if exception is null</exception>
    ASPOSE_PDF_SHARED_API CrashReportOptions(System::Exception exception);
    
protected:

    /// <summary>
    /// Forms a HTML-formatted crash report string.
    /// </summary>
    /// <returns>HTML formatted report text</returns>
    System::String CreateHtmlReport();
    
private:

    System::String _applicationTitle;
    System::String _crashReportDirectory;
    System::String _crashReportFilename;
    System::String _customMessage;
    System::Exception _exception;
    System::String _libraryVersion;
    
    System::String CreateReport(System::Exception exception);
    
};

} // namespace Pdf
} // namespace Aspose


