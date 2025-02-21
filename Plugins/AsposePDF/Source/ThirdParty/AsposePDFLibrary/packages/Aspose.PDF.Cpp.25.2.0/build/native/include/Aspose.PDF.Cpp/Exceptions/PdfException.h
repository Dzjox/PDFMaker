#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class CrashReportOptions;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

class Details_PdfException;
using PdfException = System::ExceptionWrapper<Details_PdfException>;

/// <summary>
/// Represents errors that occur during PDF application execution.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_PdfException : public System::Details_Exception
{
    typedef Details_PdfException ThisType;
    typedef System::Details_Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
public:

    /// <summary>
    /// Forms crash report based on Exception HTML format 
    /// </summary>
    /// <param name="options">Set of attributes to customize data included into crash report</param>
    static ASPOSE_PDF_SHARED_API void GenerateCrashReport(System::SharedPtr<CrashReportOptions> options);
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfException"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Details_PdfException();
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PdfException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfException"></see> class.
    /// </summary>
    /// <param name="message">The message.</param>
    ASPOSE_PDF_SHARED_API Details_PdfException(System::String message);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PdfException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfException"></see> class with a specified error message and a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="message">The error message that explains the reason for the exception. </param>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_PdfException(System::String message, System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PdfException, CODEPORTING_ARGS(System::String message, System::Exception innerException));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfException"></see> class with a reference to the inner exception that is the cause of this exception.
    /// </summary>
    /// <param name="innerException">The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. </param>
    ASPOSE_PDF_SHARED_API Details_PdfException(System::Exception innerException);
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_PdfException, CODEPORTING_ARGS(System::Exception innerException));
    
};

} // namespace Pdf
} // namespace Aspose


